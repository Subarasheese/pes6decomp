/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00952420(s64, s64, s64, s64, f32, f32);
s64 func_0098ED30(s64);
s64 func_00990590(s64, s64, s64, s64, s64);
s64 func_00990750(s64, s64, f32, f32);

s64 func_00C62210(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    s2 = a1 & 0xff;
    a1 = 0;
    v0 = (*(volatile u8 *) (u32) (a0 + 478));
    { s32 c_ = v0 != s2; s0 = a0; if (c_) goto L_00C6223C; }
    a1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00C6223C:;
    v0 = 5;
    if (s2 == v0) goto L_00C623B0;
    v0 = 4;
    if (s2 == v0) goto L_00C623B0;
    v0 = 3;
    if (s2 == v0) { s1 = a1 & 0xff; goto L_00C622F4; }
    v0 = 2;
    if (s2 == v0) { v0 = (*(volatile u8 *) (u32) (s0 + 473)); goto L_00C62274; }
    v0 = 0; goto L_00C62448;
L_00C62274:;
    if (v0 == 0) goto L_00C62444;
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00C62298; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00C62298:;
    v1 = a1 & 0xff;
    v0 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 << 9);
    a0 = (s32) ((u32) v1 + 0x600U);
    v1 = (s32) ((u32) v0 << 6);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) (v0 + 344));
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = (u64) v1 < (u64) v0;
    if (at == 0) goto L_00C62444;
    v0 = (*(volatile u8 *) (u32) (s0 + 514));
    at = v0 < 2;
    if (at == 0) goto L_00C62444;
    v0 = 1; goto L_00C624D8;
L_00C622F4:;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    s2 = (s32) ((u32) s1 << 9);
    v0 = (s32) 0xcb0000U;
    f1.i = (s32) s2;
    f4.f = (*(volatile f32 *) (u32) (v0 + 21284));
    f1.f = (f32) f1.i;
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (s0 + 224));
    acc = f0.f + f1.f;
    f3.f = (*(volatile f32 *) (u32) (v1 + 16));
    f0.f = f2.f * f4.f;
    f1.f = acc + f3.f * f4.f;
    fcc = f0.f < f1.f;
    if (fcc) goto L_00C62450;
    f0.f = f2.f - f3.f;
    f4.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x44000000U;
    f3.i = (s32) v0;
    if (a1 < 0) { v1 = (s32) ((u32) a1 >> 1); goto L_00C62354; }
    f0.i = (s32) a1;
    f2.f = (f32) f0.i; goto L_00C6236C;
L_00C62354:;
    v0 = a1 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00C6236C:;
    v0 = (s32) 0x44800000U;
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f;
    fcc = f4.f < f0.f;
    if (fcc) goto L_00C62450;
L_00C62390:;
    a0 = (*(volatile u8 *) (u32) s0); v0 = func_0098ED30(a0);
    v1 = v0 & 0xff;
    v0 = 5;
    if (v1 != v0) goto L_00C62444;
    v0 = 1; goto L_00C624D8;
L_00C623B0:;
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    f12.f = (*(volatile f32 *) (u32) (s0 + 224));
    f13.f = (*(volatile f32 *) (u32) (s0 + 232));
    s1 = a1 & 0xff;
    a1 = 2048; v0 = func_00990750(a0, a1, f12.f, f13.f);
    v1 = v0 & 0xff;
    v0 = 3;
    v0 = (s32) ((u32) v0 - (u32) s1);
    v0 = v1 < v0;
    if (v0 != 0) goto L_00C62444;
    v0 = 4;
    if (s2 != v0) { v0 = 0x8000; goto L_00C623F0; }
    v0 = 0;
L_00C623F0:;
    v0 = v0 & 0xffff;
    a0 = (*(volatile u16 *) (u32) (s0 + 42));
    a1 = (s32) ((u32) v0 + 0x4000U);
    v1 = 2048;
    v0 = (s32) ((u32) s1 << 9);
    a3 = (s32) ((u32) v1 - (u32) v0);
    v0 = (s32) ((u32) s1 << 10);
    v1 = 8192;
    v0 = (s32) ((u32) v1 - (u32) v0);
    a2 = v0 & 0xffff;
    v0 = (s32) ((u32) a1 + (u32) a0);
    a1 = v0 & 0xffff;
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a0 = s0;
    a4 = 2; v0 = func_00990590(a0, a1, a2, a3, a4);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_00C62444;
    v0 = 1; goto L_00C624D8;
L_00C62444:;
    v0 = 0;
L_00C62448:;
    goto L_00C624DC;
L_00C62450:;
    v0 = 4096;
    v0 = (s32) ((u32) v0 - (u32) s2);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a1 = (*(volatile u16 *) (u32) (s0 + 42));
    a0 = s0;
    a2 = 1024; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_00C62390;
    v0 = (s32) ((u32) s1 << 9);
    v1 = 3072;
    v1 = (s32) ((u32) v1 - (u32) v0);
    s1 = (s32) ((u32) s1 << 10);
    v0 = 2048;
    v0 = (s32) ((u32) v0 - (u32) s1);
    a2 = v0 & 0xffff;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a1 = (*(volatile u16 *) (u32) (s0 + 42));
    a0 = s0; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_00C62390;
    v1 = 2048;
    v0 = 4096;
    v0 = (s32) ((u32) v0 - (u32) s1);
    v1 = (s32) ((u32) v1 - (u32) s2);
    a2 = v0 & 0xffff;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a1 = (*(volatile u16 *) (u32) (s0 + 42));
    a0 = s0; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_00C62390;
    v0 = 1;
L_00C624D8:;
L_00C624DC:;
    return v0;
}
