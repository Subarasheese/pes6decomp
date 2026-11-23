/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0019C240(s32, s32, s32, f32);

s32 func_0019C4E0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v1 = (s32) 0x520000U;
    a3 = (*(volatile s32 *) (u32) (v1 + 720));
    if (a3 == 0) goto L_0019C5A4;
    at = (u64) a0 < (u64) (s64) 3;
    if (at == 0) goto L_0019C5A4;
    f1.f = (*(volatile f32 *) (u32) (a2 + 4));
    f0.i = (s32) 0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_0019C5A4;
    v1 = (s32) 0x40400000U;
    f0.i = (s32) v1;
    fcc = f13.f < f0.f;
    if (fcc) goto L_0019C5A4;
    v1 = (s32) 0x42a00000U;
    f0.i = (s32) v1;
    fcc = f13.f < f0.f;
    if (!fcc) goto L_0019C5A4;
    v1 = (s32) 0x3f000000U;
    f0.i = (s32) v1;
    fcc = f14.f < f0.f;
    if (fcc) goto L_0019C5A4;
    v1 = (s32) 0x3f800000U;
    f0.i = (s32) v1;
    fcc = f14.f < f0.f;
    if (!fcc) goto L_0019C5A4;
    v1 = 2896;
    v0 = 1;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v1 = (s32) ((u32) a3 + (u32) v1);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    (*(volatile f32 *) (u32) (v1 + 4)) = f12.f;
    (*(volatile f32 *) (u32) (v1 + 8)) = f14.f;
    f12.i = f13.i;
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) 0; func_0019C240(a0, a1, a2, f12.f);
L_0019C5A4:;
    return v0;
}
