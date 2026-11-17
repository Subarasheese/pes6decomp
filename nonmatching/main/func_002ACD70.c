/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_002A0E20(s32);
s32 func_002A1110(s32);
s32 func_002A11B0(s32, s32);
s32 func_009B3070(s32, s32, s32, s32);
s32 func_009B34C0(s32, s32, s32, s32);

s32 func_002ACD70(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f14 = { 0 };
    union { f32 f; s32 i; } f15 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v1 = (*(volatile u8 *) (u32) a0);
    v1 = v1 & 0x1;
    { s32 c_ = v1 != 0; s2 = a0; if (c_) goto L_002AD090; }
    a1 = (*(volatile u8 *) (u32) (s2 + 1));
    a0 = (s32) ((u32) sp + 0x50U); v0 = func_002A11B0(a0, a1);
    a0 = (*(volatile u8 *) (u32) (s2 + 1)); v0 = func_002A1110(a0);
    a0 = (*(volatile u8 *) (u32) (s2 + 1));
    s1 = v0 & 0xffff; f0.f = func_002A0E20(a0);
    (*(volatile f32 *) (u32) (s2 + 12)) = f0.f;
    v1 = (*(volatile u8 *) (u32) (s2 + 1));
    at = v1 < 23;
    if (at == 0) { (*(volatile u8 *) (u32) (s2 + 16)) = (u8) 0; goto L_002ACEA4; }
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_002ACDE0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_002ACDE0:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (a0 + 18));
    v0 = (*(volatile u8 *) (u32) (a0 + 19));
    v1 = (s32) ((u32) v1 + (u32) v0);
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_002ACE18; }
    if (v0 == 0) goto L_002ACE18;
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_002ACE18:;
    (*(volatile u8 *) (u32) (s2 + 16)) = (u8) v0;
    a1 = (s32) 0x590000U;
    a2 = (*(volatile u8 *) (u32) (a0 + 18));
    v0 = (s32) 0x92490000U;
    a1 = (s32) ((u32) a1 + 0x2980U);
    v0 = v0 | 0x2493;
    a0 = (*(volatile u8 *) (u32) (a0 + 17));
    v1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) a2 << 8);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 137));
    a0 = v1 & 0x7;
    v1 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    a0 = (s32) ((u32) v1 << 2);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) (s2 + 17)) = (u8) v0; goto L_002ACEA8;
L_002ACEA4:;
    (*(volatile u8 *) (u32) (s2 + 17)) = (u8) 0;
L_002ACEA8:;
    f0.f = (*(volatile f32 *) (u32) (sp + 80));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_002ACEC0; }
L_002ACEC0:;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f1.i = (s32) v0;
    f0.f = f1.f - f0.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_002ACEF4; }
L_002ACEF4:;
    (*(volatile u32 *) (u32) (s2 + 20)) = (u32) v0;
    s0 = (s32) ((u32) sp + 0x58U);
    f0.f = (*(volatile f32 *) (u32) s0);
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_002ACF14; }
L_002ACF14:;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f1.i = (s32) v0;
    f0.f = f1.f - f0.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_002ACF48; }
L_002ACF48:;
    (*(volatile u32 *) (u32) (s2 + 24)) = (u32) v0;
    f0.i = (s32) 0;
    f12.f = (*(volatile f32 *) (u32) (sp + 80));
    fcc = f12.f <= f0.f;
    if (fcc) { v1 = (s32) ((u32) sp + 0x58U); goto L_002ACF84; }
    v1 = (s32) ((u32) sp + 0x58U);
    v0 = (s32) 0x46520000U;
    f13.f = (*(volatile f32 *) (u32) v1);
    v0 = v0 | 0x6400;
    f14.i = (s32) v0;
    f15.i = f13.i; v0 = func_009B34C0(a0, a1, a2, a3);
    (*(volatile u16 *) (u32) (s2 + 28)) = (u16) v0; goto L_002ACFA0;
L_002ACF84:;
    v0 = (s32) 0xc6520000U;
    f13.f = (*(volatile f32 *) (u32) v1);
    v0 = v0 | 0x6400;
    f14.i = (s32) v0;
    f15.i = f13.i; v0 = func_009B34C0(a0, a1, a2, a3);
    (*(volatile u16 *) (u32) (s2 + 28)) = (u16) v0;
L_002ACFA0:;
    a1 = (*(volatile u16 *) (u32) (s2 + 28));
    a0 = s1; v0 = func_009B3070(a0, a1, a2, a3);
    (*(volatile u16 *) (u32) (s2 + 32)) = (u16) v0;
    f0.i = (s32) 0;
    f13.f = (*(volatile f32 *) (u32) s0);
    fcc = f13.f <= f0.f;
    if (fcc) { f12.f = (*(volatile f32 *) (u32) (sp + 80)); goto L_002ACFE4; }
    f12.f = (*(volatile f32 *) (u32) (sp + 80));
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f15.i = (s32) v0;
    f14.i = f12.i; v0 = func_009B34C0(a0, a1, a2, a3);
    (*(volatile u16 *) (u32) (s2 + 30)) = (u16) v0; goto L_002ACFFC;
L_002ACFE4:;
    v0 = (s32) 0xc6080000U;
    v0 = v0 | 0x6400;
    f15.i = (s32) v0;
    f14.i = f12.i; v0 = func_009B34C0(a0, a1, a2, a3);
    (*(volatile u16 *) (u32) (s2 + 30)) = (u16) v0;
L_002ACFFC:;
    a1 = (*(volatile u16 *) (u32) (s2 + 30));
    a0 = s1; v0 = func_009B3070(a0, a1, a2, a3);
    (*(volatile u16 *) (u32) (s2 + 34)) = (u16) v0;
    a1 = (*(volatile u8 *) (u32) (s2 + 2));
    if (a1 < 0) goto L_002AD078;
    at = a1 < 29;
    if (at == 0) goto L_002AD078;
    v1 = (*(volatile u8 *) (u32) (s2 + 1));
    if (a1 == v1) goto L_002AD078;
    a0 = (s32) ((u32) sp + 0x40U); v0 = func_002A11B0(a0, a1);
    v1 = (s32) 0x3f800000U;
    a0 = (s32) ((u32) sp + 0x40U);
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v1;
    v1 = (s32) ((u32) sp + 0x50U);
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("vsub.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a0) : "memory");
    f2.f = (*(volatile f32 *) (u32) (sp + 68));
    f0.f = (*(volatile f32 *) (u32) (sp + 64));
    f1.f = (*(volatile f32 *) (u32) (sp + 72));
    acc = f2.f * f2.f;
    acc = acc + f0.f * f0.f;
    f0.f = acc + f1.f * f1.f;
    (*(volatile f32 *) (u32) (s2 + 36)) = f0.f; goto L_002AD084;
L_002AD078:;
    v1 = (s32) 0x4dbe0000U;
    v1 = v1 | 0xbc20;
    (*(volatile u32 *) (u32) (s2 + 36)) = (u32) v1;
L_002AD084:;
    v1 = (*(volatile u8 *) (u32) s2);
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) s2) = (u8) v1;
L_002AD090:;
    return v0;
}
