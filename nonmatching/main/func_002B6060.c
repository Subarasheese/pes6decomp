/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001A5550(s64);
void func_001A5620(s64);
void func_001A5670(f32);
s64 func_009B4090(s64);
s64 func_009B44E0(void);

void func_002B6060(s64 a0, s64 a1, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    v0 = func_009B44E0();
    v1 = v0 & 0xffff;
    v0 = 852;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (*(volatile s32 *) (u32) (gp + -32228));
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s16 *) (u32) (v0 + 840));
    if (v0 >= 0) { s0 = 1; goto L_002B609C; }
    s0 = -1;
L_002B609C:;
    a0 = 0; v0 = func_009B4090(a0);
    v1 = (s64) ((u64) s0 << 56);
    a1 = (*(volatile s16 *) (u32) (v0 + 8));
    v1 = v1 >> 56;
    a0 = (*(volatile s16 *) (u32) (v0 + 12));
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x46610000U;
    v1 = v1 | 0x5400;
    v0 = (s32) 0xc2da0000U;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) v0;
    f0.i = (s32) a0;
    f2.i = (s32) a1;
    f21.f = (f32) f0.i;
    f0.i = (s32) v1;
    f20.f = (f32) f2.i;
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (sp + 64)) = f0.f; v0 = func_009B44E0();
    v1 = v0 & 0xffff;
    a0 = (*(volatile s32 *) (u32) (gp + -32228));
    v0 = 852;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    v0 = (s32) 0x46360000U;
    v1 = (s32) 0xc3ba0000U;
    v0 = v0 | 0x6c00;
    f0.i = (s32) v0;
    v0 = (s32) ((u32) a1 + (u32) a0);
    v0 = (*(volatile s16 *) (u32) (v0 + 844));
    fcc = f20.f <= f0.f;
    f1.i = (s32) v0;
    (*(volatile u32 *) (u32) (sp + 52)) = (u32) v1;
    (*(volatile f32 *) (u32) (sp + 56)) = f21.f;
    f1.f = (f32) f1.i;
    (*(volatile f32 *) (u32) (sp + 48)) = f20.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) (sp + 72)) = f1.f; if (c_) goto L_002B6140; }
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f; goto L_002B6168;
L_002B6140:;
    v0 = (s32) 0xc6360000U;
    v0 = v0 | 0x6c00;
    f0.i = (s32) v0;
    fcc = f20.f < f0.f;
    if (!fcc) { f0.i = f20.i; goto L_002B6164; }
    goto L_002B6164;
L_002B6164:;
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f;
L_002B6168:;
    a0 = (s32) ((u32) sp + 0x40U); func_001A5620(a0);
    a0 = (s32) ((u32) sp + 0x30U); func_001A5550(a0);
    v0 = (s32) 0x44520000U;
    f12.i = (s32) v0;
    func_001A5670(f12.f);
    return;
}
