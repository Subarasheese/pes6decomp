/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Job_Create(s32, s32, s32);
void Pes6Job_SetArg(s32, s32, s32);
s32 Pes6MatchPlayer_GetSquadIndex(s32);
f32 func_0030F720(s32);
s32 func_003414D0(s32, s32, s32, s32);

s32 func_00350CE0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a1 = 2;
    a2 = 255;
    s2 = a0;
    a0 = (s32) ((u32) sp + 0x4fU);
    v0 = func_003414D0(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (gp + -31972));
    s0 = (s32) ((u32) sp + 0x4cU);
    v0 = (*(volatile u8 *) (u32) (gp + -31971));
    s1 = 0;
    (*(volatile u8 *) (u32) (sp + 76)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 77)) = (u8) v0;
L_00350D20:;
    a0 = (*(volatile u8 *) (u32) s0); f0.f = func_0030F720(a0);
    v0 = (s32) 0xc60c0000U;
    v0 = v0 | 0xf633;
    f1.i = (s32) v0;
    fcc = f0.f < f1.f;
    if (!fcc) goto L_00350D68;
    a0 = (*(volatile u8 *) (u32) s0); v0 = Pes6MatchPlayer_GetSquadIndex(a0);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x620000U;
    v0 = (s32) ((u32) v0 + 0xffffc6f0U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
L_00350D68:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 2;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x1U); if (c_) goto L_00350D20; }
    v1 = (*(volatile u8 *) (u32) (sp + 79));
    v0 = (s32) 0x620000U;
    v0 = (s32) ((u32) v0 + 0xffffc6f0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    at = v0 < 25001;
    if (at != 0) { v0 = 0; goto L_00350DD0; }
    a2 = (*(volatile s32 *) (u32) (s2 + 8));
    v0 = (s32) 0x80000000U;
    a1 = (s32) 0x350000U;
    a3 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0xc80U);
    a0 = v0 | 0x4e;
    a3 = (s32) ((u32) a3 + 0x6408U); v0 = Pes6Job_Create(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (sp + 79));
    a0 = s2;
    a1 = 0; Pes6Job_SetArg(a0, a1, a2);
    v0 = 1;
L_00350DD0:;
    return v0;
}
