/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00104198(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13) {
    s32 v0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    a4 = f12.i;
    a5 = f13.i;
    __asm__ volatile("lqc2 $vf6, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("qmtc2.ni %0, $vf4" : : "r"((s32) a4));
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) a5));
    __asm__ volatile("vmaxx.xyzw $vf6, $vf6, $vf4x");
    __asm__ volatile("vminix.xyzw $vf6, $vf6, $vf5x");
    __asm__ volatile("sqc2 $vf6, 0(%0)" : : "r"((u32) a0) : "memory"); return v0;
}
