/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00220830(s32);
void func_008C5230(s32, s32, s32, s32, f32);
void func_008DFBE0(s32, s32);
void func_008DFD80(s32);
void func_008DFE50(s32, s32, s32, s32, f32);

void func_008E0310(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    (*(volatile u8 *) (u32) (a0 + 80)) = (u8) 0;
    s0 = a2;
    (*(volatile u8 *) (u32) (a0 + 81)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 82)) = (u8) 0; func_008DFD80(a0);
    a0 = s1;
    (*(volatile u8 *) (u32) (s2 + 80)) = (u8) s1; v0 = func_00220830(a0);
    v0 = (u64) 0 < (u64) v0;
    a0 = (s32) ((u32) sp + 0x40U);
    v0 = v0 ^ 0x1;
    a1 = 0;
    (*(volatile u8 *) (u32) (s2 + 82)) = (u8) v0;
    a2 = s1; func_008C5230(a0, a1, a2, a3, f12.f);
    a2 = s1;
    a3 = s0;
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x40U); func_008DFE50(a0, a1, a2, a3, f12.f);
    a1 = (*(volatile u8 *) (u32) (s2 + 82));
    a0 = s2; func_008DFBE0(a0, a1);
    return;
}
