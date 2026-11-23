/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0017DEF0(s32, s32, s32, s32);
void func_0017DF20(s32, s32, s32);
void func_0017DF60(s32, s32, s32);

void func_001AFC20(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v1 = (*(volatile s32 *) (u32) (a0 + 20));
    s0 = (*(volatile s32 *) (u32) (a0 + 16));
    { s32 c_ = v1 == 0; s1 = a0; if (c_) goto L_001AFD04; }
    v1 = (*(volatile u8 *) (u32) s1);
    v0 = (s32) 0x520000U;
    v0 = (s32) ((u32) v0 + 0x2350U);
    a0 = s0;
    a1 = 104;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 102));
    a2 = (s32) ((u32) v0 + 0xfb9U); func_0017DF60(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) s1);
    v0 = (s32) 0x520000U;
    v0 = (s32) ((u32) v0 + 0x2350U);
    a0 = s0;
    a1 = 0;
    a2 = 104;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 102));
    a3 = (s32) ((u32) v0 + 0xfa0U); func_0017DEF0(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) s1);
    v0 = (s32) 0x520000U;
    v0 = (s32) ((u32) v0 + 0x2350U);
    a0 = s0;
    a1 = 104;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 102));
    a2 = (s32) ((u32) v0 + 0xfb9U); func_0017DF20(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) s1);
    v0 = (s32) 0x520000U;
    v0 = (s32) ((u32) v0 + 0x2350U);
    a0 = s0;
    a1 = 123;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 104));
    a2 = (s32) ((u32) v0 + 0xfa5U); func_0017DF60(a0, a1, a2);
    a0 = s0;
    a1 = 1050;
    a2 = 1051; func_0017DF20(a0, a1, a2);
L_001AFD04:;
    return;
}
