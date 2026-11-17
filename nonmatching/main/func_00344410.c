/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6BitSet_Initialize(s64, s64, s64);
s64 Pes6BitSet_Write(s64, s64, s64);
s64 Pes6Job_GetArg(s64, s64);
s64 Pes6Job_SendMessage(s64, s64, s64, s64, s64, s64, s64);
s64 Pes6Job_SetDone(s64);
s64 Pes6MatchClock_GetRemaining(void);
s64 Pes6MatchContext_GetHalf(void);
s64 Pes6MatchPlayer_GetSquadIndex(s64);
s64 Pes6MatchPlayer_GetTeamRelativeXZ(s64, s64, s64);
s64 func_0030E540(s64);
s64 func_0030FC50(s64);
s64 func_00310BA0(s64, s64, s64, s64);
s64 func_003139F0(s64, s64);
s64 func_003260A0(s64, s64);
s64 func_003260E0(s64, s64);
s64 func_00333600(s64);
s64 func_003336E0(s64, s64);
s64 func_003336F0(s64);
s64 func_00333710(s64, s64);
s64 func_003394B0(s64, s64, s64, s64);
s64 func_003395B0(s64);
s64 func_003405E0(f32, f32);
s64 func_00340BF0(f32, f32);
s64 func_00340C80(f32);
s64 func_00341010(s64);
s64 func_003442C0(s64, s64, s64, s64, f32, f32);

s64 func_00344410(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    s64 frame[42];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    a0 = 11;
    v0 = func_00333600(a0);
    if (v0 != 0) { a0 = s5; goto L_003448A8; }
    s2 = (*(volatile s32 *) (u32) (s5 + 60));
    s4 = (*(volatile s32 *) (u32) (s5 + 64));
    s3 = (*(volatile s32 *) (u32) (s5 + 68));
    a0 = 0; v0 = func_0030E540(a0);
    s0 = v0 & 0xff;
    a0 = s0; v0 = Pes6MatchPlayer_GetSquadIndex(a0);
    s1 = v0;
    a0 = s3;
    a1 = s1; v0 = func_003336E0(a0, a1);
    fp = v0;
    a0 = s3;
    a1 = s1; v0 = func_00333710(a0, a1);
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = (s32) ((u32) sp + 0x140U);
    a1 = (s32) ((u32) sp + 0x13cU);
    a2 = s0; v0 = Pes6MatchPlayer_GetTeamRelativeXZ(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x148U);
    a1 = s0; v0 = func_003442C0(a0, a1, a2, a3, f12.f, f13.f);
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = s2;
    a1 = 4;
    a2 = s1;
    a3 = (s32) ((u32) sp + 0x144U); v0 = func_003394B0(a0, a1, a2, a3);
    a0 = s2; v0 = func_003395B0(a0);
    v1 = (*(volatile s32 *) (u32) (sp + 324));
    v0 = (s32) ((u32) v0 - (u32) v1);
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = Pes6MatchClock_GetRemaining();
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    f12.f = (*(volatile f32 *) (u32) (sp + 320));
    f13.f = (*(volatile f32 *) (u32) (sp + 316));
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_00340BF0(f12.f, f13.f);
    f12.f = (*(volatile f32 *) (u32) (sp + 320));
    f13.f = (*(volatile f32 *) (u32) (sp + 316));
    (*(volatile u32 *) (u32) (sp + 284)) = (u32) v0; v0 = func_003405E0(f12.f, f13.f);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = s3; v0 = func_003336F0(a0);
    s7 = v0; v0 = Pes6MatchContext_GetHalf();
    v0 = v0 ^ 0x1;
    s2 = (s32) ((u32) sp + 0x120U);
    v0 = (u64) v0 < (u64) (s64) 1;
    a0 = s2;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a1 = 32;
    a2 = (s32) ((u32) sp + 0x14cU); v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a1 = s1 & 0xff;
    a0 = s2; v0 = func_003139F0(a0, a1);
    s6 = s0 & 0xff;
    a0 = s4;
    a1 = s6; v0 = func_003260E0(a0, a1);
    a2 = v0;
    a0 = s2;
    a1 = 2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s6;
    a0 = s4; v0 = func_003260A0(a0, a1);
    a2 = v0;
    a0 = s2;
    a1 = 5; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (s32) 0x40e00000U;
    f12.i = (s32) v0;
    v0 = func_00340C80(f12.f);
    { u32 a_ = (u32) (sp + 208) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = s2;
    a1 = 6;
    a2 = v1 < v0; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 0; v0 = Pes6Job_GetArg(a0, a1);
    s6 = v0;
    v0 = (s32) 0x40c00000U;
    f12.i = (s32) v0;
    v0 = func_00340C80(f12.f);
    a2 = s6 < v0;
    a2 = a2 ^ 0x1;
    if (a2 == 0) { a0 = s2; goto L_0034460C; }
    a0 = s0; v0 = func_00310BA0(a0, a1, a2, a3);
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x4a800000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; a2 = 1; if (c_) goto L_00344608; }
    a2 = 0;
L_00344608:;
    a0 = s2;
L_0034460C:;
    a1 = 7; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (u64) 0 < (u64) v0;
    s6 = v0 ^ 0x1;
    { s32 c_ = s6 == 0; (*(volatile u32 *) (u32) (sp + 256)) = (u32) 0; if (c_) goto L_00344644; }
    a0 = s0; v0 = func_0030FC50(a0);
    at = v0 < 91;
    if (at != 0) { a2 = (*(volatile s32 *) (u32) (sp + 256)); goto L_00344648; }
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 256)) = (u32) v0;
L_00344644:;
    a2 = (*(volatile s32 *) (u32) (sp + 256));
L_00344648:;
    a0 = s2;
    a1 = 8; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) goto L_0034466C;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (u64) 0 < (u64) v0;
L_0034466C:;
    if (a2 == 0) goto L_00344680;
    a0 = fp; v0 = func_00341010(a0);
    a2 = (u64) 0 < (u64) v0;
L_00344680:;
    if (a2 == 0) { a0 = s2; goto L_00344698; }
    v0 = (*(volatile s32 *) (u32) s4);
    v0 = v0 ^ 0xa;
    a2 = (u64) 0 < (u64) v0;
    a0 = s2;
L_00344698:;
    a1 = 10; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s4 + 20));
    v0 = v0 ^ 0x5;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 != 0) { a0 = s2; goto L_003446CC; }
    v0 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + (u32) s4);
    v0 = (*(volatile s32 *) (u32) (v0 + 64));
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s2;
L_003446CC:;
    a1 = 12; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s2;
    a1 = 13;
    a2 = s7; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s3 + 53));
    a0 = s2;
    a1 = 14;
    a2 = v0 ^ s1;
    a2 = (u64) a2 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v1 = (u64) 0 < (u64) s7;
    v0 = fp ^ 0xd;
    s0 = v1 ^ 0x1;
    v0 = (u64) v0 < (u64) (s64) 1;
    a2 = v0 & s0;
    a0 = s2;
    a1 = 15; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s2;
    a1 = 16;
    v0 = v0 < 14;
    v0 = v0 ^ 0x1;
    a2 = v0 & s0; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s2;
    a1 = 17;
    v1 = v0 < 13;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 & v0;
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = v0 & v1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 284));
    a0 = s2;
    a1 = 18; v0 = Pes6BitSet_Write(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 316));
    f0.i = (s32) 0;
    fcc = f1.f <= f0.f;
    { s32 c_ = !fcc; a2 = 1; if (c_) goto L_00344788; }
    a2 = 0;
L_00344788:;
    a0 = s2;
    a1 = 19; v0 = Pes6BitSet_Write(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 316));
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; a2 = 1; if (c_) goto L_003447B0; }
    a2 = 0;
L_003447B0:;
    a0 = s2;
    a1 = 20; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 328));
    a0 = s2;
    a1 = 27;
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 328));
    a0 = s2;
    a1 = 21;
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 328));
    a0 = s2;
    a1 = 22;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 328));
    a0 = s2;
    a1 = 23;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 328));
    a0 = s2;
    a1 = 24;
    v0 = v0 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 328));
    a0 = s2;
    a1 = 25;
    v0 = v0 ^ 0x5;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (sp + 328));
    a0 = s2;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = 26;
    a2 = v0 & v1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s3 + 53));
    v0 = s1 ^ 0x1;
    a0 = s2;
    a1 = 29;
    a2 = v1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 284));
    a0 = s2;
    a1 = 28;
    a2 = s6 & v0; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s2;
    a0 = 25;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = s5;
L_003448A8:;
    v0 = Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
