/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00103ED8(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0;

    a4 = (s32) 0x370000U;
    a4 = (s32) ((u32) a4 + 0x1220U);
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a4) : "memory");
    __asm__ volatile("vmr32.w $vf6, $vf6");
    __asm__ volatile("vaddx.x $vf4, $vf0, $vf6x");
    __asm__ volatile("vmul.x $vf6, $vf6, $vf6");
    __asm__ volatile("vmulx.yzw $vf4, $vf4, $vf0x");
    __asm__ volatile("vmulw.xyzw $vf8, $vf5, $vf6w");
    __asm__ volatile("vsub.xyzw $vf5, $vf0, $vf0");
    __asm__ volatile("vmulx.xyzw $vf8, $vf8, $vf6x");
    __asm__ volatile("vmulx.xyz $vf8, $vf8, $vf6x");
    __asm__ volatile("vaddw.x $vf4, $vf4, $vf8w");
    __asm__ volatile("vmulx.xy $vf8, $vf8, $vf6x");
    __asm__ volatile("vaddz.x $vf4, $vf4, $vf8z");
    __asm__ volatile("vmulx.x $vf8, $vf8, $vf6x");
    __asm__ volatile("vaddy.x $vf4, $vf4, $vf8y");
    __asm__ volatile("vaddx.x $vf4, $vf4, $vf8x");
    __asm__ volatile("vaddx.xy $vf4, $vf5, $vf4x");
    __asm__ volatile("vmul.x $vf7, $vf4, $vf4");
    __asm__ volatile("vsubx.w $vf7, $vf0, $vf7x");
    __asm__ volatile("vsqrt Q, $vf7w");
    __asm__ volatile("vwaitq");
    { s32 c_ = a3 != 0; __asm__ volatile("vaddq.x $vf7, $vf0, Q"); if (c_) goto L_00103F40; }
    __asm__ volatile("vaddx.x $vf4, $vf5, $vf7x"); goto L_00103F44;
L_00103F40:;
    __asm__ volatile("vsubx.x $vf4, $vf5, $vf7x");
L_00103F44:;
    return;
}
