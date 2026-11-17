/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Ball_CopyPosition(s32);
s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 Pes6MatchPlayer_GetSquadIndex(s32);
s32 Pes6MatchPlayer_GetTeamRelativeX(s32, s32);
s32 Pes6MatchPlayer_GetTeamRelativeXZ(s32, s32, s32);
s32 func_0030EBB0(s32, s32, f32);
f32 func_0030F590(s32);
s32 func_003139C0(s32, s32);
s32 func_00325FC0(s32, s32);
s32 func_00333600(s32);
s32 func_00338640(s32, s32);
s32 func_00338940(s32);

s32 func_00328A70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    s64 frame[26];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s4 = (*(volatile s32 *) (u32) (a0 + 60));
    s6 = (*(volatile s32 *) (u32) (a0 + 64));
    v0 = (s32) ((u32) s4 + 0xb4U);
    a0 = (*(volatile u8 *) (u32) (s4 + 184));
    s0 = (s32) ((u32) v0 + 0x20U); v0 = Pes6MatchPlayer_GetSquadIndex(a0);
    s5 = (*(volatile u8 *) (u32) (s4 + 120));
    s7 = v0;
    v0 = 255;
    if (s5 != v0) { a2 = (*(volatile u8 *) (u32) s0); goto L_00328ADC; }
    v0 = (s32) 0x46520000U;
    s0 = 1;
    v0 = v0 | 0x6400;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) v0; goto L_00328B34;
L_00328ADC:;
    a0 = (s32) ((u32) sp + 0xc8U);
    a1 = (s32) ((u32) sp + 0xc4U); v0 = Pes6MatchPlayer_GetTeamRelativeXZ(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0xc0U);
    a1 = s5; v0 = Pes6MatchPlayer_GetTeamRelativeX(a0, a1);
    a0 = s5; f0.f = func_0030F590(a0);
    f12.i = f0.i;
    a0 = s5;
    a1 = 1; v0 = func_0030EBB0(a0, a1, f12.f);
    a0 = (s32) ((u32) sp + 0xb0U); v0 = Pes6Ball_CopyPosition(a0);
    f0.f = (*(volatile f32 *) (u32) (sp + 176));
    f1.i = f0.i & 0x7FFFFFFF;
    f0.f = (*(volatile f32 *) (u32) (sp + 200));
    f0.i = f0.i & 0x7FFFFFFF;
    fcc = f1.f <= f0.f;
    if (fcc) { s0 = 0; goto L_00328B34; }
    s0 = 1;
L_00328B34:;
    a0 = 4;
    s1 = 0; v0 = func_00333600(a0);
    s1 = s1 | v0;
    a0 = 6; v0 = func_00333600(a0);
    s1 = s1 | v0;
    a0 = 5; v0 = func_00333600(a0);
    s3 = s1 | v0;
    a1 = 11;
    s1 = (s32) ((u32) sp + 0x90U);
    a2 = (s32) ((u32) sp + 0xccU);
    a0 = s1; v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a1 = s5;
    a0 = s1; v0 = func_003139C0(a0, a1);
    a2 = (*(volatile u8 *) (u32) (s4 + 12));
    a0 = s1;
    a1 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    s5 = s3 | s0;
    { s32 c_ = s5 == 0; a2 = 0; if (c_) goto L_00328BAC; }
    v1 = (*(volatile s32 *) (u32) (s4 + 116));
    v0 = 10;
    if (v1 == v0) { a0 = s1; goto L_00328BB0; }
    a2 = 1;
L_00328BAC:;
    a0 = s1;
L_00328BB0:;
    a1 = 3; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s4 + 116));
    a0 = s1;
    a1 = 4;
    v0 = v0 ^ 0xa;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s6;
    a1 = s7; v0 = func_00325FC0(a0, a1);
    a2 = v0;
    a0 = s1;
    a1 = 6; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s5;
    a0 = s1;
    a1 = 9; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (u64) 0 < (u64) s0;
    a0 = s1;
    a2 = v0 ^ 0x1;
    a1 = 10; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s1;
    a0 = 10;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) { a0 = s2; goto L_00328C60; }
    v0 = (s32) 0x80000000U;
    a1 = 4;
    a0 = v0 | 0x12; v0 = func_00338640(a0, a1);
    v0 = (s32) 0x80000000U;
    a1 = 4;
    a0 = v0 | 0x62; v0 = func_00338640(a0, a1);
    if (s3 == 0) goto L_00328C5C;
    v0 = (s32) 0x80000000U;
    a0 = v0 | 0x1f; v0 = func_00338940(a0);
L_00328C5C:;
    a0 = s2;
L_00328C60:;
    v0 = Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
