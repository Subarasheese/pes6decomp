/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s64, s64, s64);
void Pes6BitSet_Write(s64, s64, s64);
s64 Pes6Job_SendMessage(s64, s64, s64, s64, s64, s64, s64);
s64 Pes6MatchContext_GetHalf(void);
s64 func_0030DA50(void);
s64 func_0030EA70(s64, s64, s64, s64);
void func_003139F0(s64, s64);
s64 func_003260A0(s64, s64);
void func_003394B0(s64, s64, s64, s64);
s64 func_003395B0(s64);
s64 func_00340C80(f32);

void func_00314F30(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[32];
    s64 sp = (s32) (u32) frame;

    s6 = a4;
    s5 = a0;
    s4 = a2;
    s3 = a3;
    v0 = (*(volatile u8 *) (u32) (a0 + 5));
    s0 = a1;
    v1 = (s32) ((u32) v0 << 1);
    v0 = v0 ^ 0x1;
    v1 = (s32) ((u32) s5 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    s1 = (*(volatile s16 *) (u32) v1);
    v0 = (s32) ((u32) s5 + (u32) v0);
    v0 = (*(volatile s16 *) (u32) v0);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_0030EA70(a0, a1, a2, a3);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = Pes6MatchContext_GetHalf();
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_0030DA50();
    a1 = (*(volatile u8 *) (u32) (s5 + 10));
    a0 = s0;
    s7 = v0; v0 = func_003260A0(a0, a1);
    a2 = (*(volatile u8 *) (u32) (s3 + 96));
    fp = v0;
    a0 = s6;
    a1 = 0;
    a3 = (s32) ((u32) sp + 0xfcU); func_003394B0(a0, a1, a2, a3);
    s2 = (s32) ((u32) sp + 0xd0U);
    a1 = 50;
    a0 = s2;
    a2 = (s32) ((u32) sp + 0xf0U); Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s5 + 5));
    a0 = s2; func_003139F0(a0, a1);
    a0 = s2;
    a1 = 3;
    a2 = fp; Pes6BitSet_Write(a0, a1, a2);
    a0 = s2;
    a1 = 4;
    a2 = s7; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s2;
    a1 = 5;
    s0 = (s32) ((u32) s1 - (u32) v0);
    a2 = s0 < -4; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s5 + 17));
    v0 = v0 ^ 0x8;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s2; goto L_0031504C; }
    v0 = (*(volatile u8 *) (u32) (s5 + 8));
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    a0 = s2;
L_0031504C:;
    a1 = 6; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s5 + 8));
    a0 = s2;
    a1 = 8;
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s5 + 19));
    a0 = s2;
    a1 = 9;
    v0 = v0 ^ 0xd;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s5 + 19));
    a0 = s2;
    a1 = 10;
    v0 = v0 ^ 0xc;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s5 + 19));
    a0 = s2;
    a1 = 11;
    v0 = v0 ^ 0x10;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    a2 = fp;
    a0 = s2;
    a1 = 14; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s2; goto L_003150E4; }
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = v0 < 65;
    a2 = v0 ^ 0x1;
    a0 = s2;
L_003150E4:;
    a1 = 15; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s2; goto L_0031510C; }
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s2;
L_0031510C:;
    a1 = 16; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s2;
    a1 = 17;
    a2 = s1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s5 + 5));
    a0 = s2;
    a1 = 18;
    v0 = (s32) ((u32) v0 + (u32) s4);
    v0 = (*(volatile u8 *) (u32) (v0 + 57));
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s5 + 5));
    a0 = s2;
    a1 = 19;
    v0 = (s32) ((u32) v0 + (u32) s4);
    v0 = (*(volatile u8 *) (u32) (v0 + 57));
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s2;
    a1 = 20;
    v0 = v0 < 75;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    a2 = s7;
    a0 = s2;
    a1 = 21; Pes6BitSet_Write(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (s5 + 5));
    s0 = 0;
    v1 = (*(volatile u8 *) (u32) (s3 + 96));
    v0 = a0 ^ 0x1;
    { s32 c_ = v1 != v0; a1 = 0; if (c_) goto L_003151BC; }
    v0 = (*(volatile u8 *) (u32) (s5 + 4));
    if (a0 != v0) goto L_003151BC;
    a1 = 1;
L_003151BC:;
    if (a1 == 0) { a2 = s0; goto L_003151F4; }
    a0 = s6; v0 = func_003395B0(a0);
    a0 = (*(volatile s32 *) (u32) (sp + 252));
    v1 = (s32) 0x41f00000U;
    f12.i = (s32) v1;
    s3 = (s32) ((u32) v0 - (u32) a0); v0 = func_00340C80(f12.f);
    at = v0 < s3;
    if (at != 0) goto L_003151F0;
    s0 = 1;
L_003151F0:;
    a2 = s0;
L_003151F4:;
    a0 = s2;
    a1 = 22; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 < 2;
    a0 = s2;
    a2 = v0 ^ 0x1;
    a1 = 45; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x2;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 46; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x3;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 47; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x4;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 48; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x5;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 49; Pes6BitSet_Write(a0, a1, a2);
    a1 = s2;
    a0 = 78;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    v0 = 1;
    return;
}
