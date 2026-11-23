/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE5D0(s64, s64);
void func_001EF860(s64, s64);

void func_00C705D0(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[8];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0xcd0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -17124));
    s0 = (s32) 0xcd0000U;
    v1 = v1 & 0x1;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0xffffcf74U); if (c_) goto L_00C70658; }
    s1 = 0;
L_00C705FC:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0x30U); func_001EE5D0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 52));
    v0 = (s32) 0x420c0000U;
    f0.i = (s32) v0;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0x30U);
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f; func_001EF860(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 16;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C705FC; }
    v1 = (s32) 0xcd0000U;
    a0 = -2;
    a2 = (*(volatile u8 *) (u32) (v1 + -17124));
    a1 = (s64) ((u64) 0 + (u64) (s64) 1);
    a0 = a2 & a0;
    v1 = (s32) 0xcd0000U;
    a0 = a0 | a1;
    (*(volatile u8 *) (u32) (v1 + -17124)) = (u8) a0;
L_00C70658:;
    return;
}
