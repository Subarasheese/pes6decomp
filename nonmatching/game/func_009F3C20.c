/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0096B400(s64);
s64 func_00990590(s64, s64, s64, s64, s64);
s64 func_009B33F0(s64, s64, s64, s64);
s64 func_00AFBA70(s64);

void func_009F3C20(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    u64 qh_a1 = 0;
    s64 hi1 = 0, lo1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    a0 = 255;
    a1 = (*(volatile u8 *) (u32) (v0 + 7758));
    { s32 c_ = a1 == a0; s1 = 0; if (c_) goto L_009F3E94; }
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7757));
    if (v1 == a0) { a0 = 1; goto L_009F3C6C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_009F3C6C:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = 255;
    { s32 c_ = a1 == v0; s3 = (s32) ((u32) v1 + (u32) a0); if (c_) goto L_009F3CA0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) v0); hi = (s32) ((s32) a1 % (s32) v0); lo = q_; }
    a0 = hi; goto L_009F3CA4;
L_009F3CA0:;
    a0 = 1;
L_009F3CA4:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s2 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) s2); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_009F3CEC; }
    a0 = (*(volatile u8 *) (u32) s2); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_009F3CEC:;
    f3.f = (*(volatile f32 *) (u32) (s3 + 224));
    v1 = (s32) ((u32) a0 << 3);
    f2.f = (*(volatile f32 *) (u32) (s2 + 224));
    v0 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (s3 + 232));
    v1 = (s32) ((u32) v1 + (u32) a0);
    f0.f = (*(volatile f32 *) (u32) (s2 + 232));
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) v0 + (u32) v1);
    f2.f = f3.f - f2.f;
    f0.f = f1.f - f0.f;
    f1.i = (s32) f2.f;
    f0.i = (s32) f0.f;
    v0 = f1.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); s0 = lo; } v0 = func_0096B400(a0);
    a2 = (s64) ((u64) v0 << 32);
    a2 = a2 >> 32;
    { s64 m_ = (s64) (u64) (u32) a2 * (s64) (u64) (u32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = hi;
    v0 = a2 >> 32;
    { u64 s_ = (u64) v1, t_ = (u64) a0; a1 = (s64) ((t_ & 0xFFFFFFFFU) | (s_ << 32)); qh_a1 = (t_ >> 32) | ((s_ >> 32) << 32); }
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a2; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a0 = lo1; }
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v1 = (s64) ((u64) a0 + (u64) v1);
    v0 = (s64) ((u64) s0 << 32);
    v1 = (s64) ((u64) v1 << 32);
    v0 = v0 >> 32;
    v1 = (s64) ((u64) v1 + (u64) a1);
    at = (u64) v0 < (u64) v1;
    if (at == 0) { s1 = 1; goto L_009F3E2C; }
    v1 = (*(volatile u16 *) (u32) (s2 + 24));
    v0 = 253;
    if (v1 == v0) goto L_009F3E2C;
    v1 = (s32) 0x590000U;
    s1 = 1;
    a0 = 0;
    v1 = (s32) ((u32) v1 + 0xffffe7f0U);
    a1 = 0;
L_009F3DA0:;
    v0 = (*(volatile s32 *) (u32) (v1 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 44));
    if (v0 == 0) goto L_009F3DB8;
    v0 = (*(volatile s32 *) (u32) (v1 + 28));
    a0 = (s32) ((u32) a0 + (u32) v0);
L_009F3DB8:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 22;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x240U); if (c_) goto L_009F3DA0; }
    if (a0 == 0) goto L_009F3E2C;
    f3.f = (*(volatile f32 *) (u32) (s2 + 224));
    a0 = s2;
    f2.f = (*(volatile f32 *) (u32) (s3 + 224));
    f1.f = (*(volatile f32 *) (u32) (s2 + 232));
    f0.f = (*(volatile f32 *) (u32) (s3 + 232));
    f2.f = f3.f - f2.f;
    f0.f = f1.f - f0.f;
    f1.i = (s32) f2.f;
    f0.i = (s32) f0.f;
    s4 = f1.i;
    s0 = f0.i;
    a1 = s3; v0 = func_009B33F0(a0, a1, a2, a3);
    { s64 m_ = (s64) (s32) s4 * (s64) (s32) s4; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    a0 = s2;
    a1 = v0;
    a2 = 4096;
    a4 = 1;
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) s0 * (s64) (u64) (u32) s0; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; } v0 = func_00990590(a0, a1, a2, a3, a4);
    if (v0 == 0) { a0 = s2; goto L_009F3E38; }
L_009F3E28:;
    s1 = 0;
L_009F3E2C:;
    v0 = (u64) 0 < (u64) s1;
    v0 = v0 ^ 0x1; goto L_009F3E9C;
L_009F3E38:;
    a1 = s3; v0 = func_009B33F0(a0, a1, a2, a3);
    a0 = s2;
    a1 = v0;
    a2 = 8192;
    a3 = (s32) 0x240000U;
    a4 = 1; v0 = func_00990590(a0, a1, a2, a3, a4);
    if (v0 != 0) goto L_009F3E28;
    a1 = s3;
    a0 = s2; v0 = func_009B33F0(a0, a1, a2, a3);
    a0 = s2;
    a1 = v0;
    a2 = 12288;
    a3 = (s32) 0x90000U;
    a4 = 1; v0 = func_00990590(a0, a1, a2, a3, a4);
    if (v0 == 0) goto L_009F3E2C;
    s1 = 0; goto L_009F3E2C;
L_009F3E94:;
    s1 = 1; goto L_009F3E2C;
L_009F3E9C:;
    return;
}
