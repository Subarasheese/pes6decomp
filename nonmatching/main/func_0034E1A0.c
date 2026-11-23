/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Lookup(s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
s32 func_0030EA70(void);
void func_00310340(s32, s32);
s32 func_003336F0(s32);
s32 func_003414D0(s32, s32, s32, s32);

s32 func_0034E1A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s0 = a0; v0 = func_0030EA70();
    v1 = v0 < 20;
    if (v1 != 0) { v0 = 0; goto L_0034E4F0; }
    at = v0 < 35;
    if (at != 0) { a0 = (s32) ((u32) sp + 0x6fU); goto L_0034E1E0; }
    v0 = 0;
    goto L_0034E4F0;
L_0034E1E0:;
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    s2 = (*(volatile s32 *) (u32) (s0 + 64));
    a0 = (s32) ((u32) sp + 0x68U);
    s0 = (*(volatile s32 *) (u32) (s0 + 72));
    a1 = 0; func_00310340(a0, a1);
    a0 = (s32) ((u32) sp + 0x6aU);
    a1 = 1; func_00310340(a0, a1);
    s1 = (s32) ((u32) sp + 0x40U);
    a1 = 27;
    a0 = s1;
    a2 = (s32) ((u32) sp + 0x64U); Pes6BitSet_Initialize(a0, a1, a2);
    a0 = s2; v0 = func_003336F0(a0);
    a2 = v0;
    a0 = s1;
    a1 = 0; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 104));
    v0 = v0 < 3;
    a2 = v0 ^ 0x1;
    if (a2 == 0) { a0 = s1; goto L_0034E25C; }
    v0 = (*(volatile s16 *) (u32) (sp + 106));
    v0 = v0 < 3;
    a2 = v0 ^ 0x1;
    a0 = s1;
L_0034E25C:;
    a1 = 1; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s0 + 48));
    v0 = 2;
    { s32 c_ = v1 == v0; a2 = 1; if (c_) goto L_0034E2B8; }
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    { s32 c_ = v0 != a2; a1 = 0; if (c_) goto L_0034E2AC; }
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = 10;
    { s32 c_ = v1 == v0; a0 = a2; if (c_) goto L_0034E2A0; }
    v0 = 12;
    if (v1 == v0) goto L_0034E2A0;
    a0 = 0;
L_0034E2A0:;
    if (a0 == 0) goto L_0034E2AC;
    a1 = 1;
L_0034E2AC:;
    if (a1 != 0) { a0 = s1; goto L_0034E2BC; }
    a2 = 0;
L_0034E2B8:;
    a0 = s1;
L_0034E2BC:;
    a1 = 2; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = s1;
    a1 = 4;
    v0 = v0 ^ 0x6;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    a0 = s1;
    a1 = 5;
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s16 *) (u32) (sp + 104));
    a2 = 0;
    { s32 c_ = v1 == 0; a0 = 1; if (c_) goto L_0034E314; }
    v0 = (*(volatile s16 *) (u32) (sp + 106));
    if (v0 == 0) goto L_0034E314;
    a0 = 0;
L_0034E314:;
    if (a0 == 0) { a0 = s1; goto L_0034E334; }
    v0 = (*(volatile s16 *) (u32) (sp + 106));
    v0 = (s32) ((u32) v0 + (u32) v1);
    if (v0 == 0) goto L_0034E330;
    a2 = 1;
L_0034E330:;
    a0 = s1;
L_0034E334:;
    a1 = 11; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 111));
    v1 = (s32) ((u32) v0 << 1);
    v0 = v0 ^ 0x1;
    v1 = (s32) ((u32) v1 + (u32) sp);
    v0 = (s32) ((u32) v0 << 1);
    v1 = (*(volatile s16 *) (u32) (v1 + 104));
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s16 *) (u32) (v0 + 104));
    v0 = (s32) ((u32) v0 << 1);
    at = v0 < v1;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_0034E37C; }
    at = v1 < 5;
    if (at != 0) { a0 = s1; goto L_0034E380; }
    a2 = 1;
L_0034E37C:;
    a0 = s1;
L_0034E380:;
    a1 = 22; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 111));
    v1 = v0 ^ 0x1;
    v0 = (s32) ((u32) v0 << 1);
    v1 = (s32) ((u32) v1 << 1);
    a0 = (s32) ((u32) v1 + (u32) sp);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v1 = (*(volatile s16 *) (u32) (v0 + 104));
    a0 = (*(volatile s16 *) (u32) (a0 + 104));
    v0 = (s32) ((u32) a0 << 1);
    at = v1 < v0;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_0034E3C8; }
    at = a0 < 5;
    if (at != 0) { a0 = s1; goto L_0034E3CC; }
    a2 = 1;
L_0034E3C8:;
    a0 = s1;
L_0034E3CC:;
    a1 = 23; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 111));
    v1 = (s32) ((u32) v0 << 1);
    v0 = v0 ^ 0x1;
    v1 = (s32) ((u32) v1 + (u32) sp);
    v0 = (s32) ((u32) v0 << 1);
    v1 = (*(volatile s16 *) (u32) (v1 + 104));
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s16 *) (u32) (v0 + 104));
    v0 = (s32) ((u32) v0 << 1);
    at = v0 < v1;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_0034E414; }
    at = v1 < 5;
    if (at != 0) { a0 = s1; goto L_0034E418; }
    a2 = 1;
L_0034E414:;
    a0 = s1;
L_0034E418:;
    a1 = 25; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 111));
    v1 = v0 ^ 0x1;
    v0 = (s32) ((u32) v0 << 1);
    v1 = (s32) ((u32) v1 << 1);
    a0 = (s32) ((u32) v1 + (u32) sp);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v1 = (*(volatile s16 *) (u32) (v0 + 104));
    a0 = (*(volatile s16 *) (u32) (a0 + 104));
    v0 = (s32) ((u32) a0 << 1);
    at = v1 < v0;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_0034E460; }
    at = a0 < 5;
    if (at != 0) { a0 = s1; goto L_0034E464; }
    a2 = 1;
L_0034E460:;
    a0 = s1;
L_0034E464:;
    a1 = 26; Pes6BitSet_Write(a0, a1, a2);
    a0 = s1;
    a1 = 25; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0;
    a0 = s1;
    a1 = 26; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = s0 | v0;
    a0 = s1;
    a1 = 24; Pes6BitSet_Write(a0, a1, a2);
    a0 = s1;
    a1 = 22; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0;
    a0 = s1;
    a1 = 23; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = s0 | v0;
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s1; goto L_0034E4D8; }
    a0 = s1;
    a1 = 24; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = (u64) 0 < (u64) v0;
    a0 = s1;
L_0034E4D8:;
    a1 = 12; Pes6BitSet_Write(a0, a1, a2);
    a1 = s1;
    a0 = 96;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
L_0034E4F0:;
    return v0;
}
