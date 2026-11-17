/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_0011D468(s32, s32, s32, s32, s32, f32);
f32 func_0011D5E0(f32);

void func_0012B610(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f20 = { 0 };
    union { f32 f; s32 i; } f21 = { 0 };
    union { f32 f; s32 i; } f22 = { 0 };
    s32 fcc = 0;

    s3 = a0;
    s2 = a1;
    s1 = a2;
    f22.i = f12.i;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) s2) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) s1) : "memory");
    __asm__ volatile("vmul.xyzw $vf5, $vf4, $vf5");
    __asm__ volatile("vaddax.w ACC, $vf5, $vf5x");
    __asm__ volatile("vmadday.w ACC, $vf0, $vf5y");
    __asm__ volatile("vmaddz.w $vf5, $vf0, $vf5z");
    __asm__ volatile("vaddw.x $vf6, $vf0, $vf5w");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf6" : "=r"(t_)); v0 = t_; }
    f12.i = (s32) v0;
    f0.i = (s32) 0;
    fcc = f12.f < f0.f;
    if (!fcc) { s0 = 0; goto L_0012B684; }
    f12.i = f12.i ^ (s32) 0x80000000U;
    s0 = 1;
L_0012B684:;
    a0 = (s32) 0x3f800000U;
    v1 = (s32) 0x37270000U;
    f2.i = (s32) a0;
    v1 = v1 | 0xc5ac;
    f0.i = (s32) v1;
    f1.f = f2.f - f12.f;
    fcc = f1.f <= f0.f;
    if (fcc) { f21.f = f2.f - f22.f; goto L_0012B70C; }
    f0.f = func_0011D5E0(f12.f);
    f21.i = f0.i;
    f12.i = f21.i; f0.f = func_0011D468(a0, a1, a2, a3, a4, f12.f);
    f20.i = f0.i;
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    f0.f = f0.f - f22.f;
    f12.f = f0.f * f21.f; f0.f = func_0011D468(a0, a1, a2, a3, a4, f12.f);
    f12.f = f22.f * f21.f;
    f21.f = f0.f / f20.f;
    f0.f = func_0011D468(a0, a1, a2, a3, a4, f12.f);
    f22.f = f0.f / f20.f;
L_0012B70C:;
    if (s0 == 0) goto L_0012B718;
    f22.i = f22.i ^ (s32) 0x80000000U;
L_0012B718:;
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) s2) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) s1) : "memory");
    a4 = f21.i;
    __asm__ volatile("qmtc2.ni %0, $vf6" : : "r"((s32) a4));
    a4 = f22.i;
    __asm__ volatile("qmtc2.ni %0, $vf7" : : "r"((s32) a4));
    __asm__ volatile("vmulax.xyzw ACC, $vf4, $vf6x");
    __asm__ volatile("vmaddx.xyzw $vf12, $vf5, $vf7x");
    __asm__ volatile("sqc2 $vf12, 0(%0)" : : "r"((u32) s3) : "memory");
    return;
}
