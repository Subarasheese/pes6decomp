/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6DmaQueue_Send(s64, s64, s64, s64);
void Pes6PacketStream_AppendWord(s64, s64);
void func_001034D0(s64, s64);
s64 func_001034E0(s64);
void func_00103698(s64, s64);
s64 func_001391A0(s64);
void func_0013C340(s64, s64, s64, s64);
void func_00144BC0(void);
void func_00144BD0(void);

void func_0013C290(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    s1 = a0;
    a0 = 24576; v0 = func_001391A0(a0);
    s0 = v0;
    a0 = (s32) ((u32) sp + 0x30U);
    v1 = (s64) ((u64) s0 << 36);
    v0 = (s32) 0x20000000U;
    v1 = (s64) ((u64) v1 >> 36);
    a1 = v1 | v0; func_001034D0(a0, a1);
    a1 = s1;
    a0 = (s32) ((u32) sp + 0x30U); func_0013C340(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 0; func_00103698(a0, a1);
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = (s32) 0x13000000U; Pes6PacketStream_AppendWord(a0, a1);
    a0 = (s32) ((u32) sp + 0x30U); v0 = func_001034E0(a0);
    a0 = 2;
    a1 = 1; func_00144BC0();
    a0 = 1;
    a2 = s0;
    a1 = a0;
    a3 = a0; Pes6DmaQueue_Send(a0, a1, a2, a3);
    func_00144BD0();
    a0 = 1;
    a1 = 2; func_00144BC0();
    return;
}
