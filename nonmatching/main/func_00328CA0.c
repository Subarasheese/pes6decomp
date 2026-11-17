/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 Pes6MatchPlayer_GetTeamRelativeXZ(s32, s32, s32);
s32 func_0030F240(s32);
s32 func_003139C0(s32, s32);
s32 func_00338940(s32);
s32 func_00340880(f32, f32);
s32 func_00340BF0(f32, f32);

s32 func_00328CA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 fa12, f32 fa13) {
    s32 v0 = 0, s0 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    a0 = (s32) ((u32) sp + 0x5fU); v0 = func_0030F240(a0);
    if (v0 == 0) { a0 = s0; goto L_00328DDC; }
    a2 = (*(volatile u8 *) (u32) (sp + 95));
    a0 = (s32) ((u32) sp + 0x58U);
    a1 = (s32) ((u32) sp + 0x54U); v0 = Pes6MatchPlayer_GetTeamRelativeXZ(a0, a1, a2);
    f13.f = (*(volatile f32 *) (u32) (sp + 84));
    f12.f = (*(volatile f32 *) (u32) (sp + 88)); v0 = func_00340880(f12.f, f13.f);
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0x30U); goto L_00328CEC; }
    v0 = 0; goto L_00328DE8;
L_00328CEC:;
    a1 = 4;
    a2 = (s32) ((u32) sp + 0x20U); v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (sp + 95));
    a0 = (s32) ((u32) sp + 0x30U); v0 = func_003139C0(a0, a1);
    f13.f = (*(volatile f32 *) (u32) (sp + 84));
    f12.f = (*(volatile f32 *) (u32) (sp + 88)); v0 = func_00340BF0(f12.f, f13.f);
    a2 = v0;
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 0; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (s32) 0x45a10000U;
    v0 = v0 | 0x4000;
    f1.f = (*(volatile f32 *) (u32) (sp + 84));
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    { s32 c_ = !fcc; a2 = 1; if (c_) goto L_00328D44; }
    a2 = 0;
L_00328D44:;
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (s32) 0xc5a10000U;
    v0 = v0 | 0x4000;
    f1.f = (*(volatile f32 *) (u32) (sp + 84));
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; a2 = 1; if (c_) goto L_00328D74; }
    a2 = 0;
L_00328D74:;
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 2; v0 = Pes6BitSet_Write(a0, a1, a2);
    f0.f = (*(volatile f32 *) (u32) (sp + 84));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45a10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; a2 = 1; if (c_) goto L_00328DA8; }
    a2 = 0;
L_00328DA8:;
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 3; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = 126;
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) goto L_00328DD8;
    v0 = (s32) 0x80000000U;
    a0 = v0 | 0x16; v0 = func_00338940(a0);
L_00328DD8:;
    a0 = s0;
L_00328DDC:;
    v0 = Pes6Job_SetDone(a0);
    v0 = 1;
L_00328DE8:;
    return v0;
}
