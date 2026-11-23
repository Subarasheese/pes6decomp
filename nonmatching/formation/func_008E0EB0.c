/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008C5230(s32, s32, s32, s32, f32);
void func_008D80C0(s32);
void func_008D81C0(s32, s32, s32, s32);
void func_008D8210(s32, s32, s32, s32, s32);
void func_008E1420(s32, s32, s32, s32);
void func_008E14C0(s32, s32, s32, s32);
void func_008E1660(s32);
void func_008E16C0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008E1760(s32, s32, s32, s32);
void func_008E1E50(s32);
void func_008E1EF0(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008E0EB0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    s0 = a2;
    a0 = (s32) ((u32) s2 + 0x18U); func_008E1EF0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s2 + 0xd4U); func_008E16C0(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) 0;
    a0 = (s32) ((u32) s2 + 0x18U);
    (*(volatile u8 *) (u32) (s2 + 2)) = (u8) 0; func_008E1E50(a0);
    a0 = (s32) ((u32) s2 + 0xd4U); func_008E1660(a0);
    a0 = (s32) ((u32) s2 + 0xd4U); func_008E16C0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s2 + 0x13cU); func_008D81C0(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (s2 + 3)) = (u8) 0;
    v0 = 2;
    (*(volatile u8 *) (u32) (s2 + 8)) = (u8) v0;
    a0 = (s32) ((u32) s2 + 0x13cU); func_008D80C0(a0);
    a0 = (s32) ((u32) s2 + 0xd4U); func_008E1660(a0);
    (*(volatile u8 *) (u32) (s2 + 3)) = (u8) 0;
    v0 = 2;
    (*(volatile u8 *) (u32) (s2 + 8)) = (u8) v0;
    a0 = (s32) ((u32) s2 + 0x13cU); func_008D80C0(a0);
    a0 = (s32) ((u32) s2 + 0xd4U); func_008E1660(a0);
    a2 = (*(volatile u8 *) (u32) s2);
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 4; func_008C5230(a0, a1, a2, a3, f12.f);
    a3 = (*(volatile u8 *) (u32) s2);
    a4 = s1;
    a0 = (s32) ((u32) s2 + 0x13cU);
    a1 = 1;
    a2 = (s32) ((u32) sp + 0x40U); func_008D8210(a0, a1, a2, a3, a4);
    a2 = (*(volatile u8 *) (u32) s2);
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 3; func_008C5230(a0, a1, a2, a3, f12.f);
    a3 = (*(volatile u8 *) (u32) s2);
    a0 = (s32) ((u32) s2 + 0xd4U);
    a1 = 1;
    a2 = (s32) ((u32) sp + 0x40U); func_008E1760(a0, a1, a2, a3);
    a1 = s0;
    a0 = (s32) ((u32) s2 + 0xd4U); func_008E14C0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0xd4U);
    a1 = 1; func_008E1420(a0, a1, a2, a3);
    return;
}
