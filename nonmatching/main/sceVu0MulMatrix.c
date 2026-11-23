/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 sceVu0MulMatrix(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0;

    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) a1) : "memory");
    a3 = 4;
L_00103BCC:;
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("vmulax.xyzw ACC, $vf4, $vf8x");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmaddw.xyzw $vf9, $vf7, $vf8w");
    __asm__ volatile("sqc2 $vf9, 0(%0)" : : "r"((u32) a0) : "memory");
    a3 = (s32) ((u32) a3 + 0xffffffffU);
    a2 = (s32) ((u32) a2 + 0x10U);
    { s32 c_ = 0 != a3; a0 = (s32) ((u32) a0 + 0x10U); if (c_) goto L_00103BCC; }
    return v0;
}
