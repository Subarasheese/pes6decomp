#!/usr/bin/env python3
"""Read source-object section sizes and undefined names without per-file subprocesses.

This only replaces readelf/nm metadata collection; code, data and relocations
still pass the unchanged matching judge and complete original-byte proof.
"""
import argparse
import json
from pathlib import Path
import re
import struct


def read_info(path):
    data = Path(path).read_bytes()
    if len(data) < 52 or data[:6] != b"\x7fELF\x01\x01":
        raise ValueError(f"{path}: expected ELF32 little-endian object")
    shoff = struct.unpack_from("<I", data, 32)[0]
    entsize, count, names_index = struct.unpack_from("<HHH", data, 46)
    if entsize != 40 or not count or names_index >= count or shoff + count * entsize > len(data):
        raise ValueError(f"{path}: invalid section table")
    sections = [struct.unpack_from("<10I", data, shoff + i * entsize) for i in range(count)]

    def content(section):
        offset, size = section[4:6]
        if offset + size > len(data):
            raise ValueError(f"{path}: truncated section")
        return data[offset:offset + size]

    def string(table, offset):
        end = table.find(b"\0", offset)
        if not 0 <= offset < len(table) or end < 0:
            raise ValueError(f"{path}: invalid string offset")
        return table[offset:end].decode()

    section_names = content(sections[names_index])
    sizes, undefined = {}, []
    for section in sections:
        name = string(section_names, section[0])
        if name:
            if name.startswith(".gnu.linkonce.t."):
                name = ".text"
            sizes[name] = sizes.get(name, 0) + section[5]
        if section[1] != 2:
            continue
        if section[9] != 16 or section[5] % 16 or section[6] >= count:
            raise ValueError(f"{path}: invalid symbol table")
        table = content(section)
        strings = content(sections[section[6]])
        for offset in range(0, len(table), 16):
            name_offset, _, _, _, _, index = struct.unpack_from("<IIIBBH", table, offset)
            if index == 0 and name_offset:
                undefined.append(string(strings, name_offset))
    return {"sections": sizes, "undefined": sorted(undefined)}


def collect(directory, listing):
    result = {}
    for name in Path(listing).read_text().splitlines():
        m = re.fullmatch(r"func_([0-9A-F]{8})\.o", name)
        if not m:
            raise ValueError(f"unexpected object name: {name}")
        path = Path(directory) / name
        if path.is_file():
            result[int(m.group(1), 16)] = read_info(path)
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--directory", required=True)
    parser.add_argument("--listing", required=True)
    args = parser.parse_args()
    print(json.dumps(collect(args.directory, args.listing)))


if __name__ == "__main__":
    main()
