/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B0460(s32, s32);

void func_009B03C0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x46510000U;
    v1 = v1 | 0xf400;
    f0.i = (s32) v1;
    f1.f = (*(volatile f32 *) (u32) a1);
    s1 = (*(volatile s8 *) (u32) a0);
    fcc = f1.f < f0.f;
    { s32 c_ = !fcc; s0 = a0; if (c_) goto L_009B03F8; }
    (*(volatile u8 *) (u32) s0) = (u8) 0; goto L_009B0444;
L_009B03F8:;
    a0 = (s32) ((u32) sp + 0x30U); v0 = func_009B0460(a0, a1);
    v1 = 4;
    if (v0 == v1) { (*(volatile u8 *) (u32) s0) = (u8) s1; goto L_009B0444; }
    v1 = 3;
    if (v0 == v1) { (*(volatile u8 *) (u32) s0) = (u8) 0; goto L_009B0444; }
    v1 = 2;
    if (v0 == v1) { v1 = -1; goto L_009B0440; }
    v1 = 1;
    if (v0 == v1) { (*(volatile u8 *) (u32) s0) = (u8) v1; goto L_009B0444; }
    if (v0 == 0) { (*(volatile u8 *) (u32) s0) = (u8) 0; goto L_009B0444; }
    goto L_009B0448;
L_009B0440:;
    (*(volatile u8 *) (u32) s0) = (u8) v1;
L_009B0444:;
L_009B0448:;
    return;
}
