/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F3CA0(s32, s32, s32, s32);
void func_001F3D10(s32, s32);
void func_008BB690(s32, s32, s32, s32);
void func_008DC610(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008DCBA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    v0 = 8;
    v1 = (s32) ((u32) sp + 0x88U);
    s5 = a0;
    if (v1 == 0) goto L_008DCBF0;
L_008DCBD4:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_008DCBD4;
L_008DCBF0:;
    (*(volatile u8 *) (u32) (s5 + 24)) = (u8) 0;
    f1.f = (*(volatile f32 *) (u32) (sp + 136));
    (*(volatile u32 *) (u32) (s5 + 12)) = (u32) 0;
    f0.f = (*(volatile f32 *) (u32) (sp + 140));
    (*(volatile u32 *) (u32) (s5 + 20)) = (u32) 0;
    s4 = 0;
    (*(volatile f32 *) (u32) (s5 + 84)) = f1.f;
    s2 = 2;
    (*(volatile f32 *) (u32) (s5 + 88)) = f0.f;
    s6 = s5;
    (*(volatile f32 *) (u32) (s5 + 180)) = f1.f;
    (*(volatile f32 *) (u32) (s5 + 184)) = f0.f;
    (*(volatile f32 *) (u32) (s5 + 92)) = f1.f;
    (*(volatile f32 *) (u32) (s5 + 96)) = f0.f;
    (*(volatile f32 *) (u32) (s5 + 188)) = f1.f;
    (*(volatile f32 *) (u32) (s5 + 192)) = f0.f;
    (*(volatile f32 *) (u32) (s5 + 100)) = f1.f;
    (*(volatile f32 *) (u32) (s5 + 104)) = f0.f;
    (*(volatile f32 *) (u32) (s5 + 196)) = f1.f;
    (*(volatile f32 *) (u32) (s5 + 200)) = f0.f;
    (*(volatile f32 *) (u32) (s5 + 108)) = f1.f;
    (*(volatile f32 *) (u32) (s5 + 112)) = f0.f;
    (*(volatile f32 *) (u32) (s5 + 204)) = f1.f;
    (*(volatile f32 *) (u32) (s5 + 208)) = f0.f;
    (*(volatile f32 *) (u32) (s5 + 116)) = f1.f;
    (*(volatile f32 *) (u32) (s5 + 120)) = f0.f;
    (*(volatile f32 *) (u32) (s5 + 212)) = f1.f;
    (*(volatile f32 *) (u32) (s5 + 216)) = f0.f;
    (*(volatile f32 *) (u32) (s5 + 124)) = f1.f;
    (*(volatile f32 *) (u32) (s5 + 128)) = f0.f;
    (*(volatile f32 *) (u32) (s5 + 220)) = f1.f;
    (*(volatile f32 *) (u32) (s5 + 224)) = f0.f;
L_008DCC70:;
    s3 = 0;
    s1 = (s32) ((u32) s5 + 0x54U);
    s0 = s6;
L_008DCC80:;
    v1 = (s32) ((u32) s3 + 0x1U);
    v0 = 6;
    a0 = (*(volatile s32 *) (u32) (s0 + 296));
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a3 = s2 & 0xffff;
    a1 = s1;
    v0 = hi;
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) s5);
    a2 = (s32) ((u32) v0 + 0x54U); func_008BB690(a0, a1, a2, a3);
    s3 = (s32) ((u32) s3 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x8U);
    v0 = s3 < 6;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008DCC80; }
    s4 = (s32) ((u32) s4 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x4U);
    v0 = s4 < 2;
    { s32 c_ = v0 != 0; s6 = (s32) ((u32) s6 + 0x18U); if (c_) goto L_008DCC70; }
    a0 = (*(volatile s32 *) (u32) (s5 + 348)); func_001F3CA0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s5 + 348));
    a1 = 0; func_001F3D10(a0, a1);
    a0 = s5;
    a1 = 0; func_008DC610(a0, a1, a2, a3, a4, a5, a6, a7);
    return;
}
