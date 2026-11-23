/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_00104780(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0;

    __asm__ volatile("vsub.xyzw $vf4, $vf0, $vf0");
    v0 = (s32) 0x45800000U;
    v0 = (s64) ((u64) v0 << 16);
    v0 = v0 | 0x4580;
    v0 = (s64) ((u64) v0 << 16);
    __asm__ volatile("lqc2 $vf6, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf9, 0(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("qmtc2.ni %0, $vf7" : : "r"((s32) v0));
    __asm__ volatile("ctc2.ni %0, $vi16" : : "r"((s32) 0));
    __asm__ volatile("vsub.xyw $vf5, $vf6, $vf4");
    __asm__ volatile("vsub.xy $vf5, $vf7, $vf6");
    __asm__ volatile("vsub.xyw $vf5, $vf8, $vf4");
    __asm__ volatile("vsub.xy $vf5, $vf7, $vf8");
    __asm__ volatile("vsub.xyw $vf5, $vf9, $vf4");
    __asm__ volatile("vsub.xy $vf5, $vf7, $vf9");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi16" : "=r"(t_)); v0 = t_; }
    v0 = v0 & 0xc0; return v0;
}
