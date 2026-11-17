/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
void Pes6Job_SetDone(s32);
s32 Pes6MatchPlayer_GetSquadIndex(s32);
void Pes6MatchPlayer_GetTeamRelativeX(s32, s32);
f32 func_0030EBB0(s32, s32, f32);
void func_003139C0(s32, s32);
s32 func_003260A0(s32, s32);
s32 func_00333600(s32);
s32 func_00340C80(f32);

s32 func_003463D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    s5 = a0;
    a0 = 14;
    v0 = func_00333600(a0);
    if (v0 == 0) { a0 = s5; goto L_0034658C; }
    v0 = (s32) 0xcc0000U;
    s1 = (*(volatile s32 *) (u32) (s5 + 64));
    s2 = (*(volatile u8 *) (u32) (v0 + -11671));
    s0 = (*(volatile s32 *) (u32) (s5 + 72));
    s3 = (*(volatile s32 *) (u32) (s5 + 80));
    a0 = s2; v0 = Pes6MatchPlayer_GetSquadIndex(a0);
    s6 = v0;
    a0 = (s32) ((u32) sp + 0xacU);
    a1 = s2; Pes6MatchPlayer_GetTeamRelativeX(a0, a1);
    v0 = (s32) 0xcc0000U;
    a0 = s2;
    f12.f = (*(volatile f32 *) (u32) (v0 + -11668));
    a1 = 1; f0.f = func_0030EBB0(a0, a1, f12.f);
    f1.f = (*(volatile f32 *) (u32) (sp + 172));
    s4 = (s32) ((u32) sp + 0x90U);
    a0 = s4;
    a1 = 15;
    a2 = (s32) ((u32) sp + 0xa8U);
    f20.f = f0.f - f1.f; Pes6BitSet_Initialize(a0, a1, a2);
    a0 = s4;
    a1 = s2; func_003139C0(a0, a1);
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = s4;
    a1 = 1;
    v0 = v0 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s4; goto L_003464B8; }
    a1 = s2 & 0xff;
    a0 = s3; v0 = func_003260A0(a0, a1);
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    a0 = s4;
L_003464B8:;
    a1 = 2; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = s4;
    a1 = 6;
    v0 = v0 ^ 0x5;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    f1.i = f20.i & 0x7FFFFFFF;
    v0 = (s32) 0x44800000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; a2 = 1; if (c_) goto L_003464F8; }
    a2 = 0;
L_003464F8:;
    a0 = s4;
    a1 = 7; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = s4;
    a1 = 8;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (s32) 0x463c0000U;
    v0 = v0 | 0x6400;
    f1.f = (*(volatile f32 *) (u32) (sp + 172));
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    { s32 c_ = !fcc; a2 = 1; if (c_) goto L_00346540; }
    a2 = 0;
L_00346540:;
    if (a2 == 0) { a0 = s4; goto L_00346570; }
    v0 = (s32) 0x40130000U;
    v0 = v0 | 0x3333;
    f12.i = (s32) v0;
    v0 = func_00340C80(f12.f);
    v1 = (s32) ((u32) s6 << 3);
    v1 = (s32) ((u32) s1 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    a2 = v1 < v0;
    a0 = s4;
L_00346570:;
    a1 = 9; Pes6BitSet_Write(a0, a1, a2);
    a1 = s4;
    a0 = 32;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = s5;
L_0034658C:;
    Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
