/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B9C60(s32, s32, s32, s32);
s32 func_001B9CA0(s32, s32, s32, s32, f32, f32);
void func_001F27D0(s32, s32);
void func_001F2810(s32, s32, s32, s32);
s32 func_001F2880(s32, s32, s32, s32);
void func_001F3D10(s32, s32);
void func_001F3D80(s32, s32, s32);
void func_0020E310(s32, s32);
f32 func_002EF2C0(s32);
void func_002EF2E0(s32, s32);
void func_002EF440(s32, s32, s32);
s32 func_002EF520(s32);
void func_002EF6E0(s32);
void func_002EFA70(s32, s32);
f32 func_002F00E0(s32);
s32 func_002F1410(s32);
void func_002F1420(s32, s32);
void func_002F17A0(s32, s32, s32, s32, s32, f32);
void func_002F1820(s32, f32, f32);

void func_002F64D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    v0 = 8;
    v1 = (s32) ((u32) sp + 0x98U);
    s4 = a0;
    { s32 c_ = v1 == 0; s0 = a1; if (c_) goto L_002F6520; }
L_002F6504:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_002F6504;
L_002F6520:;
    a0 = (s32) ((u32) s4 + 0x10U);
    a1 = 1;
    a2 = (s32) ((u32) sp + 0x80U); func_002EF440(a0, a1, a2);
    (*(volatile u32 *) (u32) (sp + 136)) = (u32) 0;
    a1 = (s32) ((u32) sp + 0x80U);
    (*(volatile u32 *) (u32) (sp + 140)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s4 + 168));
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = (s32) ((u32) s4 + 0x10U);
    a1 = (s32) ((u32) sp + 0xa0U); func_002EF2E0(a0, a1);
    a4 = (*(volatile s8 *) (u32) (s4 + 4));
    f12.f = (*(volatile f32 *) (u32) (sp + 160));
    v1 = (s32) ((u32) sp + 0x90U);
    { s32 c_ = v1 == 0; v0 = 8; if (c_) goto L_002F6584; }
L_002F6568:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_002F6568;
L_002F6584:;
    s1 = (s32) ((u32) s0 << 3);
    a2 = (s32) ((u32) sp + 0x90U);
    v0 = (s32) ((u32) s1 + (u32) s4);
    a3 = (s32) ((u32) sp + 0x98U);
    a0 = (*(volatile s32 *) (u32) (v0 + 184));
    a1 = (*(volatile s32 *) (u32) (v0 + 188));
    s0 = (s32) ((u32) v0 + 0xbcU); func_002F17A0(a0, a1, a2, a3, a4, f12.f);
    a0 = (s32) ((u32) s4 + 0x10U);
    a1 = (s32) ((u32) sp + 0x98U); func_002EFA70(a0, a1);
    a0 = (s32) ((u32) s4 + 0x10U); func_002EF6E0(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 176));
    if (a0 == 0) { f1.f = (*(volatile f32 *) (u32) (sp + 164)); goto L_002F65D4; }
    func_001B9C60(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s4 + 176)) = (u32) 0;
    f1.f = (*(volatile f32 *) (u32) (sp + 164));
L_002F65D4:;
    f0.f = (*(volatile f32 *) (u32) (sp + 156));
    fcc = f1.f < f0.f;
    if (!fcc) { a0 = (*(volatile s32 *) (u32) (s4 + 180)); goto L_002F66C0; }
    a0 = (s32) ((u32) s4 + 0x10U); f0.f = func_002F00E0(a0);
    f20.i = f0.i;
    a0 = (s32) ((u32) s4 + 0x10U);
    a1 = 0;
    a2 = (s32) ((u32) sp + 0x70U); func_002EF440(a0, a1, a2);
    v1 = (s32) 0xbf800000U;
    v0 = (s32) 0xc0400000U;
    f0.i = (s32) v1;
    a0 = (s32) ((u32) sp + 0x70U);
    f12.f = f0.f + f20.f;
    f0.i = (s32) v0;
    f13.f = f0.f + f20.f; v0 = func_001B9CA0(a0, a1, a2, a3, f12.f, f13.f);
    (*(volatile u32 *) (u32) (s4 + 176)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s4 + 180));
    if (v0 != 0) { a0 = (s32) ((u32) s4 + 0x10U); goto L_002F6658; }
    a0 = (*(volatile s32 *) (u32) (s4 + 116)); v0 = func_001F2880(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s4 + 180)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_001F27D0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s4 + 180));
    a1 = 1; func_001F3D10(a0, a1);
    a0 = (s32) ((u32) s4 + 0x10U);
L_002F6658:;
    f0.f = func_002EF2C0(a0);
    v0 = (*(volatile s8 *) (u32) (s4 + 5));
    f20.i = f0.i;
    v1 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v1 + (u32) s4);
    v0 = (*(volatile s32 *) (u32) (v0 + 188));
    { s32 c_ = v0 <= 0; s3 = 0; if (c_) goto L_002F66D4; }
    s2 = 0;
L_002F6680:;
    f12.f = (*(volatile f32 *) (u32) (s4 + 8));
    v0 = (s32) ((u32) s4 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) (v0 + 184));
    f13.f = f12.f + f20.f;
    a0 = (s32) ((u32) v0 + (u32) s2); func_002F1820(a0, f12.f, f13.f);
    v0 = (*(volatile s8 *) (u32) (s4 + 5));
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) s4 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) (v0 + 188));
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x24U); if (c_) goto L_002F6680; }
    (*(volatile u32 *) (u32) (s4 + 12)) = (u32) 0; goto L_002F66D8;
L_002F66C0:;
    if (a0 == 0) goto L_002F66D4;
    func_001F2810(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s4 + 180)) = (u32) 0;
L_002F66D4:;
    (*(volatile u32 *) (u32) (s4 + 12)) = (u32) 0;
L_002F66D8:;
    a0 = (s32) ((u32) s4 + 0x10U);
    (*(volatile u32 *) (u32) (s4 + 8)) = (u32) 0; v0 = func_002EF520(a0);
    a0 = 0;
    a1 = (s32) ((u32) sp + 0xacU); func_0020E310(a0, a1);
    v1 = (*(volatile s32 *) (u32) s0);
    { s32 c_ = v1 <= 0; s3 = 0; if (c_) goto L_002F6750; }
    v0 = (s32) ((u32) s4 + (u32) s1);
    s2 = 0;
    s1 = (s32) ((u32) v0 + 0xb8U);
    s0 = (s32) ((u32) v0 + 0xbcU);
L_002F670C:;
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = (s32) ((u32) v0 + (u32) s2); v0 = func_002F1410(a0);
    v1 = 1;
    if (v0 != v1) goto L_002F6738;
    v0 = (*(volatile s32 *) (u32) s1);
    a1 = (s32) ((u32) sp + 0xacU);
    a0 = (s32) ((u32) v0 + (u32) s2); func_002F1420(a0, a1);
L_002F6738:;
    v1 = (*(volatile s32 *) (u32) s0);
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < v1;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x24U); if (c_) goto L_002F670C; }
L_002F6750:;
    return;
}
