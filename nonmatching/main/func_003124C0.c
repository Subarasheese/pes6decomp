/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6MatchPlayer_GetTeamRelativeX(s32, s32);
s32 Pes6MatchPlayer_GetTeamRelativeZ(s32, s32);
s32 func_0030FAB0(s32, s32, s32, s32);
s32 func_00340BF0(f32, f32);

s32 func_003124C0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f20 = { 0 };
    union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s3 = a1;
    s0 = a0;
    f21.i = f12.i;
    f20.i = f13.i; v0 = func_00340BF0(f12.f, f13.f);
    if (v0 != 0) goto L_00312588;
    a0 = s0; v0 = func_0030FAB0(a0, a1, a2, a3);
    s0 = v0 & 0xff;
    s1 = 0;
L_0031250C:;
    s2 = s0 & 0xff;
    a0 = (s32) ((u32) sp + 0x68U);
    a1 = s2; v0 = Pes6MatchPlayer_GetTeamRelativeX(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (sp + 104));
    fcc = f0.f <= f21.f;
    if (fcc) { s1 = (s32) ((u32) s1 + 0x1U); goto L_00312578; }
    a0 = (s32) ((u32) sp + 0x6cU);
    a1 = s2; v0 = Pes6MatchPlayer_GetTeamRelativeZ(a0, a1);
    f13.f = (*(volatile f32 *) (u32) (sp + 108));
    f12.f = (*(volatile f32 *) (u32) (sp + 104)); v0 = func_00340BF0(f12.f, f13.f);
    if (v0 == 0) goto L_00312574;
    f1.f = (*(volatile f32 *) (u32) (sp + 108));
    f0.i = (s32) 0;
    f1.f = f20.f * f1.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00312574;
    (*(volatile u8 *) (u32) s3) = (u8) s2;
    v0 = 1; goto L_00312594;
L_00312574:;
    s1 = (s32) ((u32) s1 + 0x1U);
L_00312578:;
    v0 = s1 < 11;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x1U); if (c_) goto L_0031250C; }
L_00312588:;
    v0 = 255;
    (*(volatile u8 *) (u32) s3) = (u8) v0;
    v0 = 0;
L_00312594:;
    return v0;
}
