/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0099D2C0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7972));
    v0 = 4;
    if (v1 == v0) goto L_0099D3B0;
    v0 = 3;
    if (v1 == v0) goto L_0099D2E8;
    a0 = (*(volatile s16 *) (u32) (a0 + 20)); goto L_0099D32C;
L_0099D2E8:;
    a0 = (*(volatile s16 *) (u32) (a0 + 20));
    v1 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 7776));
    f0.i = (s32) 0;
    f2.i = (s32) a0;
    f2.f = (f32) f2.i;
    f1.f = f2.f * f1.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0099D31C;
    goto L_0099D320;
L_0099D31C:;
    v0 = 2;
L_0099D320:;
    goto L_0099D3B0;
    a0 = (*(volatile s16 *) (u32) (a0 + 20));
L_0099D32C:;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    v1 = (s32) 0x590000U;
    f3.i = (s32) v0;
    f2.f = (*(volatile f32 *) (u32) (v1 + 7768));
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f4.i = (s32) a0;
    f1.i = (s32) 0;
    f4.f = (f32) f4.i;
    f0.f = f0.f - f1.f;
    acc = f1.f + f2.f;
    f2.f = acc - f3.f * f4.f;
    f1.i = (s32) f2.f;
    f0.i = (s32) f0.f;
    v0 = f1.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x4000000U;
    v0 = (u64) v1 < (u64) v0;
    if (v0 != 0) goto L_0099D3AC;
    at = (s32) 0x6400000U;
    at = (u64) v1 < (u64) at;
    if (at == 0) goto L_0099D3A0;
    v0 = 0; goto L_0099D3A4;
L_0099D3A0:;
    v0 = 5;
L_0099D3A4:;
    goto L_0099D3B0;
L_0099D3AC:;
    v0 = 1;
L_0099D3B0:;
    return v0;
}
