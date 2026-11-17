/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001A5550(s64);
s64 func_001A5620(s64);
f32 func_001A5660(void);
s64 func_00205FE0(s64);

s64 func_00206930(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f20 = { 0 };
    union { f32 f; s32 i; } f21 = { 0 };
    union { f32 f; s32 i; } f22 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0xcc0000U;
    a1 = 852;
    a2 = (*(volatile u16 *) (u32) (v0 + -11614));
    a3 = (*(volatile s32 *) (u32) (gp + -32228));
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v0 + -11671));
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) a1 + (u32) a3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s16 *) (u32) (v0 + 4));
    if (v0 <= 0) { v0 = -1; goto L_00206984; }
    v0 = 1;
L_00206984:;
    v0 = (s64) ((u64) v0 << 56);
    v1 = (s64) ((u64) a0 << 56);
    v0 = v0 >> 56;
    v1 = v1 >> 56;
    f0.i = (s32) v0;
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8d10U);
    v0 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffff8d14U);
    f3.f = (f32) f0.i;
    v1 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xffff8d18U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a0 = (s32) ((u32) sp + 0x40U);
    f2.f = (*(volatile f32 *) (u32) a1);
    f1.f = (*(volatile f32 *) (u32) v1);
    f0.f = (*(volatile f32 *) (u32) v0);
    f2.f = f3.f * f2.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 48)) = f2.f; v0 = func_00205FE0(a0);
    f0.f = (*(volatile f32 *) (u32) (sp + 64));
    f4.f = (*(volatile f32 *) (u32) (sp + 48));
    f1.i = (s32) 0;
    f3.f = f4.f - f0.f;
    fcc = f1.f == f3.f;
    if (fcc) { f0.i = (s32) f0.f; goto L_00206A48; }
    f0.f = (*(volatile f32 *) (u32) (sp + 56));
    f2.f = (*(volatile f32 *) (u32) (sp + 72));
    acc = f1.f + f0.f;
    f0.f = f0.f - f2.f;
    f1.f = f0.f / f3.f;
    f0.f = acc - f1.f * f4.f;
    f0.f = f2.f - f0.f;
    f0.f = f0.f / f1.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48; goto L_00206A58;
L_00206A48:;
    v0 = f0.i;
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
L_00206A58:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46080000U;
    v1 = v0 | 0x6400;
    v0 = (s32) 0x46880000U;
    v0 = v0 | 0x6400;
    f0.f = (*(volatile f32 *) (u32) (sp + 72));
    (*(volatile f32 *) (u32) (sp + 32)) = f1.f;
    f1.i = (s32) v1;
    f1.f = f1.f - f0.f;
    f0.i = (s32) v0;
    f20.f = f1.f / f0.f;
    f22.i = (s32) 0;
    f21.i = f22.i; f0.f = func_001A5660();
    v0 = (s32) 0x442f0000U;
    f1.i = (s32) v0;
    fcc = f0.f < f1.f;
    if (!fcc) goto L_00206ADC;
    v0 = (s32) 0x44610000U;
    v1 = (s32) 0x40d00000U;
    f1.i = (s32) v0;
    f0.f = f1.f - f0.f;
    f2.i = (s32) v1;
    f22.f = f2.f * f0.f;
L_00206ADC:;
    v0 = (s32) 0x530000U;
    v1 = 3;
    a0 = (*(volatile u8 *) (u32) (v0 + 12352));
    if (a0 == v1) { f0.f = (*(volatile f32 *) (u32) (sp + 72)); goto L_00206B68; }
    v0 = 1;
    if (a0 == v0) { v0 = (s32) 0x44fa0000U; goto L_00206B50; }
    v0 = 2;
    if (a0 == v0) { v0 = (s32) 0x45090000U; goto L_00206B34; }
    if (a0 == 0) { v0 = (s32) 0x44bb0000U; goto L_00206B18; }
    goto L_00206B64;
L_00206B18:;
    v0 = v0 | 0x8000;
    f0.i = (s32) 0;
    f1.i = (s32) v0;
    acc = f0.f + f22.f;
    f21.f = acc + f1.f * f20.f; goto L_00206B64;
L_00206B34:;
    v0 = v0 | 0x8000;
    f0.i = (s32) 0;
    f1.i = (s32) v0;
    acc = f0.f + f22.f;
    f21.f = acc + f1.f * f20.f; goto L_00206B64;
L_00206B50:;
    f0.i = (s32) 0;
    f1.i = (s32) v0;
    acc = f0.f + f22.f;
    f21.f = acc + f1.f * f20.f;
L_00206B64:;
    f0.f = (*(volatile f32 *) (u32) (sp + 72));
L_00206B68:;
    a0 = (s32) ((u32) sp + 0x30U);
    (*(volatile f32 *) (u32) (sp + 36)) = f21.f;
    (*(volatile f32 *) (u32) (sp + 40)) = f0.f; v0 = func_001A5620(a0);
    a0 = (s32) ((u32) sp + 0x20U); v0 = func_001A5550(a0);
    return v0;
}
