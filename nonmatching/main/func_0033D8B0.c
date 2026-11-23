/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
s32 func_0030F130(void);

void func_0033D8B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s3 = a2;
    s2 = a0;
    s1 = a1;
    s0 = (s32) ((u32) sp + 0x50U);
    a1 = 9;
    a0 = s0;
    a2 = (s32) ((u32) sp + 0x6cU); Pes6BitSet_Initialize(a0, a1, a2);
    v0 = (u64) 0 < (u64) s3;
    a2 = 0;
    { s32 c_ = v0 == 0; a1 = 0; if (c_) goto L_0033D904; }
    v0 = (*(volatile s32 *) (u32) s2);
    v0 = v0 ^ 0x6;
    v0 = (u64) v0 < (u64) (s64) 1;
L_0033D904:;
    if (v0 == 0) goto L_0033D938;
    v1 = (*(volatile s32 *) (u32) (s2 + 48));
    v0 = 6;
    { s32 c_ = v1 == v0; a0 = 1; if (c_) goto L_0033D92C; }
    v0 = 7;
    if (v1 == v0) goto L_0033D92C;
    a0 = 0;
L_0033D92C:;
    if (a0 == 0) goto L_0033D938;
    a1 = 1;
L_0033D938:;
    if (a1 == 0) { a0 = s0; goto L_0033D958; }
    v1 = (*(volatile s32 *) (u32) (s2 + 44));
    v0 = 32;
    if (v1 == v0) goto L_0033D954;
    a2 = 1;
L_0033D954:;
    a0 = s0;
L_0033D958:;
    a1 = 2; Pes6BitSet_Write(a0, a1, a2);
    v0 = func_0030F130();
    a2 = v0;
    a0 = s0;
    a1 = 3; Pes6BitSet_Write(a0, a1, a2);
    a0 = s0;
    a1 = 4;
    a2 = s1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (u64) 0 < (u64) s1;
    a0 = s0;
    s2 = v0 ^ 0x1;
    a1 = 5;
    a2 = s2; Pes6BitSet_Write(a0, a1, a2);
    a0 = s0;
    a1 = 6;
    a2 = s1; Pes6BitSet_Write(a0, a1, a2);
    a2 = s2;
    a0 = s0;
    a1 = 7; Pes6BitSet_Write(a0, a1, a2);
    a2 = s1;
    a0 = s0;
    a1 = 8; Pes6BitSet_Write(a0, a1, a2);
    a1 = s0;
    a0 = 124;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    return;
}
