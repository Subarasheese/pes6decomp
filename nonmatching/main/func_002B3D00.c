/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00851CA0(s64, s64, s64, s64);

void func_002B3D00(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    s0 = a0;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    a0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (a0 + -16108));
    f6.f = (*(volatile f32 *) (u32) (v1 + 56));
    a0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (a0 + -16104));
    (*(volatile f32 *) (u32) (sp + 100)) = f1.f;
    a0 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (a0 + 7140));
    (*(volatile f32 *) (u32) (sp + 104)) = f0.f;
    a0 = (s32) 0x66660000U;
    a0 = a0 | 0x6667;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a3 = (s32) ((u32) a1 >> 31);
    a2 = hi;
    a1 = (*(volatile s32 *) (u32) (gp + -20600));
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a2 = (s32) a2 >> 2;
    a2 = (s32) ((u32) a2 + (u32) a3);
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) a2;
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a1 + (u32) sp);
    f0.f = (*(volatile f32 *) (u32) (a1 + 96));
    { s32 c_ = a0 == 0; f13.f = (f32) f0.i; if (c_) goto L_002B3D8C; }
    a0 = (*(volatile u8 *) (u32) (a0 + 13));
    a0 = (s64) ((u64) a0 << 56);
    a0 = (s64) ((u64) a0 >> 57); goto L_002B3D90;
L_002B3D8C:;
    a0 = 127;
L_002B3D90:;
    a5 = a0 & 0xff;
    a1 = (*(volatile s32 *) (u32) (gp + -32420));
    a0 = (s32) 0x5e0000U;
    a4 = (s32) 0x5e0000U;
    f5.f = (*(volatile f32 *) (u32) (a0 + 11280));
    a4 = (s32) ((u32) a4 + 0x27c0U);
    f20.f = (*(volatile f32 *) (u32) (v1 + 40));
    f0.i = (s32) f12.f;
    a0 = (*(volatile u8 *) (u32) s0);
    f4.f = (*(volatile f32 *) (u32) a1);
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 4);
    a3 = (s32) ((u32) a4 + (u32) v1);
    a1 = (*(volatile s16 *) (u32) (a3 + 42));
    v1 = f0.i;
    a0 = (s64) ((u64) v1 << 48);
    a0 = a0 >> 48;
    { s32 c_ = a0 == a1; a2 = (s32) ((u32) a3 + 0x2aU); if (c_) goto L_002B3F00; }
    at = a0 < a1;
    if (at == 0) goto L_002B3E24;
    fcc = f6.f <= f12.f;
    { s32 c_ = fcc; (*(volatile u16 *) (u32) a2) = (u16) a0; if (c_) goto L_002B3E24; }
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    if (v1 == 0) goto L_002B3F38;
    v1 = (*(volatile u8 *) (u32) v1);
    v1 = v1 & 0x1;
    if (v1 == 0) goto L_002B3F38;
    goto L_002B3F44;
L_002B3E24:;
    v0 = (s32) 0x8b0000U;
    v1 = (s32) ((u32) sp + 0x30U);
    a0 = (*(volatile s16 *) (u32) (v0 + 4308));
    f0.i = (s32) 0;
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) v1;
    v0 = (s32) 0x447a0000U;
    f2.i = (s32) v0;
    f3.i = (s32) a0;
    v0 = (s32) 0x8b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 5104));
    f3.f = (f32) f3.i;
    f1.f = f2.f / f1.f;
    f1.f = f3.f / f1.f;
    fcc = f1.f < f0.f;
    if (fcc) { f1.i = f0.i; goto L_002B3E80; }
    fcc = f1.f <= f13.f;
    if (fcc) goto L_002B3E80;
    f1.i = f13.i;
L_002B3E80:;
    v0 = (s64) ((u64) v1 << 32);
    a0 = (s32) ((u32) sp + 0x6cU);
    v0 = v0 >> 32;
    a1 = 0;
    (*(volatile f32 *) (u32) v0) = f6.f;
    a2 = 2;
    v0 = (*(volatile s32 *) (u32) (sp + 108));
    f0.i = (s32) 0;
    f1.f = f1.f + f13.f;
    acc = f0.f + f12.f;
    f0.f = acc + f4.f * f1.f;
    (*(volatile f32 *) (u32) (v0 + 24)) = f0.f;
    v0 = (*(volatile s32 *) (u32) (sp + 108));
    f1.f = (*(volatile f32 *) (u32) (v0 + 24));
    f0.f = (*(volatile f32 *) (u32) v0);
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (v0 + 4)) = f0.f;
    v0 = (*(volatile s32 *) (u32) (sp + 108));
    f0.f = (*(volatile f32 *) (u32) (v0 + 4));
    (*(volatile f32 *) (u32) (v0 + 28)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (gp + -22140));
    f0.f = (f32) f0.i;
    f12.f = f5.f * f0.f; func_00851CA0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (sp + 108));
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    f0.f = (*(volatile f32 *) (u32) (a0 + 12));
    (*(volatile f32 *) (u32) (v1 + 56)) = f0.f;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile f32 *) (u32) (v1 + 40)) = f20.f; goto L_002B3F40;
L_002B3F00:;
    v1 = a5 & 0xff;
    v0 = 13;
    if (v1 == v0) { v0 = 2; goto L_002B3F18; }
    goto L_002B3E24;
L_002B3F18:;
    (*(volatile u8 *) (u32) (a3 + 44)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 4);
    v0 = (s32) ((u32) a4 + (u32) v0);
    (*(volatile u16 *) (u32) (v0 + 42)) = (u16) a0; goto L_002B3E24;
L_002B3F38:;
    f6.i = f12.i; goto L_002B3E24;
L_002B3F40:;
L_002B3F44:;
    return;
}
