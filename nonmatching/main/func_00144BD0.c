/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6DmaQueue_Send(s64, s64, s64, s64);
void Pes6PacketStream_AppendWord(s64, s64);
void func_001034D0(s64, s64);
s64 func_001034E0(s64);
void func_00103538(s64, s64);
void func_00103698(s64, s64);

void func_00144BD0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    v0 = (*(volatile s32 *) (u32) (gp + -23372));
    if (v0 != 0) goto L_00144C6C;
    v0 = (s32) 0x500000U;
    s0 = (s32) ((u32) sp + 0x30U);
    v0 = (s32) ((u32) v0 + 0xf00U);
    a0 = s0;
    v1 = (s64) ((u64) v0 << 36);
    v1 = (s64) ((u64) v1 >> 36);
    v0 = (s32) 0x20000000U;
    a1 = v1 | v0; func_001034D0(a0, a1);
    a0 = s0;
    a1 = 0; func_00103538(a0, a1);
    a0 = s0;
    a1 = (s32) 0x13000000U; Pes6PacketStream_AppendWord(a0, a1);
    a0 = s0;
    a1 = 0; Pes6PacketStream_AppendWord(a0, a1);
    s1 = 0;
L_00144C34:;
    a0 = s0;
    a1 = 0; Pes6PacketStream_AppendWord(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 16;
    if (v0 != 0) goto L_00144C34;
    a0 = s0;
    a1 = 0; func_00103698(a0, a1);
    a0 = s0; v0 = func_001034E0(a0);
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -23372)) = (u32) v0;
L_00144C6C:;
    a0 = 1;
    a2 = (s32) 0x500000U;
    a2 = (s32) ((u32) a2 + 0xf00U);
    a1 = a0;
    a3 = 0; Pes6DmaQueue_Send(a0, a1, a2, a3);
    return;
}
