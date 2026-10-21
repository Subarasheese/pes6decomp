# Attribution

Build, matching, symbol, layout, and extraction tools are adapted from
[gustavocanepa/gt4-decomp](https://github.com/gustavocanepa/gt4-decomp),
under the MIT license reproduced in LICENSE. Retain its copyright notice.
PES6 configuration, recovered functions, and partial structure descriptions
are maintained by Subarasheese and contributors. The descriptive names in
config/symbol_addrs.txt are behavioral names, not recovered original symbols.

[splat](https://github.com/ethteck/splat) and
[rabbitizer](https://github.com/Decompollaborate/rabbitizer) are external Python
dependencies installed under their respective licenses. MIPS binutils,
Sony ee-gcc, Metrowerks compilers, and wibo are external tools, not vendored here.
No game disc images, original executables, assets, BIOS files, SDKs, compiler
binaries, generated disassembly, or emulator state are included.

LICENSE covers the project tooling and original contributions; it does not
grant rights to the original game or third-party tools. Pro Evolution Soccer
and the original game remain the property of their respective owners.

## Sources ported from gt4-decomp

PES6 and Gran Turismo 4 link the same Sony SDK release (libkernel, the SIF RPC
client, timers and alarms), the same newlib C library and the same libgcc. Functions
whose relocation-normalized bytes are identical in both executables have their GT4
source ported here, with GT4 addresses remapped to PES6 through the matching call
sites and data references. Every ported file is verified independently against the
PES6 executable. These sources come from
[gustavocanepa/gt4-decomp](https://github.com/gustavocanepa/gt4-decomp) under the
MIT license reproduced in LICENSE, and each begins with a provenance comment. Files
outside the SDK and C runtime regions carry a note that they are only byte-identical
to a GT4 function; their names do not describe PES6 behavior.

### newlib 1.9.0

Each newlib file carries its own notice; ported sources keep the first comment of
their file. A file without a notice of its own is covered by section (9) of newlib's
COPYING.NEWLIB:

Copyright (c) 1994, 1997 Cygnus Solutions. All rights reserved.

Redistribution and use in source and binary forms are permitted provided that the above copyright
notice and this paragraph are duplicated in all such forms and that any documentation, advertising
materials, and other materials related to such distribution and use acknowledge that the software
was developed at Cygnus Solutions. Cygnus Solutions may not be used to endorse or promote products
derived from this software without specific prior written permission. THIS SOFTWARE IS PROVIDED
``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.

The libm files are fdlibm's: "Copyright (C) 1993 by Sun Microsystems, Inc. All rights
reserved. Developed at SunPro, a Sun Microsystems, Inc. business. Permission to use,
copy, modify, and distribute this software is freely granted, provided that this
notice is preserved." The stdio and stdlib files from 4.4BSD carry the University of
California's notice with the redistribution paragraph above.

### GCC runtime (libgcc.a, gcc snapshot 2000-10-03)

Sources marked `licence: gcc-runtime` (config/fp-bit.c and libgcc2.c) are under the
GPL with this exception, stated in those files; the GPLv2 text is in
[LICENSES/GPL-2.0.txt](LICENSES/GPL-2.0.txt):

In addition to the permissions in the GNU General Public License, the Free Software Foundation
gives you unlimited permission to link the compiled version of this file into combinations with
other programs, and to distribute those combinations without any restriction coming from the use of
this file. (The General Public License restrictions do apply in other respects; for example, they
cover modification of the file, and distribution when not linked into a combine executable.)

## Sources adapted from other PS2 decompilations

Sony SDK functions (libgraph, libdma, libvu0, libdev, libpad, SIF/RPC, TTY, DECI2, interrupt
handling and IOP reset in libkernel), libgcc soft-float helpers
and newlib functions (malloc, stdio, printf, mprec, time) were found by compiling the sources of
[kfiv-decomp](https://github.com/Voicedrew11/kfiv-decomp) and
[crashwoc-decomp-ps2](https://github.com/denzi-gh/crashwoc-decomp-ps2) and comparing the
normalized code with PES6. Each adapted file names its origin in its first comment and is
verified against the PES6 executable.

CRI middleware functions (ADX: ADXT, ADXF, ADXB, ADXSTM, ADXAMP; SVM; SJ stream joints; CVFS
and its device interfaces) were found the same way in the CRI `libadxe` sources of
[3s-decomp](https://github.com/crowded-street/3s-decomp) (Street Fighter III: 3rd Strike,
AGPL-3.0) and of [recvx-decomp](https://github.com/fmil95/recvx-decomp) (Resident Evil Code:
Veronica X, MIT). Each adapted file names its origin in its first comment; its headers were
preprocessed and reduced to the declarations the function uses, and it is verified against the
PES6 executable.
