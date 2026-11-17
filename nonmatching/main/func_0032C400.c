/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Job_CopyPayloadOut(s32, s32, s32);
s32 Pes6Job_Create(s32, s32, s32);
s32 Pes6Job_GetArg(s32, s32);
s32 Pes6Job_SetArg(s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 Pes6MatchPlayer_GetTeamRelativeXZ(s32, s32, s32);
s32 func_0030F240(s32);
s32 func_00332FA0(s32, s32, s32, s32, s32, s32, s32);
s32 func_003333C0(void);
s32 func_003333F0(s32);
s32 func_00340680(s32, s32, s32, s32, f32, f32, f32);
s32 func_003407B0(s32, s32, s32, s32, f32, f32);
s32 func_00340C80(f32);

s32 func_0032C400(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 fa12, f32 fa13, f32 fa14) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f14 = { fa14 };
    union { f32 f; s32 i; } f20 = { 0 };
    union { f32 f; s32 i; } f21 = { 0 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    v1 = (*(volatile s32 *) (u32) (a0 + 60));
    v0 = (*(volatile u8 *) (u32) (v1 + 9));
    { s32 c_ = v0 == 0; s0 = (s32) ((u32) v1 + 0x74U); if (c_) goto L_0032C588; }
    v0 = (*(volatile u8 *) (u32) (v1 + 8));
    if (v0 == 0) { v0 = (s32) 0x40000000U; goto L_0032C45C; }
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = 4;
    if (v1 == v0) goto L_0032C458;
    v0 = 5;
    if (v1 != v0) { a0 = s1; goto L_0032C58C; }
L_0032C458:;
    v0 = (s32) 0x40000000U;
L_0032C45C:;
    f12.i = (s32) v0;
    s2 = (*(volatile s32 *) (u32) (s1 + 40)); v0 = func_00340C80(f12.f);
    at = s2 < v0;
    if (at == 0) goto L_0032C588;
    v0 = func_00332FA0(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) { a2 = (*(volatile u8 *) (u32) (s0 + 4)); goto L_0032C48C; }
    v0 = 0; goto L_0032C598;
L_0032C48C:;
    a0 = (s32) ((u32) sp + 0x58U);
    a1 = (s32) ((u32) sp + 0x54U); v0 = Pes6MatchPlayer_GetTeamRelativeXZ(a0, a1, a2);
    s0 = (*(volatile u8 *) (u32) (s0 + 4));
    f20.f = (*(volatile f32 *) (u32) (sp + 84));
    f21.f = (*(volatile f32 *) (u32) (sp + 88));
    a0 = (s32) ((u32) sp + 0x5fU); v0 = func_0030F240(a0);
    if (v0 != 0) { v0 = (s32) 0x45700000U; goto L_0032C4BC; }
    v0 = 0; goto L_0032C534;
L_0032C4BC:;
    a0 = 3;
    f12.i = f21.i;
    f13.i = (s32) v0;
    f14.i = f20.i; v0 = func_00340680(a0, a1, a2, a3, f12.f, f13.f, f14.f);
    if (v0 != 0) { a0 = s0; goto L_0032C4E0; }
    v0 = 0; goto L_0032C534;
L_0032C4E0:;
    f12.i = f21.i;
    f13.i = f20.i; v0 = func_003407B0(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) { a0 = 24; goto L_0032C4FC; }
    v0 = 0; goto L_0032C534;
L_0032C4FC:;
    v0 = func_003333F0(a0);
    if (v0 == 0) goto L_0032C51C;
    a0 = 26; v0 = func_003333F0(a0);
    if (v0 != 0) { v0 = 1; goto L_0032C534; }
L_0032C51C:;
    v0 = func_003333C0();
    v1 = 10;
    if (v0 != v1) { v0 = 0; goto L_0032C534; }
    v0 = 1;
L_0032C534:;
    if (v0 == 0) goto L_0032C588;
    a2 = (*(volatile s32 *) (u32) (s1 + 8));
    v0 = (s32) 0x80000000U;
    a1 = (s32) 0x330000U;
    a3 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0xffffaf40U);
    a0 = v0 | 0x64;
    a3 = (s32) ((u32) a3 + 0x17b0U); v0 = Pes6Job_Create(a0, a1, a2);
    s0 = v0;
    a0 = s1;
    a1 = 0; v0 = Pes6Job_GetArg(a0, a1);
    a2 = v0;
    a0 = s0;
    a1 = 0; v0 = Pes6Job_SetArg(a0, a1, a2);
    a0 = s0;
    a1 = s1; v0 = Pes6Job_CopyPayloadOut(a0, a1, a2);
L_0032C588:;
    a0 = s1;
L_0032C58C:;
    v0 = Pes6Job_SetDone(a0);
    v0 = 1;
L_0032C598:;
    return v0;
}
