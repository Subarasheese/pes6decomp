/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Job_CopyPayloadOut(s32, s32, s32);
s32 Pes6Job_Create(s32, s32, s32);
void Pes6Job_SetField4(s32, s32);
void Pes6MatchPlayer_GetTeamRelativeXZ(s32, s32, s32);
s32 func_0030F240(s32);
s32 func_0030FE30(s32, s32);
s32 func_00333600(s32);
s32 func_003395B0(s32);
s32 func_00340880(f32, f32);
s32 func_00340BF0(f32, f32);
s32 func_00340C80(f32);
s32 func_00341090(s32);
s32 func_00341910(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00351D70(s32);

s32 func_00344BA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    a0 = 4;
    v0 = func_00333600(a0);
    if (v0 == 0) { a0 = (s32) ((u32) sp + 0x6fU); goto L_00344BD8; }
    v0 = 0; goto L_00344C7C;
L_00344BD8:;
    v0 = func_0030F240(a0);
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0x60U); goto L_00344BF0; }
    v0 = 0; goto L_00344C7C;
L_00344BF0:;
    a1 = 0; v0 = func_0030FE30(a0, a1);
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (sp + 96)); goto L_00344C08; }
    v0 = 0; goto L_00344C7C;
L_00344C08:;
    v0 = func_00341090(a0);
    if (v0 == 0) { a2 = (*(volatile u8 *) (u32) (sp + 111)); goto L_00344C20; }
    v0 = 0; goto L_00344C7C;
L_00344C20:;
    a0 = (s32) ((u32) sp + 0x68U);
    a1 = (s32) ((u32) sp + 0x64U); Pes6MatchPlayer_GetTeamRelativeXZ(a0, a1, a2);
    f13.f = (*(volatile f32 *) (u32) (sp + 100));
    f12.f = (*(volatile f32 *) (u32) (sp + 104)); v0 = func_00340880(f12.f, f13.f);
    if (v0 != 0) { a0 = 0; goto L_00344C48; }
    v0 = 0; goto L_00344C7C;
L_00344C48:;
    a1 = 5;
    a2 = 10; v0 = func_00341910(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) { v0 = 1; goto L_00344C7C; }
    f13.f = (*(volatile f32 *) (u32) (sp + 100));
    f12.f = (*(volatile f32 *) (u32) (sp + 104)); v0 = func_00340BF0(f12.f, f13.f);
    if (v0 != 0) goto L_00344C78;
    v0 = 0; goto L_00344C7C;
L_00344C78:;
    v0 = 1;
L_00344C7C:;
    if (v0 != 0) { (*(volatile u32 *) (u32) (s3 + 44)) = (u32) 0; goto L_00344C8C; }
    v0 = 0; goto L_00344D38;
L_00344C8C:;
    (*(volatile u32 *) (u32) (s3 + 48)) = (u32) 0;
    (*(volatile u32 *) (u32) (s3 + 52)) = (u32) 0;
    s2 = (*(volatile s32 *) (u32) (s3 + 72));
    a0 = (*(volatile s32 *) (u32) (s3 + 60)); v0 = func_003395B0(a0);
    s1 = v0;
    s0 = (*(volatile s32 *) (u32) (s3 + 56));
    v0 = (s32) 0x40a00000U;
    f12.i = (s32) v0;
    s4 = (s32) ((u32) s1 - (u32) s0); v0 = func_00340C80(f12.f);
    at = s4 < v0;
    if (at == 0) { a2 = (*(volatile s32 *) (u32) (s3 + 8)); goto L_00344CD8; }
    v0 = (s32) 0x8fff0000U;
    v0 = v0 | 0xffff;
    if (s0 != v0) { a2 = (*(volatile u8 *) (u32) (s2 + 120)); goto L_00344D04; }
    a2 = (*(volatile s32 *) (u32) (s3 + 8));
L_00344CD8:;
    v0 = (s32) 0x80000000U;
    a1 = (s32) 0x340000U;
    a3 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0x4410U);
    a0 = v0 | 0x16;
    a3 = (s32) ((u32) a3 + 0x61a8U); v0 = Pes6Job_Create(a0, a1, a2);
    a0 = v0;
    a1 = s3; Pes6Job_CopyPayloadOut(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (s2 + 120));
L_00344D04:;
    a0 = (s32) ((u32) s2 + 0x64U);
    a1 = (s32) ((u32) s2 + 0x68U); Pes6MatchPlayer_GetTeamRelativeXZ(a0, a1, a2);
    a0 = s2;
    (*(volatile u32 *) (u32) (s3 + 56)) = (u32) s1; func_00351D70(a0);
    a1 = (s32) 0x340000U;
    a2 = (s32) 0x3e0000U;
    a0 = s3;
    a1 = (s32) ((u32) a1 + 0x48f0U);
    a2 = (s32) ((u32) a2 + 0x61a8U); Pes6Job_SetField4(a0, a1);
    v0 = 1;
L_00344D38:;
    return v0;
}
