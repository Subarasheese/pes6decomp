/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0012BFE0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0;

    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf5, 0(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("vmul.xyzw $vf6, $vf4, $vf5");
    __asm__ volatile("vsubax.w ACC, $vf6, $vf6x");
    __asm__ volatile("vmsubay.w ACC, $vf0, $vf6y");
    __asm__ volatile("vmsubz.w $vf6, $vf0, $vf6z");
    __asm__ volatile("vopmula.xyz ACC, $vf4, $vf5");
    __asm__ volatile("vopmsub.xyz $vf7, $vf5, $vf4");
    __asm__ volatile("vmulaw.xyz ACC, $vf4, $vf5w");
    __asm__ volatile("vmaddaw.xyz ACC, $vf5, $vf4w");
    __asm__ volatile("vmaddw.xyz $vf6, $vf7, $vf0w");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a0) : "memory"); return v0;
}
