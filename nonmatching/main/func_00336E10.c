/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6BitSet_Initialize(s64, s64, s64);
s64 Pes6BitSet_Lookup(s64, s64);
s64 Pes6BitSet_Write(s64, s64, s64);
s64 Pes6Job_GetArg(s64, s64);
s64 Pes6Job_SendMessage(s64, s64, s64, s64, s64, s64, s64);
s64 Pes6Job_SetDone(s64);
s64 func_0030D990(s64);
s64 func_003108E0(s64);
s64 func_003139C0(s64, s64);
s64 func_00325FC0(s64, s64);
s64 func_00333030(s64, s64, s64, s64, s64, s64, s64);
s64 func_00333190(s64);
s64 func_003332D0(s64, s64, s64, s64);
s64 func_003335A0(void);
s64 func_00333600(s64);
s64 func_00340C80(f32);
s64 func_00341880(s64, s64);
s64 func_00341910(s64, s64, s64, s64, s64, s64, s64, s64);

s64 func_00336E10(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    s64 frame[44];
    s64 sp = (s32) (u32) frame;

    v1 = 11;
    v0 = (*(volatile s32 *) (u32) (a0 + 76));
    s6 = (*(volatile s32 *) (u32) (a0 + 64));
    s0 = (*(volatile s32 *) (u32) (a0 + 60));
    (*(volatile u32 *) (u32) (sp + 288)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s6 + 116));
    s7 = (s32) ((u32) s6 + 0x74U);
    { s32 c_ = v0 != v1; (*(volatile u32 *) (u32) (sp + 316)) = (u32) a0; if (c_) goto L_00336E68; }
    s4 = s7; goto L_00336E70;
L_00336E68:;
    s4 = (s32) 0x5f0000U;
    s4 = (s32) ((u32) s4 + 0x1c80U);
L_00336E70:;
    a0 = (*(volatile u8 *) (u32) (s0 + 54));
    v0 = 0;
    v1 = (*(volatile s32 *) (u32) s4);
    a0 = (s32) ((u32) a0 << 3);
    a1 = (s32) ((u32) s0 + (u32) a0);
    a0 = v1 ^ 0xb;
    v1 = (s32) ((u32) a1 + 0x24U);
    { u32 a_ = (u32) (sp + 256) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (u64) a0 < (u64) (s64) 1;
    { s32 c_ = v1 == 0; { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; } if (c_) goto L_00336EC4; }
    a0 = (*(volatile u8 *) (u32) (s4 + 32));
    v1 = 2;
    { s32 c_ = a0 == v1; a1 = 1; if (c_) goto L_00336EB8; }
    if (a0 == a1) goto L_00336EB8;
    a1 = 0;
L_00336EB8:;
    if (a1 == 0) { f0.f = (*(volatile f32 *) (u32) (s4 + 20)); goto L_00336EC8; }
    v0 = 1;
L_00336EC4:;
    f0.f = (*(volatile f32 *) (u32) (s4 + 20));
L_00336EC8:;
    f1.i = f0.i & 0x7FFFFFFF;
    v1 = (s32) 0x445e0000U;
    v1 = v1 | 0x4000;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; a0 = 1; if (c_) goto L_00336EEC; }
    a0 = 0;
L_00336EEC:;
    v1 = v0 & a0;
    a1 = 0;
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (u64) 0 < (u64) v1;
    a0 = (*(volatile s32 *) (u32) (sp + 316));
    v1 = v1 ^ 0x1;
    v0 = v0 & v1;
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = Pes6Job_GetArg(a0, a1);
    a0 = (*(volatile s32 *) (u32) (sp + 316));
    s1 = v0;
    a1 = 1; v0 = Pes6Job_GetArg(a0, a1);
    a0 = s1 ^ 0x2;
    v1 = s1 ^ 0x3;
    s3 = (u64) a0 < (u64) (s64) 1;
    s2 = (u64) v1 < (u64) (s64) 1;
    a0 = s1 ^ 0x4;
    v1 = v0 ^ 0x3;
    s1 = (u64) a0 < (u64) (s64) 1;
    fp = (u64) v1 < (u64) (s64) 1;
    a0 = v0 ^ 0x4;
    v1 = v0 ^ 0x1;
    v0 = (u64) a0 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = 6;
    v0 = (u64) v1 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_00333600(a0);
    s5 = v0;
    a0 = 5; v0 = func_00333600(a0);
    v0 = s5 | v0;
    a0 = 45;
    (*(volatile u32 *) (u32) (sp + 272)) = (u32) v0;
    a1 = 1; v0 = func_00341880(a0, a1);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_003335A0();
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (sp + 316)); goto L_00337374; }
    s5 = (s32) ((u32) sp + 0x140U);
    a1 = 35;
    a0 = s5;
    a2 = (s32) ((u32) sp + 0x158U); v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s0 + 52));
    a0 = s5; v0 = func_003139C0(a0, a1);
    a0 = 0;
    a1 = 5;
    a2 = 10; v0 = func_00341910(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (u64) 0 < (u64) v0;
    if (a0 == 0) goto L_00336FD8;
    a0 = 24000; v0 = func_00333190(a0);
    a0 = (u64) 0 < (u64) v0;
L_00336FD8:;
    if (a0 == 0) goto L_00336FF0;
    a0 = 13; v0 = func_00333600(a0);
    v0 = (u64) 0 < (u64) v0;
    a0 = v0 ^ 0x1;
L_00336FF0:;
    v0 = func_003332D0(a0, a1, a2, a3);
    a0 = 24000; v0 = func_00333030(a0, a1, a2, a3, a4, a5, a6);
    a2 = v0;
    a0 = s5;
    a1 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (s7 + 4)); v0 = func_0030D990(a0);
    v1 = v0 ^ 0x1;
    a0 = s5;
    v0 = (*(volatile s32 *) (u32) s7);
    v1 = (u64) v1 < (u64) (s64) 1;
    a1 = 2;
    v0 = v0 ^ 0x9;
    v0 = (u64) v0 < (u64) (s64) 1;
    a2 = v0 & v1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s4 + 32));
    v0 = 10;
    a0 = (*(volatile u8 *) (u32) (s6 + 116));
    { s32 c_ = v1 == v0; a1 = (*(volatile u8 *) (u32) (s6 + 120)); if (c_) goto L_00337058; }
    a2 = 0; goto L_003370B4;
L_00337058:;
    v1 = a0 & 0xff;
    v0 = 9;
    if (v1 == v0) goto L_00337070;
    a2 = 0; goto L_003370B4;
L_00337070:;
    v0 = (s32) 0xcc0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -16869));
    { s32 c_ = a0 <= 0; a2 = 0; if (c_) goto L_003370B0; }
    v1 = a1 & 0xff;
    a1 = (s32) 0xcc0000U;
    a1 = (s32) ((u32) a1 + 0xffffbe10U);
L_0033708C:;
    v0 = (*(volatile u8 *) (u32) (a1 + 27));
    if (v1 != v0) { a2 = (s32) ((u32) a2 + 0x1U); goto L_003370A0; }
    a2 = 1; goto L_003370B4;
L_003370A0:;
    v0 = a2 < a0;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x1U); if (c_) goto L_0033708C; }
L_003370B0:;
    a2 = 1;
L_003370B4:;
    a0 = s5;
    a1 = 3; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 4;
    v0 = (u64) 0 < (u64) v0;
    s6 = v0 ^ 0x1;
    a2 = s6; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 224) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s7 = v1 | v0;
    v0 = (s32) 0x41000000U;
    f12.i = (s32) v0;
    v0 = func_00340C80(f12.f);
    { u32 a_ = (u32) (sp + 256) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 5;
    a2 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    v1 = (s32) ((u32) a2 - (u32) v1);
    v0 = v1 < v0;
    a2 = s7 & v0; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 6;
    a2 = v0 & s6; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 7;
    a2 = v0 & s6; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s7;
    a0 = s5;
    a1 = 8; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s4);
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a1 = (*(volatile u8 *) (u32) (s0 + 58)); goto L_00337178; }
    v0 = (*(volatile u8 *) (u32) (s4 + 38));
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = (*(volatile u8 *) (u32) (s0 + 58));
L_00337178:;
    a0 = (*(volatile u8 *) (u32) (s4 + 4));
    v1 = a1 ^ 0x2;
    v0 = a1 ^ 0x3;
    v1 = (u64) v1 < (u64) (s64) 1;
    v0 = (u64) v0 < (u64) (s64) 1;
    v1 = v1 | v0;
    v0 = a1 ^ 0x4;
    v0 = (u64) v0 < (u64) (s64) 1;
    v0 = v0 | v1;
    s6 = v0 | a2; v0 = func_003108E0(a0);
    v1 = s6 | v0;
    a0 = s5;
    v0 = (*(volatile s32 *) (u32) (sp + 272));
    a1 = 11;
    a2 = v0 & v1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s4 + 33));
    a0 = s5;
    v0 = (*(volatile u8 *) (u32) (s4 + 32));
    a1 = 12;
    a2 = v1 & 0x1;
    v0 = v0 ^ 0x6;
    v1 = (u64) v0 < (u64) (s64) 1;
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = v0 & v1;
    a2 = a2 & v0; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s0 + 54));
    a0 = (*(volatile s32 *) (u32) (sp + 288)); v0 = func_00325FC0(a0, a1);
    s4 = s3 & v0;
    a0 = s5;
    a1 = 6; v0 = Pes6BitSet_Lookup(a0, a1);
    s4 = s4 & v0;
    a0 = s5;
    a1 = 7; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = v0 & s4;
    a0 = s5;
    a1 = 10; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 272));
    a0 = s5;
    a1 = 13; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s0 + 32));
    a0 = s5;
    a1 = 15;
    v0 = v0 < 30001;
    v0 = v0 ^ 0x1;
    a2 = s3 & v0; v0 = Pes6BitSet_Write(a0, a1, a2);
    s0 = s3 & fp;
    a0 = s5;
    a1 = 17;
    a2 = s0; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 18;
    s4 = s3 & v0;
    a2 = s4; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 19;
    a2 = s3 & v0; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 20;
    a2 = s3; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s0;
    a0 = s5;
    a1 = 22; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s4;
    a0 = s5;
    a1 = 23; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s3;
    a0 = s5;
    a1 = 24; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s2 & fp;
    a0 = s5;
    a1 = 26; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 27;
    a2 = s2 & v0; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 28;
    a2 = s2 & v0; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s2;
    a0 = s5;
    a1 = 29; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s1 & fp;
    a0 = s5;
    a1 = 31; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 32;
    a2 = s1 & v0; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 33;
    a2 = s1 & v0; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s1;
    a0 = s5;
    a1 = 34; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s5;
    a0 = 17;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = (*(volatile s32 *) (u32) (sp + 316));
L_00337374:;
    v0 = Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
