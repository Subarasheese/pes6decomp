#!/usr/bin/env python3
"""Prepare splat's file-backed image from the supported PES6 ELF.

Empty PT_LOAD entries describe runtime memory and overlays, not disc bytes.
Do not expand those entries into a binary image with objcopy.
"""
import hashlib
from pathlib import Path

import project


def main():
    if project.TARGET != "main":
        entry, segments = project.load_image()
        address, data = next((a,d) for a,d in segments if d)
        boundary = project.target["code_end"] - address
        if address != project.target["code_start"] or hashlib.sha1(data[:boundary]).hexdigest() != project.target["text_sha1"] or hashlib.sha1(data[boundary:]).hexdigest() != project.target["data_sha1"]:
            raise SystemExit("Prepared overlay does not match catalog")
        Path(project.BUILD, "image.rom").write_bytes(data)
        return
    executable = Path(project.path(project.CONFIG["game"]["executable"]))
    expected = "ea3bad52bcc53acc5f007d0d286644245946260c"
    if hashlib.sha1(executable.read_bytes()).hexdigest() != expected:
        raise SystemExit("Executable does not match supported PAL SLES-542.03")
    entry, segments = project.load_image()
    backed = [(address, data) for address, data in segments if data]
    if len(backed) != 1:
        raise SystemExit("Expected one file-backed ELF segment")
    address, data = backed[0]
    if address != 0x00100000 or entry != 0x00100008 or len(data) != 0x2E9780:
        raise SystemExit("Unexpected executable layout")
    output = Path(project.path(f"build/splat/{project.BASENAME}.rom"))
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_bytes(data)
    print(f"Prepared {len(data)} file-backed bytes for splat")


if __name__ == "__main__":
    main()
