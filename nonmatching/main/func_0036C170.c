/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 func_00BC8BC0(s32, s32, s32, s32);
s32 func_00BC8D30(s32, s32, s32, s32);

s32 func_0036C170(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    a1 = 1;
    a2 = (s32) ((u32) sp + 0x7cU);
    s4 = a0;
    s3 = (s32) ((u32) sp + 0x60U);
    a0 = s3;
    v0 = Pes6BitSet_Initialize(a0, a1, a2);
    s2 = (*(volatile s32 *) (u32) (s4 + 60));
    s0 = (*(volatile u8 *) (u32) (s2 + 24));
    s1 = (*(volatile u8 *) (u32) (s2 + 1)); v0 = func_00BC8D30(a0, a1, a2, a3);
    if (v0 != 0) goto L_0036C1C4;
    v0 = 4; goto L_0036C200;
L_0036C1C4:;
    v0 = func_00BC8BC0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    v0 = s0 < v0;
    if (v0 != 0) { v0 = s1 & 0xff; goto L_0036C1E4; }
    v0 = 1; goto L_0036C200;
L_0036C1E4:;
    if (v0 != s0) { at = v0 < s0; goto L_0036C1F4; }
    v0 = 3; goto L_0036C200;
L_0036C1F4:;
    if (at == 0) { v0 = 4; goto L_0036C200; }
    v0 = 2;
L_0036C200:;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s3; goto L_0036C220; }
    v0 = (*(volatile u8 *) (u32) (s2 + 2));
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s3;
L_0036C220:;
    a1 = 0; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s3;
    a0 = 184;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = s4; v0 = Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
