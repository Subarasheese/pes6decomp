/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002AE670(s64);
void func_0030E5C0(s64, s64);
s64 func_00340590(f32, f32);
s64 func_00341880(s64, s64);

s64 func_00337DA0(s64 a0, s64 a1, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[8];
    s64 sp = (s32) (u32) frame;

    v0 = 6;
    v1 = (*(volatile s32 *) (u32) a0);
    if (v1 == v0) { v1 = (*(volatile u8 *) (u32) (a0 + 4)); goto L_00337E80; }
    v0 = 10;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (a0 + 34)); goto L_00337DE0; }
    v0 = 3;
    if (v1 == v0) { v0 = 1; goto L_00337FD4; }
    goto L_00337FD0;
L_00337DE0:;
    v0 = (s64) ((u64) v0 << 58);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) goto L_00337FD0;
    a1 = (*(volatile u8 *) (u32) (a0 + 4));
    a0 = (s32) ((u32) sp + 0x3fU); func_0030E5C0(a0, a1);
    v1 = (*(volatile u8 *) (u32) (sp + 63));
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00337E18; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00337E18:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s16 *) (u32) (v1 + 20));
    f1.f = (*(volatile f32 *) (u32) (v1 + 224));
    f0.f = (*(volatile f32 *) (u32) (v1 + 232));
    f2.i = (s32) v0;
    f2.f = (f32) f2.i;
    f12.f = f1.f * f2.f;
    f13.f = f0.f * f2.f; v0 = func_00340590(f12.f, f13.f);
    if (v0 == 0) goto L_00337FD0;
    a0 = 224; v0 = func_002AE670(a0);
    a0 = v0;
    a1 = 4; v0 = func_00341880(a0, a1);
    if (v0 == 0) goto L_00337FD0;
    v0 = 1; goto L_00337FD4;
L_00337E80:;
    v0 = 255;
    if (v1 == v0) { a1 = 1; goto L_00337E98; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a1 = hi;
L_00337E98:;
    v0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) v0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    v0 = (s32) 0x463c0000U;
    a1 = (s32) ((u32) a1 << 6);
    v0 = v0 | 0x6400;
    v1 = (s32) ((u32) v1 + (u32) a1);
    f0.i = (s32) v0;
    v0 = (*(volatile s16 *) (u32) (v1 + 20));
    f1.f = (*(volatile f32 *) (u32) (v1 + 224));
    f2.i = (s32) v0;
    f2.f = (f32) f2.i;
    f1.f = f2.f * f1.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00337FD0;
    f0.f = (*(volatile f32 *) (u32) (v1 + 232));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45120000U;
    v0 = v0 | 0x8000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00337FD0;
    v1 = (*(volatile u8 *) (u32) (a0 + 5));
    v0 = 11;
    if (v1 == v0) { a0 = 224; goto L_00337F2C; }
    v0 = 16;
    if (v1 == v0) goto L_00337F28;
    goto L_00337FD0;
L_00337F28:;
    a0 = 224;
L_00337F2C:;
    s1 = 0; v0 = func_002AE670(a0);
    if (v0 <= 0) goto L_00337FD0;
    s0 = 0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
L_00337F44:;
    v1 = (s32) ((u32) v0 + (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (v1 + 1148));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { a0 = 224; goto L_00337FB8; }
    f0.f = (*(volatile f32 *) (u32) (v1 + 2940));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x44d80000U;
    v0 = v0 | 0x6000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00337FB4;
    f1.f = (*(volatile f32 *) (u32) (v1 + 2044));
    v0 = (s32) 0xc4220000U;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00337FB4;
    v0 = 1; goto L_00337FD4;
L_00337FB4:;
    a0 = 224;
L_00337FB8:;
    s0 = (s32) ((u32) s0 + 0x20U);
    s1 = (s32) ((u32) s1 + 0x8U); v0 = func_002AE670(a0);
    v0 = s1 < v0;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00337F44; }
L_00337FD0:;
    v0 = 0;
L_00337FD4:;
    return v0;
}
