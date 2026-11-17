/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s32 func_0099DFF0(s32);
s32 func_009B30B0(s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
s32 func_00A1AC80(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00A1B990(s32);
s32 func_00AA32C0(s32);

s32 func_009C7D90(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    f0.f = (*(volatile f32 *) (u32) (a0 + 224));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    { s32 c_ = v0 <= 0; s5 = a0; if (c_) goto L_009C7DDC; }
    goto L_009C7DE0;
L_009C7DDC:;
    v0 = (s32) ((u32) 0 - (u32) v0);
L_009C7DE0:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46140000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) { v0 = 0; goto L_009C809C; }
    s2 = (s32) ((u32) s5 + 0x240U);
    s6 = 0;
    s4 = 0;
L_009C7E14:;
    a0 = s2; v0 = func_00A1B990(a0);
    if (v0 != 0) goto L_009C8024;
    f1.f = (*(volatile f32 *) (u32) (s5 + 232));
    f0.f = (*(volatile f32 *) (u32) (s2 + 232));
    f3.f = (*(volatile f32 *) (u32) (s5 + 224));
    f2.f = (*(volatile f32 *) (u32) (s2 + 224));
    f0.f = f1.f - f0.f;
    f2.f = f3.f - f2.f;
    acc = f0.f * f0.f;
    f12.f = acc + f2.f * f2.f; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    s0 = f0.i;
    v0 = s0 < 2560;
    if (v0 != 0) goto L_009C8024;
    at = s0 < 8705;
    if (at == 0) goto L_009C8024;
    a0 = s2; v0 = func_00AA32C0(a0);
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    a0 = (*(volatile u8 *) (u32) (s5 + 36));
    s1 = f0.i;
    if (a0 == 0) { at = s1 < 1152; goto L_009C8048; }
L_009C7E94:;
    v0 = (s32) ((u32) a0 + 0xffffffffU);
L_009C7E98:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) goto L_009C7EEC;
    at = s1 < 2048;
    if (at == 0) goto L_009C7EEC;
    v1 = (s32) ((u32) s0 << 1);
    v0 = (s32) 0x66660000U;
    v1 = (s32) ((u32) v1 + (u32) s0);
    v0 = v0 | 0x6667;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = s1 < v0;
    if (v0 != 0) goto L_009C8024;
L_009C7EEC:;
    f12.f = (*(volatile f32 *) (u32) (s2 + 224));
    f13.f = (*(volatile f32 *) (u32) (s2 + 232));
    a0 = s5; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    s3 = v0 & 0xffff;
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) s0; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a0 = s5;
    a1 = s3;
    a2 = 8; v0 = func_00A1AC80(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    if (v0 != 0) goto L_009C8024;
    a0 = (*(volatile u16 *) (u32) (s5 + 42));
    a1 = s3; v0 = func_009B30B0(a0, a1);
    s7 = v0 & 0xffff;
    at = s7 < 64;
    if (at == 0) goto L_009C8024;
    v0 = (*(volatile u8 *) (u32) (s5 + 36));
    if (v0 != 0) goto L_009C7FCC;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7804));
    if (v0 == 0) goto L_009C7FCC;
    a0 = s5; v0 = func_0099DFF0(a0);
    a1 = s3;
    a0 = v0; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 32;
    if (at == 0) goto L_009C8024;
    v0 = v0 & 0xf0;
    v1 = 128;
    v1 = (s32) ((u32) v1 - (u32) v0);
    f0.i = (s32) v1;
    v0 = (s32) 0x590000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 7148));
    f3.f = (f32) f0.i;
    { s32 c_ = s0 >= 0; v1 = (s32) s0 >> 4; if (c_) goto L_009C7FA4; }
    v0 = (s32) ((u32) s0 + 0xfU);
    v1 = (s32) v0 >> 4;
L_009C7FA4:;
    f1.i = (s32) v1;
    f0.i = (s32) 0;
    f1.f = (f32) f1.i;
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v0 = v1 < s6; goto L_009C7FD4;
L_009C7FCC:;
    v1 = s1;
    v0 = v1 < s6;
L_009C7FD4:;
    if (v0 != 0) goto L_009C8024;
    v0 = s7 < 16;
    if (v0 != 0) goto L_009C8094;
    at = s0 < 4609;
    if (at == 0) goto L_009C8094;
    at = s1 < 2049;
    if (at != 0) { v0 = 0; goto L_009C8008; }
    v0 = (s32) ((u32) s1 + 0xfffff800U);
    v0 = (s32) v0 >> 1;
L_009C8008:;
    at = v0 < 1025;
    if (at != 0) goto L_009C8018;
    v0 = 1024;
L_009C8018:;
    (*(volatile u32 *) (u32) (s5 + 168)) = (u32) v0;
L_009C801C:;
    s6 = v1;
    fp = s2;
L_009C8024:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 10;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x240U); if (c_) goto L_009C7E14; }
    if (s6 != 0) { v0 = (*(volatile u8 *) (u32) fp); goto L_009C8040; }
    v0 = 0;
L_009C8040:;
    goto L_009C80A0;
L_009C8048:;
    if (at == 0) goto L_009C7E94;
    v1 = (s32) ((u32) s0 << 1);
    v0 = (s32) 0x66660000U;
    v1 = (s32) ((u32) v1 + (u32) s0);
    v0 = v0 | 0x6667;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = s1 < v0;
    if (v0 != 0) goto L_009C8024;
    v0 = (s32) ((u32) a0 + 0xffffffffU); goto L_009C7E98;
L_009C8094:;
    (*(volatile u32 *) (u32) (s5 + 168)) = (u32) 0; goto L_009C801C;
L_009C809C:;
L_009C80A0:;
    return v0;
}
