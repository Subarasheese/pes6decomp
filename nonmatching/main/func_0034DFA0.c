/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s64, s64, s64);
void Pes6BitSet_Write(s64, s64, s64);
s64 Pes6Job_SendMessage(s64, s64, s64, s64);
s64 func_0030DAF0(s64);
s64 func_0030EA70(void);
void func_00310340(s64, s64);
s64 func_003336F0(s64);
s64 func_00333740(s64, s64);
s64 func_003414D0(s64, s64, s64, s64);

s64 func_0034DFA0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    s0 = a0; v0 = func_0030EA70();
    v1 = v0 < 35;
    if (v1 != 0) { v0 = 0; goto L_0034E184; }
    at = v0 < 45;
    if (at != 0) { s2 = (*(volatile s32 *) (u32) (s0 + 64)); goto L_0034DFE4; }
    v0 = 0;
    goto L_0034E184;
L_0034DFE4:;
    a0 = (s32) ((u32) sp + 0x78U);
    a1 = 0; func_00310340(a0, a1);
    a0 = (s32) ((u32) sp + 0x7aU);
    a1 = 1; func_00310340(a0, a1);
    a0 = (s32) ((u32) sp + 0x7fU);
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (sp + 127));
    a0 = s2; v0 = func_00333740(a0, a1);
    s0 = v0;
    a0 = 0; v0 = func_0030DAF0(a0);
    s1 = (s64) ((u64) v0 << 48);
    a0 = 1;
    s1 = s1 >> 48; v0 = func_0030DAF0(a0);
    v0 = (s64) ((u64) v0 << 48);
    a0 = s2;
    v0 = v0 >> 48;
    v0 = (s32) ((u32) s1 + (u32) v0);
    v0 = v0 ^ 0x1;
    s2 = (u64) v0 < (u64) (s64) 1; v0 = func_003336F0(a0);
    s3 = (s32) ((u32) sp + 0x50U);
    s1 = v0;
    a0 = s3;
    a1 = 27;
    a2 = (s32) ((u32) sp + 0x74U); Pes6BitSet_Initialize(a0, a1, a2);
    a0 = s3;
    a1 = 1;
    a2 = s1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 127));
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v1 = (*(volatile s16 *) (u32) (v0 + 120));
    v0 = (s32) ((u32) v1 << 1);
    at = v0 < v1;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_0034E0A8; }
    v0 = v1 < 6;
    if (v0 != 0) { a0 = s3; goto L_0034E0AC; }
    a2 = 1;
L_0034E0A8:;
    a0 = s3;
L_0034E0AC:;
    a1 = 2; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 120));
    a2 = v0 < 4;
    if (a2 == 0) { a0 = s3; goto L_0034E0D0; }
    v0 = (*(volatile s16 *) (u32) (sp + 122));
    a2 = v0 < 4;
    a0 = s3;
L_0034E0D0:;
    a1 = 5; Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 11;
    a2 = s2; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x10;
    a0 = s3;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 16; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0xa;
    a0 = s3;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 17; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x10;
    a0 = s3;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 19; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0xa;
    a0 = s3;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 20; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 < 17;
    a2 = v0 ^ 0x1;
    if (a2 != 0) { a0 = s3; goto L_0034E150; }
    a2 = s0 < 10;
    a0 = s3;
L_0034E150:;
    a1 = 21; Pes6BitSet_Write(a0, a1, a2);
    a2 = (u64) 0 < (u64) s2;
    if (a2 != 0) { a0 = s3; goto L_0034E16C; }
    a2 = (u64) 0 < (u64) s1;
    a0 = s3;
L_0034E16C:;
    a1 = 0; Pes6BitSet_Write(a0, a1, a2);
    a1 = s3;
    a0 = 97;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
L_0034E184:;
    return v0;
}
