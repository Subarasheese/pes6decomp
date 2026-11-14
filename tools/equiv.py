#!/usr/bin/env python3
"""Differential equivalence: run the original bytes and the compiled C and compare behaviour.

Usage: equiv.py ADDR SRC [ADDR SRC ...]   (PES6_TARGET selects an overlay image)

Same calls (jal targets, stubbed), same final v0/v1, same memory writes -> EQUIVALENT.
This is behavioural evidence, not a proof; byte equality remains the stronger result.
"""
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import match  # noqa: E402

from unicorn import (Uc, UC_ARCH_MIPS, UC_MODE_MIPS32, UC_MODE_MIPS64, UC_MODE_LITTLE_ENDIAN, UcError,
                     UC_HOOK_CODE, UC_HOOK_MEM_WRITE)  # noqa: E402
from unicorn.mips_const import (UC_MIPS_REG_V0, UC_MIPS_REG_V1, UC_MIPS_REG_A0,  # noqa: E402
                                UC_MIPS_REG_A1, UC_MIPS_REG_A2, UC_MIPS_REG_A3,
                                UC_MIPS_REG_SP, UC_MIPS_REG_GP, UC_MIPS_REG_RA,
                                UC_MIPS_REG_S0, UC_MIPS_REG_S1, UC_MIPS_REG_S2, UC_MIPS_REG_S3,
                                UC_MIPS_REG_PC)

BASE = 0x00000000
SIZE = 0x02000000
STOP = 0x01FFFFF0
STACK = 0x003FF000
GP = 0x003EF370
JAL = 3


def demmi(words):
    """EE `sq`/`lq` (R5900 MMI) are not in Unicorn's MIPS core. For GPR spills they are `sd`/`ld`
    with the same addressing: the low 64 bits carry the register and memory starts zeroed."""
    out = []
    for w in words:
        op = w >> 26
        if op == 0x1F:
            w = (0x3F << 26) | (w & 0x03FFFFFF)
        elif op == 0x1E:
            w = (0x37 << 26) | (w & 0x03FFFFFF)
        out.append(w)
    return out


def original(addr):
    text_addr, text = match.load_text()
    return match.trim_padding(match.words_at(text_addr, text, addr, match.function_span(addr)))


def compiled(addr, src):
    obj = match.compile_c(src)
    blob, srelocs, funcs = match.read_object(obj, want_symbols=True)
    os.remove(obj)
    if not funcs:
        raise SystemExit("no function in the compiled object")
    _, foff, fsize = funcs[0]
    fsize = max(fsize, len(blob) - foff)
    words = list(struct.unpack_from(f"<{fsize // 4}I", blob, foff))
    words, unresolved = match.link_words(words, srelocs, foff, addr)
    if unresolved:
        raise SystemExit(f"unresolved relocations: {len(unresolved)}")
    return match.trim_padding(words)


def run(addr, words, ret_stub=0, args=(0, 0, 0, 0)):
    uc = Uc(UC_ARCH_MIPS, UC_MODE_MIPS64 | UC_MODE_LITTLE_ENDIAN)
    uc.mem_map(BASE, SIZE)
    uc.mem_write(addr, b"".join(struct.pack("<I", w) for w in demmi(words)))
    uc.mem_write(STOP, b"\x00\x00\x00\x00")
    for reg, val in ((UC_MIPS_REG_SP, STACK), (UC_MIPS_REG_GP, GP), (UC_MIPS_REG_RA, STOP),
                     (UC_MIPS_REG_A0, args[0]), (UC_MIPS_REG_A1, args[1]),
                     (UC_MIPS_REG_A2, args[2]), (UC_MIPS_REG_A3, args[3])):
        uc.reg_write(reg, val)
    writes = []
    calls = []

    def on_code(uc, pc, size, _):
        if pc == STOP:
            uc.emu_stop()
            return
        word = struct.unpack("<I", uc.mem_read(pc, 4))[0]
        if word >> 26 == JAL:
            calls.append((word & 0x03FFFFFF) << 2)
            uc.reg_write(UC_MIPS_REG_V0, ret_stub)
            uc.reg_write(UC_MIPS_REG_RA, pc + 8)
            uc.reg_write(32, pc + 8)

    def on_write(uc, access, a, size, value, _):
        writes.append((a, size, value))

    uc.hook_add(UC_HOOK_CODE, on_code)
    uc.hook_add(UC_HOOK_MEM_WRITE, on_write)
    try:
        uc.emu_start(addr, STOP, count=20000)
    except UcError as e:
        return None, None, None, f"{e} at 0x{uc.reg_read(UC_MIPS_REG_PC):08X}"
    return (uc.reg_read(UC_MIPS_REG_V0), uc.reg_read(UC_MIPS_REG_V1)), writes, calls, None


def one(a, src):
    addr = int(a, 16)
    orig = original(addr)
    mine = compiled(addr, src)
    if orig == mine:
        return f"{a} BYTE-MATCH ({len(orig)} instructions)"
    o_res, o_wr, o_call, o_err = run(addr, orig)
    m_res, m_wr, m_call, m_err = run(addr, mine)
    if o_err or m_err:
        return f"{a} UNRUNNABLE original={o_err} mine={m_err}"
    ok = o_res == m_res and o_wr == m_wr and o_call == m_call
    # $v1 is undefined for a 32-bit return; a v1-only difference is reported apart from a
    # real disagreement so 64-bit returns are not silently conflated with scratch state.
    v0_only = (not ok and o_res[0] == m_res[0] and o_wr == m_wr and o_call == m_call)
    verdict = "EQUIVALENT" if ok else ("V0-ONLY" if v0_only else "DIFFERS")
    return (f"{a} {verdict} v0v1={o_res} vs {m_res} "
            f"writes={len(o_wr)}/{len(m_wr)} calls={len(o_call)}/{len(m_call)}")


def main():
    # One bad draft must not take the rest of the batch with it.
    for a, src in zip(sys.argv[1::2], sys.argv[2::2]):
        try:
            print(one(a, src), flush=True)
        except SystemExit as e:
            print(f"{a} ERROR {e}", flush=True)
        except Exception as e:
            print(f"{a} ERROR {type(e).__name__}: {e}", flush=True)


if __name__ == "__main__":
    main()
