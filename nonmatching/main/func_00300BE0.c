/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002D4C40(s32, s32, s32, s32, s32, s32, s32);
s32 func_00305C60(s32, s32);
s32 func_00305E60(s32, s32);
s32 func_00991380(s32, s32, s32, s32);
s32 func_009E1C90(s32, s32, s32, s32);
s32 func_00AA3540(s32, s32, s32, s32);

s32 func_00300BE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 24360));
    s0 = (*(volatile s32 *) (u32) (a0 + 24));
    { s32 c_ = v0 != 0; s2 = a0; if (c_) goto L_00300C14; }
    v1 = 255; goto L_00300CE8;
L_00300C14:;
    a0 = 1; v0 = func_009E1C90(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    a1 = 1;
    if (v0 == a1) goto L_00300C34;
    v1 = 255; goto L_00300CE8;
L_00300C34:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7692));
    if (v0 != 0) { v1 = 255; goto L_00300CE8; }
    v0 = (s32) 0xcb0000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 24360));
    if (a0 == v1) goto L_00300C64;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a1 = hi;
L_00300C64:;
    v0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = 1;
    s1 = (s32) ((u32) v1 + (u32) a0);
    s3 = (*(volatile u8 *) (u32) (s1 + 18));
    if (s3 != v0) goto L_00300CE4;
    a0 = s3; v0 = func_00991380(a0, a1, a2, a3);
    v1 = s3 ^ 0x1;
    s3 = v0;
    a0 = v1 & 0xff; v0 = func_00991380(a0, a1, a2, a3);
    at = s3 < v0;
    if (at == 0) goto L_00300CE4;
    a0 = s1; v0 = func_00AA3540(a0, a1, a2, a3);
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x4a100000U;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00300CE4;
    v1 = 0; goto L_00300CE8;
L_00300CE4:;
    v1 = 255;
L_00300CE8:;
    v0 = 255;
    { s32 c_ = v1 == v0; (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v1; if (c_) goto L_00300D6C; }
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) gp + 0xffff8310U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = s2; v0 = func_00305C60(a0, a1);
    v1 = 1;
    if (v0 != v1) { v1 = (*(volatile s32 *) (u32) (s0 + 36)); goto L_00300D28; }
    v1 = 255;
    v0 = 0;
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v1; goto L_00300D70;
L_00300D28:;
    v0 = (s32) ((u32) gp + 0xffff8310U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4C40(a0, a1, a2, a3, a4, a5, a6);
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    a1 = (s32) 0x300000U;
    v0 = (s32) ((u32) gp + 0xffff8310U);
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0xad0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) v0; v0 = func_00305E60(a0, a1);
    v0 = 1; goto L_00300D70;
L_00300D6C:;
    v0 = 0;
L_00300D70:;
    return v0;
}
