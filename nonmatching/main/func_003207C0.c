/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Job_CopyPayloadOut(s32, s32, s32);
s32 Pes6Job_Create(s32, s32, s32);
void Pes6Job_SetArg(s32, s32, s32);
void Pes6Job_SetField4(s32, s32);
void Pes6Job_SetPayloadWord(s32, s32, s32);
s32 func_0030EEF0(s32, s32, s32, s32);
s32 func_0030EF30(s32, s32, s32, s32);
void func_00333620(s32, s32);
void func_003386D0(s32, s32);
void func_00342250(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00356E00(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_003207C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, s0 = 0, s1 = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    a1 = (s32) ((u32) sp + 0x38U);
    a2 = (s32) ((u32) sp + 0x3cU);
    s1 = a0;
    a0 = (s32) ((u32) s1 + 0x38U); v0 = func_00356E00(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_00320844;
    a0 = (*(volatile s32 *) (u32) (sp + 56));
    a3 = (s32) 0x3e0000U;
    a1 = (*(volatile s32 *) (u32) (sp + 60));
    a2 = (*(volatile s32 *) (u32) (s1 + 8));
    a3 = (s32) ((u32) a3 + 0x15c8U); v0 = Pes6Job_Create(a0, a1, a2);
    s0 = v0;
    a1 = s1;
    a0 = s0; Pes6Job_CopyPayloadOut(a0, a1, a2);
    a0 = s0;
    a1 = (s32) ((u32) s1 + 0x38U);
    a2 = 3; Pes6Job_SetPayloadWord(a0, a1, a2);
    a0 = s1;
    a1 = 0;
    a2 = 5; Pes6Job_SetArg(a0, a1, a2);
    a1 = 1;
    a0 = s1;
    a2 = a1; Pes6Job_SetArg(a0, a1, a2);
L_00320844:;
    v0 = func_0030EF30(a0, a1, a2, a3);
    s0 = v0; v0 = func_0030EEF0(a0, a1, a2, a3);
    if (v0 != 0) { v0 = 0; goto L_003208C0; }
    if (s0 != 0) goto L_003208BC;
    a0 = 3;
    a1 = 0; func_00333620(a0, a1);
    a0 = 6;
    a1 = 0; func_00333620(a0, a1);
    a0 = 5;
    a1 = 0; func_00333620(a0, a1);
    (*(volatile u32 *) (u32) (s1 + 56)) = (u32) 0; func_00342250(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 28;
    a1 = 120; func_003386D0(a0, a1);
    a1 = (s32) 0x320000U;
    a2 = (s32) 0x3e0000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0x8e0U);
    a2 = (s32) ((u32) a2 + 0x15c8U); Pes6Job_SetField4(a0, a1);
    v0 = 1; goto L_003208C0;
L_003208BC:;
    v0 = 0;
L_003208C0:;
    return v0;
}
