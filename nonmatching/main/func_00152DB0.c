/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00146C70(s32, s32, s32, s32, s32, s32, s32, s32);

f32 func_00152DB0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 v0 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;

    v0 = (s32) 0x3fc90000U;
    v0 = v0 | 0xfdb;
    f0.i = (s32) v0;
    f20.i = f12.i;
    fcc = f20.f <= f0.f;
    if (fcc) { v0 = (s32) 0xbfc90000U; goto L_00152DFC; }
    v0 = (s32) 0x40490000U;
    a0 = (s32) 0x3c0000U;
    v0 = v0 | 0xfdb;
    a0 = (s32) ((u32) a0 + 0x7240U);
    f0.i = (s32) v0;
    f20.f = f0.f - f20.f; v0 = func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00152E30;
L_00152DFC:;
    v0 = v0 | 0xfdb;
    f0.i = (s32) v0;
    fcc = f20.f < f0.f;
    if (!fcc) goto L_00152E30;
    v0 = (s32) 0xc0490000U;
    a0 = (s32) 0x3c0000U;
    v0 = v0 | 0xfdb;
    a0 = (s32) ((u32) a0 + 0x7250U);
    f0.i = (s32) v0;
    f20.f = f0.f - f20.f; v0 = func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
L_00152E30:;
    v0 = (s32) 0x3c0000U;
    v0 = (s32) ((u32) v0 + 0x7230U);
    a4 = f20.i;
    __asm__ volatile("qmtc2.ni %0, $vf6" : : "r"((s32) a4));
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vmr32.w $vf6, $vf6");
    __asm__ volatile("vaddx.x $vf4, $vf0, $vf6x");
    __asm__ volatile("vmul.x $vf6, $vf6, $vf6");
    __asm__ volatile("vmulx.yzw $vf4, $vf4, $vf0x");
    __asm__ volatile("vmulx.xyzw $vf7, $vf5, $vf6x");
    __asm__ volatile("vmulw.xyzw $vf7, $vf7, $vf6w");
    __asm__ volatile("vmulx.xyz $vf7, $vf7, $vf6x");
    __asm__ volatile("vaddw.x $vf4, $vf4, $vf7w");
    __asm__ volatile("vmulx.xy $vf7, $vf7, $vf6x");
    __asm__ volatile("vaddz.x $vf4, $vf4, $vf7z");
    __asm__ volatile("vmulx.x $vf7, $vf7, $vf6x");
    __asm__ volatile("vaddy.x $vf4, $vf4, $vf7y");
    __asm__ volatile("vaddx.x $vf4, $vf4, $vf7x");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf4" : "=r"(t_)); a4 = t_; }
    f0.i = (s32) a4;
    return f0.f;
}
