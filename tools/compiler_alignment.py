"""Retry the real compiler for a narrowly verified legacy ee-as alignment defect."""
import argparse
import os
from pathlib import Path
import shlex
import struct
import subprocess
import tempfile

import build
import match
import project


LOADS = {32, 33, 35, 36, 37, 39, 55}  # lb lh lw lbu lhu lwu ld: the opcode ee-as 2.96 leaves on a %hi
# The defect follows the assembler's memory layout, not the code: func_004E3BD0 has it at 0x710 as
# compiled, at 0x538 without the leading alignment directive, and nowhere when ee-as also keeps a
# listing and the output name is long. So a retry is one of several layouts of the same compile, tried
# in this order until one is the expected object: (extra compiler flags, padding of the output name).
ALIGN, LISTING = '-fno-align-functions', '-Wa,-al=/dev/null'
RETRIES = (([ALIGN], 0), ([LISTING], 64), ([LISTING], 0), ([ALIGN, LISTING], 64), ([ALIGN, LISTING], 0),
           ([ALIGN], 64))


def corrupted_offsets(blob, relocs):
    return {off for off, rel in relocs.items()
            if rel[0] == match.R_MIPS_HI16  # a %hi belongs on a lui: on a load it is the defect
            and off + 4 <= len(blob)
            and struct.unpack_from('<I', blob, off)[0] >> 26 in LOADS}


def equivalent_retry(original, candidate, offsets):
    old, relocs, functions = original
    new, new_relocs, new_functions = candidate
    if not offsets or len(old) != len(new) or relocs != new_relocs or functions != new_functions:
        return False
    expected = bytearray(old)
    for offset in offsets:
        word, = struct.unpack_from('<I', old, offset)
        struct.pack_into('<I', expected, offset, (15 << 26) | (word & 0x1fffff))
    # This constructs an expectation only. The actual output is always a compiler object.
    return new == expected


def repair(source, obj, command):
    if 'cc_as.sh' in command:  # wrapper with positional arguments, and a different assembler anyway
        return False
    original = match.read_object(str(obj), want_symbols=True)
    offsets = corrupted_offsets(original[0], original[1])
    if not offsets:
        return False
    with tempfile.TemporaryDirectory(prefix='gt4-align-retry-') as directory:
        for flags, padding in RETRIES:
            candidate = Path(directory) / f"retry{'-' * padding}.o"
            result = subprocess.run(shlex.split(os.path.expandvars(command)) +
                flags + [str(source), '-o', str(candidate)],
                capture_output=True, text=True)
            if result.returncode:
                continue
            retried = match.read_object(str(candidate), want_symbols=True)
            if not equivalent_retry(original, retried, offsets):
                continue
            if build.elf_section(str(obj), '.rodata') != build.elf_section(str(candidate), '.rodata'):
                continue
            obj.write_bytes(candidate.read_bytes())
            return True
    return False


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source', type=Path)
    parser.add_argument('object', type=Path)
    parser.add_argument('--command', help="default: the compiler the source's first line names")
    args = parser.parse_args()
    command = args.command or project.compiler_command(project.source_compiler(str(args.source)))
    if repair(args.source, args.object, command):
        print('compiler: verified alignment retry; only corrupted jump-table HI16 opcode changed',
              file=__import__('sys').stderr)


if __name__ == '__main__':
    main()
