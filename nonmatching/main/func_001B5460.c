/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DEF70(s32, f32);
void func_001DF250(s32, s32);
void func_001DF460(s32, s32);
void func_001DF750(s32, f32, f32);
s32 func_001DFA30(s32, s32, s32);
f32 func_001E4E00(s32, s32, s32, s32);
f32 func_001E4E30(s32, s32, s32, s32);
void func_0020E310(s32, s32);

void func_001B5460(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    s32 fcc = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    a1 = 0;
    s3 = a0;
    s2 = (s32) 0x520000U;
    a0 = 23;
    s0 = (s32) 0x520000U;
    a2 = s3;
    s0 = (s32) ((u32) s0 + 0x28f0U);
    s2 = (s32) ((u32) s2 + 0x2910U); v0 = func_001DFA30(a0, a1, a2);
    s1 = v0;
    v1 = (s32) ((u32) sp + 0x60U);
    { s32 c_ = v1 == 0; v0 = 16; if (c_) goto L_001B54D8; }
L_001B54BC:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001B54BC;
L_001B54D8:;
    a0 = s1; f0.f = func_001E4E30(a0, a1, a2, a3);
    v0 = (s32) 0x3f0000U;
    a0 = s1;
    v1 = (*(volatile s16 *) (u32) (v0 + 30612));
    f23.i = f0.i;
    v0 = (s32) 0x40000000U;
    f1.i = (s32) v0;
    v0 = (s32) 0x41900000U;
    f0.i = (s32) v0;
    v0 = (s32) ((u32) 0 - (u32) v1);
    f2.i = (s32) v0;
    f2.f = (f32) f2.i;
    f1.f = f2.f / f1.f;
    f22.f = f0.f + f1.f; f0.f = func_001E4E00(a0, a1, a2, a3);
    v0 = (s32) 0x520000U;
    v1 = (s32) 0x40800000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 10596));
    a0 = s1;
    f1.i = (s32) v1;
    f12.i = f22.i;
    f20.f = f1.f + f0.f;
    f13.i = f20.i; func_001DF750(a0, f12.f, f13.f);
    v0 = (s32) 0x520000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 10592));
    v0 = v0 & 0x1;
    if (v0 == 0) { f1.f = (*(volatile f32 *) (u32) (s0 + 8)); goto L_001B5560; }
    f1.f = (*(volatile f32 *) (u32) (s0 + 108));
L_001B5560:;
    v0 = (s32) 0x44030000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    f21.f = f0.f + f1.f;
    f0.i = (s32) 0;
    fcc = f21.f < f0.f;
    if (!fcc) { v1 = (*(volatile s32 *) (u32) (gp + -23160)); goto L_001B5590; }
    f21.i = f0.i;
    v1 = (*(volatile s32 *) (u32) (gp + -23160));
L_001B5590:;
    v0 = 1;
    if (v1 != v0) { a0 = s1; goto L_001B55B4; }
    f1.f = (*(volatile f32 *) (u32) (s0 + 108));
    v0 = (s32) 0x42c80000U;
    f0.i = (s32) v0;
    f21.f = f0.f + f1.f;
    a0 = s1;
L_001B55B4:;
    f12.i = f21.i; func_001DEF70(a0, f12.f);
    v0 = (s32) 0x3f0000U;
    v1 = (s32) 0x42100000U;
    v0 = (*(volatile s16 *) (u32) (v0 + 30612));
    f0.i = (s32) v1;
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f0.f = f1.f - f0.f;
    fcc = f23.f <= f0.f;
    if (fcc) { a0 = s1; goto L_001B5640; }
    a1 = (s32) 0x3a0000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0xffff8370U); func_001DF250(a0, a1);
    a0 = s1; f0.f = func_001E4E30(a0, a1, a2, a3);
    v0 = (s32) 0x3f0000U;
    v1 = (s32) 0x42100000U;
    v0 = (*(volatile s16 *) (u32) (v0 + 30612));
    f1.i = (s32) v1;
    f2.i = (s32) v0;
    f2.f = (f32) f2.i;
    f1.f = f2.f - f1.f;
    fcc = f0.f <= f1.f;
    if (fcc) goto L_001B563C;
    a1 = (s32) 0x520000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0x28e0U); func_001DF250(a0, a1);
L_001B563C:;
    a0 = s1;
L_001B5640:;
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) s1; f0.f = func_001E4E30(a0, a1, a2, a3);
    a0 = s1;
    (*(volatile f32 *) (u32) (s2 + 24)) = f0.f; f0.f = func_001E4E30(a0, a1, a2, a3);
    v0 = (s32) 0x3f0000U;
    v1 = (s32) 0x42100000U;
    v0 = (*(volatile s16 *) (u32) (v0 + 30612));
    f1.i = (s32) v1;
    f2.i = (s32) v0;
    f2.f = (f32) f2.i;
    f1.f = f2.f - f1.f;
    fcc = f0.f <= f1.f;
    if (fcc) { (*(volatile u32 *) (u32) (s2 + 16)) = (u32) 0; goto L_001B56F8; }
    v1 = (s32) ((u32) sp + 0x70U);
    { s32 c_ = v1 == 0; v0 = 12; if (c_) goto L_001B56A8; }
L_001B568C:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001B568C;
L_001B56A8:;
    f1.f = f22.f + f23.f;
    v1 = (s32) 0x41900000U;
    v0 = (s32) 0x42800000U;
    a2 = s3;
    a0 = 23;
    a1 = (s32) ((u32) sp + 0x70U);
    f0.i = (s32) v1;
    f1.f = f0.f + f1.f;
    f0.i = (s32) v0;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 112)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f20.f; v0 = func_001DFA30(a0, a1, a2);
    s0 = v0;
    f12.i = f21.i;
    a0 = s0; func_001DEF70(a0, f12.f);
    (*(volatile u32 *) (u32) (s2 + 16)) = (u32) s0;
L_001B56F8:;
    a0 = (*(volatile s32 *) (u32) (s2 + 52));
    v0 = (s32) ((u32) s2 + 0xcU);
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) v0;
    a1 = (s32) ((u32) gp + 0xffffa58cU);
    (*(volatile u32 *) (u32) (s2 + 20)) = (u32) s2; func_0020E310(a0, a1);
    s0 = 0;
L_001B5714:;
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    if (a0 == 0) goto L_001B5728;
    a1 = (s32) ((u32) gp + 0xffffa58cU); func_001DF460(a0, a1);
L_001B5728:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 2;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0xcU); if (c_) goto L_001B5714; }
    return;
}
