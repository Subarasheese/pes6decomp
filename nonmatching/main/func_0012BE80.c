/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0012BE80(s32 a0, s32 a1) {
    s32 v0 = 0;

    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("vsub.xyzw $vf8, $vf0, $vf0");
    __asm__ volatile("vadd.w $vf8, $vf8, $vf0");
    __asm__ volatile("vmr32.xyzw $vf7, $vf8");
    __asm__ volatile("vmr32.xyzw $vf6, $vf7");
    __asm__ volatile("vmr32.xyzw $vf5, $vf6");
    __asm__ volatile("vadd.xyzw $vf10, $vf4, $vf4");
    __asm__ volatile("vmul.xyz $vf11, $vf10, $vf4");
    __asm__ volatile("vopmula.xyz ACC, $vf10, $vf4");
    __asm__ volatile("vmaddw.xyz $vf12, $vf10, $vf4w");
    __asm__ volatile("vmsubw.xyz $vf13, $vf10, $vf4w");
    __asm__ volatile("vsuby.x $vf5, $vf5, $vf11y");
    __asm__ volatile("vaddz.y $vf5, $vf5, $vf12z");
    __asm__ volatile("vaddy.z $vf5, $vf5, $vf13y");
    __asm__ volatile("vsubz.x $vf5, $vf5, $vf11z");
    __asm__ volatile("vsubx.y $vf6, $vf6, $vf11x");
    __asm__ volatile("vaddz.x $vf6, $vf6, $vf13z");
    __asm__ volatile("vaddx.z $vf6, $vf6, $vf12x");
    __asm__ volatile("vsubz.y $vf6, $vf6, $vf11z");
    __asm__ volatile("vsubx.z $vf7, $vf7, $vf11x");
    __asm__ volatile("vaddy.x $vf7, $vf7, $vf12y");
    __asm__ volatile("vaddx.y $vf7, $vf7, $vf13x");
    __asm__ volatile("vsuby.z $vf7, $vf7, $vf11y");
    __asm__ volatile("sqc2 $vf5, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("sqc2 $vf6, 16(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("sqc2 $vf7, 32(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("sqc2 $vf8, 48(%0)" : : "r"((u32) a0) : "memory"); return v0;
}
