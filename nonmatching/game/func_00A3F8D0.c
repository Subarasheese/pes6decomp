/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);

s32 func_00A3F8D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s32 hi1 = 0, lo1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    s32 hi = 0, lo = 0;
    f32 acc = 0;

    v0 = (s32) 0x590000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 7148));
    a3 = (*(volatile s32 *) (u32) (gp + -32252));
    f3.f = (*(volatile f32 *) (u32) (a0 + 244));
    v0 = (s32) 0x590000U;
    f2.f = f3.f / f2.f;
    f1.f = (*(volatile f32 *) (u32) (v0 + 7792));
    f0.f = (*(volatile f32 *) (u32) (a3 + 2048));
    f1.f = f1.f + f2.f;
    f0.f = f1.f - f0.f;
    f0.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x590000U;
    f0.i = (s32) f0.f;
    a1 = (*(volatile u8 *) (u32) (v0 + 9950));
    a2 = f0.i;
    { s32 c_ = a1 < 0; f5.f = (*(volatile f32 *) (u32) (a0 + 240)); if (c_) goto L_00A3F928; }
    f0.i = (s32) a1;
    f3.f = (f32) f0.i; goto L_00A3F944;
L_00A3F928:;
    v1 = (s32) ((u32) a1 >> 1);
    v0 = a1 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f3.f = (f32) f0.i;
    f3.f = f3.f + f3.f;
L_00A3F944:;
    v0 = (s32) 0x590000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 7788));
    f1.i = (s32) 0;
    f0.f = (*(volatile f32 *) (u32) (a3 + 1152));
    f4.f = (*(volatile f32 *) (u32) (a0 + 248));
    acc = f1.f + f2.f;
    f1.f = acc + f5.f * f3.f;
    f0.f = f1.f - f0.f;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    if (a1 < 0) { v1 = (s32) ((u32) a1 >> 1); goto L_00A3F980; }
    f0.i = (s32) a1;
    f3.f = (f32) f0.i; goto L_00A3F998;
L_00A3F980:;
    v0 = a1 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f3.f = (f32) f0.i;
    f3.f = f3.f + f3.f;
L_00A3F998:;
    v0 = (s32) 0x590000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 7796));
    f1.i = (s32) 0;
    f0.f = (*(volatile f32 *) (u32) (a3 + 2944));
    acc = f1.f + f2.f;
    f1.f = acc + f4.f * f3.f;
    f0.f = f1.f - f0.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) a2; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v0 = lo1; }
    v0 = (s32) ((u32) v0 + (u32) v1);
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    v0 = f0.i;
    return v0;
}
