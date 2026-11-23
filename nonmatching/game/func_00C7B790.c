/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7BE0(s64, s64);
void func_001D7CE0(s64, s64);
s64 func_002F9370(s64);

void func_00C7B790(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[6];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -16608)); v0 = func_002F9370(a0);
    v1 = (s32) 0xcd0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -16568));
    v1 = (s64) ((u64) v1 << 61);
    v1 = (s64) ((u64) v1 >> 63);
    { s32 c_ = v1 != 0; s0 = v0; if (c_) goto L_00C7B80C; }
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x20U); func_001D7BE0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 36));
    v0 = (s32) 0x420c0000U;
    f0.i = (s32) v0;
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x20U);
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 36)) = f0.f; func_001D7CE0(a0, a1);
    v1 = (s32) 0xcd0000U;
    a0 = -5;
    a2 = (*(volatile u8 *) (u32) (v1 + -16568));
    a1 = (s64) ((u64) 0 + (u64) (s64) 4);
    a0 = a2 & a0;
    v1 = (s32) 0xcd0000U;
    a0 = a0 | a1;
    (*(volatile u8 *) (u32) (v1 + -16568)) = (u8) a0;
L_00C7B80C:;
    return;
}
