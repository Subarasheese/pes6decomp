/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0012BF20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("vmul.xyzw $vf5, $vf4, $vf4");
    __asm__ volatile("vaddax.w ACC, $vf5, $vf5x");
    __asm__ volatile("vmadday.w ACC, $vf0, $vf5y");
    __asm__ volatile("vmaddz.w $vf5, $vf0, $vf5z");
    __asm__ volatile("vaddw.x $vf6, $vf0, $vf5w");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf6" : "=r"(t_)); a4 = t_; }
    f1.i = (s32) a4;
    f0.i = (s32) 0;
    fcc = f1.f <= f0.f;
    if (fcc) { __asm__ volatile("vmove.xyzw $vf7, $vf4"); goto L_0012BF64; }
    __asm__ volatile("vrsqrt Q, $vf0w, $vf5w");
    __asm__ volatile("vwaitq");
    __asm__ volatile("vmulq.xyzw $vf7, $vf4, Q");
L_0012BF64:;
    __asm__ volatile("sqc2 $vf7, 0(%0)" : : "r"((u32) a0) : "memory"); return v0;
}
