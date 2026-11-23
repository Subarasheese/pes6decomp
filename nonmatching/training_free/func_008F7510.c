/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_002DF640(s32, s32, s32, s32);
void func_008FAA60(s32, s32, s32, s32);
void func_00C74BF0(s32, s32, s32, s32);

s32 func_008F7510(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;
    f32 acc = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3b0000U;
    v1 = 5;
    a1 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802;
    v0 = (*(volatile s32 *) (u32) (a1 + 16));
    v0 = (s32) ((u32) v0 + 0x4U);
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    v0 = hi;
    (*(volatile u32 *) (u32) (a1 + 16)) = (u32) v0; SD_call(a0);
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 3;
    a2 = 4; func_008FAA60(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    f1.f = (*(volatile f32 *) (u32) (sp + 52));
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (sp + 60));
    f3.f = (*(volatile f32 *) (u32) (v0 + 16));
    acc = f0.f + f1.f;
    f0.f = (f32) f3.i;
    f13.f = acc + f2.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f13.f;
    a0 = (*(volatile s32 *) (u32) (v0 + 32));
    f12.f = (*(volatile f32 *) (u32) (sp + 48)); func_002DF640(a0, a1, a2, a3);
    s1 = 0;
    s0 = 0;
L_008F7598:;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v1 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + 16));
    if (s1 != v0) { a1 = 6; goto L_008F75B4; }
    a1 = 7;
L_008F75B4:;
    a0 = (s32) ((u32) v1 + 0x28U); func_00C74BF0(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 5;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x8U); if (c_) goto L_008F7598; }
    v0 = 0;
    return v0;
}
