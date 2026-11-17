/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s32 func_00930080(s32, s32, s32, s32, f32, f32);
void func_009B36C0(s32, s32, s32, s32, s32, f32);

s32 func_00AB3720(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    f32 acc = 0;

    a4 = a4 & 0xff;
    s4 = a0;
    s3 = a1;
    s2 = a3;
    a3 = a2;
    s0 = a6;
    s1 = a5;
    a2 = s0;
    f20.i = f12.i; func_009B36C0(a0, a1, a2, a3, a4, f12.f);
    f0.i = (s32) s1;
    a0 = s4;
    a1 = s3;
    a2 = s0;
    f12.f = (f32) f0.i;
    f13.i = f20.i; v0 = func_00930080(a0, a1, a2, a3, f12.f, f13.f);
    s0 = v0;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) s2 << 2);
    f2.f = (*(volatile f32 *) (u32) (v0 + 7788));
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7796));
    v0 = (s32) ((u32) a0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f3.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = f0.f - f1.f;
    f2.f = f2.f - f3.f;
    acc = f0.f * f0.f;
    f12.f = acc + f2.f * f2.f; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x43800000U;
    f3.f = (f32) f0.i;
    f2.f = (*(volatile f32 *) (u32) (v0 + 7148));
    f0.i = (s32) s0;
    f1.i = (s32) v1;
    f0.f = (f32) f0.i;
    f2.f = f2.f * f3.f;
    f1.f = f1.f * f2.f;
    f0.f = f1.f / f0.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    return v0;
}
