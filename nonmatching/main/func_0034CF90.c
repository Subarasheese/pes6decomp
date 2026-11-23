/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
s32 func_0030EA70(void);
s32 func_00333710(s32, s32);

s32 func_0034CF90(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    v0 = func_0030EA70();
    v1 = v0 < 110;
    if (v1 != 0) { v0 = 0; goto L_0034D050; }
    at = v0 < 116;
    if (at != 0) { s0 = (s32) ((u32) sp + 0x40U); goto L_0034CFD0; }
    v0 = 0;
    goto L_0034D050;
L_0034CFD0:;
    a1 = 6;
    a0 = s0;
    a2 = (s32) ((u32) sp + 0x5cU); Pes6BitSet_Initialize(a0, a1, a2);
    s1 = (*(volatile s32 *) (u32) (s2 + 72));
    v0 = 1;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    { s32 c_ = v1 == v0; a0 = (*(volatile s32 *) (u32) (s2 + 64)); if (c_) goto L_0034CFFC; }
    v0 = 0; goto L_0034D050;
L_0034CFFC:;
    a1 = 0; v0 = func_00333710(a0, a1);
    v0 = v0 ^ 0xd;
    a0 = s0;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 0; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (s1 + 8));
    a0 = s0;
    a1 = 4; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 8));
    a0 = s0;
    a1 = 5;
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    a1 = s0;
    a0 = 101;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
L_0034D050:;
    return v0;
}
