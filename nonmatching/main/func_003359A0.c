/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Lookup(s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 func_0030FD10(s32);
s32 func_00310500(s32);
s32 func_00326070(s32);
s32 func_003260A0(s32, s32);
s32 func_003260E0(s32, s32);
s32 func_003414D0(s32, s32, s32, s32);
s32 func_00341AA0(s32, s32);

s32 func_003359A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x5f0000U;
    s6 = (s32) 0x5f0000U;
    s5 = a0;
    a0 = (s32) ((u32) sp + 0x90U);
    s6 = (s32) ((u32) s6 + 0x1c80U);
    s2 = a4;
    s1 = (*(volatile s32 *) (u32) (a1 + 60));
    s4 = (*(volatile s32 *) (u32) (a1 + 76));
    s0 = (*(volatile s32 *) (u32) (v0 + 7328));
    a1 = 0; v0 = func_00341AA0(a0, a1);
    a0 = (s32) ((u32) sp + 0x94U);
    a1 = 1; v0 = func_00341AA0(a0, a1);
    a0 = (s32) ((u32) sp + 0x9fU);
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    s2 = s2 & 0xff;
    a0 = s4;
    a1 = s2; v0 = func_003260A0(a0, a1);
    s3 = v0;
    a0 = s5;
    a1 = 76; v0 = Pes6BitSet_Lookup(a0, a1);
    s7 = v0;
    a0 = s5;
    a1 = 110; v0 = Pes6BitSet_Lookup(a0, a1);
    v1 = s7 | v0;
    a0 = s5;
    v0 = (*(volatile u8 *) (u32) (s1 + 58));
    a1 = 118;
    v0 = v0 ^ 0x9;
    v0 = (u64) v0 < (u64) (s64) 1;
    a2 = v0 | v1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4; v0 = func_00326070(a0);
    a2 = v0;
    a0 = s5;
    a1 = 119; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = s2; v0 = func_003260E0(a0, a1);
    a2 = v0;
    a0 = s5;
    a1 = 120; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s3;
    a0 = s5;
    a1 = 123; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (s32) 0x5f0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7300)); v0 = func_00310500(a0);
    v0 = v0 < 81;
    a2 = v0 ^ 0x1;
    if (a2 == 0) goto L_00335AD0;
    a0 = (*(volatile u8 *) (u32) (s6 + 4)); v0 = func_0030FD10(a0);
    v0 = v0 < 184;
    a2 = v0 ^ 0x1;
L_00335AD0:;
    if (a2 == 0) { a0 = s5; goto L_00335AF4; }
    v0 = s0 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 != 0) goto L_00335AF0;
    v0 = s0 ^ 0xb;
    a2 = (u64) v0 < (u64) (s64) 1;
L_00335AF0:;
    a0 = s5;
L_00335AF4:;
    a1 = 126; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 127;
    a2 = 0; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x2;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 129; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = 1;
    return v0;
}
