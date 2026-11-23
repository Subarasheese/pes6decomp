/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6BitSet_Lookup(s64, s64);
void Pes6BitSet_Write(s64, s64, s64);
s64 func_001888B0(void);
s64 func_001889E0(void);
s64 func_00188A30(void);
s64 func_0030F160(void);
s64 func_00311530(void);
void func_00325C80(s64, s64);
void func_00325C90(s64, s64);
void func_00325CA0(s64, s64);

void func_008F9430(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 frame[32];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    s4 = a1;
    v0 = func_00311530();
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = (s32) ((u32) sp + 0xfcU);
    a2 = (*(volatile u8 *) (u32) (s4 + 2258));
    v0 = v0 ^ 0x3;
    s2 = (u64) v0 < (u64) (s64) 1;
    v1 = (*(volatile u8 *) (u32) (s4 + 2259));
    a1 = a2 ^ 0x1;
    v0 = a2 ^ 0x2;
    s3 = (u64) a1 < (u64) (s64) 1;
    v0 = (u64) v0 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a1 = a2 ^ 0x3;
    v0 = v1 ^ 0x2;
    s7 = (u64) a1 < (u64) (s64) 1;
    fp = (u64) v0 < (u64) (s64) 1;
    a1 = s4; func_00325CA0(a0, a1);
    a0 = (s32) ((u32) sp + 0xf4U);
    a1 = s4; func_00325C90(a0, a1);
    a2 = (*(volatile s32 *) (u32) (sp + 244));
    a0 = (s32) ((u32) sp + 0xf8U);
    a1 = s4;
    v0 = a2 ^ 0x2;
    v1 = a2 ^ 0x3;
    s0 = (u64) v0 < (u64) (s64) 1;
    s1 = (u64) v1 < (u64) (s64) 1;
    v0 = a2 ^ 0x1;
    v0 = (u64) v0 < (u64) (s64) 1;
    (*(volatile u32 *) (u32) (sp + 224)) = (u32) v0; func_00325C80(a0, a1);
    a1 = (*(volatile s32 *) (u32) (sp + 248));
    v0 = a1 ^ 0x1;
    a0 = a1 ^ 0x2;
    v0 = (u64) v0 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (u64) a0 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = a1 ^ 0x3;
    s6 = (u64) v0 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { s32 c_ = v0 != 0; v1 = (*(volatile u8 *) (u32) (s4 + 2258)); if (c_) goto L_008F951C; }
    a2 = 0; goto L_008F9568;
L_008F951C:;
    v1 = v1 & 0xff;
    v0 = 3;
    if (v1 == v0) { a2 = 1; goto L_008F9568; }
    v0 = 2;
    if (v1 == v0) goto L_008F954C;
    v0 = 1;
    if (v1 == v0) goto L_008F954C;
    a2 = 0; goto L_008F9568;
L_008F954C:;
    v0 = func_001888B0();
    if (v0 == 0) goto L_008F9564;
    a2 = 1; goto L_008F9568;
L_008F9564:;
    a2 = 0;
L_008F9568:;
    a0 = s5;
    a1 = 139; Pes6BitSet_Write(a0, a1, a2);
    a2 = (u64) 0 < (u64) s3;
    if (a2 == 0) { a0 = s5; goto L_008F9590; }
    v0 = (*(volatile u8 *) (u32) (s4 + 15));
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    a0 = s5;
L_008F9590:;
    a1 = 144; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s5; goto L_008F95B8; }
    v0 = func_00188A30();
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_008F95B8:;
    a1 = 145; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 146;
    a2 = s7; Pes6BitSet_Write(a0, a1, a2);
    v0 = func_0030F160();
    a2 = v0;
    a0 = s5;
    a1 = 147; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 144; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = v0;
    a0 = s5;
    a1 = 150; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 152;
    a2 = fp; Pes6BitSet_Write(a0, a1, a2);
    a2 = fp;
    a0 = s5;
    a1 = 155; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s5; goto L_008F9644; }
    v0 = func_00188A30();
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_008F9644:;
    a1 = 157; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 158;
    a2 = s2; Pes6BitSet_Write(a0, a1, a2);
    a2 = (u64) 0 < (u64) s7;
    if (a2 == 0) { a0 = s5; goto L_008F9678; }
    v0 = func_001889E0();
    a2 = (u64) 0 < (u64) v0;
    a0 = s5;
L_008F9678:;
    a1 = 166; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 167;
    a2 = s2; Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 174;
    a2 = s3; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 252));
    a0 = s5;
    a1 = 175;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 176;
    a2 = s0 & v0; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 179;
    a2 = s0 & v0; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 252));
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_008F96FC; }
    a2 = (u64) 0 < (u64) s3;
    a0 = s5;
L_008F96FC:;
    a1 = 182; Pes6BitSet_Write(a0, a1, a2);
    a2 = s1 & s6;
    a0 = s5;
    a1 = 183; Pes6BitSet_Write(a0, a1, a2);
    a2 = s2;
    a0 = s5;
    a1 = 186; Pes6BitSet_Write(a0, a1, a2);
    a2 = s0 & s6;
    a0 = s5;
    a1 = 188; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 191;
    a2 = s1 & v0; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 252));
    a0 = s5;
    a1 = 194;
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 195;
    a2 = v0 & s1; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 224));
    a0 = s5;
    a1 = 198; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 224));
    a0 = s5;
    a1 = 200;
    a2 = v0 & s6; Pes6BitSet_Write(a0, a1, a2);
    v0 = 1;
    return;
}
