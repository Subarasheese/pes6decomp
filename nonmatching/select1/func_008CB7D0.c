/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00153570(s64, s64, s64, s64);
s64 func_001CDAA0(void);

s64 func_008CB7D0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };

    s1 = (*(volatile s32 *) (u32) (gp + -20136));
    { s32 c_ = s1 == 0; s2 = a1; if (c_) goto L_008CB810; }
    v1 = (*(volatile s32 *) (u32) s1);
L_008CB7F4:;
    if (v1 != a0) { s1 = (*(volatile s32 *) (u32) (s1 + 36)); goto L_008CB804; }
    goto L_008CB814;
L_008CB804:;
    if (s1 != 0) { v1 = (*(volatile s32 *) (u32) s1); goto L_008CB7F4; }
L_008CB810:;
    s1 = 0;
L_008CB814:;
    if (s1 == 0) { ; goto L_008CB944; }
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_008CB834; }
    v0 = func_00153570(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
L_008CB834:;
    v0 = (s32) 0x530000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -20300));
    f1.f = (*(volatile f32 *) (u32) s2);
    v0 = (s32) 0x530000U;
    f0.f = f1.f + f0.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    (*(volatile u16 *) (u32) (s0 + 4)) = (u16) v1;
    f0.f = (*(volatile f32 *) (u32) (v0 + -20296));
    f1.f = (*(volatile f32 *) (u32) (s2 + 4));
    f0.f = f1.f + f0.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    (*(volatile u16 *) (u32) (s0 + 6)) = (u16) v0;
    f0.f = (*(volatile f32 *) (u32) (s2 + 8));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    (*(volatile u16 *) (u32) (s0 + 8)) = (u16) v0;
    f0.f = (*(volatile f32 *) (u32) (s2 + 12));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    (*(volatile u16 *) (u32) (s0 + 10)) = (u16) v0; v0 = func_001CDAA0();
    v1 = 1;
    if (v0 != v1) { v1 = (*(volatile s32 *) (u32) (s1 + 32)); goto L_008CB938; }
    a3 = (*(volatile s16 *) (u32) (s0 + 6));
    v1 = (s32) 0x530000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -20296));
    a1 = (s32) 0x530000U;
    a2 = (*(volatile s16 *) (u32) (s0 + 10));
    f2.f = (*(volatile f32 *) (u32) (a1 + -20288));
    f1.i = (s32) a3;
    a0 = (s32) 0x530000U;
    f1.f = (f32) f1.i;
    v1 = (s32) 0x530000U;
    f1.f = f1.f - f0.f;
    f0.i = (s32) a2;
    f0.f = (f32) f0.i;
    f3.f = f1.f + f0.f;
    f1.f = f1.f * f2.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + -20312));
    f2.f = f3.f * f2.f;
    f0.f = f1.f + f0.f;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    (*(volatile u16 *) (u32) (s0 + 6)) = (u16) a0;
    a0 = (s64) ((u64) a0 << 48);
    a0 = a0 >> 48;
    f1.f = (*(volatile f32 *) (u32) (v1 + -20312));
    f0.i = (s32) a0;
    f0.f = (f32) f0.i;
    f1.f = f2.f + f1.f;
    f0.f = f1.f - f0.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    (*(volatile u16 *) (u32) (s0 + 10)) = (u16) v1;
    v1 = (*(volatile s32 *) (u32) (s1 + 32));
L_008CB938:;
    v1 = v1 | 0x1;
    (*(volatile u32 *) (u32) (s1 + 32)) = (u32) v1;
L_008CB944:;
    return v0;
}
