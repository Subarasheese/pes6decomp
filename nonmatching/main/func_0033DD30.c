/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6Job_GetArg(s32, s32);
s32 Pes6Job_GetManager(void);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
void Pes6Job_SetDone(s32);
s32 func_0030E5B0(void);
void func_00313A20(s32, s32, s32);
void func_0033A610(s32, s32);

s32 func_0033DD30(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, s0 = 0, s1 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a1 = 56;
    a2 = (s32) ((u32) sp + 0x48U);
    s1 = a0;
    a0 = (s32) ((u32) sp + 0x30U); Pes6BitSet_Initialize(a0, a1, a2);
    a0 = s1;
    a1 = 0; v0 = Pes6Job_GetArg(a0, a1);
    s0 = v0 & 0xff; v0 = func_0030E5B0();
    a2 = v0 & 0xff;
    a1 = s0;
    a0 = (s32) ((u32) sp + 0x30U); func_00313A20(a0, a1, a2);
    a0 = s1;
    a1 = 0; v0 = Pes6Job_GetArg(a0, a1);
    s0 = v0; v0 = Pes6Job_GetManager();
    (*(volatile u32 *) (u32) (v0 + 4104)) = (u32) s0;
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = s1; func_0033A610(a0, a1);
    a0 = 170;
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    a0 = s1; Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
