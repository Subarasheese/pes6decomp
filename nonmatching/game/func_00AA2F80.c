/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009975E0(s32);
s32 func_009B33A0(s32, s32, s32);
s32 func_00AFBA70(s32);

s32 func_00AA2F80(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 hi = 0, lo = 0;
    f32 acc = 0;

    s4 = a0;
    a0 = (*(volatile u8 *) (u32) a0);
    f21.i = f12.i;
    f20.i = f13.i; v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00AA2FE0; }
    a0 = (*(volatile u8 *) (u32) s4); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00AA2FE0:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    v0 = (s32) 0x7fff0000U;
    a0 = (s32) ((u32) a0 << 6);
    s1 = v0 | 0xffff;
    s0 = (s32) ((u32) v1 + (u32) a0);
    s2 = s1;
    s3 = 0;
L_00AA3008:;
    a0 = s0; v0 = func_009975E0(a0);
    if (v0 == 0) goto L_00AA3178;
    v1 = (*(volatile u8 *) (u32) (s0 + 22));
    v0 = 53;
    if (v1 == v0) goto L_00AA3178;
    v0 = (*(volatile u8 *) (u32) s0);
    at = (s32) 0x100000U;
    at = at | 0x1;
    v1 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) s4 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) (v1 + 344));
    at = (u64) v1 < (u64) at;
    if (at != 0) goto L_00AA3178;
    v1 = (s32) 0x590000U;
    a2 = (*(volatile u8 *) (u32) (v1 + 9952));
    { s32 c_ = a2 < 0; f4.f = (*(volatile f32 *) (u32) (s0 + 240)); if (c_) goto L_00AA3068; }
    f0.i = (s32) a2;
    f2.f = (f32) f0.i; goto L_00AA3084;
L_00AA3068:;
    a0 = (s32) ((u32) a2 >> 1);
    v1 = a2 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00AA3084:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 224));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f4.f * f2.f;
    f0.f = f0.f - f21.f;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    { s32 c_ = a2 < 0; f3.f = (*(volatile f32 *) (u32) (s0 + 248)); if (c_) goto L_00AA30B8; }
    f0.i = (s32) a2;
    f2.f = (f32) f0.i; goto L_00AA30D4;
L_00AA30B8:;
    a0 = (s32) ((u32) a2 >> 1);
    v1 = a2 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00AA30D4:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 232));
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f;
    f0.f = f0.f - f20.f;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) a0 * (s64) (u64) (u32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    at = s2 < v1;
    if (at == 0) goto L_00AA3138;
    at = s1 < v1;
    if (at != 0) goto L_00AA3178;
    a0 = (*(volatile u8 *) (u32) (s4 + 19));
    s1 = v1;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e00U);
    a0 = a0 ^ 0x1;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) (v1 + 84)) = (u8) v0; goto L_00AA3178;
L_00AA3138:;
    v0 = (*(volatile u8 *) (u32) (s4 + 19));
    a1 = (s32) 0x590000U;
    s1 = s2;
    s2 = v1;
    a1 = (s32) ((u32) a1 + 0x1e00U);
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = v0 ^ 0x1;
    v0 = (s32) ((u32) v0 << 1);
    a0 = (s32) ((u32) a1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (a0 + 83));
    (*(volatile u8 *) (u32) (a0 + 84)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s4 + 19));
    v0 = v0 ^ 0x1;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) a1 + (u32) v0);
    (*(volatile u8 *) (u32) (v0 + 83)) = (u8) v1;
L_00AA3178:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 11;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x240U); if (c_) goto L_00AA3008; }
    a0 = (*(volatile u8 *) (u32) (s4 + 19));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e53U);
    v0 = 255;
    a0 = a0 ^ 0x1;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { v1 = 1; goto L_00AA31BC; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = hi;
L_00AA31BC:;
    f0.i = (s32) f21.f;
    v0 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    a1 = f0.i;
    f0.i = (s32) f20.f;
    a2 = f0.i;
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_009B33A0(a0, a1, a2);
    return v0;
}
