/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00104630(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0;

    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) a1) : "memory");
L_00104640:;
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("vmulax.xyzw ACC, $vf4, $vf8x");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmaddw.xyzw $vf9, $vf7, $vf8w");
    __asm__ volatile("vdiv Q, $vf0w, $vf9w");
    __asm__ volatile("vwaitq");
    __asm__ volatile("vmulq.xyz $vf9, $vf9, Q");
    { s32 c_ = a4 == 0; __asm__ volatile("vftoi4.xyzw $vf10, $vf9"); if (c_) goto L_0010466C; }
    __asm__ volatile("vftoi0.zw $vf10, $vf9");
L_0010466C:;
    __asm__ volatile("sqc2 $vf10, 0(%0)" : : "r"((u32) a0) : "memory");
    a3 = (s32) ((u32) a3 + 0xffffffffU);
    a2 = (s32) ((u32) a2 + 0x10U);
    { s32 c_ = 0 != a3; a0 = (s32) ((u32) a0 + 0x10U); if (c_) goto L_00104640; }
    return v0;
}
