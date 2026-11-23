/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008B2E50(s32, s32, s32, s32);
void func_008C5230(s32, s32, s32, s32, f32);
void func_008C9CB0(s32, s32);
void func_008EB4F0(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008B2F80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 v0 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    v0 = (*(volatile u8 *) (u32) a0);
    s0 = a1;
    a1 = a2;
    a2 = v0;
    a0 = (s32) ((u32) sp + 0x30U); func_008C5230(a0, a1, a2, a3, f12.f);
    a3 = (*(volatile u8 *) (u32) s1);
    a1 = s0;
    a0 = (s32) ((u32) s1 + 0x24c4U);
    a2 = (s32) ((u32) sp + 0x30U); func_008EB4F0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s1;
    a1 = (s32) ((u32) s1 + 0x946U); func_008B2E50(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0xb0cU);
    a1 = 0; func_008C9CB0(a0, a1);
    return;
}
