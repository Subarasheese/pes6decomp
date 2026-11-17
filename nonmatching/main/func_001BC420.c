/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001BC420(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x2aaa0000U;
    v1 = (s32) ((u32) a0 >> 31);
    v0 = v0 | 0xaaab;
    a5 = a1;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a3 = a2;
    v0 = hi;
    v0 = (s32) v0 >> 2;
    a4 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = a4 >= 0; v1 = (s32) a4 >> 2; if (c_) goto L_001BC458; }
    v0 = (s32) ((u32) a4 + 0x3U);
    v1 = (s32) v0 >> 2;
L_001BC458:;
    v0 = 24;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a1 = hi;
    { s32 c_ = a4 >= 0; a2 = a4 & 0x3; if (c_) goto L_001BC478; }
    if (a2 == 0) { a0 = v1; goto L_001BC47C; }
    a2 = (s32) ((u32) a2 + 0xfffffffcU);
L_001BC478:;
    a0 = v1;
L_001BC47C:;
    { u32 t_ = (u32) a5; ; return ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
}
