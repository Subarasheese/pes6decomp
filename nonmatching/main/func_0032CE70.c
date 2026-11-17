/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Ball_GetPositionX(s32);
s32 Pes6MatchPlayer_GetTeamRelativeX(s32, s32);
s32 func_0030F290(s32);
s32 func_0032A340(s32, s32);
s32 func_00340C80(f32);

s32 func_0032CE70(s32 a0, s32 a1, s32 a2, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x40a00000U;
    f12.i = (s32) v0;
    s2 = a2;
    s1 = a0;
    s0 = a1; v0 = func_00340C80(f12.f);
    at = v0 < s2;
    if (at == 0) { a0 = (s32) ((u32) sp + 0x4cU); goto L_0032CEBC; }
    v1 = (s32) 0x330000U;
    v0 = 0;
    v1 = (s32) ((u32) v1 + 0xffffce60U);
    (*(volatile u32 *) (u32) (s1 + 76)) = (u32) v1; goto L_0032CFD0;
L_0032CEBC:;
    v0 = Pes6Ball_GetPositionX(a0);
    f1.f = (*(volatile f32 *) (u32) (sp + 76));
    v0 = (s32) 0x44a00000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) { v0 = (*(volatile u8 *) (u32) (s0 + 8)); goto L_0032CEF4; }
    v1 = (s32) 0x330000U;
    v0 = 0;
    v1 = (s32) ((u32) v1 + 0xffffce60U);
    (*(volatile u32 *) (u32) (s1 + 76)) = (u32) v1; goto L_0032CFD0;
L_0032CEF4:;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (s0 + 116)); goto L_0032CF04; }
    v0 = 0; goto L_0032CFD0;
L_0032CF04:;
    v0 = 1;
    { s32 c_ = v1 != v0; a2 = (s32) ((u32) s0 + 0x74U); if (c_) goto L_0032CFCC; }
    v1 = (*(volatile u8 *) (u32) (a2 + 33));
    v0 = 5;
    if (v1 != v0) { v0 = 1; goto L_0032CFD0; }
    a0 = (*(volatile u16 *) (u32) (a2 + 38));
    a1 = (s32) ((u32) sp + 0x44U); v0 = func_0032A340(a0, a1);
    v1 = (*(volatile s32 *) (u32) (sp + 68));
    v0 = 5;
    if (v1 == v0) { a1 = (*(volatile u8 *) (u32) (a2 + 4)); goto L_0032CF5C; }
    v0 = 1;
    if (v1 == v0) goto L_0032CF58;
    if (v1 == 0) goto L_0032CF58;
    v0 = (s32) 0x330000U; goto L_0032CFC4;
L_0032CF58:;
    a1 = (*(volatile u8 *) (u32) (a2 + 4));
L_0032CF5C:;
    a0 = (s32) ((u32) sp + 0x48U); v0 = Pes6MatchPlayer_GetTeamRelativeX(a0, a1);
    a0 = (s32) ((u32) sp + 0x40U); v0 = func_0030F290(a0);
    v0 = (s32) 0x457c0000U;
    v0 = v0 | 0x7801;
    f1.f = (*(volatile f32 *) (u32) (sp + 64));
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0032CFCC;
    v0 = (s32) 0xc5d20000U;
    v0 = v0 | 0x6400;
    f1.f = (*(volatile f32 *) (u32) (sp + 72));
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_0032CFCC;
    v0 = 1;
    v1 = (s32) 0x330000U;
    v1 = (s32) ((u32) v1 + 0xffffce60U);
    (*(volatile u32 *) (u32) (s1 + 64)) = (u32) v0;
    (*(volatile u32 *) (u32) (s1 + 76)) = (u32) v1; goto L_0032CFD0;
L_0032CFC4:;
    v0 = (s32) ((u32) v0 + 0xffffce60U);
    (*(volatile u32 *) (u32) (s1 + 76)) = (u32) v0;
L_0032CFCC:;
    v0 = 1;
L_0032CFD0:;
    return v0;
}
