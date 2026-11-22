# Attribution

Build, matching, symbol, layout, and extraction tools are adapted from
[gustavocanepa/gt4-decomp](https://github.com/gustavocanepa/gt4-decomp).
PES6 configuration, recovered functions, and partial structure descriptions
are maintained by Subarasheese and contributors. The descriptive names in
config/symbol_addrs.txt are behavioral names, not recovered original symbols.

[splat](https://github.com/ethteck/splat) and
[rabbitizer](https://github.com/Decompollaborate/rabbitizer) are external Python
dependencies installed under their respective licenses. MIPS binutils,
Sony ee-gcc, Metrowerks compilers, and wibo are external tools, not vendored here.
No game disc images, original executables, assets, BIOS files, SDKs, compiler
binaries, generated disassembly, or emulator state are included.

This repository grants no rights to the original game or third-party tools.
Pro Evolution Soccer and the original game remain the property of their
respective owners.

## Sources ported from gt4-decomp

PES6 and Gran Turismo 4 link the same Sony SDK release (libkernel, the SIF RPC
client, timers and alarms), the same newlib C library and the same libgcc. Functions
whose relocation-normalized bytes are identical in both executables have their GT4
source ported here, with GT4 addresses remapped to PES6 through the matching call
sites and data references. Every ported file is verified independently against the
PES6 executable. These sources come from
[gustavocanepa/gt4-decomp](https://github.com/gustavocanepa/gt4-decomp), and each
begins with a provenance comment. Files
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

More CRI functions (ADXB, ADXT, SRD, SVM, MFCI, Dolby Pro Logic II linking and others) and a
few newlib libm routines (`__kernel_cosf`, `__kernel_sinf`, `__kernel_rem_pio2f`, `copysignf`)
come from the C sources of
[Persona4-Decompilation](https://github.com/Raikaru/Persona4-Decompilation) (PlayStation 2; no
license file), [mk-deception](https://github.com/ShulkMaster/mk-deception) (CC0-1.0),
[re4](https://github.com/adonis-singh/re4) (license not stated in a recognized form) and
[shadow-decomp](https://github.com/dev-camo/shadow-decomp) (no license file); the last three are
GameCube decompilations whose CRI ADX code is platform-independent C. They were found by
compiling those sources with the PES6 compiler profiles and comparing normalized code, and each
adapted file names its origin in its first comment.

## R5900 simulator

`tools/r5900sim.py` is an Emotion Engine interpreter written for behaviour checks of decompiled C.
Its float arithmetic, `tools/ee_float.py`, is a Python port of `pcsx2/PS2Float.cpp` from
[PCSX2](https://github.com/PCSX2/pcsx2) pull request #12001 ("Core/EE: Implements Soft-Floats for
the interpreters", GPL-3.0+); the file carries a provenance comment. The simulator is checked against
real PS2 results recorded by
[ps2autotests](https://github.com/unknownbrackets/ps2autotests) (ISC licence) with
`tools/ee_float_check.py` and `tools/r5900_check.py`; those results are read from a local copy and
are not included here.

## PAL runtime source references

The resident executable and NTGUI2EU each link their own copies of newlib and
libgcc. The single-precision fdlibm sources and Doug Lea's allocator were
compared with the [MVC2 PS2 reconstruction](https://github.com/g-guthrie/mvc2-port-and-decomp/tree/efcb017d57c6ba3acae5959e96af024b9a563a7b/src).
The newlib files retain the applicable fdlibm notice or public-domain
attribution. The GCC floating-point sources retain the runtime linking
exception described above.

The SDK sources credit the individual C files used for comparison. The
[ICO SDK reconstruction](https://github.com/nathanialf/ico/tree/5ebb9a4bd285ff63dac17ad5689a41c1a8663442/sce)
and the [Guilty Gear X Plus SDK reconstruction](https://github.com/devin-thomas/guilty-gear-x-plus/tree/88aa1b1a142f02e3e22c4686837a28f733d3b711/src/sdk)
have their respective notices in [LICENSES/ico-MIT.txt](LICENSES/ico-MIT.txt)
and [LICENSES/ggx-CC0.txt](LICENSES/ggx-CC0.txt). The HTTPS ASN.1 and PEM
sources retain the copyright, advertising and redistribution notices from
[SSLeay / OpenSSL 0.9.1c](https://github.com/openssl/openssl/tree/OpenSSL_0_9_1c/crypto).

The title overlay's MPEG decoder draws on the corresponding C functions in
[OpenRAC's Deadlocked reconstruction](https://github.com/OpenRAC/rac-deadlocked-decomp/tree/0860662c5e1c57c2e1f776dd84b7257cc734f22a/src/core).
Each source preserves the donor path and any earlier RAC3 attribution.
OpenRAC licenses its original contributions under [GPLv3](LICENSES/OpenRAC-GPL-3.0.txt)
and describes its treatment of reconstructed SDK code and RAC3 contributions
in its [third-party notices](https://github.com/OpenRAC/rac-deadlocked-decomp/blob/0860662c5e1c57c2e1f776dd84b7257cc734f22a/THIRD_PARTY_NOTICES.md).
The PES packet reader also uses the ICO reconstruction of `sce/libmpeg/pack.c`
and the MIT notice linked above.

The CRI audio and virtual file routines also use the
[3rd Strike reconstruction](https://github.com/crowded-street/3s-decomp/tree/be9b9bc69dc19822a8eca9ce3e72ba560d5a3835/src/anniversary/cri),
the [Code Veronica X reconstruction](https://github.com/fmil95/recvx-decomp/tree/23bc6cb06c1b0e1093eeba0abca566dadec69a64/src/cri),
and the [Persona 4 reconstruction](https://github.com/Raikaru/Persona4-Decompilation/tree/3a2814000d25d16a1aba5ece57d9a098814b0ccc/src/cri).
The [3rd Strike AGPL notice](LICENSES/3s-decomp-AGPL-3.0.txt) and the
[Code Veronica X MIT notice](LICENSES/recvx-MIT.txt) are included.
The GCC exception-frame source identifies the original GCC runtime and the
[Gran Turismo 4 source](https://github.com/gustavocanepa/gt4-decomp/tree/0bf836499a295edd7e087f90e8ca01961e639da2/src/runtime)
used for comparison.

The DMA channel and graphics functions credit the corresponding C units in the
[King's Field IV reconstruction](https://github.com/Voicedrew11/kfiv-decomp/tree/09adc15974b2936b09943d2a55cc29fa472a79b2/src/sce).
Its [MIT notice](LICENSES/kfiv-MIT.txt) is included.
