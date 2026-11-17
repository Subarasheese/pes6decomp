/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002871C0(s64);
void func_009A8970(s64, s64, s64, f32, f32, f32, f32);
s64 func_009A8C80(s64, s64, s64, s64);
s64 func_009A9050(s64, s64, s64, s64);
s64 func_009A9420(s64, s64, s64, s64, f32, f32);
s64 func_009A9730(s64, s64, s64, s64);

s64 func_009A8760(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 fcc = 0;
    s64 frame[42];
    s64 sp = (s32) (u32) frame;

    s4 = (s32) ((u32) sp + 0x148U);
    s3 = a0;
    s2 = a3;
    a0 = (s32) ((u32) sp + 0x130U);
    f2.f = (*(volatile f32 *) (u32) (a2 + 8));
    s0 = a1;
    f1.f = (*(volatile f32 *) (u32) (a2 + 4));
    s1 = 0;
    f0.f = (*(volatile f32 *) (u32) a2);
    (*(volatile f32 *) (u32) (sp + 320)) = f0.f;
    (*(volatile f32 *) (u32) s4) = f2.f;
    (*(volatile f32 *) (u32) (sp + 324)) = f1.f; func_002871C0(a0);
    f1.f = (*(volatile f32 *) (u32) (sp + 304));
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (fcc) { f1.f = (*(volatile f32 *) (u32) (sp + 320)); goto L_009A87F0; }
L_009A87C8:;
    v1 = (s64) ((u64) s2 << 56);
    v0 = 1;
    v1 = v1 >> 56;
    if (v1 == v0) goto L_009A8814;
    v0 = -1;
    if (v1 == v0) goto L_009A8814;
    v0 = 0; goto L_009A8950;
L_009A87F0:;
    v0 = (s32) 0xbf800000U;
    f0.f = (*(volatile f32 *) (u32) s4);
    f2.i = (s32) v0;
    f1.f = f1.f * f2.f;
    f0.f = f0.f * f2.f;
    (*(volatile f32 *) (u32) (sp + 320)) = f1.f;
    (*(volatile f32 *) (u32) s4) = f0.f; goto L_009A87C8;
L_009A8814:;
    s0 = s0 & 0xff;
    v0 = s0 & 0x4;
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0x60U); goto L_009A885C; }
L_009A8824:;
    v0 = s0 & 0x2;
    if (v0 != 0) { v0 = (s32) ((u32) s1 << 1); goto L_009A887C; }
L_009A8830:;
    v0 = s0 & 0x8;
    if (v0 != 0) { v0 = (s32) ((u32) s1 << 1); goto L_009A88B4; }
L_009A883C:;
    v0 = s0 & 0x10;
    if (v0 != 0) { v0 = (s32) ((u32) s1 << 1); goto L_009A88EC; }
L_009A8848:;
    v0 = 0 < s1;
    { s32 c_ = v0 != 0; s3 = 0; if (c_) goto L_009A8924; }
L_009A8854:;
    v0 = s1; goto L_009A8950;
L_009A885C:;
    a1 = s3;
    a2 = (s32) ((u32) sp + 0x140U);
    a3 = s2; v0 = func_009A9420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_009A8824;
    s1 = (s32) ((u32) s1 + 0x1U); goto L_009A8824;
L_009A887C:;
    a1 = s3;
    v0 = (s32) ((u32) v0 + (u32) s1);
    a2 = (s32) ((u32) sp + 0x140U);
    v0 = (s32) ((u32) v0 << 2);
    a3 = s2;
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a0 = (s32) ((u32) v0 + 0x60U); v0 = func_009A9730(a0, a1, a2, a3);
    if (v0 == 0) goto L_009A8830;
    s1 = (s32) ((u32) s1 + 0x1U); goto L_009A8830;
L_009A88B4:;
    a1 = s3;
    v0 = (s32) ((u32) v0 + (u32) s1);
    a2 = (s32) ((u32) sp + 0x140U);
    v0 = (s32) ((u32) v0 << 2);
    a3 = s2;
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a0 = (s32) ((u32) v0 + 0x60U); v0 = func_009A9050(a0, a1, a2, a3);
    if (v0 == 0) goto L_009A883C;
    s1 = (s32) ((u32) s1 + 0x1U); goto L_009A883C;
L_009A88EC:;
    a1 = s3;
    v0 = (s32) ((u32) v0 + (u32) s1);
    a2 = (s32) ((u32) sp + 0x140U);
    v0 = (s32) ((u32) v0 << 2);
    a3 = s2;
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a0 = (s32) ((u32) v0 + 0x60U); v0 = func_009A8C80(a0, a1, a2, a3);
    if (v0 == 0) goto L_009A8848;
    s1 = (s32) ((u32) s1 + 0x1U); goto L_009A8848;
L_009A8924:;
    s0 = (s32) ((u32) sp + 0x60U);
L_009A8928:;
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x140U);
    a2 = s2; func_009A8970(a0, a1, a2, f12.f, f13.f, f14.f, f15.f);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s1;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x34U); if (c_) goto L_009A8928; }
    goto L_009A8854;
L_009A8950:;
    return v0;
}
