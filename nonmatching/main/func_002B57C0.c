/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Random_Below(s64);
s64 func_001A5550(s64);
s64 func_001A5620(s64);
s64 func_002727C0(s64, s64, s64, s64);
s64 func_002871C0(s64, s64, s64, s64);
s64 func_009B44E0(s64, s64, s64, s64);
s64 func_009B4580(s64, s64, s64, s64);

s64 func_002B57C0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[12];
    s64 sp = (s32) (u32) frame;

    a0 = (s32) ((u32) sp + 0x30U);
    v0 = func_002871C0(a0, a1, a2, a3);
    a0 = 10; v0 = func_002727C0(a0, a1, a2, a3);
    a0 = 4; v0 = Pes6Random_Below(a0);
    v1 = v0 & 0xffff;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x9U);
    (*(volatile u8 *) (u32) (v0 + 10050)) = (u8) v1; v0 = func_009B44E0(a0, a1, a2, a3);
    v1 = v0 & 0xffff;
    v0 = 852;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (*(volatile s32 *) (u32) (gp + -32228));
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s16 *) (u32) (v0 + 840));
    if (v0 >= 0) { v0 = 1; goto L_002B5820; }
    v0 = -1;
L_002B5820:;
    s1 = (s64) ((u64) v0 << 56);
    a0 = (s32) 0x3e0000U;
    v0 = (s32) 0x590000U;
    s1 = s1 >> 56;
    a2 = (*(volatile u8 *) (u32) (v0 + 10050));
    f0.i = (s32) s1;
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) a0 + 0xffffa264U);
    f3.f = (f32) f0.i;
    v1 = (s32) ((u32) v1 + 0xffffa268U);
    s0 = (s32) ((u32) sp + 0x58U);
    a1 = (s32) ((u32) a2 << 1);
    v0 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + (u32) a2);
    v0 = (s32) ((u32) v0 + 0xffffa26cU);
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    f2.f = (*(volatile f32 *) (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) a1);
    f1.f = (*(volatile f32 *) (u32) v1);
    f0.f = (*(volatile f32 *) (u32) v0);
    f2.f = f3.f * f2.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 80)) = f2.f;
    (*(volatile f32 *) (u32) s0) = f0.f; v0 = func_009B4580(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -32228));
    a1 = v0 & 0xffff;
    a0 = 852;
    v0 = (s64) ((u64) s1 << 56);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v0 = v0 >> 56;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile s16 *) (u32) (v1 + 840));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = v0 < 4000;
    if (v0 != 0) { v1 = 11; goto L_002B5990; }
L_002B58BC:;
    v0 = (s32) 0x590000U;
    v1 = 12;
    a0 = (*(volatile u8 *) (u32) (v0 + 10050));
    if (a0 == v1) goto L_002B599C;
    v0 = 9;
    if (a0 == v0) goto L_002B599C;
L_002B58DC:;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) 0;
    v1 = (*(volatile u8 *) (u32) (v0 + 10050));
    f1.f = (*(volatile f32 *) (u32) (sp + 48));
    f0.f = (*(volatile f32 *) (u32) (sp + 56));
    v0 = 10;
    (*(volatile f32 *) (u32) (sp + 64)) = f1.f;
    { s32 c_ = v1 != v0; (*(volatile f32 *) (u32) (sp + 72)) = f0.f; if (c_) goto L_002B5910; }
    v1 = 1;
    v0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v0 + 10038)) = (u16) v1; goto L_002B5918;
L_002B5910:;
    v0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v0 + 10038)) = (u16) 0;
L_002B5918:;
    v0 = (s32) 0x590000U;
    v1 = 11;
    v0 = (*(volatile u8 *) (u32) (v0 + 10050));
    if (v0 == v1) { f1.f = (*(volatile f32 *) (u32) (sp + 64)); goto L_002B5934; }
    a0 = (s32) ((u32) sp + 0x50U); goto L_002B5978;
L_002B5934:;
    v0 = (s32) 0x46190000U;
    v0 = v0 | 0x2000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) { (*(volatile f32 *) (u32) (sp + 64)) = f0.f; goto L_002B5950; }
L_002B5950:;
    f1.f = (*(volatile f32 *) (u32) (sp + 64));
    v0 = (s32) 0xc6190000U;
    v0 = v0 | 0x2000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_002B5974;
    (*(volatile f32 *) (u32) (sp + 64)) = f0.f;
L_002B5974:;
    a0 = (s32) ((u32) sp + 0x50U);
L_002B5978:;
    v0 = func_001A5620(a0);
    a0 = (s32) ((u32) sp + 0x40U); v0 = func_001A5550(a0);
    goto L_002B59F8;
L_002B5990:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 10050)) = (u8) v1; goto L_002B58BC;
L_002B599C:;
    v0 = func_009B4580(a0, a1, a2, a3);
    v1 = v0 & 0xffff;
    v0 = 852;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (*(volatile s32 *) (u32) (gp + -32228));
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s16 *) (u32) (v0 + 844));
    at = v0 < 5001;
    if (at != 0) goto L_002B58DC;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x3e0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 10050));
    v1 = (s32) ((u32) v1 + 0xffffa26cU);
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) v0);
    f0.i = f0.i ^ (s32) 0x80000000U;
    (*(volatile f32 *) (u32) s0) = f0.f; goto L_002B58DC;
L_002B59F8:;
    return v0;
}
