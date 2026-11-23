/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
s32 func_0030EA70(void);
void func_00310340(s32, s32);
s32 func_003336F0(s32);
s32 func_00333710(s32, s32);
s32 func_003414D0(s32, s32, s32, s32);

s32 func_0034E510(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s0 = a0; v0 = func_0030EA70();
    v1 = v0 < 10;
    if (v1 != 0) { v0 = 0; goto L_0034E8BC; }
    at = v0 < 20;
    if (at != 0) { a0 = (s32) ((u32) sp + 0x6fU); goto L_0034E550; }
    v0 = 0;
    goto L_0034E8BC;
L_0034E550:;
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    s2 = (s32) ((u32) sp + 0x40U);
    a1 = 56;
    a0 = s2;
    a2 = (s32) ((u32) sp + 0x60U); Pes6BitSet_Initialize(a0, a1, a2);
    s1 = (*(volatile s32 *) (u32) (s0 + 72));
    a0 = (s32) ((u32) sp + 0x68U);
    s0 = (*(volatile s32 *) (u32) (s0 + 64));
    a1 = 0; func_00310340(a0, a1);
    a0 = (s32) ((u32) sp + 0x6aU);
    a1 = 1; func_00310340(a0, a1);
    a1 = (*(volatile u8 *) (u32) (sp + 111));
    a0 = s0; v0 = func_00333710(a0, a1);
    a0 = s0;
    s0 = v0; v0 = func_003336F0(a0);
    a2 = v0;
    a0 = s2;
    a1 = 2; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 111));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 64));
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 != 0) goto L_0034E5E4;
    v0 = (*(volatile s32 *) (u32) (s1 + 20));
    v0 = v0 ^ 0x5;
    a2 = (u64) v0 < (u64) (s64) 1;
L_0034E5E4:;
    if (a2 == 0) { a0 = s2; goto L_0034E608; }
    v0 = (*(volatile s16 *) (u32) (sp + 104));
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) goto L_0034E604;
    v0 = (*(volatile s16 *) (u32) (sp + 106));
    a2 = (u64) 0 < (u64) v0;
L_0034E604:;
    a0 = s2;
L_0034E608:;
    a1 = 3; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 111));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 64));
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s2; goto L_0034E640; }
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = v0 ^ 0x6;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s2;
L_0034E640:;
    a1 = 5; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 20));
    a0 = s2;
    a1 = 6;
    v0 = v0 ^ 0x5;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s1 + 48));
    v0 = 2;
    { s32 c_ = v1 == v0; a2 = 1; if (c_) goto L_0034E6B4; }
    v0 = (*(volatile s32 *) (u32) (s1 + 20));
    { s32 c_ = v0 != a2; a1 = 0; if (c_) goto L_0034E6A8; }
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = 10;
    { s32 c_ = v1 == v0; a0 = a2; if (c_) goto L_0034E69C; }
    v0 = 12;
    if (v1 == v0) goto L_0034E69C;
    a0 = 0;
L_0034E69C:;
    if (a0 == 0) goto L_0034E6A8;
    a1 = 1;
L_0034E6A8:;
    if (a1 != 0) { a0 = s2; goto L_0034E6B8; }
    a2 = 0;
L_0034E6B4:;
    a0 = s2;
L_0034E6B8:;
    a1 = 9; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s16 *) (u32) (sp + 104));
    a0 = s2;
    v0 = (*(volatile s16 *) (u32) (sp + 106));
    a1 = 13;
    v0 = (s32) ((u32) v1 + (u32) v0);
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s16 *) (u32) (sp + 104));
    v0 = (*(volatile s16 *) (u32) (sp + 106));
    { s32 c_ = v1 != v0; a2 = 0; if (c_) goto L_0034E6FC; }
    if (v1 == 0) { a0 = s2; goto L_0034E700; }
    a2 = 1;
L_0034E6FC:;
    a0 = s2;
L_0034E700:;
    a1 = 20; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 104));
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1;
    if (a2 != 0) { a0 = s2; goto L_0034E72C; }
    v0 = (*(volatile s16 *) (u32) (sp + 106));
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1;
    a0 = s2;
L_0034E72C:;
    a1 = 28; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 111));
    a0 = s2;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a2 = (*(volatile s16 *) (u32) (v0 + 104));
    a1 = 31; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 111));
    a0 = s2;
    a1 = 32;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s16 *) (u32) (v0 + 104));
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 111));
    a0 = s2;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a2 = (*(volatile s16 *) (u32) (v0 + 104));
    a1 = 34; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 111));
    a0 = s2;
    a1 = 35;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s16 *) (u32) (v0 + 104));
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    a0 = (*(volatile s16 *) (u32) (sp + 106));
    v1 = (*(volatile s16 *) (u32) (sp + 104));
    v0 = (s32) ((u32) v1 - (u32) a0);
    { s32 c_ = v0 <= 0; a2 = 0; if (c_) goto L_0034E7D0; }
    goto L_0034E7D4;
L_0034E7D0:;
    v0 = (s32) ((u32) 0 - (u32) v0);
L_0034E7D4:;
    if (v0 <= 0) { a0 = s2; goto L_0034E7F8; }
    at = a0 < v1;
    if (at == 0) { a0 = v1; goto L_0034E7E8; }
L_0034E7E8:;
    if (a0 == 0) goto L_0034E7F4;
    a2 = 1;
L_0034E7F4:;
    a0 = s2;
L_0034E7F8:;
    a1 = 37; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 111));
    a0 = s2;
    a1 = 44;
    v1 = (s32) ((u32) v0 << 1);
    v0 = v0 ^ 0x1;
    v1 = (s32) ((u32) v1 + (u32) sp);
    v0 = (s32) ((u32) v0 << 1);
    v1 = (*(volatile s16 *) (u32) (v1 + 104));
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s16 *) (u32) (v0 + 104));
    a2 = v0 < v1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 111));
    a0 = s2;
    a1 = 45;
    v1 = (s32) ((u32) v0 << 1);
    v0 = v0 ^ 0x1;
    v1 = (s32) ((u32) v1 + (u32) sp);
    v0 = (s32) ((u32) v0 << 1);
    v1 = (*(volatile s16 *) (u32) (v1 + 104));
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s16 *) (u32) (v0 + 104));
    a2 = v1 < v0; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x10;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 != 0) { a0 = s2; goto L_0034E87C; }
    v0 = s0 ^ 0xa;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s2;
L_0034E87C:;
    a1 = 46; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x10;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 47; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0xa;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 52; Pes6BitSet_Write(a0, a1, a2);
    a1 = s2;
    a0 = 95;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
L_0034E8BC:;
    return v0;
}
