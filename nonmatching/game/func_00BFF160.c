/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0099CB60(s32, s32, s32, s32);
s32 func_00AFBA70(s32);
s32 func_00BDBAF0(f32, f32);

s32 func_00BFF160(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;

    v0 = (s32) 0xcc0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -11671)); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00BFF1A0; }
    v0 = (s32) 0xcc0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -11671)); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00BFF1A0:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_0099CB60(a0, a1, a2, a3);
    v1 = (s32) 0x590000U;
    a0 = 255;
    (*(volatile u8 *) (u32) (v1 + 7757)) = (u8) v0;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7758)) = (u8) a0;
    v0 = (s32) 0x590000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 7768));
    v0 = (s32) 0x590000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 7776)); v0 = func_00BDBAF0(f12.f, f13.f);
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 7757));
    v1 = 255;
    { s32 c_ = a0 == v1; a2 = (s32) ((u32) 0 - (u32) v0); if (c_) goto L_00BFF20C; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    a1 = hi; goto L_00BFF210;
L_00BFF20C:;
    a1 = 1;
L_00BFF210:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5c4U);
    a0 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s16 *) (u32) v1);
    if (a2 == v1) goto L_00BFF23C;
L_00BFF234:;
    goto L_00BFF264;
L_00BFF23C:;
    f0.i = (s32) v0;
    a0 = (s32) 0x463c0000U;
    a0 = a0 | 0x6400;
    v1 = (s32) 0x590000U;
    f0.f = (f32) f0.i;
    f1.i = (s32) a0;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (v1 + 7768)) = f0.f; goto L_00BFF234;
L_00BFF264:;
    return v0;
}
