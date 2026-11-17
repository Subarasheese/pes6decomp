/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6BitSet_Write(s64, s64, s64);
s64 Pes6Job_GetArg(s64, s64);
s64 Pes6MatchPlayer_GetSquadIndex(s64);
s64 Pes6MatchPlayer_GetTeamRelativeXZ(s64, s64, s64);
s64 func_0030DA50(void);
s64 func_0030DB90(void);
s64 func_0030E540(s64);
s64 func_0030EB60(s64);
s64 func_00326070(s64);
s64 func_00326120(s64);
s64 func_003263A0(s64);
s64 func_00333600(s64);
s64 func_00333710(s64, s64);
s64 func_00340880(f32, f32);

s64 func_0033D2F0(s64 a0, s64 a1, s64 a2, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[34];
    s64 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = (*(volatile s32 *) (u32) (a1 + 68));
    s0 = a1;
    s1 = (*(volatile s32 *) (u32) (a1 + 72));
    a0 = s0;
    fp = (*(volatile s32 *) (u32) (a1 + 60));
    a1 = 0; v0 = Pes6Job_GetArg(a0, a1);
    a0 = s0;
    a1 = 1;
    s0 = v0 & 0xff; v0 = Pes6Job_GetArg(a0, a1);
    s0 = s0 & 0xff;
    a0 = s1;
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a1 = s0; v0 = func_00333710(a0, a1);
    s7 = v0;
    a0 = s3; v0 = func_00326120(a0);
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = 17; v0 = func_00333600(a0);
    a0 = (*(volatile s32 *) (u32) (s3 + 4));
    v1 = s7 < 14;
    s2 = v1 ^ 0x1;
    s1 = s7 < 13;
    v1 = a0 ^ 0x2;
    v1 = (u64) v1 < (u64) (s64) 1;
    s6 = v1 & v0;
    (*(volatile u32 *) (u32) (gp + -21540)) = (u32) s6; v0 = func_0030DA50();
    s5 = v0; v0 = func_0030DB90();
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = 0;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 8937));
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_0030E540(a0);
    a0 = v0 & 0xff; v0 = func_0030EB60(a0);
    a0 = (*(volatile u8 *) (u32) (fp + 120));
    v0 = (s32) ((u32) fp + 0x74U);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = Pes6MatchPlayer_GetSquadIndex(a0);
    fp = v0 & 0xff;
    a0 = (s32) ((u32) sp + 0x10cU);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (*(volatile u8 *) (u32) (v0 + 4));
    a1 = (s32) ((u32) sp + 0x108U); v0 = Pes6MatchPlayer_GetTeamRelativeXZ(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s3);
    a0 = s4;
    a1 = 0;
    v0 = v0 ^ 0x12;
    a2 = (u64) 0 < (u64) v0; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s4;
    a1 = 2;
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = 22; v0 = func_00333600(a0);
    a2 = v0;
    a0 = s4;
    a1 = 3; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s4;
    a1 = 8;
    v0 = v0 & 0xff;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = v0 ^ 0x1;
    a2 = s0 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s4;
    a1 = 9;
    a2 = s0 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = 19; v0 = func_00333600(a0);
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s4; goto L_0033D494; }
    v0 = (*(volatile s32 *) (u32) s3);
    v0 = v0 ^ 0x12;
    a2 = (u64) 0 < (u64) v0;
    a0 = s4;
L_0033D494:;
    a1 = 10; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s5 | s6;
    a2 = (u64) 0 < (u64) v0;
    if (a2 != 0) { a0 = s4; goto L_0033D4D0; }
    a0 = s3; v0 = func_003263A0(a0);
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) goto L_0033D4CC;
    a0 = 18; v0 = func_00333600(a0);
    a2 = (u64) 0 < (u64) v0;
L_0033D4CC:;
    a0 = s4;
L_0033D4D0:;
    a1 = 11; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s4;
    a1 = 12;
    v0 = v0 ^ 0x5;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 13;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 14;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s4;
    a1 = 15;
    v0 = v0 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 16;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 17;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s4;
    a1 = 19;
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    a2 = v0 & s5; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 20;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 21;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s6;
    a0 = s4;
    a1 = 22; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 23;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 24;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s4;
    a1 = 25;
    a2 = v0 & s5; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 26;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 27;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s3; v0 = func_00326070(a0);
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s4; goto L_0033D610; }
    f13.f = (*(volatile f32 *) (u32) (sp + 264));
    f12.f = (*(volatile f32 *) (u32) (sp + 268)); v0 = func_00340880(f12.f, f13.f);
    a2 = (u64) 0 < (u64) v0;
    a0 = s4;
L_0033D610:;
    a1 = 28; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = (u64) 0 < (u64) s2;
    if (a2 == 0) { a0 = s4; goto L_0033D638; }
    v1 = fp & 0xff;
    v0 = s0 ^ 0x1;
    a2 = v1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1;
    a0 = s4;
L_0033D638:;
    a1 = 29; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = (u64) 0 < (u64) s1;
    if (a2 == 0) { a0 = s4; goto L_0033D65C; }
    v0 = fp & 0xff;
    a2 = v0 ^ s0;
    a2 = (u64) a2 < (u64) (s64) 1;
    a0 = s4;
L_0033D65C:;
    a1 = 30; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s3; v0 = func_00326070(a0);
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) goto L_0033D680;
    v0 = s7 < 14;
    a2 = v0 ^ 0x1;
L_0033D680:;
    if (a2 == 0) goto L_0033D694;
    v0 = (*(volatile s32 *) (u32) (s3 + 44));
    v0 = v0 ^ 0x2e;
    a2 = (u64) 0 < (u64) v0;
L_0033D694:;
    if (a2 == 0) { a0 = s4; goto L_0033D6B0; }
    a0 = 22; v0 = func_00333600(a0);
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    a0 = s4;
L_0033D6B0:;
    a1 = 31; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = 1;
    return v0;
}
