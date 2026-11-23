/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_0090B8B0(s64, s64);
s64 func_0098F7E0(s64, s64, s64, s64);
s64 func_0098FD70(s64, s64, s64, s64);

s64 func_009176C0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    v0 = 46;
    s1 = a0;
    v1 = (*(volatile u8 *) (u32) (a0 + 477));
    { s32 c_ = v1 != v0; s0 = 0; if (c_) goto L_009176F0; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_009176F0:;
    v0 = (*(volatile s16 *) (u32) (s1 + 20));
    a0 = s1;
    f0.i = (s32) v0;
    f20.f = (f32) f0.i; v0 = func_0098F7E0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00917750;
    v0 = s0 & 0xff;
    v1 = (s32) ((u32) v0 << 9);
    f1.i = (s32) v1;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.i = (s32) 0;
    f1.f = (f32) f1.i;
    acc = f0.f + f1.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 16));
    f2.f = (*(volatile f32 *) (u32) (s1 + 224));
    f0.f = f0.f * f20.f;
    f1.f = acc + f2.f * f20.f;
    fcc = f0.f <= f1.f;
    if (fcc) goto L_00917750;
    v0 = 0; goto L_00917930;
L_00917750:;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21254));
    if (v0 != 0) { v0 = 0; goto L_00917930; }
    v0 = (*(volatile u8 *) (u32) (s1 + 16));
    at = v0 < 8;
    if (at != 0) { v0 = 0; goto L_00917930; }
    v0 = s0 & 0xff;
    v1 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 << 9);
    a0 = (*(volatile u8 *) (u32) (s1 + 19));
    f0.i = (s32) v0;
    v1 = (s32) ((u32) v1 + 0x1e90U);
    f4.f = (*(volatile f32 *) (u32) (s1 + 224));
    v0 = (s32) 0x44800000U;
    f2.i = (s32) v0;
    f1.i = (s32) 0;
    v0 = a0 ^ 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    f3.f = (*(volatile f32 *) (u32) v0);
    f0.f = (f32) f0.i;
    acc = f1.f + f2.f;
    f1.f = acc + f4.f * f20.f;
    f2.f = f3.f * f20.f;
    f0.f = f1.f - f0.f;
    fcc = f2.f < f0.f;
    if (fcc) { v0 = 0; goto L_00917930; }
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s16 *) (u32) (s1 + 20));
    v0 = (s32) ((u32) v0 + 0x1e88U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f0.f = (*(volatile f32 *) (u32) v0);
    f1.i = (s32) a0;
    f2.f = (f32) f1.i;
    f1.f = f0.f * f2.f;
    f0.f = f4.f * f2.f;
    fcc = f1.f <= f0.f;
    if (fcc) { a0 = s1; goto L_00917808; }
    v0 = 0; goto L_00917930;
L_00917808:;
    a1 = 1; v0 = func_0090B8B0(a0, a1);
    v1 = v0 & 0xff;
    v0 = 2;
    if (v1 == v0) { s0 = 8192; goto L_0091782C; }
    if (v1 == 0) { v0 = 0; goto L_00917930; }
    s0 = 4096;
L_0091782C:;
    a1 = 2;
    a0 = s1;
    a2 = a1; v0 = func_0098FD70(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (s1 + 19));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1eeeU);
    a1 = v0 & 0xff;
    v0 = 4;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) v1 >> 1);
    v0 = (s32) ((u32) v0 - (u32) v1);
    at = v0 < a1;
    if (at != 0) goto L_009178AC;
    a1 = 2;
    a0 = s1;
    a2 = a1; v0 = func_0098FD70(a0, a1, a2, a3);
    s2 = v0 & 0xff;
    a0 = s1;
    a1 = 2;
    a2 = 1; v0 = func_0098FD70(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1U);
    at = s2 < v0;
    if (at == 0) goto L_009178AC;
    v0 = 0; goto L_00917930;
L_009178AC:;
    a2 = (*(volatile u8 *) (u32) (s1 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 20;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 107));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    a0 = (s32) ((u32) v0 << 2);
    v1 = (*(volatile s32 *) (u32) (s1 + 272));
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s0 + (u32) v0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = (u64) v0 < (u64) v1;
    if (at != 0) { v0 = 1; goto L_00917930; }
    v0 = (*(volatile u8 *) (u32) (s1 + 16));
    v0 = v0 < 29;
    v0 = v0 ^ 0x1;
    v0 = v0 & 0xff;
L_00917930:;
    return v0;
}
