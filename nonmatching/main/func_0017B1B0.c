/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6World_IsActive(void);
f32 func_0011D640(f32);
void func_00141DC0(s32, s32);
void func_00141E10(void);
void func_00141EE0(void);
void func_00141FE0(s32);
void func_0017B6B0(s32, s32, s32, s32, f32);

void func_0017B1B0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;

    v0 = Pes6World_IsActive();
    if (v0 == 0) goto L_0017B2A8;
    a0 = 0;
    a1 = 0; func_00141DC0(a0, a1);
    func_00141EE0();
    func_00141E10();
    a0 = 13; func_00141FE0(a0);
    v0 = (s32) 0x400000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -20240));
    f0.f = (*(volatile f32 *) (u32) (gp + -23340));
    fcc = f0.f == f1.f;
    if (fcc) goto L_0017B298;
    s1 = (s32) 0x390000U;
    s0 = (s32) 0x510000U;
    (*(volatile f32 *) (u32) (gp + -23340)) = f1.f;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0x6f40U);
    s0 = (s32) ((u32) s0 + 0x1000U);
L_0017B224:;
    f1.f = (*(volatile f32 *) (u32) (gp + -23340));
    f0.f = (*(volatile f32 *) (u32) s1);
    f12.f = f1.f * f0.f; f0.f = func_0011D640(f12.f);
    v1 = (s32) 0x3fb80000U;
    v0 = (s32) 0x3f800000U;
    a0 = v1 | 0xaa3b;
    s2 = (s32) ((u32) s2 + 0x1U);
    f2.i = (s32) a0;
    v1 = (s32) 0x41800000U;
    f1.i = (s32) v0;
    s1 = (s32) ((u32) s1 + 0x4U);
    f0.f = f2.f * f0.f;
    v0 = s2 < 2;
    f0.f = f1.f * f0.f;
    f1.i = f0.i ^ (s32) 0x80000000U;
    f0.i = (s32) v1;
    f0.f = f0.f * f1.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 & 0xfff;
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_0017B224; }
    v0 = (s32) 0x140000U;
    v0 = (s32) ((u32) v0 + 0x2dd0U);
    (*(volatile u32 *) (u32) (gp + -23332)) = (u32) v0;
L_0017B298:;
    a0 = 1; func_0017B6B0(a0, a1, a2, a3, f12.f);
    a0 = 2; func_0017B6B0(a0, a1, a2, a3, f12.f);
L_0017B2A8:;
    return;
}
