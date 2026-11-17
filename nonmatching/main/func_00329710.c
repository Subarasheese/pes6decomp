/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Ball_CopyPosition(s32);
s32 Pes6Job_CopyPayloadOut(s32, s32, s32);
s32 Pes6Job_Create(s32, s32, s32);
s32 Pes6Job_SetArg(s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 Pes6Job_SetField4(s32, s32);
s32 Pes6MatchPlayer_GetTeamRelativeXZ(s32, s32, s32);
f32 func_0030EBB0(s32, s32, f32);
s32 func_00333600(s32);
s32 func_00340880(f32, f32);
s32 func_003411D0(s32);
s32 func_00341910(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00351CF0(s32);

s32 func_00329710(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = 0;
    s1 = a0;
    s0 = (*(volatile s32 *) (u32) (a0 + 60));
    a0 = 4; v0 = func_00333600(a0);
    s2 = s2 | v0;
    a0 = 6; v0 = func_00333600(a0);
    s2 = s2 | v0;
    a0 = 5; v0 = func_00333600(a0);
    s2 = s2 | v0;
    a0 = (s32) ((u32) sp + 0x50U); v0 = Pes6Ball_CopyPosition(a0);
    a0 = (*(volatile u8 *) (u32) (s0 + 120));
    f12.f = (*(volatile f32 *) (u32) (sp + 80));
    a1 = 1; f0.f = func_0030EBB0(a0, a1, f12.f);
    a0 = (*(volatile u8 *) (u32) (s0 + 120));
    f12.f = (*(volatile f32 *) (u32) (sp + 88));
    f20.i = f0.i;
    a1 = 1; f0.f = func_0030EBB0(a0, a1, f12.f);
    f12.i = f20.i;
    f13.i = f0.i; v0 = func_00340880(f12.f, f13.f);
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s0 + 8)); goto L_003297A4; }
    a0 = s0; v0 = func_00351CF0(a0);
    v0 = (*(volatile u8 *) (u32) (s0 + 8));
L_003297A4:;
    if (v0 != 0) goto L_003297BC;
    if (s2 != 0) goto L_003297BC;
    v0 = 0; goto L_0032991C;
L_003297BC:;
    if (s2 != 0) { a0 = 1; goto L_0032985C; }
    v1 = (*(volatile u8 *) (u32) (s0 + 120));
    v0 = (s32) 0x2e8b0000U;
    a2 = v0 | 0xa2e9;
    v0 = (*(volatile u8 *) (u32) (s0 + 184));
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) v1 >> 31);
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    a0 = hi;
    v1 = (s32) ((u32) v0 >> 31);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = (s32) a0 >> 1;
    a0 = (s32) ((u32) v0 + (u32) a1);
    v0 = hi;
    v0 = (s32) v0 >> 1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    if (a0 != v0) goto L_00329858;
    v1 = (*(volatile u8 *) (u32) (s0 + 14));
    v0 = (s32) 0x80000000U;
    a0 = v0 | 0xe;
    a1 = (s32) 0x330000U;
    a3 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0xffff8e00U);
    v0 = (s32) ((u32) v1 << 2);
    a2 = 5;
    v1 = (s32) ((u32) v0 + (u32) s0);
    a3 = (s32) ((u32) a3 + 0x17b0U);
    v0 = (*(volatile s32 *) (u32) (v1 + 788));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 788)) = (u32) v0; v0 = Pes6Job_Create(a0, a1, a2);
    a0 = v0;
    a1 = s1; v0 = Pes6Job_CopyPayloadOut(a0, a1, a2);
    a0 = s1; goto L_00329910;
L_00329858:;
    a0 = 1;
L_0032985C:;
    a1 = 5;
    a2 = 10; v0 = func_00341910(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_003298A4;
    v0 = (s32) 0x80000000U;
    a1 = (s32) 0x330000U;
    a3 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0xffff8a70U);
    a0 = v0 | 0xe;
    a2 = 5;
    a3 = (s32) ((u32) a3 + 0x17b0U); v0 = Pes6Job_Create(a0, a1, a2);
    a0 = v0;
    a1 = s1; v0 = Pes6Job_CopyPayloadOut(a0, a1, a2);
    goto L_0032990C;
L_003298A4:;
    a1 = (s32) 0x330000U;
    a2 = (s32) 0x3e0000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0xffff9560U);
    a2 = (s32) ((u32) a2 + 0x17b0U); v0 = Pes6Job_SetField4(a0, a1);
    a2 = (*(volatile s32 *) (u32) (s1 + 40));
    a0 = s1;
    a1 = 0; v0 = Pes6Job_SetArg(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (s0 + 184));
    a0 = s1;
    a1 = 1; v0 = Pes6Job_SetArg(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0xb4U); v0 = func_003411D0(a0);
    a0 = s1;
    a2 = v0;
    a1 = 2; v0 = Pes6Job_SetArg(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (s0 + 184));
    a0 = (s32) ((u32) s0 + 0x6cU);
    a1 = (s32) ((u32) s0 + 0x70U); v0 = Pes6MatchPlayer_GetTeamRelativeXZ(a0, a1, a2);
    v0 = 0; goto L_0032991C;
L_0032990C:;
    a0 = s1;
L_00329910:;
    v0 = Pes6Job_SetDone(a0);
    v0 = 1;
L_0032991C:;
    return v0;
}
