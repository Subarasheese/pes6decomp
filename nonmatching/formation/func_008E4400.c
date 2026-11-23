/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F1860(s32, s32);
void func_001F18D0(s32, s32);
void func_001F1990(s32, s32, s32, s32);
s32 func_001F1A10(s32, s32, s32, s32, s32, s32);
void func_001F23E0(s32, s32, s32, s32);
void func_001F3D10(s32, s32);
void func_001F3D80(s32, s32, s32);
s32 func_00292D80(s32);
s32 func_00292F00(s32);
s32 func_008B2AB0(s32);
void func_008BB3F0(s32, s32, s32, s32);

void func_008E4400(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    a3 = (s32) 0x8f0000U;
    a3 = (s32) ((u32) a3 + 0xffffc640U);
    a2 = (s32) ((u32) sp + 0x80U);
    a1 = 4;
    s4 = a0;
L_008E4434:;
    a0 = (*(volatile s8 *) (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s8 *) (u32) (a3 + 1));
    (*(volatile u8 *) (u32) a2) = (u8) a0;
    (*(volatile u8 *) (u32) (a2 + 1)) = (u8) v1;
    a3 = (s32) ((u32) a3 + 0x2U);
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x2U); if (c_) goto L_008E4434; }
    v1 = (*(volatile s32 *) (u32) (s4 + 1788));
    { s32 c_ = v1 == 0; s5 = (*(volatile s32 *) (u32) (s4 + 484)); if (c_) goto L_008E45D4; }
    s3 = 0;
    s1 = s4;
    s0 = s4;
L_008E446C:;
    a0 = (*(volatile s32 *) (u32) (s1 + 2240)); func_001F1990(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 2240)) = (u32) 0;
    a1 = (*(volatile s32 *) (u32) (s1 + 1796));
    a0 = (*(volatile s32 *) (u32) (s4 + 1792)); func_001F23E0(a0, a1, a2, a3);
    { s32 c_ = s5 == 0; (*(volatile u32 *) (u32) (s1 + 1796)) = (u32) 0; if (c_) goto L_008E45C0; }
    a0 = (*(volatile u16 *) (u32) s5);
    v1 = 0xffff;
    if (a0 == v1) goto L_008E45C0;
    v0 = (s32) ((u32) s5 + (u32) s3);
    a0 = (*(volatile u8 *) (u32) (v0 + 37)); v0 = func_00292D80(a0);
    a0 = v0; v0 = func_008B2AB0(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 1788));
    a1 = 33;
    a2 = (s32) ((u32) s0 + 0x4U);
    a3 = v0;
    a4 = 2;
    a5 = (s32) ((u32) sp + 0x80U); v0 = func_001F1A10(a0, a1, a2, a3, a4, a5);
    s2 = v0;
    a1 = 1;
    a0 = s2;
    (*(volatile u32 *) (u32) (s1 + 2240)) = (u32) s2; func_001F3D10(a0, a1);
    v1 = (s32) 0x8f0000U;
    v0 = (s32) 0x8f0000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + -14924));
    f1.f = (*(volatile f32 *) (u32) (v0 + -14920));
    v1 = (s32) 0x8f0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -14916));
    v0 = (s32) 0x8f0000U;
    (*(volatile f32 *) (u32) (sp + 116)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 120)) = f1.f;
    v1 = (*(volatile s32 *) (u32) (v0 + -14928));
    (*(volatile f32 *) (u32) (sp + 124)) = f0.f;
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) v1;
    v0 = (s32) 0x42200000U;
    f2.f = (*(volatile f32 *) (u32) (s0 + 4));
    f1.i = (s32) v0;
    v0 = (s32) 0x41000000U;
    f1.f = f2.f - f1.f;
    (*(volatile f32 *) (u32) (sp + 112)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (s0 + 8));
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f;
    { s32 c_ = s2 == 0; (*(volatile f32 *) (u32) (sp + 116)) = f0.f; if (c_) goto L_008E4550; }
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x70U);
    a2 = 0; func_001F3D80(a0, a1, a2);
L_008E4550:;
    v0 = (*(volatile s32 *) (u32) (s4 + 484));
    v1 = (s32) ((u32) v0 + (u32) s3);
    v0 = (*(volatile u8 *) (u32) (v1 + 158));
    if (v0 != 0) goto L_008E4588;
    v0 = (*(volatile u8 *) (u32) (gp + -31270));
    a0 = (*(volatile u8 *) (u32) (gp + -31272));
    v1 = (*(volatile u8 *) (u32) (gp + -31271));
    (*(volatile u8 *) (u32) (sp + 142)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (gp + -31269));
    (*(volatile u8 *) (u32) (sp + 140)) = (u8) a0;
    (*(volatile u8 *) (u32) (sp + 141)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 143)) = (u8) v0; goto L_008E45A8;
L_008E4588:;
    a0 = (*(volatile u8 *) (u32) (v1 + 37)); v0 = func_00292F00(a0);
    a1 = v0;
    a0 = (s32) ((u32) sp + 0x8cU);
    a2 = 0;
    a3 = 1; func_008BB3F0(a0, a1, a2, a3);
L_008E45A8:;
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x8cU); func_001F18D0(a0, a1);
    a0 = s2;
    a1 = 1; func_001F1860(a0, a1);
L_008E45C0:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 11;
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x8U); if (c_) goto L_008E446C; }
L_008E45D4:;
    return;
}
