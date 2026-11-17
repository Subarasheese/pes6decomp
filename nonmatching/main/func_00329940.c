/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 Pes6MatchPlayer_GetTeamRelativeXZ(s32, s32, s32);
s32 func_0030E4E0(s32, s32);
s32 func_0030E5C0(s32, s32);
s32 func_003139C0(s32, s32);
s32 func_00338940(s32);
s32 func_00340590(f32, f32);
s32 func_003407B0(s32, s32, s32, s32, f32, f32);
s32 func_00340880(f32, f32);

s32 func_00329940(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    a1 = (s32) ((u32) sp + 0x84U);
    s4 = a0;
    s1 = (*(volatile s32 *) (u32) (a0 + 60));
    s2 = (*(volatile u8 *) (u32) (s1 + 120));
    a0 = (s32) ((u32) sp + 0x88U);
    a2 = s2; v0 = Pes6MatchPlayer_GetTeamRelativeXZ(a0, a1, a2);
    f12.f = (*(volatile f32 *) (u32) (sp + 136));
    f13.f = (*(volatile f32 *) (u32) (sp + 132));
    s0 = 1; v0 = func_00340590(f12.f, f13.f);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    f12.f = (*(volatile f32 *) (u32) (sp + 136));
    f13.f = (*(volatile f32 *) (u32) (sp + 132));
    s0 = s0 & v0; v0 = func_00340880(f12.f, f13.f);
    v0 = (u64) 0 < (u64) v0;
    a0 = s2;
    v0 = v0 ^ 0x1;
    f12.f = (*(volatile f32 *) (u32) (sp + 136));
    f13.f = (*(volatile f32 *) (u32) (sp + 132));
    s0 = s0 & v0; v0 = func_003407B0(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (u64) 0 < (u64) v0;
    s3 = (s32) ((u32) sp + 0x60U);
    v0 = v0 ^ 0x1;
    a0 = s3;
    s0 = s0 & v0;
    a1 = 4;
    a2 = (s32) ((u32) sp + 0x80U); v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s1 + 120));
    a0 = s3; v0 = func_003139C0(a0, a1);
    a2 = s0;
    a0 = s3;
    a1 = 0; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 185));
    v0 = v0 ^ 0x10;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) goto L_00329A18;
    v0 = (*(volatile u8 *) (u32) (s1 + 248));
    v0 = v0 ^ 0x10;
    a2 = (u64) v0 < (u64) (s64) 1;
L_00329A18:;
    if (a2 == 0) { a0 = s3; goto L_00329A34; }
    v1 = (*(volatile u8 *) (u32) (s1 + 248));
    v0 = s2 & 0xff;
    a2 = v1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1;
    a0 = s3;
L_00329A34:;
    a1 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s1 + 120));
    a0 = (s32) ((u32) sp + 0x8fU); v0 = func_0030E5C0(a0, a1);
    a0 = (*(volatile u8 *) (u32) (sp + 143));
    a1 = (s32) ((u32) sp + 0x7cU); v0 = func_0030E4E0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (sp + 124));
    v0 = 10;
    if (v1 == v0) { a2 = 1; goto L_00329A88; }
    v0 = 9;
    if (v1 == v0) goto L_00329A84;
    v0 = 5;
    if (v1 == v0) goto L_00329A84;
    a2 = 0; goto L_00329A88;
L_00329A84:;
    a2 = 1;
L_00329A88:;
    a0 = s3;
    a1 = 2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s3;
    a0 = 7;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) { a0 = s4; goto L_00329AC8; }
    v0 = (s32) 0x80000000U;
    a0 = v0 | 0x11; v0 = func_00338940(a0);
    v0 = (s32) 0x80000000U;
    a0 = v0 | 0xc; v0 = func_00338940(a0);
    a0 = s4;
L_00329AC8:;
    v0 = Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
