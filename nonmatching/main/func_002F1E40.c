/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF860(s32, s32);
void func_001F3D80(s32, s32, s32);
void func_002F21C0(s32, s32, s32, f32);
void func_002F2310(s32, s32, s32, s32, f32);
void D_002F1E40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12);

void func_002F1E40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    s7 = a0;
    s6 = a5;
    s5 = a1;
    s4 = a2;
    at = s4 < s5;
    s3 = a3;
    s2 = a4;
    s1 = s5;
    { s32 c_ = at != 0; f21.i = f12.i; if (c_) goto L_002F1F28; }
    v1 = (s32) ((u32) s5 << 3);
    v1 = (s32) ((u32) v1 + (u32) s5);
    v1 = (s32) ((u32) v1 << 2);
    s0 = (s32) ((u32) s7 + (u32) v1);
L_002F1EA8:;
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = 2;
    if (a0 == v1) goto L_002F1EF0;
    v1 = 1;
    if (a0 == v1) goto L_002F1ED0;
    goto L_002F1F08;
L_002F1ED0:;
    a0 = s0;
    f12.i = f21.i;
    a1 = s3;
    a2 = s2;
    a3 = s6; func_002F2310(a0, a1, a2, a3, f12.f);
    goto L_002F1F08;
L_002F1EF0:;
    a0 = s0;
    f12.i = f21.i;
    a1 = s3;
    a2 = s2; func_002F21C0(a0, a1, a2, f12.f);
L_002F1F08:;
    v1 = (*(volatile u8 *) (u32) (s0 + 3));
    v1 = v1 & 0x10;
    if (v1 != 0) goto L_002F1F28;
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s4 < s1;
    { s32 c_ = at == 0; s0 = (s32) ((u32) s0 + 0x24U); if (c_) goto L_002F1EA8; }
L_002F1F28:;
    at = s4 < s5;
    f20.i = (s32) 0;
    if (at != 0) goto L_002F2158;
    v1 = (s32) ((u32) s5 << 3);
    v1 = (s32) ((u32) v1 + (u32) s5);
    v1 = (s32) ((u32) v1 << 2);
    s0 = (s32) ((u32) s7 + (u32) v1);
L_002F1F48:;
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = 2;
    if (a0 == v1) goto L_002F2050;
    v1 = 1;
    if (a0 == v1) goto L_002F1F70;
    goto L_002F2110;
L_002F1F70:;
    v1 = (*(volatile u8 *) (u32) (s0 + 3));
    v0 = 3;
    f0.f = (*(volatile f32 *) (u32) (s3 + 4));
    a0 = v1 & 0xf;
    { s32 c_ = a0 == v0; f1.f = (*(volatile f32 *) (u32) (s2 + 4)); if (c_) goto L_002F1FF0; }
    if (a0 == 0) goto L_002F1FF0;
    f2.f = f1.f - f0.f;
    v0 = (s32) 0x3f000000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 28));
    f0.i = (s32) v0;
    f1.f = f2.f - f1.f;
    { s32 c_ = a0 < 0; f3.f = f0.f * f1.f; if (c_) goto L_002F1FBC; }
    f0.i = (s32) a0;
    f2.f = (f32) f0.i; goto L_002F1FD8;
L_002F1FBC:;
    v1 = (s32) ((u32) a0 >> 1);
    v0 = a0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_002F1FD8:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 20));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f2.f * f3.f;
    (*(volatile f32 *) (u32) (s0 + 20)) = f0.f;
L_002F1FF0:;
    a1 = (s32) ((u32) sp + 0xb0U);
    f0.f = (*(volatile f32 *) (u32) (s0 + 16));
    (*(volatile f32 *) (u32) (sp + 176)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (s0 + 20));
    f0.f = f21.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 180)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 184)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 28));
    (*(volatile f32 *) (u32) (sp + 188)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a2 = 0; func_001F3D80(a0, a1, a2);
    f2.f = (*(volatile f32 *) (u32) (s0 + 20));
    v1 = (s32) 0x40c00000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 28));
    f0.i = (s32) v1;
    f1.f = f2.f + f1.f;
    f0.f = f0.f + f1.f;
    fcc = f20.f < f0.f;
    if (!fcc) goto L_002F2110;
    f20.i = f0.i; goto L_002F2110;
L_002F2050:;
    v1 = (*(volatile u8 *) (u32) (s0 + 3));
    v0 = 3;
    f0.f = (*(volatile f32 *) (u32) (s3 + 4));
    a0 = v1 & 0xf;
    { s32 c_ = a0 == v0; f1.f = (*(volatile f32 *) (u32) (s2 + 4)); if (c_) goto L_002F20D0; }
    if (a0 == 0) goto L_002F20D0;
    f2.f = f1.f - f0.f;
    v0 = (s32) 0x3f000000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 28));
    f0.i = (s32) v0;
    f1.f = f2.f - f1.f;
    { s32 c_ = a0 < 0; f3.f = f0.f * f1.f; if (c_) goto L_002F209C; }
    f0.i = (s32) a0;
    f2.f = (f32) f0.i; goto L_002F20B8;
L_002F209C:;
    v1 = (s32) ((u32) a0 >> 1);
    v0 = a0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_002F20B8:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 20));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f2.f * f3.f;
    (*(volatile f32 *) (u32) (s0 + 20)) = f0.f;
L_002F20D0:;
    f0.f = (*(volatile f32 *) (u32) (s0 + 16));
    (*(volatile f32 *) (u32) (sp + 160)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s0 + 20));
    (*(volatile f32 *) (u32) (sp + 164)) = f0.f;
    (*(volatile u32 *) (u32) (sp + 168)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 172)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = (s32) ((u32) sp + 0xa0U); func_001EF860(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (s0 + 20));
    f0.f = (*(volatile f32 *) (u32) (s0 + 28));
    f0.f = f1.f + f0.f;
    fcc = f20.f < f0.f;
    if (!fcc) goto L_002F2110;
    f20.i = f0.i;
L_002F2110:;
    v1 = (*(volatile u8 *) (u32) (s0 + 3));
    v1 = v1 & 0x10;
    if (v1 == 0) { s5 = (s32) ((u32) s5 + 0x1U); goto L_002F214C; }
    at = s5 < s4;
    if (at == 0) goto L_002F2158;
    (*(volatile u32 *) (u32) s3) = (u32) 0;
    f0.f = (*(volatile f32 *) (u32) (s2 + 4));
    fcc = f0.f < f20.f;
    if (!fcc) { (*(volatile f32 *) (u32) (s3 + 4)) = f0.f; goto L_002F2158; }
    (*(volatile f32 *) (u32) (s2 + 4)) = f20.f;
    (*(volatile f32 *) (u32) (s3 + 4)) = f20.f; goto L_002F2158;
L_002F214C:;
    at = s4 < s5;
    { s32 c_ = at == 0; s0 = (s32) ((u32) s0 + 0x24U); if (c_) goto L_002F1F48; }
L_002F2158:;
    at = s5 < s4;
    if (at == 0) { ; goto L_002F2188; }
    a1 = (s32) ((u32) s5 + 0x1U);
    a0 = s7;
    a2 = s4;
    a3 = s3;
    f12.i = f21.i;
    a4 = s2;
    a5 = s6; D_002F1E40(a0, a1, a2, a3, a4, a5, f12.f);
L_002F2188:;
    return;
}
