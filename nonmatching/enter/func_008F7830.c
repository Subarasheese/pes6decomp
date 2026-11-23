/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
void Pes6Job_SetDone(s32);
void Pes6Job_SetField4(s32, s32);
s32 func_00311530(void);
s32 func_00326070(s32);
s32 func_00341910(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_008F7830(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, s0 = 0, s1 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a1 = 13;
    a2 = (s32) ((u32) sp + 0x4cU);
    s1 = a0;
    s0 = (*(volatile s32 *) (u32) (a0 + 60));
    a0 = (s32) ((u32) sp + 0x30U); Pes6BitSet_Initialize(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s0 + 44));
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 2;
    v0 = v0 ^ 0x14;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    a0 = s0; v0 = func_00326070(a0);
    a2 = v0;
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 4; Pes6BitSet_Write(a0, a1, a2);
    v0 = func_00311530();
    v0 = v0 ^ 0x3;
    a0 = (s32) ((u32) sp + 0x30U);
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 5; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s0 + 15));
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 11;
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (s0 + 15));
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 12; Pes6BitSet_Write(a0, a1, a2);
    a0 = 87;
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    a0 = 1;
    a1 = 5;
    a2 = 10; v0 = func_00341910(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_008F7904;
    a0 = s1; Pes6Job_SetDone(a0);
    goto L_008F7920;
L_008F7904:;
    a1 = (s32) 0x8f0000U;
    a2 = (s32) 0x930000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0x6080U);
    a2 = (s32) ((u32) a2 + 0xffffaca8U); Pes6Job_SetField4(a0, a1);
L_008F7920:;
    v0 = 1;
    return v0;
}
