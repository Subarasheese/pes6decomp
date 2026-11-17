/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001838E0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;
    s64 frame[2];
    s32 sp = (s32) (u32) frame;

    f2.f = (*(volatile f32 *) (u32) a1);
    a2 = (s32) ((u32) sp + 0x4U);
    f1.f = (*(volatile f32 *) (u32) (a1 + 4));
    v1 = (s32) ((u32) sp + 0x8U);
    f0.f = (*(volatile f32 *) (u32) (a1 + 8));
    v0 = (s32) ((u32) sp + 0x0U);
    (*(volatile f32 *) (u32) sp) = f2.f;
    (*(volatile f32 *) (u32) a2) = f1.f;
    (*(volatile f32 *) (u32) v1) = f0.f;
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("vmulax.xyzw ACC, $vf4, $vf8x");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmaddw.xyzw $vf8, $vf7, $vf0w");
    __asm__ volatile("sqc2 $vf8, 0(%0)" : : "r"((u32) v0) : "memory");
    v0 = (s32) ((u32) sp + 0xcU);
    f0.f = (*(volatile f32 *) (u32) v0);
    f2.i = f0.i & 0x7FFFFFFF;
    f0.f = (*(volatile f32 *) (u32) sp);
    fcc = f0.f <= f2.f;
    { s32 c_ = !fcc; (*(volatile f32 *) (u32) v0) = f2.f; if (c_) goto L_00183994; }
    f1.i = f2.i ^ (s32) 0x80000000U;
    fcc = f0.f < f1.f;
    if (fcc) goto L_00183994;
    f0.f = (*(volatile f32 *) (u32) a2);
    fcc = f0.f <= f2.f;
    if (!fcc) goto L_00183994;
    fcc = f0.f < f1.f;
    if (fcc) goto L_00183994;
    f0.f = (*(volatile f32 *) (u32) v1);
    fcc = f0.f <= f2.f;
    if (!fcc) goto L_00183994;
    fcc = f0.f < f1.f;
    if (!fcc) { v0 = 0; goto L_00183998; }
L_00183994:;
    v0 = 1;
L_00183998:;
    return v0;
}
