/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6OptionData_GetBlock304(void);
void func_001B8DC0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001CDA50(s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023F510(s32, s32, s32, s32);
void func_002F3A00(s32);
void func_002F3BF0(s32, s32);
void func_002F4980(s32, s32, s32, s32);
s32 func_002F4E90(s32, s32, s32, s32);
s32 func_008B3310(s32, s32, s32, s32);
s32 func_008B33C0(s32, s32, s32, s32);

void func_00939A10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    s64 frame[38];
    s32 sp = (s32) (u32) frame;

    v0 = 240;
    v1 = (s32) ((u32) sp + 0x40U);
    if (v1 == 0) goto L_00939A4C;
L_00939A30:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_00939A30;
L_00939A4C:;
    v0 = (s32) 0x960000U;
    v1 = (s32) 0x960000U;
    s2 = (*(volatile s32 *) (u32) (v0 + -9024));
    s1 = (*(volatile s32 *) (u32) (v1 + -9020));
    v0 = (s32) 0x960000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -9016));
    a0 = 1; v0 = func_001CDA50(a0);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0xffffd900U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B33C0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -18552)) = (u32) v0;
    a0 = v0;
    a1 = 0;
    a2 = 0;
    a3 = 2;
    a4 = 0;
    a5 = 1; v0 = func_008B3310(a0, a1, a2, a3);
    a0 = 23;
    (*(volatile u32 *) (u32) (gp + -18556)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) s2;
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) s1;
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) s0; v0 = func_002F4E90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -18572)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_002F3BF0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -18572));
    a1 = (s32) ((u32) sp + 0x40U); func_002F4980(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18572)); func_002F3A00(a0);
    a0 = 31; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    func_001B8DC0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 6; func_0023F510(a0, a1, a2, a3);
    v0 = Pes6OptionData_GetBlock304();
    v1 = (*(volatile s16 *) (u32) (v0 + 16));
    (*(volatile u16 *) (u32) (gp + -18560)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (v0 + 18));
    (*(volatile u16 *) (u32) (gp + -18564)) = (u16) v1;
    return;
}
