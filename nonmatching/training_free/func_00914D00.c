/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_0090B980(s64);
s64 func_009B30B0(s64, s64, s64, s64);

s64 func_00914D00(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    s0 = (*(volatile s16 *) (u32) (a0 + 20));
    { s32 c_ = a1 != 0; s1 = a0; if (c_) goto L_00914EF0; }
    a1 = 0;
L_00914D20:;
    v0 = (*(volatile u8 *) (u32) (s1 + 18));
L_00914D24:;
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x1eeeU);
    v1 = 4;
    a0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (*(volatile u8 *) (u32) a0);
    if (a0 == v1) { v0 = 1; goto L_00914F88; }
    v1 = 3;
    if (a0 == v1) { a1 = (s32) ((u32) a1 + 0xfffff600U); goto L_00914D60; }
    v1 = 1;
    if (a0 == v1) { a1 = (s32) ((u32) a1 + 0xa00U); goto L_00914D60; }
    if (a0 == 0) { v0 = 0; goto L_00914F88; }
L_00914D60:;
    f0.i = (s32) s0;
    a2 = (*(volatile s32 *) (u32) (gp + -32252));
    f3.f = (f32) f0.i;
    f0.f = (*(volatile f32 *) (u32) (a2 + 16));
    f2.f = f0.f * f3.f;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) s0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    fcc = f2.f <= f0.f;
    if (!fcc) { v0 = 1; goto L_00914F88; }
    f0.i = (s32) a1;
    f1.f = (*(volatile f32 *) (u32) (s1 + 224));
    f0.f = (f32) f0.i;
    f1.f = f1.f * f3.f;
    f0.f = f0.f + f2.f;
    fcc = f0.f < f1.f;
    if (fcc) { v0 = 1; goto L_00914F88; }
    v1 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (v1 + 7756));
    if (a1 == 0) goto L_00914EE8;
    f1.f = (*(volatile f32 *) (u32) (s1 + 232));
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { a0 = 1; goto L_00914DDC; }
    a0 = -1;
L_00914DDC:;
    f1.f = (*(volatile f32 *) (u32) (a2 + 24));
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { v1 = 1; goto L_00914DF8; }
    v1 = -1;
L_00914DF8:;
    if (v1 != a0) goto L_00914EE8;
    a0 = a1 & 0xff;
    v1 = 255;
    if (a0 == v1) { a1 = 1; goto L_00914E1C; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    a1 = hi;
L_00914E1C:;
    v1 = (s32) ((u32) a1 << 3);
    a0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    a1 = (s32) ((u32) v1 << 6);
    a3 = (*(volatile u8 *) (u32) (s1 + 17));
    a4 = (s32) ((u32) a0 + (u32) a1);
    v1 = (*(volatile u8 *) (u32) s1);
    a0 = (s32) ((u32) v0 << 4);
    a2 = (s32) ((u32) a0 - (u32) v0);
    a1 = (s32) ((u32) a2 << 3);
    v0 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 - (u32) a2);
    v0 = (s32) ((u32) v0 + 0x2980U);
    a2 = (s32) ((u32) a3 << 4);
    a1 = (s32) ((u32) a1 << 8);
    a3 = (s32) ((u32) a2 - (u32) a3);
    a0 = (*(volatile u16 *) (u32) (a4 + 38));
    a2 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) a4);
    v1 = (s32) ((u32) a3 << 3);
    a1 = (*(volatile u16 *) (u32) (v0 + 296));
    v1 = (s32) ((u32) v1 - (u32) a3);
    v1 = (s32) ((u32) v1 << 3);
    s1 = (s32) ((u32) v1 + (u32) a2); v0 = func_009B30B0(a0, a1, a2, a3);
    s0 = v0 & 0xffff;
    a1 = 30;
    v0 = (*(volatile u8 *) (u32) (s1 + 116));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (s32) 0x66660000U;
    v1 = v1 | 0x6667;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) v0 >> 31);
    v1 = hi;
    v0 = (*(volatile u8 *) (u32) (s1 + 124));
    v1 = (s32) v1 >> 2;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0x20U);
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63);
    v0 = (s32) ((u32) v0 << 4);
    v0 = (s32) ((u32) v1 + (u32) v0);
    at = s0 < v0;
    if (at == 0) goto L_00914EE8;
    v0 = 1; goto L_00914F88;
L_00914EE8:;
    v0 = 0; goto L_00914F88;
L_00914EF0:;
    v0 = func_0090B980(a0);
    v1 = v0 & 0xff;
    v0 = 5;
    if (v1 == v0) goto L_00914F7C;
    v0 = 3;
    if (v1 == v0) goto L_00914F7C;
    v0 = 4;
    if (v1 == v0) goto L_00914F7C;
    v0 = 255;
    if (v1 == v0) goto L_00914F74;
    v0 = 6;
    if (v1 == v0) goto L_00914F74;
    v0 = 2;
    if (v1 == v0) goto L_00914F74;
    v0 = 7;
    if (v1 == v0) goto L_00914F6C;
    v0 = 1;
    if (v1 == v0) goto L_00914F6C;
    if (v1 == 0) goto L_00914F6C;
    a1 = -2560; goto L_00914F80;
L_00914F6C:;
    a1 = 2560; goto L_00914D20;
L_00914F74:;
    a1 = 0; goto L_00914D20;
L_00914F7C:;
    a1 = -2560;
L_00914F80:;
    v0 = (*(volatile u8 *) (u32) (s1 + 18)); goto L_00914D24;
L_00914F88:;
    return v0;
}
