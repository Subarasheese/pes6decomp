/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Job_CopyPayloadOut(s32, s32, s32);
s32 Pes6Job_Create(s32, s32, s32);
s32 Pes6Job_SetArg(s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 Pes6MatchPlayer_GetTeamRelativeXZ(s32, s32, s32);
s32 func_0030F380(void);
s32 func_00333600(s32);
s32 func_00338990(s32, s32, s32);
s32 func_00340C80(f32);
s32 func_003413D0(s32, s32, s32, s32);

s32 func_00329560(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = (*(volatile s32 *) (u32) (a0 + 60));
    s0 = 0;
    a0 = 4; v0 = func_00333600(a0);
    s0 = s0 | v0;
    a0 = 6; v0 = func_00333600(a0);
    s0 = s0 | v0;
    a0 = 5; v0 = func_00333600(a0);
    v0 = s0 | v0;
    if (v0 != 0) { a0 = s2; goto L_003296E0; }
    v0 = func_0030F380();
    if (v0 != 0) goto L_003296DC;
    v1 = (*(volatile s32 *) (u32) (s2 + 40));
    a0 = (s32) ((u32) sp + 0x58U);
    v0 = (*(volatile s32 *) (u32) (s2 + 44));
    a1 = (s32) ((u32) sp + 0x5cU);
    a2 = (*(volatile u8 *) (u32) (s2 + 48));
    s0 = (s32) ((u32) v1 - (u32) v0); v0 = Pes6MatchPlayer_GetTeamRelativeXZ(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (s1 + 112));
    v0 = (s32) 0x4a100000U;
    f0.f = (*(volatile f32 *) (u32) (sp + 92));
    f3.f = (*(volatile f32 *) (u32) (s1 + 108));
    f2.f = (*(volatile f32 *) (u32) (sp + 88));
    f0.f = f1.f - f0.f;
    acc = f0.f * f0.f;
    f2.f = f3.f - f2.f;
    f1.f = acc + f2.f * f2.f;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) { v0 = (s32) 0x40000000U; goto L_00329624; }
    a0 = s2; v0 = Pes6Job_SetDone(a0);
    v0 = 0; goto L_003296EC;
L_00329624:;
    f12.i = (s32) v0;
    v0 = func_00340C80(f12.f);
    s3 = v0 < s0;
    v0 = (*(volatile u8 *) (u32) (s1 + 8));
    if (v0 != 0) { a0 = (s32) ((u32) s1 + 0x74U); goto L_00329654; }
    if (s3 != 0) goto L_00329650;
    v0 = 0; goto L_003296EC;
L_00329650:;
    a0 = (s32) ((u32) s1 + 0x74U);
L_00329654:;
    s1 = 0; v0 = func_003413D0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00329684;
    v0 = (s32) 0x3f000000U;
    f12.i = (s32) v0;
    v0 = func_00340C80(f12.f);
    at = s0 < v0;
    if (at == 0) goto L_00329684;
    s1 = 2;
L_00329684:;
    if (s3 == 0) { a2 = (*(volatile s32 *) (u32) (s2 + 8)); goto L_00329694; }
    s1 = 1;
    a2 = (*(volatile s32 *) (u32) (s2 + 8));
L_00329694:;
    v0 = (s32) 0x80000000U;
    a1 = (s32) 0x330000U;
    a3 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0xffff9420U);
    a0 = v0 | 0xe;
    a3 = (s32) ((u32) a3 + 0x17b0U); v0 = Pes6Job_Create(a0, a1, a2);
    s0 = v0;
    a1 = s2;
    a0 = s0; v0 = func_00338990(a0, a1, a2);
    a2 = s1;
    a0 = s0;
    a1 = 3; v0 = Pes6Job_SetArg(a0, a1, a2);
    a0 = s0;
    a1 = s2; v0 = Pes6Job_CopyPayloadOut(a0, a1, a2);
L_003296DC:;
    a0 = s2;
L_003296E0:;
    v0 = Pes6Job_SetDone(a0);
    v0 = 1;
L_003296EC:;
    return v0;
}
