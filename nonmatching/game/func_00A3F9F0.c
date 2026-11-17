/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);

s32 func_00A3F9F0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    f4.f = (*(volatile f32 *) (u32) (v0 + 7788));
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    f5.f = (*(volatile f32 *) (u32) (a0 + 240));
    f2.f = (*(volatile f32 *) (u32) (a0 + 248));
    v0 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 7796));
    f3.f = (*(volatile f32 *) (u32) (a1 + 1148));
    f4.f = f4.f + f5.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 2940));
    f1.f = f1.f + f2.f;
    f3.f = f4.f - f3.f;
    f0.f = f1.f - f0.f;
    f1.i = (s32) f3.f;
    f0.i = (s32) f0.f;
    v0 = f1.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    f1.f = (*(volatile f32 *) (u32) (a1 + 2044));
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7792));
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); s1 = lo; }
    f0.f = f0.f - f1.f;
    f0.i = f0.i & 0x7FFFFFFF;
    f0.i = (s32) f0.f;
    s0 = f0.i;
    f0.i = (s32) s1;
    f12.f = (f32) f0.i; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    v0 = (s32) 0x590000U;
    v1 = f0.i;
    (*(volatile u32 *) (u32) (v0 + 8804)) = (u32) v1;
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) s0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s32) ((u32) s1 + (u32) v0);
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    v0 = f0.i;
    return v0;
}
