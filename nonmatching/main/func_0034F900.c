/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6BitSet_Initialize(s64, s64, s64);
s64 Pes6BitSet_Write(s64, s64, s64);
s64 Pes6Job_SendMessage(s64, s64, s64, s64, s64, s64, s64);
s64 func_0030DAF0(s64);
s64 func_00326070(s64);
s64 func_003336F0(s64);
s64 func_00333740(s64, s64);
s64 func_003414D0(s64, s64, s64, s64);

s64 func_0034F900(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 frame[26];
    s64 sp = (s32) (u32) frame;

    a1 = 21;
    a2 = (s32) ((u32) sp + 0xc8U);
    s5 = (s32) ((u32) sp + 0xb0U);
    s0 = a0;
    a0 = s5; v0 = Pes6BitSet_Initialize(a0, a1, a2);
    s2 = (*(volatile s32 *) (u32) (s0 + 72));
    s4 = (*(volatile s32 *) (u32) (s0 + 64));
    s3 = (*(volatile s32 *) (u32) (s0 + 68));
    a0 = s2; v0 = func_00326070(a0);
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0xcfU); goto L_0034F968; }
    v0 = 0; goto L_0034FC5C;
L_0034F968:;
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    a0 = 0; v0 = func_0030DAF0(a0);
    fp = (s64) ((u64) v0 << 48);
    a0 = 1;
    fp = fp >> 48; v0 = func_0030DAF0(a0);
    v0 = (s64) ((u64) v0 << 48);
    a1 = (*(volatile u8 *) (u32) (sp + 207));
    v0 = v0 >> 48;
    a0 = s4;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_00333740(a0, a1);
    s0 = (*(volatile s32 *) (u32) (s0 + 48));
    s1 = v0;
    a0 = s4; v0 = func_003336F0(a0);
    v1 = (*(volatile s32 *) (u32) (s2 + 44));
    s6 = v0;
    v0 = 40;
    { s32 c_ = v1 == v0; s7 = 1; if (c_) goto L_0034F9D8; }
    v0 = 41;
    if (v1 == v0) { v0 = s0 < 10; goto L_0034F9DC; }
    s7 = 0;
L_0034F9D8:;
    v0 = s0 < 10;
L_0034F9DC:;
    a2 = v0 ^ 0x1;
    if (a2 == 0) goto L_0034F9EC;
    a2 = s0 < 35;
L_0034F9EC:;
    if (a2 == 0) goto L_0034F9F8;
    a2 = (u64) 0 < (u64) s6;
L_0034F9F8:;
    if (a2 == 0) goto L_0034FA0C;
    v0 = (*(volatile s32 *) (u32) (s2 + 48));
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
L_0034FA0C:;
    if (a2 == 0) { a0 = s5; goto L_0034FA1C; }
    a2 = (u64) 0 < (u64) s7;
    a0 = s5;
L_0034FA1C:;
    a1 = 2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s0 < 45;
    if (a2 == 0) goto L_0034FA38;
    v0 = s0 < 35;
    a2 = v0 ^ 0x1;
L_0034FA38:;
    if (a2 == 0) { a0 = s5; goto L_0034FA48; }
    a2 = (u64) 0 < (u64) s6;
    a0 = s5;
L_0034FA48:;
    a1 = 3; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x10;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) goto L_0034FA74;
    v0 = (*(volatile u8 *) (u32) (sp + 207));
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = (*(volatile u8 *) (u32) (v0 + 56));
    a2 = v0 < 45;
L_0034FA74:;
    if (a2 == 0) goto L_0034FA90;
    v0 = s0 < 65;
    a2 = v0 ^ 0x1;
    if (a2 == 0) goto L_0034FA90;
    a2 = s0 < 76;
L_0034FA90:;
    if (a2 == 0) { a0 = s5; goto L_0034FAA0; }
    a2 = (u64) 0 < (u64) s7;
    a0 = s5;
L_0034FAA0:;
    a1 = 4; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s64) ((u64) fp << 48);
    v1 = v1 >> 48;
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_0034FADC; }
    v0 = s1 ^ 0x10;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s5;
L_0034FADC:;
    a1 = 8; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0xd;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_0034FB00; }
    v0 = (u64) 0 < (u64) s6;
    a2 = v0 ^ 0x1;
    a0 = s5;
L_0034FB00:;
    a1 = 9; v0 = Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s3 + 5));
    a0 = s5;
    v0 = (*(volatile u8 *) (u32) (sp + 207));
    a1 = 10;
    a2 = v1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 207));
    a0 = s5;
    v1 = (*(volatile u8 *) (u32) (s3 + 5));
    a1 = 11;
    v0 = v0 ^ 0x1;
    a2 = v1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s4 + 55));
    v0 = v0 ^ 0xff;
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s5; goto L_0034FB74; }
    v0 = s1 ^ 0x10;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 != 0) goto L_0034FB70;
    v0 = s1 ^ 0xa;
    a2 = (u64) v0 < (u64) (s64) 1;
L_0034FB70:;
    a0 = s5;
L_0034FB74:;
    a1 = 12; v0 = Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s4 + 55));
    v0 = (*(volatile u8 *) (u32) (sp + 207));
    a2 = v1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_0034FBA0; }
    v0 = s1 ^ 0x10;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s5;
L_0034FBA0:;
    a1 = 13; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 207));
    v1 = (*(volatile u8 *) (u32) (s4 + 55));
    v0 = v0 ^ 0x1;
    a2 = v1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_0034FBD0; }
    v0 = s1 ^ 0xa;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s5;
L_0034FBD0:;
    a1 = 14; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 < 14;
    a0 = s5;
    a2 = v0 ^ 0x1;
    a1 = 15; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x10;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 16; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x11;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 17; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x12;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 18; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 < 19;
    a0 = s5;
    a2 = v0 ^ 0x1;
    a1 = 19; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s1 < 13;
    a0 = s5;
    a1 = 20; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s5;
    a0 = 94;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
L_0034FC5C:;
    return v0;
}
