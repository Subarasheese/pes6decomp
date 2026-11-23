/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Random_Below(s32);
s32 func_009177C0(s32);

void func_00904B80(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    v1 = a0 & 0xff;
    s4 = 0;
    s5 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    s6 = (s32) ((u32) v0 + (u32) v1);
    v0 = s4 & 0xff;
L_00904BD0:;
    v0 = (s32) ((u32) v0 + (u32) s6);
    s0 = v0 & 0xff;
    a0 = s0; v0 = func_009177C0(a0);
    s3 = v0;
    if (s3 == 0) goto L_00904EE0;
    a2 = (s32) 0x930000U;
    a0 = (*(volatile s32 *) (u32) (s3 + 4));
    a2 = (s32) ((u32) a2 + 0xfffff0a0U);
    v1 = (s32) ((u32) a2 + (u32) s0);
    s2 = (s32) ((u32) v1 + 0x128U);
    v1 = (*(volatile u8 *) (u32) (v1 + 296));
    f20.f = (*(volatile f32 *) (u32) (a0 + 36));
    at = (u64) v1 < (u64) (s64) 7;
    { s32 c_ = at == 0; f21.f = (*(volatile f32 *) (u32) (a0 + 32)); if (c_) goto L_00904ED0; }
    a0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffbfc0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x904c30U) goto L_00904C30; if (t_ == 0x904cd8U) goto L_00904CD8; if (t_ == 0x904d60U) goto L_00904D60; if (t_ == 0x904de8U) goto L_00904DE8; if (t_ == 0x904e28U) goto L_00904E28; if (t_ == 0x904e68U) goto L_00904E68; if (t_ == 0x904ea0U) goto L_00904EA0; }
L_00904C30:;
    v1 = s0 & 0xff;
    v1 = (s32) ((u32) v1 << 1);
    a0 = (s32) ((u32) a2 + (u32) v1);
    v1 = (*(volatile u16 *) (u32) (a0 + 384));
    f21.i = (s32) 0;
    s1 = (s32) ((u32) a0 + 0x180U);
    at = s5 < v1;
    { s32 c_ = at == 0; f20.i = f21.i; if (c_) goto L_00904CC8; }
    v1 = (*(volatile u16 *) (u32) (a0 + 340));
    { s32 c_ = v1 <= 0; s0 = (s32) ((u32) a0 + 0x154U); if (c_) goto L_00904ED0; }
    a0 = 1000; v0 = Pes6Random_Below(a0);
    a0 = v0 & 0xffff;
    v1 = 100;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    v1 = hi;
    a0 = v1 & 0xff;
    if (a0 != 0) goto L_00904CA0;
    v1 = 3;
    (*(volatile u8 *) (u32) s2) = (u8) v1;
    (*(volatile u16 *) (u32) s1) = (u16) 0;
    v1 = (*(volatile u16 *) (u32) s0);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u16 *) (u32) s0) = (u16) v1; goto L_00904ED0;
L_00904CA0:;
    v1 = 1;
    if (a0 != v1) goto L_00904ED0;
    v1 = 4;
    (*(volatile u8 *) (u32) s2) = (u8) v1;
    (*(volatile u16 *) (u32) s1) = (u16) 0;
    v1 = (*(volatile u16 *) (u32) s0);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u16 *) (u32) s0) = (u16) v1; goto L_00904ED0;
L_00904CC8:;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) s1) = (u16) v1; goto L_00904ED0;
L_00904CD8:;
    v1 = s0 & 0xff;
    v1 = (s32) ((u32) v1 << 1);
    a1 = (s32) 0xbe990000U;
    a0 = (s32) ((u32) a2 + (u32) v1);
    v1 = a1 | 0x999a;
    f21.i = (s32) v1;
    v1 = (*(volatile u16 *) (u32) (a0 + 384));
    f20.i = (s32) 0;
    at = s5 < v1;
    { s32 c_ = at == 0; s0 = (s32) ((u32) a0 + 0x180U); if (c_) goto L_00904D50; }
    v1 = (*(volatile u16 *) (u32) (a0 + 340));
    { s32 c_ = v1 <= 0; s1 = (s32) ((u32) a0 + 0x154U); if (c_) goto L_00904ED0; }
    a0 = 1000; v0 = Pes6Random_Below(a0);
    a0 = v0 & 0xffff;
    v1 = 75;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    v1 = hi;
    v1 = v1 & 0xff;
    if (v1 != 0) goto L_00904ED0;
    v1 = 5;
    (*(volatile u8 *) (u32) s2) = (u8) v1;
    (*(volatile u16 *) (u32) s0) = (u16) 0;
    v1 = (*(volatile u16 *) (u32) s1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u16 *) (u32) s1) = (u16) v1; goto L_00904ED0;
L_00904D50:;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) s0) = (u16) v1; goto L_00904ED0;
L_00904D60:;
    v1 = s0 & 0xff;
    v1 = (s32) ((u32) v1 << 1);
    a1 = (s32) 0x3e990000U;
    a0 = (s32) ((u32) a2 + (u32) v1);
    v1 = a1 | 0x999a;
    f21.i = (s32) v1;
    v1 = (*(volatile u16 *) (u32) (a0 + 384));
    f20.i = (s32) 0;
    at = s5 < v1;
    { s32 c_ = at == 0; s0 = (s32) ((u32) a0 + 0x180U); if (c_) goto L_00904DD8; }
    v1 = (*(volatile u16 *) (u32) (a0 + 340));
    { s32 c_ = v1 <= 0; s1 = (s32) ((u32) a0 + 0x154U); if (c_) goto L_00904ED0; }
    a0 = 1000; v0 = Pes6Random_Below(a0);
    a0 = v0 & 0xffff;
    v1 = 75;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    v1 = hi;
    v1 = v1 & 0xff;
    if (v1 != 0) goto L_00904ED0;
    v1 = 6;
    (*(volatile u8 *) (u32) s2) = (u8) v1;
    (*(volatile u16 *) (u32) s0) = (u16) 0;
    v1 = (*(volatile u16 *) (u32) s1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u16 *) (u32) s1) = (u16) v1; goto L_00904ED0;
L_00904DD8:;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) s0) = (u16) v1; goto L_00904ED0;
L_00904DE8:;
    v1 = (s32) 0x3e4c0000U;
    a0 = v1 | 0xcccd;
    f0.i = (s32) a0;
    v1 = (s32) 0xbe990000U;
    f21.f = f21.f - f0.f;
    v1 = v1 | 0x999a;
    f0.i = (s32) v1;
    fcc = f0.f < f21.f;
    if (fcc) goto L_00904ED0;
    v1 = 1;
    f21.i = f0.i;
    (*(volatile u8 *) (u32) s2) = (u8) v1; goto L_00904ED0;
L_00904E28:;
    v1 = (s32) 0x3e4c0000U;
    a0 = v1 | 0xcccd;
    f0.i = (s32) a0;
    v1 = (s32) 0x3e990000U;
    f21.f = f21.f + f0.f;
    v1 = v1 | 0x999a;
    f0.i = (s32) v1;
    fcc = f0.f <= f21.f;
    if (!fcc) goto L_00904ED0;
    v1 = 2;
    f21.i = f0.i;
    (*(volatile u8 *) (u32) s2) = (u8) v1; goto L_00904ED0;
L_00904E68:;
    v1 = (s32) 0x3e4c0000U;
    v1 = v1 | 0xcccd;
    f0.i = (s32) v1;
    f21.f = f21.f + f0.f;
    f0.i = (s32) 0;
    fcc = f0.f <= f21.f;
    if (!fcc) goto L_00904ED0;
    (*(volatile u8 *) (u32) s2) = (u8) 0;
    f21.i = f0.i; goto L_00904ED0;
L_00904EA0:;
    v1 = (s32) 0x3e4c0000U;
    v1 = v1 | 0xcccd;
    f0.i = (s32) v1;
    f21.f = f21.f - f0.f;
    f0.i = (s32) 0;
    fcc = f0.f < f21.f;
    if (fcc) goto L_00904ED0;
    (*(volatile u8 *) (u32) s2) = (u8) 0;
    f21.i = f0.i;
L_00904ED0:;
    v1 = (*(volatile s32 *) (u32) (s3 + 4));
    (*(volatile f32 *) (u32) (v1 + 32)) = f21.f;
    v1 = (*(volatile s32 *) (u32) (s3 + 4));
    (*(volatile f32 *) (u32) (v1 + 36)) = f20.f;
L_00904EE0:;
    v1 = (s32) ((u32) s4 + 0x1U);
    s4 = v1 & 0xff;
    v1 = s4 < 11;
    if (v1 != 0) { v0 = s4 & 0xff; goto L_00904BD0; }
    return;
}
