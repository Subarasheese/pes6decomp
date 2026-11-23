/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7BE0(s64, s64);
void func_001D7CE0(s64, s64);
s64 func_002F9370(s64);

void func_00C6E820(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    v1 = (*(volatile s32 *) (u32) (gp + -19292));
    s0 = (s32) 0xcd0000U;
    s0 = (s32) ((u32) s0 + 0xffffbc00U);
    v1 = (s32) ((u32) v1 << 6);
    v1 = (s32) ((u32) s0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v1 + 32));
    v1 = (s64) ((u64) v1 << 61);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) goto L_00C6E8E8;
    s1 = 0;
L_00C6E860:;
    a0 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) (gp + -19292)) = (u32) s1; v0 = func_002F9370(a0);
    s2 = v0;
    a1 = (s32) ((u32) sp + 0x40U);
    a0 = s2; func_001D7BE0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 68));
    v0 = (s32) 0xc1a00000U;
    f0.i = (s32) v0;
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x40U);
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f; func_001D7CE0(a0, a1);
    v1 = (s32) 0xcd0000U;
    a3 = -5;
    a2 = (*(volatile u8 *) (u32) (v1 + -17376));
    a4 = (s64) ((u64) 0 + (u64) (s64) 4);
    a0 = (s32) 0xcd0000U;
    s1 = (s32) ((u32) s1 + 0x1U);
    s0 = (s32) ((u32) s0 + 0x40U);
    v1 = (s32) 0xcd0000U;
    a2 = a2 & a3;
    a1 = (*(volatile u8 *) (u32) (v1 + -17312));
    a2 = a2 | a4;
    (*(volatile u8 *) (u32) (a0 + -17376)) = (u8) a2;
    a0 = a1 & a3;
    v1 = (s32) 0xcd0000U;
    a1 = a0 | a4;
    a0 = s1 < 2;
    { s32 c_ = a0 != 0; (*(volatile u8 *) (u32) (v1 + -17312)) = (u8) a1; if (c_) goto L_00C6E860; }
L_00C6E8E8:;
    return;
}
