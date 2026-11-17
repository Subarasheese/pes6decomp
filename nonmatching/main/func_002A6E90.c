/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001A4790(s32);
s32 func_001A4880(s32);
s32 func_002A7040(s32, f32, f32, f32);
s32 func_002A81F0(s32, s32, s32, s32);

s32 func_002A6E90(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f14 = { fa14 };
    s32 fcc = 0;
    f32 acc = 0;

    s0 = (s32) 0x5e0000U;
    s0 = (s32) ((u32) s0 + 0x1d30U);
    v0 = (*(volatile u8 *) (u32) (s0 + 3));
    { s32 c_ = v0 == 0; s1 = 0; if (c_) goto L_002A6F0C; }
    a0 = 2;
    if (v0 == a0) { v0 = (*(volatile s32 *) (u32) (gp + -32420)); goto L_002A6F50; }
L_002A6EC0:;
    v1 = (s32) 0x5e0000U;
    v0 = (s32) 0x5e0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 6560));
    v1 = v1 | 0x800;
    (*(volatile u32 *) (u32) (v0 + 6560)) = (u32) v1;
    v0 = v1 & 0x2;
    if (v0 == 0) { a0 = 0; goto L_002A6EF0; }
    a0 = 1; v0 = func_001A4880(a0);
    a0 = s0; goto L_002A6EFC;
L_002A6EF0:;
    v0 = func_001A4880(a0);
    a0 = s0;
L_002A6EFC:;
    v0 = func_002A7040(a0, f12.f, f13.f, f14.f);
L_002A6F04:;
    v0 = (u64) 0 < (u64) s1; goto L_002A7024;
L_002A6F0C:;
    v0 = (s32) 0x5e0000U;
    v1 = -2049;
    a0 = (*(volatile s32 *) (u32) (v0 + 6560));
    v0 = (s32) 0x5e0000U;
    v1 = a0 & v1;
    (*(volatile u32 *) (u32) (v0 + 6560)) = (u32) v1;
    v0 = v1 & 0x2;
    if (v0 == 0) { a0 = 0; goto L_002A6F40; }
    a0 = 1; v0 = func_001A4880(a0);
    goto L_002A6F04;
L_002A6F40:;
    v0 = func_001A4880(a0);
    goto L_002A6F04;
L_002A6F50:;
    f2.f = (*(volatile f32 *) (u32) (s0 + 516));
    f1.i = (s32) 0;
    f4.f = (*(volatile f32 *) (u32) (s0 + 512));
    f0.f = (*(volatile f32 *) (u32) (s0 + 520));
    f3.f = (*(volatile f32 *) (u32) v0);
    acc = f1.f + f2.f;
    f1.f = acc + f4.f * f3.f;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) (s0 + 516)) = f1.f; if (c_) goto L_002A6EC0; }
    v1 = (*(volatile u8 *) (u32) (s0 + 4));
    (*(volatile f32 *) (u32) (s0 + 516)) = f0.f;
    { s32 c_ = v1 == a0; s1 = 1; if (c_) goto L_002A7004; }
    v0 = 3;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s0 + 2)); goto L_002A6F9C; }
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v1; goto L_002A700C;
L_002A6F9C:;
    a0 = 4;
    v0 = v0 & 0xf;
    if (v0 != a0) goto L_002A7004;
    v0 = (*(volatile s32 *) (u32) (s0 + 524));
    a1 = (s32) ((u32) v0 + 0x4U);
    if (a1 == 0) goto L_002A7004;
    v0 = func_002A81F0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 524));
    a0 = (s32) ((u32) v0 + 0x4U); f0.f = func_001A4790(a0);
    f1.i = (s32) 0;
    v1 = (s32) 0x5e0000U;
    v0 = (s32) 0x5e0000U;
    fcc = f1.f == f0.f;
    (*(volatile u32 *) (u32) (v0 + 7988)) = (u32) 0;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) (v1 + 7992)) = f0.f; if (c_) goto L_002A7014; }
L_002A6FEC:;
    v1 = (s32) 0x5e0000U;
    v0 = (s32) 0x5e0000U;
    v1 = (*(volatile u16 *) (u32) (v1 + 7472));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) (v0 + 7472)) = (u16) v1; goto L_002A6EC0;
L_002A7004:;
    (*(volatile u32 *) (u32) (s0 + 516)) = (u32) 0; goto L_002A6EC0;
L_002A700C:;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) 0; goto L_002A6EC0;
L_002A7014:;
    v1 = (s32) 0x3f800000U;
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v0 + 7992)) = (u32) v1; goto L_002A6FEC;
L_002A7024:;
    return v0;
}
