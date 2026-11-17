/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_00BBB780(s64);

s64 func_00967430(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 fcc = 0;

    v0 = (s32) 0x45c00000U;
    v0 = v0 | 0xc800;
    f0.i = (s32) v0;
    v1 = (*(volatile s16 *) (u32) (a0 + 20));
    f3.f = (*(volatile f32 *) (u32) (a1 + 224));
    f1.i = (s32) v1;
    f2.f = (f32) f1.i;
    f1.f = f3.f * f2.f;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; s0 = (s64) ((u64) 0 + (u64) (s64) 1); if (c_) goto L_00967540; }
    f0.f = (*(volatile f32 *) (u32) (a0 + 224));
    f0.f = f0.f * f2.f;
    fcc = f0.f < f1.f;
    if (!fcc) goto L_00967540;
    f0.f = (*(volatile f32 *) (u32) (a1 + 232));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45620000U;
    v0 = v0 | 0x8000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00967540;
L_009674A4:;
    f0.f = (*(volatile f32 *) (u32) (a0 + 224));
    f0.f = f0.f - f3.f;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45800000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_009674CC;
    s0 = 0;
L_009674CC:;
    a3 = (*(volatile u8 *) (u32) (a0 + 18));
    a2 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (a0 + 17));
    a2 = (s32) ((u32) a2 + 0x2980U);
    a1 = 40;
    v0 = (s32) ((u32) a3 << 4);
    a0 = (s32) ((u32) v0 - (u32) a3);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a0 << 3);
    a0 = (s32) ((u32) v0 - (u32) a0);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a0 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a2 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 118));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v0 = (s32) ((u32) v0 + 0x14U);
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48; v0 = func_00BBB780(a0);
    if (v0 != 0) goto L_00967538;
    s0 = 0;
L_00967538:;
    v0 = s0; goto L_00967548;
L_00967540:;
    s0 = 0; goto L_009674A4;
L_00967548:;
    return v0;
}
