/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
void func_008C5230(s32, s32, s32, s32, f32);
void func_008EADF0(s32, s32, s32, s32);
void func_008EB260(s32, s32, s32, s32);
void func_008EB400(s32);
void func_008EB4F0(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008E9DF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s2 = a1;
    s1 = a2;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    s0 = a0;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) 0;
    a0 = (s32) ((u32) s0 + 0x4U); func_008EB400(a0);
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 2;
    a2 = s2; func_008C5230(a0, a1, a2, a3, f12.f);
    if (s1 != 0) { a3 = s2; goto L_008E9E54; }
    a0 = (s32) ((u32) s0 + 0x4U);
    a3 = s2;
    a1 = 1;
    a2 = (s32) ((u32) sp + 0x40U); func_008EB4F0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008E9EA0;
L_008E9E54:;
    a0 = (s32) ((u32) s0 + 0x4U);
    a1 = 2;
    a2 = (s32) ((u32) sp + 0x40U); func_008EB4F0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0x4U);
    a1 = 0;
    (*(volatile u8 *) (u32) s0) = (u8) 0; func_008EADF0(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffe0f8U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) s0 + 0x4U);
    a1 = v0; func_008EB260(a0, a1, a2, a3);
L_008E9EA0:;
    return;
}
