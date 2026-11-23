/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetArg(s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
void Pes6Job_SetDone(s32);
s32 func_0030F130(void);
s32 func_0032E980(s32);

s32 func_0033D730(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    a1 = 1;
    s0 = (*(volatile s32 *) (u32) (a0 + 68));
    s3 = a0; v0 = Pes6Job_GetArg(a0, a1);
    s4 = v0;
    a0 = 2; v0 = func_0032E980(a0);
    s1 = (s32) ((u32) sp + 0x60U);
    s2 = v0;
    a0 = s1;
    a1 = 9;
    a2 = (s32) ((u32) sp + 0x7cU); Pes6BitSet_Initialize(a0, a1, a2);
    v0 = s4 ^ 0x1;
    a2 = 0;
    v0 = (u64) v0 < (u64) (s64) 1;
    { s32 c_ = v0 == 0; a1 = 0; if (c_) goto L_0033D7A0; }
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = v0 ^ 0x6;
    v0 = (u64) v0 < (u64) (s64) 1;
L_0033D7A0:;
    if (v0 == 0) goto L_0033D7D4;
    v1 = (*(volatile s32 *) (u32) (s0 + 48));
    v0 = 6;
    { s32 c_ = v1 == v0; a0 = 1; if (c_) goto L_0033D7C8; }
    v0 = 7;
    if (v1 == v0) goto L_0033D7C8;
    a0 = 0;
L_0033D7C8:;
    if (a0 == 0) goto L_0033D7D4;
    a1 = 1;
L_0033D7D4:;
    if (a1 == 0) { a0 = s1; goto L_0033D7F4; }
    v1 = (*(volatile s32 *) (u32) (s0 + 44));
    v0 = 32;
    if (v1 == v0) goto L_0033D7F0;
    a2 = 1;
L_0033D7F0:;
    a0 = s1;
L_0033D7F4:;
    a1 = 2; Pes6BitSet_Write(a0, a1, a2);
    v0 = func_0030F130();
    a2 = v0;
    a0 = s1;
    a1 = 3; Pes6BitSet_Write(a0, a1, a2);
    a0 = s1;
    a1 = 4;
    a2 = s2; Pes6BitSet_Write(a0, a1, a2);
    v0 = (u64) 0 < (u64) s2;
    a0 = s1;
    s0 = v0 ^ 0x1;
    a1 = 5;
    a2 = s0; Pes6BitSet_Write(a0, a1, a2);
    a0 = s1;
    a1 = 6;
    a2 = s2; Pes6BitSet_Write(a0, a1, a2);
    a2 = s0;
    a0 = s1;
    a1 = 7; Pes6BitSet_Write(a0, a1, a2);
    a2 = s2;
    a0 = s1;
    a1 = 8; Pes6BitSet_Write(a0, a1, a2);
    a1 = s1;
    a0 = 124;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    a0 = s3; Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
