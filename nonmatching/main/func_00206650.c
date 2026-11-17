/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_00206650(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, t8 = 0, t9 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f5 = { 0 };
    union { f32 f; s32 i; } f6 = { 0 };
    union { f32 f; s32 i; } f7 = { 0 };
    union { f32 f; s32 i; } f8 = { 0 };
    union { f32 f; s32 i; } f9 = { 0 };
    union { f32 f; s32 i; } f10 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[4];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0x530000U;
    a5 = (*(volatile u8 *) (u32) (v0 + -11671));
    f10.i = (s32) 0;
    a3 = (*(volatile s8 *) (u32) (v1 + 12361));
    t6 = 0;
    t4 = 0;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (sp + 28)) = (u8) a5;
    a4 = (*(volatile u8 *) (u32) (v0 + -11670));
    v1 = 852;
    (*(volatile u8 *) (u32) (sp + 30)) = (u8) a3;
    v0 = (s32) 0xcc0000U;
    a2 = (*(volatile u16 *) (u32) (v0 + -11614));
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) ((u32) a5 << 3);
    v0 = (s32) ((u32) v0 + (u32) a5);
    v0 = (s32) ((u32) v0 << 2);
    a2 = (*(volatile s32 *) (u32) (gp + -32228));
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s16 *) (u32) (v0 + 4));
    f0.i = (s32) v0;
    f7.f = (f32) f0.i;
    fcc = f7.f <= f10.f;
    { s32 c_ = fcc; (*(volatile u8 *) (u32) (sp + 29)) = (u8) a4; if (c_) goto L_002066D0; }
    v0 = 1; goto L_002066D4;
L_002066D0:;
    v0 = -1;
L_002066D4:;
    v1 = (s64) ((u64) v0 << 56);
    a4 = (s32) 0x590000U;
    v1 = v1 >> 56;
    s0 = (s32) 0xc3520000U;
    v0 = (s32) ((u32) v1 << 2);
    t8 = (s32) 0x43340000U;
    v1 = (s32) ((u32) v0 + (u32) v1);
    t5 = 0;
    v0 = (s32) ((u32) v1 << 2);
    a5 = 1;
    v0 = (s32) ((u32) v1 + (u32) v0);
    a6 = 23;
    v0 = (s32) ((u32) v0 << 1);
    a4 = (s32) ((u32) a4 + 0xffffe5b0U);
    f0.i = (s32) v0;
    a7 = 255;
    f6.f = (f32) f0.i;
    v0 = (s32) 0x43520000U;
    t7 = (s32) 0xcc0000U;
    a3 = (s64) ((u64) 0 + (u64) (s64) 16);
    a2 = (s64) ((u64) 0 + (u64) (s64) 32);
    v1 = (s64) ((u64) 0 + (u64) (s64) 64);
    t9 = (s64) ((u64) 0 + (u64) (s64) 128);
    f5.i = (s32) v0;
    v0 = (s32) 0xc3340000U;
    f4.i = (s32) s0;
    f3.i = (s32) t8;
    f2.i = (s32) v0;
    f0.i = (s32) 0;
L_00206748:;
    v0 = t5 & 0xff;
    v0 = (s32) ((u32) v0 + (u32) sp);
    t8 = (*(volatile u8 *) (u32) (v0 + 28));
    if (t8 == a7) { s0 = a5; goto L_00206764; }
    if ((s32) a6 != 0) { s64 q_ = (s32) ((s32) t8 / (s32) a6); hi = (s32) ((s32) t8 % (s32) a6); lo = q_; }
    s0 = hi;
L_00206764:;
    v0 = (s32) ((u32) s0 << 3);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) ((u32) v0 << 6);
    v0 = (s32) ((u32) a4 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (*(volatile s32 *) (u32) v0);
    { s32 c_ = t8 == a7; f9.f = (*(volatile f32 *) (u32) (v0 + 460)); if (c_) goto L_00206794; }
    if ((s32) a6 != 0) { s64 q_ = (s32) ((s32) t8 / (s32) a6); hi = (s32) ((s32) t8 % (s32) a6); lo = q_; }
    s0 = hi;
    v0 = (s32) ((u32) s0 << 3); goto L_0020679C;
L_00206794:;
    s0 = a5;
    v0 = (s32) ((u32) s0 << 3);
L_0020679C:;
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) ((u32) v0 << 6);
    v0 = (s32) ((u32) a4 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (*(volatile s32 *) (u32) v0);
    { s32 c_ = t5 != 0; f8.f = (*(volatile f32 *) (u32) (v0 + 464)); if (c_) goto L_002067E8; }
    f1.f = (*(volatile f32 *) (u32) (t7 + -11668));
    f1.f = f7.f - f1.f;
    f1.i = (s32) f1.f;
    v0 = f1.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_002067D4; }
L_002067D4:;
    at = v0 < 500;
    if (at == 0) goto L_002067E8;
    f9.f = f9.f + f6.f;
L_002067E8:;
    fcc = f9.f <= f5.f;
    if (fcc) goto L_00206818;
    f1.f = f9.f - f5.f;
    v0 = t6 | 0x1;
    t4 = a3;
    t6 = v0 & 0xff;
    f1.i = f1.i & 0x7FFFFFFF;
    fcc = f1.f < f10.f;
    if (fcc) goto L_00206818;
    f10.i = f1.i;
L_00206818:;
    fcc = f9.f < f4.f;
    if (!fcc) goto L_00206848;
    f1.f = f9.f - f4.f;
    v0 = t6 | 0x1;
    t6 = v0 & 0xff;
    f1.i = f1.i & 0x7FFFFFFF;
    fcc = f1.f < f10.f;
    if (fcc) goto L_00206848;
    f10.i = f1.i;
    t4 = a2;
L_00206848:;
    fcc = f8.f <= f3.f;
    if (fcc) goto L_00206898;
    f1.f = f8.f - f3.f;
    v0 = t6 | 0x1;
    t6 = v0 & 0xff;
    f1.i = (s32) f1.f;
    v0 = f1.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00206874; }
L_00206874:;
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    fcc = f1.f < f10.f;
    if (fcc) goto L_00206898;
    f10.i = f1.i;
    t4 = v1;
L_00206898:;
    fcc = f8.f < f2.f;
    if (!fcc) goto L_002068C8;
    f1.f = f8.f - f2.f;
    v0 = t6 | 0x1;
    t6 = v0 & 0xff;
    f1.i = f1.i & 0x7FFFFFFF;
    fcc = f1.f < f10.f;
    if (fcc) goto L_002068C8;
    f10.i = f1.i;
    t4 = t9;
L_002068C8:;
    f1.f = (*(volatile f32 *) (u32) a0);
    fcc = f10.f < f1.f;
    if (fcc) goto L_002068E0;
    (*(volatile f32 *) (u32) a0) = f10.f;
    (*(volatile u8 *) (u32) a1) = (u8) t4;
L_002068E0:;
    t8 = t6 & 0xff;
    t6 = t4 & 0xff;
    v0 = (s32) ((u32) t5 + 0x1U);
    t5 = v0 & 0xff;
    t6 = t8 | t6;
    v0 = t6 & 0xff;
    at = t5 < 3;
    t6 = v0 & 0xf;
    t8 = v0 & 0xf0;
    t6 = (s32) ((u32) t6 << 1);
    t6 = (s32) ((u32) t8 + (u32) t6);
    f10.i = f0.i;
    { s32 c_ = at != 0; t6 = t6 & 0xff; if (c_) goto L_00206748; }
    return v0;
}
