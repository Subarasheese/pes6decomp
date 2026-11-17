/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


f32 func_009AC650(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f7 = { 0 };
    volatile union { f32 f; s32 i; } f8 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (s32) 0xc46d0000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    fcc = f13.f < f0.f;
    if (fcc) goto L_009AC7FC;
    v0 = (s32) 0x446d0000U;
    v0 = v0 | 0xc000;
    f0.i = (s32) v0;
    fcc = f0.f < f13.f;
    if (fcc) goto L_009AC7FC;
    f2.f = f13.f + f0.f;
    v1 = (s32) 0x41800000U;
    v0 = (s32) 0x44ed0000U;
    v0 = v0 | 0xc000;
    f1.i = (s32) v1;
    f0.i = (s32) v0;
    f1.f = f1.f * f2.f;
    f13.f = f1.f / f0.f;
    f0.i = (s32) f13.f;
    a1 = f0.i;
    { s32 c_ = a1 < 0; a2 = (s32) ((u32) a1 + 0x1U); if (c_) goto L_009AC80C; }
    at = a2 < 16;
    if (at == 0) goto L_009AC80C;
    at = a1 < 5;
    { s32 c_ = at == 0; v1 = a1; if (c_) goto L_009AC6E4; }
    v0 = 5;
    v0 = (s32) ((u32) v0 - (u32) a1); goto L_009AC708;
L_009AC6E4:;
    at = a1 < 11;
    if (at == 0) { v0 = 16; goto L_009AC700; }
    v0 = 11;
    v1 = (s32) ((u32) a1 + 0xfffffffbU);
    v0 = (s32) ((u32) v0 - (u32) a1); goto L_009AC708;
L_009AC700:;
    v1 = (s32) ((u32) a1 + 0xfffffff5U);
    v0 = (s32) ((u32) v0 - (u32) a1);
L_009AC708:;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    a0 = a2;
    f2.i = (s32) v1;
    v0 = (s32) 0x41100000U;
    f1.i = (s32) v0;
    f2.f = (f32) f2.i;
    v0 = (s32) 0x42900000U;
    f1.f = f2.f / f1.f;
    f0.i = (s32) v0;
    v0 = a2 < 5;
    { s32 c_ = v0 != 0; f8.f = f0.f * f1.f; if (c_) goto L_009AC81C; }
    at = a2 < 11;
    if (at == 0) { v0 = 16; goto L_009AC75C; }
    v0 = 11;
    a0 = (s32) ((u32) a2 + 0xfffffffbU);
    v0 = (s32) ((u32) v0 - (u32) a2); goto L_009AC764;
L_009AC75C:;
    a0 = (s32) ((u32) a2 + 0xfffffff5U);
    v0 = (s32) ((u32) v0 - (u32) a2);
L_009AC764:;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    f6.i = (s32) 0;
    acc = f6.f + f8.f;
    v0 = (s32) ((u32) a1 - (u32) a2);
    a0 = (s32) 0xc4200000U;
    f0.i = (s32) v0;
    f2.i = (s32) v1;
    f4.f = (f32) f0.i;
    v0 = (s32) 0x41100000U;
    v1 = (s32) 0x43e90000U;
    f0.f = (f32) f2.i;
    f1.i = (s32) v0;
    f3.i = (s32) a0;
    f7.f = f0.f / f1.f;
    v0 = (s32) 0x42900000U;
    f5.i = (s32) v0;
    f0.i = (s32) a1;
    f5.f = acc - f5.f * f7.f;
    v0 = (s32) 0x46590000U;
    f5.f = f5.f / f4.f;
    v0 = v0 | 0x4800;
    f2.f = (f32) f0.i;
    acc = f6.f + f8.f;
    f4.f = acc - f5.f * f2.f;
    acc = f6.f + f3.f;
    f2.f = acc + f5.f * f13.f;
    f2.f = f4.f + f2.f;
    acc = f6.f + f2.f;
    f2.f = f2.f - f3.f;
    f1.i = (s32) v1;
    f0.i = (s32) v0;
    f1.f = f2.f / f1.f;
    acc = acc - f0.f * f1.f;
    f0.f = acc + f1.f * f12.f; goto L_009AC828;
L_009AC7FC:;
    v0 = (s32) 0xc4200000U;
    f0.i = (s32) v0;
    goto L_009AC828;
L_009AC80C:;
    v0 = (s32) 0xc4200000U;
    f0.i = (s32) v0;
    goto L_009AC828;
L_009AC81C:;
    v0 = 5;
    v0 = (s32) ((u32) v0 - (u32) a2); goto L_009AC764;
L_009AC828:;
    return f0.f;
}
