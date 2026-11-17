/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00AA3210(s32, s32, s32, f32, f32);

f32 func_00A68F90(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x44800000U;
    f1.i = (s32) v1;
    v0 = (s32) 0x44000000U;
    f0.f = f13.f - f1.f;
    s4 = a0;
    s3 = 0;
    s1 = 2;
    (*(volatile f32 *) (u32) (sp + 112)) = f0.f;
    s2 = 0;
    f0.f = f1.f + f13.f;
    s0 = (s32) ((u32) sp + 0x70U);
    f2.i = (s32) v0;
    (*(volatile f32 *) (u32) (sp + 128)) = f0.f;
    f1.f = f13.f - f2.f;
    f0.f = f2.f + f13.f;
    f20.i = f12.i;
    (*(volatile f32 *) (u32) (sp + 120)) = f13.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 124)) = f0.f;
L_00A68FFC:;
    f13.f = (*(volatile f32 *) (u32) s0);
    f0.i = (s32) f13.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00A69014; }
L_00A69014:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { a0 = s4; goto L_00A6905C; }
L_00A6903C:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 5;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00A68FFC; }
    v0 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    f0.f = (*(volatile f32 *) (u32) (v0 + 112)); goto L_00A69090;
L_00A6905C:;
    f12.i = f20.i; v0 = func_00AA3210(a0, a1, a2, f12.f, f13.f);
    at = (s32) 0x400000U;
    at = at | 0x1;
    at = v0 < at;
    if (at == 0) goto L_00A6903C;
    at = s3 < v0;
    if (at == 0) goto L_00A6903C;
    s3 = v0;
    s1 = s2; goto L_00A6903C;
L_00A69090:;
    return f0.f;
}
