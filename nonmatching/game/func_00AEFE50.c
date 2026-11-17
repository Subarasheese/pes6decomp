/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0027D0B0(s32, s32, s32, s32, f32);

s32 func_00AEFE50(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    s32 hi = 0, lo = 0;

    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 45));
    { s32 c_ = v0 != 0; s0 = a1; if (c_) goto L_00AEFE88; }
    a1 = 5; func_0027D0B0(a0, a1, a2, a3, f12.f);
    goto L_00AEFE90;
L_00AEFE88:;
    a1 = 4; func_0027D0B0(a0, a1, a2, a3, f12.f);
L_00AEFE90:;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    f22.f = (*(volatile f32 *) (u32) (v0 + 7788));
    a0 = s0;
    f21.f = (*(volatile f32 *) (u32) (v1 + 7792));
    v0 = (s32) 0x590000U;
    f20.f = (*(volatile f32 *) (u32) (v0 + 7796));
    a1 = 5; func_0027D0B0(a0, a1, a2, a3, f12.f);
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7792));
    f0.f = f0.f - f21.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00AEFED4; }
L_00AEFED4:;
    at = v0 < 49;
    if (at == 0) goto L_00AEFF24;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 7788));
    f0.f = (*(volatile f32 *) (u32) (v0 + 7796));
    f1.f = f22.f - f1.f;
    f0.f = f20.f - f0.f;
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    v0 = f1.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = v0 < 1601;
    if (at == 0) goto L_00AEFF24;
    v0 = 1; goto L_00AEFFA4;
L_00AEFF24:;
    a0 = s0;
    a1 = 4; func_0027D0B0(a0, a1, a2, a3, f12.f);
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7792));
    f0.f = f0.f - f21.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00AEFF50; }
L_00AEFF50:;
    at = v0 < 49;
    if (at == 0) goto L_00AEFFA0;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 7788));
    f0.f = (*(volatile f32 *) (u32) (v0 + 7796));
    f1.f = f22.f - f1.f;
    f0.f = f20.f - f0.f;
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    v0 = f1.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = v0 < 1601;
    if (at == 0) goto L_00AEFFA0;
    v0 = 1; goto L_00AEFFA4;
L_00AEFFA0:;
    v0 = 0;
L_00AEFFA4:;
    return v0;
}
