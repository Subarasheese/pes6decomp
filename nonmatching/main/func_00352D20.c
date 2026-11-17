/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6BitSet_Write(s64, s64, s64);
s64 Pes6MatchContext_GetHalf(void);
s64 func_0030D9F0(s64, s64);
s64 func_0030DA20(s64, s64);
s64 func_0030EFC0(s64, s64);
s64 func_003107A0(s64, s64, s64);
s64 func_00311550(s64);
s64 func_00311CD0(s64, s64, s64);
s64 func_00C228C0(s64, s64, s64, s64);

s64 func_00352D20(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    a1 = (*(volatile u8 *) (u32) (a1 + 8));
    a0 = (s32) ((u32) sp + 0x6fU); v0 = func_0030D9F0(a0, a1);
    a1 = (*(volatile u8 *) (u32) (s3 + 9));
    a0 = (s32) ((u32) sp + 0x6eU); v0 = func_0030D9F0(a0, a1);
    a1 = (*(volatile u8 *) (u32) (s3 + 5));
    a2 = (*(volatile u8 *) (u32) (s3 + 6));
    a0 = (s32) ((u32) sp + 0x6dU); v0 = func_00311CD0(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (s3 + 5)); v0 = func_00C228C0(a0, a1, a2, a3);
    s0 = (s64) ((u64) v0 << 56);
    s0 = s0 >> 56;
    v0 = 2;
    if (s0 != v0) { v1 = 255; goto L_00352E14; }
    a2 = (*(volatile u8 *) (u32) (s3 + 5));
    a0 = (s32) ((u32) sp + 0x6bU);
    a1 = 1; v0 = func_003107A0(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (sp + 107));
    v0 = (*(volatile u8 *) (u32) (s3 + 6));
    if (v1 != v0) { a2 = (*(volatile u8 *) (u32) (s3 + 5)); goto L_00352DBC; }
    a2 = (*(volatile u8 *) (u32) (s3 + 5));
    a0 = (s32) ((u32) sp + 0x6bU);
    a1 = 0; v0 = func_003107A0(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (s3 + 5));
L_00352DBC:;
    a1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (sp + 107));
    a1 = (s32) ((u32) a1 + 0x2980U);
    a0 = (s32) ((u32) sp + 0x6aU);
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a1 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 105));
    v0 = (s64) ((u64) v0 << 56);
    a1 = (s64) ((u64) v0 >> 60); v0 = func_0030D9F0(a0, a1);
    s1 = 0; goto L_00352E24;
L_00352E14:;
    v0 = 4;
    (*(volatile u8 *) (u32) (sp + 107)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 106)) = (u8) v0;
    s1 = 0;
L_00352E24:;
    s2 = 0;
    a1 = (*(volatile u8 *) (u32) (s3 + 5));
L_00352E2C:;
    v0 = (s32) 0x5a0000U;
    v0 = (s32) ((u32) v0 + 0x2020U);
    v1 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) s1 + (u32) v0);
    a1 = (*(volatile u8 *) (u32) (v0 + 28));
    a0 = (s32) ((u32) sp + 0x6cU); v0 = func_0030DA20(a0, a1);
    v1 = (*(volatile u8 *) (u32) (sp + 108));
    v0 = 3;
    if (v1 != v0) goto L_00352E70;
    s2 = (s32) ((u32) s2 + 0x1U);
L_00352E70:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 11;
    if (v0 != 0) { a1 = (*(volatile u8 *) (u32) (s3 + 5)); goto L_00352E2C; }
    v1 = (*(volatile s32 *) (u32) (s3 + 16));
    v0 = v1 & 0x3;
    { s32 c_ = v0 == 0; a2 = 0; if (c_) goto L_00352EA8; }
    v0 = v1 & 0x4;
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 == 0) { a0 = s4; goto L_00352EAC; }
    a2 = 1;
L_00352EA8:;
    a0 = s4;
L_00352EAC:;
    a1 = 10; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s3 + 16));
    a0 = s4;
    a1 = 11;
    a2 = v0 & 0x1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s3 + 5));
    a0 = 0; v0 = func_0030EFC0(a0, a1);
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    if (a2 == 0) goto L_00352EF0;
    a0 = (*(volatile u8 *) (u32) (s3 + 5)); v0 = func_00311550(a0);
    a2 = (u64) 0 < (u64) v0;
L_00352EF0:;
    if (a2 == 0) goto L_00352F0C;
    v0 = (*(volatile u8 *) (u32) (s3 + 5));
    a0 = v0 ^ 0x1; v0 = func_00311550(a0);
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1;
L_00352F0C:;
    if (a2 == 0) { a0 = s4; goto L_00352F28; }
    v0 = Pes6MatchContext_GetHalf();
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s4;
L_00352F28:;
    a1 = 12; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s3 + 16));
    a0 = s4;
    a1 = 13;
    a2 = v0 & 0x8; v0 = Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (sp + 111));
    v0 = 3;
    { s32 c_ = v1 == v0; a2 = 1; if (c_) goto L_00352F64; }
    v0 = 2;
    if (v1 == v0) { a0 = s4; goto L_00352F68; }
    a2 = 0;
L_00352F64:;
    a0 = s4;
L_00352F68:;
    a1 = 15; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s3 + 16));
    a0 = s4;
    a1 = 16;
    a2 = v0 & 0x2; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 111));
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s4; goto L_00352FA8; }
    v0 = (*(volatile u8 *) (u32) (sp + 110));
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s4;
L_00352FA8:;
    a1 = 17; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 111));
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s4; goto L_00352FD4; }
    v0 = (*(volatile u8 *) (u32) (sp + 110));
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s4;
L_00352FD4:;
    a1 = 18; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) goto L_00352FF8;
    v0 = (*(volatile u8 *) (u32) (sp + 106));
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1;
L_00352FF8:;
    if (a2 == 0) { a0 = s4; goto L_00353010; }
    v0 = (*(volatile u8 *) (u32) (sp + 111));
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s4;
L_00353010:;
    a1 = 19; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x1;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 20; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x2;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 21; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x3;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 22; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) s3);
    a0 = s4;
    a1 = 25;
    v0 = v0 < 80;
    a2 = v0 ^ 0x1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = 1;
    return v0;
}
