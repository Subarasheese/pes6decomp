/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6Job_GetArg(s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
void Pes6Job_SetDone(s32);
s32 func_0030E5B0(void);
void func_00313A20(s32, s32, s32);
void func_0033AEB0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0033B850(s32, s32);
void func_0033BAC0(s32, s32);
void func_0033BCC0(s32, s32);

s32 func_0033DDD0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, s0 = 0, s1 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    a1 = 447;
    a2 = (s32) ((u32) sp + 0x30U);
    s1 = a0;
    a0 = (s32) ((u32) sp + 0x70U); Pes6BitSet_Initialize(a0, a1, a2);
    a0 = s1;
    a1 = 0; v0 = Pes6Job_GetArg(a0, a1);
    s0 = v0 & 0xff; v0 = func_0030E5B0();
    a2 = v0 & 0xff;
    a1 = s0;
    a0 = (s32) ((u32) sp + 0x70U); func_00313A20(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x70U);
    a1 = s1; func_0033BCC0(a0, a1);
    a0 = (s32) ((u32) sp + 0x70U);
    a1 = s1; func_0033BAC0(a0, a1);
    a0 = (s32) ((u32) sp + 0x70U);
    a1 = s1; func_0033B850(a0, a1);
    a0 = (s32) ((u32) sp + 0x70U);
    a1 = s1; func_0033AEB0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 185;
    a1 = (s32) ((u32) sp + 0x70U);
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    a0 = s1; Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
