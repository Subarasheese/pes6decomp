/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001A5550(s64);
void func_001A5620(s64);
void func_001A5670(f32);
s64 func_009B4090(s64);
s64 func_009B44E0(void);

void func_002B61A0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 hi = 0, lo = 0;
    s64 frame[8];
    s64 sp = (s32) (u32) frame;

    v0 = func_009B44E0();
    v1 = v0 & 0xffff;
    v0 = 852;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (*(volatile s32 *) (u32) (gp + -32228));
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s16 *) (u32) (v0 + 840));
    if (v0 >= 0) { s0 = 1; goto L_002B61D4; }
    s0 = -1;
L_002B61D4:;
    a0 = 0; v0 = func_009B4090(a0);
    v1 = (s64) ((u64) s0 << 56);
    a4 = (*(volatile s16 *) (u32) (v0 + 12));
    a5 = (*(volatile s16 *) (u32) (v0 + 8));
    v1 = v1 >> 56;
    f0.i = (s32) v1;
    a2 = (s32) 0x3e0000U;
    a1 = (s32) 0x3e0000U;
    a2 = (s32) ((u32) a2 + 0xffffa234U);
    f1.f = (f32) f0.i;
    v1 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0xffffa238U);
    v1 = (s32) ((u32) v1 + 0xffffa23cU);
    a0 = (s32) ((u32) sp + 0x30U);
    v0 = (s32) 0x590000U;
    a3 = (*(volatile u8 *) (u32) (v0 + 10050));
    f0.i = (s32) a5;
    f2.i = (s32) a4;
    f0.f = (f32) f0.i;
    v0 = (s32) 0xc3b40000U;
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) v0;
    v0 = (s32) ((u32) a3 << 1);
    v0 = (s32) ((u32) v0 + (u32) a3);
    v0 = (s32) ((u32) v0 << 2);
    a2 = (s32) ((u32) a2 + (u32) v0);
    a1 = (s32) ((u32) a1 + (u32) v0);
    (*(volatile f32 *) (u32) (sp + 32)) = f0.f;
    v0 = (s32) ((u32) v1 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) a2);
    f2.f = (f32) f2.i;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 48)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) a1);
    f0.f = (*(volatile f32 *) (u32) v0);
    (*(volatile f32 *) (u32) (sp + 40)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f; func_001A5620(a0);
    a0 = (s32) ((u32) sp + 0x20U); func_001A5550(a0);
    v0 = (s32) 0x44e10000U;
    f12.i = (s32) v0;
    func_001A5670(f12.f);
    return;
}
