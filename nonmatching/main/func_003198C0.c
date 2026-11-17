/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6BitSet_Initialize(s64, s64, s64);
s64 Pes6BitSet_Write(s64, s64, s64);
s64 Pes6Job_SendMessage(s64, s64, s64, s64, s64, s64, s64);
s64 Pes6Job_SetDone(s64);
s64 Pes6MatchPlayer_GetSquadIndex(s64);
s64 func_0030F240(s64);
s64 func_003395B0(s64);
s64 func_003407B0(s64, s64, s64, s64, f32, f32);
s64 func_00340C80(f32);

s64 func_003198C0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[32];
    s64 sp = (s32) (u32) frame;

    a1 = 12;
    a2 = (s32) ((u32) sp + 0xf8U);
    s5 = a0;
    s4 = (s32) ((u32) sp + 0xe0U);
    a0 = s4;
    v0 = Pes6BitSet_Initialize(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s5 + 60));
    a0 = (*(volatile s32 *) (u32) (s5 + 68));
    v1 = (*(volatile s32 *) (u32) (s5 + 48));
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    fp = (*(volatile s32 *) (u32) (s5 + 64));
    v0 = 255;
    { s32 c_ = v1 == v0; s2 = (s32) ((u32) a0 + 0x74U); if (c_) goto L_00319938; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_00319940;
L_00319938:;
    a0 = 1;
    v1 = (s32) ((u32) a0 << 3);
L_00319940:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s16 *) (u32) (s0 + 20));
    if (v0 <= 0) { v0 = (s32) 0xc58c0000U; goto L_003199B0; }
    v0 = (s32) 0x458c0000U;
    v0 = v0 | 0x42ab;
    f1.f = (*(volatile f32 *) (u32) (s2 + 12));
    f0.i = (s32) v0;
    fcc = f0.f < f1.f;
    { s32 c_ = fcc; s3 = 1; if (c_) goto L_00319984; }
    s3 = 0;
L_00319984:;
    v0 = (s32) 0xc58c0000U;
    v0 = v0 | 0x42ab;
    f0.i = (s32) v0;
    fcc = f0.f <= f1.f;
    { s32 c_ = !fcc; s7 = 1; if (c_) goto L_003199F0; }
    s7 = 0;
    a0 = (*(volatile u8 *) (u32) (s5 + 44)); goto L_003199F4;
    v0 = (s32) 0xc58c0000U;
L_003199B0:;
    v0 = v0 | 0x42ab;
    f1.f = (*(volatile f32 *) (u32) (s2 + 12));
    f0.i = (s32) v0;
    fcc = f0.f <= f1.f;
    { s32 c_ = !fcc; s3 = 1; if (c_) goto L_003199D0; }
    s3 = 0;
L_003199D0:;
    v0 = (s32) 0x458c0000U;
    v0 = v0 | 0x42ab;
    f0.i = (s32) v0;
    fcc = f0.f < f1.f;
    { s32 c_ = fcc; s7 = 1; if (c_) goto L_003199F0; }
    s7 = 0;
L_003199F0:;
    a0 = (*(volatile u8 *) (u32) (s5 + 44));
L_003199F4:;
    v0 = Pes6MatchPlayer_GetSquadIndex(a0);
    a0 = (*(volatile u8 *) (u32) (s2 + 4));
    s6 = v0; v0 = Pes6MatchPlayer_GetSquadIndex(a0);
    s1 = v0;
    a0 = fp; v0 = func_003395B0(a0);
    a0 = (*(volatile s32 *) (u32) (s5 + 56));
    v1 = (s32) 0x40000000U;
    f12.i = (s32) v1;
    v0 = (s32) ((u32) v0 - (u32) a0);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_00340C80(f12.f);
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    at = v1 < v0;
    if (at == 0) { (*(volatile u32 *) (u32) (sp + 192)) = (u32) 0; goto L_00319A58; }
    v0 = (*(volatile s32 *) (u32) (s5 + 56));
    if (v0 == 0) goto L_00319A54;
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) v0; goto L_00319A58;
L_00319A54:;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) 0;
L_00319A58:;
    v0 = (*(volatile s16 *) (u32) (s0 + 20));
    f0.f = (*(volatile f32 *) (u32) (s2 + 20));
    a0 = (*(volatile u8 *) (u32) (s5 + 48));
    f12.f = (*(volatile f32 *) (u32) (s2 + 12));
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f13.f = f0.f * f1.f; v0 = func_003407B0(a0, a1, a2, a3, f12.f, f13.f);
    (*(volatile u32 *) (u32) (sp + 220)) = (u32) v0;
    a0 = (s32) ((u32) sp + 0xffU); v0 = func_0030F240(a0);
    s0 = (u64) 0 < (u64) v0;
    if (s0 != 0) { a2 = (u64) 0 < (u64) s0; goto L_00319AA4; }
    v0 = (*(volatile s32 *) (u32) s2);
    v0 = v0 ^ 0x1;
    s0 = (u64) v0 < (u64) (s64) 1;
    a2 = (u64) 0 < (u64) s0;
L_00319AA4:;
    if (a2 == 0) { a0 = s4; goto L_00319AC0; }
    a0 = (*(volatile u8 *) (u32) (s5 + 48)); v0 = Pes6MatchPlayer_GetSquadIndex(a0);
    a2 = s1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1;
    a0 = s4;
L_00319AC0:;
    a1 = 0; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s1 ^ s6;
    a0 = s4;
    a2 = (u64) 0 < (u64) a2;
    a1 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 2;
    a2 = s3; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = (u64) 0 < (u64) s0;
    if (a2 == 0) { a0 = s4; goto L_00319B04; }
    a2 = s1 ^ s6;
    a2 = (u64) a2 < (u64) (s64) 1;
    a0 = s4;
L_00319B04:;
    a1 = 4; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 192));
    a0 = s4;
    a1 = 5; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 220));
    a0 = s4;
    a1 = 6; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s1 ^ s6;
    a0 = s4;
    a2 = (u64) a2 < (u64) (s64) 1;
    a1 = 8; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s7;
    a0 = s4;
    a1 = 9; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s3;
    a0 = s4;
    a1 = 10; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s4;
    a0 = 12;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) { a0 = s5; goto L_00319B8C; }
    a0 = fp; v0 = func_003395B0(a0);
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) (v1 + 8)) = (u32) v0;
    a0 = s5;
L_00319B8C:;
    v0 = Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
