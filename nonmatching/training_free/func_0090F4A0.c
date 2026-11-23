/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00910D80(s32, s32, s32, s32);
s32 func_0098EC40(s32, s32, s32, s32);
s32 func_00BDB8B0(s32, s32, s32, s32);

s32 func_0090F4A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    a0 = 1;
    v0 = func_0098EC40(a0, a1, a2, a3);
    s1 = v0;
    s0 = 0;
L_0090F4C4:;
    a0 = s1; v0 = func_00910D80(a0, a1, a2, a3);
    if (v0 != 0) goto L_0090F620;
    a0 = (*(volatile u8 *) (u32) (s1 + 472));
    v1 = 3;
    if (a0 == v1) { v1 = (*(volatile u8 *) (u32) (s1 + 471)); goto L_0090F598; }
    v1 = 2;
    if (a0 == v1) { v1 = (*(volatile u8 *) (u32) (s1 + 471)); goto L_0090F50C; }
    v1 = 1;
    if (a0 == v1) goto L_0090F620;
    if (a0 == 0) goto L_0090F618;
    v1 = 1; goto L_0090F61C;
L_0090F50C:;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_0090F524; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_0090F524:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s2 = (s32) ((u32) v0 + (u32) v1);
    a0 = s2; v0 = func_00BDB8B0(a0, a1, a2, a3);
    if (v0 == 0) goto L_0090F620;
    a0 = (*(volatile s16 *) (u32) (s1 + 20));
    v1 = (s32) 0xc5520000U;
    v1 = v1 | 0x6400;
    f1.f = (*(volatile f32 *) (u32) (s2 + 224));
    f0.i = (s32) v1;
    f2.i = (s32) a0;
    f2.f = (f32) f2.i;
    f1.f = f2.f * f1.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_0090F618;
    v1 = (*(volatile u8 *) (u32) (s2 + 468));
    if (v1 == 0) goto L_0090F618;
    v1 = (*(volatile u8 *) (u32) (s1 + 471));
    (*(volatile u8 *) (u32) (s1 + 469)) = (u8) v1;
    (*(volatile u8 *) (u32) (s1 + 470)) = (u8) 0; goto L_0090F618;
L_0090F598:;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_0090F5B0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_0090F5B0:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s2 = (s32) ((u32) v0 + (u32) v1);
    a0 = s2; v0 = func_00BDB8B0(a0, a1, a2, a3);
    if (v0 == 0) goto L_0090F620;
    v1 = (*(volatile s16 *) (u32) (s1 + 20));
    f1.f = (*(volatile f32 *) (u32) (s2 + 224));
    f0.i = (s32) 0;
    f2.i = (s32) v1;
    f2.f = (f32) f2.i;
    f1.f = f2.f * f1.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_0090F618;
    v1 = (*(volatile u8 *) (u32) (s2 + 468));
    if (v1 == 0) goto L_0090F618;
    v1 = (*(volatile u8 *) (u32) (s1 + 471));
    (*(volatile u8 *) (u32) (s1 + 469)) = (u8) v1;
    (*(volatile u8 *) (u32) (s1 + 470)) = (u8) 0;
L_0090F618:;
    v1 = 1;
L_0090F61C:;
    (*(volatile u8 *) (u32) (s1 + 475)) = (u8) v1;
L_0090F620:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 10;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_0090F4C4; }
    return v0;
}
