/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00103D60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12) {
    s32 v0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a1) : "memory");
    a4 = f12.i;
    __asm__ volatile("qmtc2.ni %0, $vf5" : : "r"((s32) a4));
    __asm__ volatile("vdiv Q, $vf0w, $vf5x");
    __asm__ volatile("vwaitq");
    __asm__ volatile("vmulq.xyz $vf4, $vf4, Q");
    __asm__ volatile("sqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory"); return v0;
}
