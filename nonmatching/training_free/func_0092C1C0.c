/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002CA7A0(s32, s32, s32, s32);
s32 func_0096B400(s32, s32, s32, s32);
s32 func_009B34C0(s32, s32, s32, s32);
void func_00B798F0(s32, s32, s32, s32);
s32 func_00BBB990(s32, s32, s32, s32);
s32 func_00BBB9C0(s32, s32, s32, s32);

void func_0092C1C0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 hi1 = 0, lo1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { 0 };
    volatile union { f32 f; s32 i; } f15 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) sp + 0x6cU);
    a2 = (*(volatile u8 *) (u32) (v0 + 7757));
    a1 = (s32) ((u32) sp + 0x68U); func_00B798F0(a0, a1, a2, a3);
    s1 = (s32) 0x590000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffffe7f0U);
L_0092C200:;
    a0 = s1; v0 = func_002CA7A0(a0, a1, a2, a3);
    if (v0 == 0) goto L_0092C440;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) s1);
    v1 = (*(volatile u8 *) (u32) (v1 + 7757));
    if (a0 == v1) goto L_0092C440;
    a1 = 1;
    if (a0 == a1) goto L_0092C440;
    v1 = 12;
    if (a0 == v1) goto L_0092C440;
    a0 = (*(volatile u8 *) (u32) (s1 + 22));
    v1 = 53;
    if (a0 == v1) goto L_0092C440;
    f3.f = (*(volatile f32 *) (u32) (sp + 104));
    f20.f = (*(volatile f32 *) (u32) (s1 + 112));
    f21.f = (*(volatile f32 *) (u32) (s1 + 108));
    f1.f = f20.f - f3.f;
    f2.i = f1.i & 0x7FFFFFFF;
    v0 = (s32) 0x44400000U;
    f0.i = (s32) v0;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_0092C2B4;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_0092C290;
    a1 = -1;
L_0092C290:;
    f0.i = (s32) a1;
    v0 = (s32) 0x44400000U;
    f1.i = (s32) v0;
    f2.f = (f32) f0.i;
    f0.i = (s32) 0;
    acc = f0.f + f3.f;
    f20.f = acc + f1.f * f2.f;
L_0092C2B4:;
    a0 = s1; v0 = func_0096B400(a0, a1, a2, a3);
    f12.f = (*(volatile f32 *) (u32) (sp + 108));
    s0 = v0;
    f13.f = (*(volatile f32 *) (u32) (sp + 104));
    f0.f = f21.f - f12.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    f0.f = f20.f - f13.f;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) a0 * (s64) (u64) (u32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) s0; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v1 = lo1; }
    v1 = a0 < v1;
    if (v1 != 0) { f14.i = f21.i; goto L_0092C458; }
L_0092C2F8:;
    f0.i = f21.i & 0x7FFFFFFF;
    v1 = (s32) 0x464c0000U;
    v1 = v1 | 0x6400;
    f1.i = (s32) v1;
    fcc = f0.f <= f1.f;
    if (fcc) goto L_0092C340;
    f0.i = (s32) 0;
    fcc = f21.f <= f0.f;
    if (fcc) { v1 = (s32) 0xc64c0000U; goto L_0092C334; }
    f21.i = f1.i; goto L_0092C340;
L_0092C334:;
    v1 = v1 | 0x6400;
    f1.i = (s32) v1;
    f21.i = f1.i;
L_0092C340:;
    f0.i = f20.i & 0x7FFFFFFF;
    v1 = (s32) 0x46080000U;
    v1 = v1 | 0x6400;
    f1.i = (s32) v1;
    fcc = f0.f <= f1.f;
    if (fcc) goto L_0092C388;
    f0.i = (s32) 0;
    fcc = f20.f <= f0.f;
    if (fcc) { v1 = (s32) 0xc6080000U; goto L_0092C37C; }
    f20.i = f1.i; goto L_0092C388;
L_0092C37C:;
    v1 = v1 | 0x6400;
    f1.i = (s32) v1;
    f20.i = f1.i;
L_0092C388:;
    f1.i = f21.i & 0x7FFFFFFF;
    v1 = (s32) 0x46620000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0092C3E0;
    f0.i = (s32) 0;
    fcc = f21.f < f0.f;
    if (!fcc) { v1 = 1; goto L_0092C3C0; }
    v1 = -1;
L_0092C3C0:;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x46620000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    f21.f = f0.f * f1.f;
L_0092C3E0:;
    f1.i = f20.i & 0x7FFFFFFF;
    v1 = (s32) 0x46180000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0092C438;
    f0.i = (s32) 0;
    fcc = f20.f < f0.f;
    if (!fcc) { v1 = 1; goto L_0092C418; }
    v1 = -1;
L_0092C418:;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x46180000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    f20.f = f0.f * f1.f;
L_0092C438:;
    (*(volatile f32 *) (u32) (s1 + 108)) = f21.f;
    (*(volatile f32 *) (u32) (s1 + 112)) = f20.f;
L_0092C440:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 22;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_0092C200; }
    goto L_0092C4A0;
L_0092C458:;
    f15.i = f20.i; v0 = func_009B34C0(a0, a1, a2, a3);
    s3 = v0 & 0xffff;
    a1 = s0;
    a0 = s3; v0 = func_00BBB990(a0, a1, a2, a3);
    f1.i = (s32) v0;
    a0 = s3;
    f0.f = (*(volatile f32 *) (u32) (sp + 108));
    a1 = s0;
    f1.f = (f32) f1.i;
    f21.f = f0.f + f1.f; v0 = func_00BBB9C0(a0, a1, a2, a3);
    f1.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) (sp + 104));
    f1.f = (f32) f1.i;
    f20.f = f0.f + f1.f; goto L_0092C2F8;
L_0092C4A0:;
    return;
}
