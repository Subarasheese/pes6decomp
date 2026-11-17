/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0098ED30(s32);

s32 func_00983E90(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    s0 = a0;
    a0 = 255; v0 = func_0098ED30(a0);
    v1 = v0 & 0xff;
    v0 = 3;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s0 + 16)); goto L_00983FFC; }
    v0 = 2;
    if (v1 == v0) { v1 = (*(volatile u8 *) (u32) (s0 + 16)); goto L_00983F40; }
    v0 = 1;
    if (v1 == v0) goto L_00983EE0;
    if (v1 == 0) goto L_00983EE0;
    v0 = 3; goto L_00984024;
L_00983EE0:;
    v0 = (*(volatile u8 *) (u32) (s0 + 16));
    at = v0 < 10;
    if (at != 0) { v0 = (*(volatile u8 *) (u32) (s0 + 469)); goto L_0098402C; }
    v0 = v0 < 24;
    if (v0 != 0) goto L_00984020;
    f1.f = (*(volatile f32 *) (u32) (s0 + 224));
    f2.i = f1.i & 0x7FFFFFFF;
    v0 = (s32) 0x44c00000U;
    f0.i = (s32) v0;
    fcc = f0.f < f2.f;
    if (!fcc) goto L_00984020;
    f1.i = f1.i & 0x7FFFFFFF;
    v0 = (s32) 0x45000000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00984020;
    v0 = 0; goto L_009840A8;
L_00983F40:;
    v0 = v1 < 24;
    if (v0 != 0) { at = (u64) v1 < (u64) (s64) 17; goto L_00983F54; }
    v0 = v1 < 29; goto L_009840A8;
L_00983F54:;
    if (at == 0) goto L_00984020;
    v0 = (s32) ((u32) v1 << 2);
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0xffffa110U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x983f78U) goto L_00983F78; if (t_ == 0x983f80U) goto L_00983F80; if (t_ == 0x984020U) goto L_00984020; }
L_00983F78:;
    v0 = 1; goto L_009840A8;
L_00983F80:;
    v0 = (*(volatile u8 *) (u32) (s0 + 469));
    if (v0 == 0) goto L_00984020;
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00983FA8; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00983FA8:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = 3;
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (a0 + 468));
    if (v1 == v0) goto L_0098406C;
    v0 = (s32) 0xcb0000U;
    v1 = (*(volatile u8 *) (u32) a0);
    v0 = (*(volatile u8 *) (u32) (v0 + 21249));
    if (v1 == v0) goto L_0098406C;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21250));
    if (v1 == v0) goto L_0098406C;
    v0 = 1; goto L_009840A8;
L_00983FFC:;
    at = v0 < 8;
    if (at != 0) goto L_00984074;
    at = v0 < 17;
    if (at == 0) goto L_00984020;
    v0 = (*(volatile s32 *) (u32) (gp + -19560));
    if (v0 == 0) goto L_00984074;
L_00984020:;
    v0 = 3;
L_00984024:;
    goto L_009840AC;
L_0098402C:;
    if (v0 == 0) goto L_00984064;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    a0 = v0 & 0xff;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    v1 = v1 ^ 0x1;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a0 == v0) goto L_00984064;
    v0 = 0; goto L_009840A8;
L_00984064:;
    v0 = 1; goto L_009840A8;
L_0098406C:;
    v0 = 0; goto L_009840A8;
L_00984074:;
    v0 = (*(volatile u8 *) (u32) (s0 + 469));
    if (v0 == 0) goto L_00984020;
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    v0 = v0 & 0xff;
    a0 = a0 ^ 0x1;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    v0 = v0 ^ v1;
    v0 = (u64) v0 < (u64) (s64) 1;
L_009840A8:;
L_009840AC:;
    return v0;
}
