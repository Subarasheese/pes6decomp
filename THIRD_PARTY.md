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

## Resident compression and CRI audio sources

The resident compressor and decompressor use zlib 1.1.4. The adapted files identify
their original functions in the source comments. The PS2 sources retain the shared
stream types and refer to the error messages and tables at their verified PAL
addresses. [zlib 1.1.4 source](https://zlib.net/fossils/zlib-1.1.4.tar.gz),
[zlib license](LICENSES/zlib-1.1.4.txt).

The additional CRI audio and streaming sources cite the original file and function.
They were compared with the resident PAL binary after compilation and relocation.
[recvx-decomp source](https://github.com/fmil95/recvx-decomp/tree/23bc6cb06c1b0e1093eeba0abca566dadec69a64),
[MIT license](LICENSES/recvx-MIT.txt),
[3s-decomp source](https://github.com/crowded-street/3s-decomp/tree/be9b9bc69dc19822a8eca9ce3e72ba560d5a3835),
[AGPL-3.0 license](LICENSES/3s-AGPL-3.0.txt).

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

## HTTPS and runtime library sources

The HTTPS overlay sources carrying an SSLeay or OpenSSL provenance comment
identify the public file and function used for reconstruction. The shared
structures in `include/pes6/https/` come from the same SSLeay headers.
Function and data references use the PAL addresses. The tags identify the
source used for each function. [SSLeay 0.9.1b](https://github.com/openssl/openssl/tree/SSLeay_0_9_1b),
[OpenSSL 0.9.3a](https://github.com/openssl/openssl/tree/OpenSSL_0_9_3a),
[OpenSSL 0.9.5a](https://github.com/openssl/openssl/tree/OpenSSL_0_9_5a).

This product includes cryptographic software written by Eric Young
(eay@cryptsoft.com). This product includes software developed by the OpenSSL
Project for use in the OpenSSL Toolkit (http://www.openssl.org/).
[SSLeay terms](LICENSES/SSLeay.txt), [OpenSSL 0.9.3a terms](LICENSES/OpenSSL-0.9.3a.txt),
[OpenSSL 0.9.5a terms](LICENSES/OpenSSL-0.9.5a.txt).

The newlib functions identified by file name use the newlib 1.9.0 notices
above. The resident Adler-32 checksum is adapted from Mark Adler’s
`adler32.c` in zlib 1.1.4. [zlib 1.1.4](https://zlib.net/fossils/zlib-1.1.4.tar.gz),
[zlib terms](LICENSES/zlib-1.1.4.txt).

## Other shared PS2 library sources

Each adapted file identifies the reference implementation. The PAL compiler,
call and data targets, and linked function extent were checked in the PES6
image. A reference function name identifies the source used for comparison.
The PES6 symbol keeps its address-based name where its identity is uncertain.

| Reference | Material used |
| --- | --- |
| [LucasPicoli/god-hand-decomp](https://github.com/LucasPicoli/god-hand-decomp/tree/4607c6865368f1b9c631b5b36e5adf00fafea5f1) | CRI audio and streaming, controller and MPEG routines. Each adapted function cites its source file. [MIT notice](LICENSES/God-Hand-MIT.txt). |
| [DW4_Decomp](https://github.com/crashbashash/DW4_Decomp/tree/3b641e92c62d38ed27939ad3d8e197a3db6ac28b) | Shared CRI middleware and library routines. The project's [notice](https://github.com/crashbashash/DW4_Decomp/blob/3b641e92c62d38ed27939ad3d8e197a3db6ac28b/NOTICE) limits its CC0 dedication to tools and documentation. |
| [OpenThievius/sly2-decomp](https://github.com/OpenThievius/sly2-decomp/tree/aaa56f74e5855af382d5ec1dd6a553e3220085f0) | MPEG, pad and compiler runtime sources. Files carry their GPL-3.0-or-later attribution. |
| [Komasia/sly2-decomp](https://github.com/Komasia/sly2-decomp/tree/be803ab8801df098639c83be51366b8d094b78f5) | CD/DVD, MPEG, C library and runtime helpers. The GCC frame-unwinding helper uses the libgcc terms above. |
| [rez-decomp](https://github.com/new-coke/rez-decomp/tree/b58dc0169c348604cf1e520cb260cd90bd024181) | CRI and SDK source. [MIT notice](LICENSES/Rez-MIT.txt). |
| [Syphon Filter Omega Strain](https://github.com/zm2283145/syphon-filter-omega-strain-decomp/tree/b8ecd7b81d0a52f58912404e5a565e08070edc92) | CRI library source. |
| [OpenRAC/rac1-decomp](https://github.com/OpenRAC/rac1-decomp/tree/84bd565ff5d079384f1b673ac8e39ea3e06c68b7) | GS image readback in the resident executable and NTGUI. The PAL versions use their own diagnostic strings, VIF1 packet and interrupt-mask functions. [Source and license](https://github.com/OpenRAC/rac1-decomp/blob/84bd565ff5d079384f1b673ac8e39ea3e06c68b7/LICENSE). |
| [OpenRAC/rac-deadlocked-decomp](https://github.com/OpenRAC/rac-deadlocked-decomp/tree/0860662c5e1c57c2e1f776dd84b7257cc734f22a) | Controller DMA state, multitap RPC initialization and shared SDK routines. Individual source comments identify the corresponding files. The project's [third-party notices](https://github.com/OpenRAC/rac-deadlocked-decomp/blob/0860662c5e1c57c2e1f776dd84b7257cc734f22a/THIRD_PARTY_NOTICES.md) also credit the earlier RAC3 controller reconstruction. |
| [rac5-sm-decomp](https://github.com/OpenRAC/rac5-sm-decomp/tree/5c5a33d1b992fa9176b8f9223d7452b1a2b1bbd4) | Sony RPC client implementations. The project distributes its source under the [GPLv3](LICENSES/GPL-3.0.txt). |
| [Lombyte](https://github.com/lombyte-project/Lombyte/tree/1901ffd94eba6f53f2de2a7c6101bb44f2b5f25e) | Reconstructed runtime and middleware source. The project records the underlying components in its [third-party notices](https://github.com/lombyte-project/Lombyte/blob/1901ffd94eba6f53f2de2a7c6101bb44f2b5f25e/THIRD_PARTY_NOTICES.md). |
| [twewy](https://github.com/Yotona/twewy/tree/3f916f1a2d31f29bd7ec6fd89f3a87b696e79b9b) | Platform-independent CRI source. |
| [dreamingmoths/memory-of-alessa](https://github.com/dreamingmoths/memory-of-alessa/tree/0d12473f368e7f7699732257bdad1372cc2a09af) | MPEG video-input buffers, timestamps and wrapped copies. [MIT notice](LICENSES/memory-of-alessa-MIT.txt). |
| [Patt92/recvx-native](https://github.com/Patt92/recvx-native/tree/3e73e1ac67655152fe9e591167edbdfc8cd8b001) | CRI streaming flow limits. [MIT notice](LICENSES/recvx-native-MIT.txt). |
| [kira-502/dotr-decomp](https://github.com/kira-502/dotr-decomp/tree/03cd12eb3a78228b10277a1fdb161998e1c37778) | MPEG read buffers, video DMA tags and VIF packet setup. [CC0 dedication](https://github.com/kira-502/dotr-decomp/blob/03cd12eb3a78228b10277a1fdb161998e1c37778/LICENSE). |
| [Dorgengoa/RGDecomp](https://github.com/Dorgengoa/RGDecomp/tree/c8c8b3cd9e36826b5378731b93819e1a23fecbfb) | Movie audio buffer write regions. [CC0 dedication](https://github.com/Dorgengoa/RGDecomp/blob/c8c8b3cd9e36826b5378731b93819e1a23fecbfb/LICENSE). |

### SSL library in the HTTPS overlay

The PAL overlay identifies its library as RSA SSL-C 2.1.0. Individual ASN.1,
BIO, bignum, DES, RSA, SSL and X.509 functions correspond to historical
SSLeay or OpenSSL C. Their comments identify the source file and revision.
Record fields, diagnostic strings and function targets were checked against
the PAL library. [SSLeay sources](https://github.com/openssl/openssl/tree/SSLeay_0_9_1b)
and [OpenSSL sources](https://github.com/openssl/openssl/tree/OpenSSL_0_9_1c).

This product includes cryptographic software written by Eric Young (eay@cryptsoft.com).
This product includes software developed by the OpenSSL Project for use in the OpenSSL Toolkit.
See the [OpenSSL and SSLeay notices](LICENSES/OpenSSL-SSLeay.txt).

## R5900 simulator

`tools/r5900sim.py` is an Emotion Engine interpreter written for behaviour checks of decompiled C.
Its float arithmetic, `tools/ee_float.py`, is a Python port of `pcsx2/PS2Float.cpp` from
[PCSX2](https://github.com/PCSX2/pcsx2) pull request #12001 ("Core/EE: Implements Soft-Floats for
the interpreters", GPL-3.0+); the file carries a provenance comment. The simulator is checked against
real PS2 results recorded by
[ps2autotests](https://github.com/unknownbrackets/ps2autotests) (ISC licence) with
`tools/ee_float_check.py` and `tools/r5900_check.py`; those results are read from a local copy and
are not included here.

The NTGUI2EU SDK and runtime ports retain their source notices. The GT4
sources are covered by the [gt4-decomp MIT license](LICENSES/GT4-MIT.txt).
The CRI CVFS functions carry the [3s-decomp AGPL license](LICENSES/3s-AGPL-3.0.txt).
The resident inflate code is adapted from zlib 1.1.4, including the
[original zlib license](LICENSES/zlib-1.1.4.txt).

The resident Huffman table builder and tree-header writer use zlib 1.1.4
`inftrees.c` and `trees.c`. The ADXF sector reader, ADX stream header parser,
and CVFS device registration adapt `adx_fs.c`, `adx_sjd.c`, and `cri_cvfs.c`
from the 3s-decomp CRI sources cited above. Their local tables and diagnostic
strings were verified at the addresses used by the PAL executable.

The HTTPS overlay's RC2, DES, Base64, MD2 and SSL routines and their type
definitions are adapted from SSLeay 0.9.1b. This product includes cryptographic
software written by Eric Young (eay@cryptsoft.com).
[SSLeay 0.9.1b source](https://github.com/openssl/openssl/tree/SSLeay_0_9_1b),
[SSLeay license](LICENSES/SSLeay.txt).

The network overlay's MD5 block transform is derived from the RSA Data
Security, Inc. MD5 Message-Digest Algorithm. The implementation retains the
original copyright and license. [RFC 1321, Appendix A.3](https://www.rfc-editor.org/rfc/rfc1321#appendix-A.3).

The NTGUI frame deregistration routine uses GCC’s `__deregister_frame_info` from the 2000-10-03 runtime snapshot, with its GCC runtime linking exception. The semaphore calls and frame list are specific to NTGUI. [GCC source via GT4](https://github.com/gustavocanepa/gt4-decomp/blob/0bf836499a295edd7e087f90e8ca01961e639da2/src/runtime/unit_0059BE80/func_005BED78.c).
