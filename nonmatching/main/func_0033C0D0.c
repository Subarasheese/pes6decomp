/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6BitSet_Write(s64, s64, s64);
s64 Pes6Job_GetArg(s64, s64);
s64 func_0030DAF0(s64);
s64 func_00320D30(s64);
s64 func_00325C20(s64);
s64 func_00325C50(s64);
s64 func_00325DA0(s64);
s64 func_00325DE0(s64);
s64 func_00325FE0(s64, s64, s64);
s64 func_00326310(s64, s64, s64, s64);
s64 func_00333600(s64);
s64 func_00333740(s64, s64);

s64 func_0033C0D0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    s64 frame[32];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    s4 = a2;
    s1 = a1;
    a0 = s1;
    a1 = 0; v0 = Pes6Job_GetArg(a0, a1);
    v0 = v0 & 0xff;
    a0 = s1;
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a1 = 2; v0 = Pes6Job_GetArg(a0, a1);
    s6 = v0;
    a0 = s1;
    a1 = 1; v0 = Pes6Job_GetArg(a0, a1);
    s3 = (*(volatile s32 *) (u32) (s1 + 68));
    s0 = v0;
    s7 = (*(volatile s32 *) (u32) (s1 + 72));
    a0 = 0;
    v0 = (*(volatile s32 *) (u32) (s3 + 44));
    s2 = (*(volatile s32 *) (u32) s3);
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_0030DAF0(a0);
    v0 = (s64) ((u64) v0 << 48);
    a0 = 1;
    v0 = v0 >> 48;
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_0030DAF0(a0);
    v0 = (s64) ((u64) v0 << 48);
    v1 = (*(volatile s32 *) (u32) (s3 + 48));
    v0 = v0 >> 48;
    a0 = (s32) ((u32) sp + 0xfcU);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a1 = s3;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s1 = v0 & 0xff;
    v0 = v1 ^ 0x2;
    a2 = s1;
    fp = (u64) v0 < (u64) (s64) 1; v0 = func_00325FE0(a0, a1, a2);
    a0 = s7;
    a1 = s1; v0 = func_00333740(a0, a1);
    a0 = s3; v0 = func_00320D30(a0);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a2 = s6 < 13;
    a0 = s5;
    a1 = 86; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = (u64) 0 < (u64) fp;
    if (a2 == 0) goto L_0033C1D8;
    v0 = s2 ^ 0x6;
    a2 = (u64) v0 < (u64) (s64) 1;
L_0033C1D8:;
    if (a2 == 0) { a0 = s5; goto L_0033C1F4; }
    a0 = s3; v0 = func_00325DE0(a0);
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    a0 = s5;
L_0033C1F4:;
    a1 = 87; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s2; v0 = func_00325C50(a0);
    a2 = v0;
    a0 = s5;
    a1 = 88; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s1 ^ 0;
    a0 = s5;
    a2 = (u64) a2 < (u64) (s64) 1;
    a1 = 89; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x1;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 90; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s3 + 48));
    v0 = v0 ^ 0x6;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_0033C25C; }
    v0 = s2 ^ 0x6;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s5;
L_0033C25C:;
    a1 = 91; v0 = Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s3);
    v0 = 11;
    { s32 c_ = v1 == v0; a2 = 1; if (c_) goto L_0033C284; }
    v0 = 12;
    if (v1 == v0) { a0 = s5; goto L_0033C288; }
    a2 = 0;
L_0033C284:;
    a0 = s5;
L_0033C288:;
    a1 = 92; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s3 + 20));
    a0 = s5;
    a1 = 93;
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s3 + 20));
    a0 = s5;
    a1 = 94;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s3 + 20));
    a0 = s5;
    a1 = 95;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s3 + 20));
    a0 = s5;
    a1 = 96;
    v0 = v0 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s3; v0 = func_00325DA0(a0);
    a2 = (u64) 0 < (u64) v0;
    if (a2 != 0) { a0 = s5; goto L_0033C314; }
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = v0 ^ 0xa;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s5;
L_0033C314:;
    a1 = 98; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s3 + 20));
    a0 = s5;
    a1 = 99;
    v0 = v0 ^ 0x8;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x7;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) goto L_0033C348;
    a2 = (u64) 0 < (u64) fp;
L_0033C348:;
    if (a2 == 0) { a0 = s5; goto L_0033C360; }
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    a0 = s5;
L_0033C360:;
    a1 = 100; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x7;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) goto L_0033C390;
    v0 = s0 ^ 0x6;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 != 0) goto L_0033C390;
    v0 = s0 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1;
L_0033C390:;
    if (a2 == 0) { a0 = s5; goto L_0033C3A8; }
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    a0 = s5;
L_0033C3A8:;
    a1 = 101; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x3;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 102; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x4;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 103; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s2; v0 = func_00325C20(a0);
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) goto L_0033C3F4;
    v0 = s4 < 13;
    a2 = v0 ^ 0x1;
L_0033C3F4:;
    if (a2 == 0) { a0 = s5; goto L_0033C410; }
    a0 = 19; v0 = func_00333600(a0);
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    a0 = s5;
L_0033C410:;
    a1 = 104; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 252));
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_0033C434; }
    a2 = s4 < 13;
    a0 = s5;
L_0033C434:;
    a1 = 105; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 252));
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_0033C45C; }
    v0 = s4 < 14;
    a2 = v0 ^ 0x1;
    a0 = s5;
L_0033C45C:;
    a1 = 106; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 252));
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_0033C480; }
    a2 = s4 < 13;
    a0 = s5;
L_0033C480:;
    a1 = 107; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 252));
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_0033C4A8; }
    v0 = s4 ^ 0xd;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s5;
L_0033C4A8:;
    a1 = 108; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 252));
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_0033C4CC; }
    a2 = s4 < 13;
    a0 = s5;
L_0033C4CC:;
    a1 = 109; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 252));
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s5; goto L_0033C4F4; }
    v0 = s4 ^ 0xd;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s5;
L_0033C4F4:;
    a1 = 110; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x6;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 112; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s7 + 55));
    a0 = s5;
    a1 = 113;
    v0 = v0 ^ 0x1;
    a2 = s1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 192) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = 114;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s6 ^ 0xa;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 115; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s6 < 9;
    a0 = s5;
    a1 = 116; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s6 ^ 0x8;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 117; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = 19; v0 = func_00333600(a0);
    a2 = v0;
    a0 = s5;
    a1 = 119; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x12;
    a0 = s5;
    a2 = (u64) 0 < (u64) v0;
    a1 = 120; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x12;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 121; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    s1 = 0; v0 = func_00326310(a0, a1, a2, a3);
    if (v0 == 0) { a0 = s5; goto L_0033C634; }
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = 1;
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v0 + (u32) s3);
    v1 = (*(volatile s32 *) (u32) (v1 + 64));
    v0 = 9;
    { s32 c_ = v1 == v0; a0 = a1; if (c_) goto L_0033C60C; }
    v0 = 10;
    if (v1 == v0) goto L_0033C60C;
    a0 = 0;
L_0033C60C:;
    if (a0 != 0) goto L_0033C624;
    v0 = 2;
    if (s0 == v0) goto L_0033C624;
    a1 = 0;
L_0033C624:;
    if (a1 == 0) goto L_0033C630;
    s1 = 1;
L_0033C630:;
    a0 = s5;
L_0033C634:;
    a2 = s1;
    a1 = 446; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = 1;
    return v0;
}
