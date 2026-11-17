/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


f32 func_00140F40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0;
    union { f32 f; s32 i; } f0 = { 0 };

    v0 = (s32) 0x400000U;
    a4 = (*(volatile s32 *) (u32) (v0 + -20296));
    v0 = (s32) 0x400000U;
    a5 = (*(volatile s32 *) (u32) (v0 + -20292));
    v0 = (s32) 0x400000U;
    v0 = (s32) ((u32) v0 + 0xffffb060U);
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vmulax.xyzw ACC, $vf4, $vf8x");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmaddw.xyzw $vf8, $vf7, $vf0w");
    __asm__ volatile("vdiv Q, $vf0w, $vf8w");
    __asm__ volatile("vsub.w $vf8, $vf0, $vf0");
    __asm__ volatile("qmtc2.ni %0, $vf4" : : "r"((s32) a4));
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) a5));
    __asm__ volatile("vaddx.w $vf8, $vf8, $vf5x");
    a6 = (s32) 0x437f0000U;
    __asm__ volatile("ctc2.ni %0, $vi21" : : "r"((s32) a6));
    __asm__ volatile("vmulax.xyzw ACC, $vf0, $vf4x");
    __asm__ volatile("vwaitq");
    __asm__ volatile("vmaddq.xyzw $vf8, $vf8, Q");
    __asm__ volatile("vmaxx.w $vf8, $vf8, $vf0x");
    __asm__ volatile("vminii.w $vf8, $vf8, I");
    { s32 c_ = a2 == 0; __asm__ volatile("vftoi4.xyzw $vf9, $vf8"); if (c_) goto L_00140FC0; }
    __asm__ volatile("vftoi0.zw $vf9, $vf8");
L_00140FC0:;
    __asm__ volatile("sqc2 $vf9, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("vaddq.x $vf8, $vf0, Q");
    { s32 t_; __asm__ volatile("qmfc2.ni %0, $vf8" : "=r"(t_)); v0 = t_; }
    f0.i = (s32) v0;
    return f0.f;
}
