/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void sceVu0TransMatrix(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0;
    u64 qh_a3 = 0;
    u64 qh_a4 = 0;
    u64 qh_a5 = 0;

    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("lqc2 $vf5, 48(%0)" : : "r"((u32) a1) : "memory");
    { u32 a_ = (u32) (a1 + 0) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a1 + 16) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a1 + 32) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    __asm__ volatile("vadd.xyz $vf5, $vf5, $vf4");
    { u32 a_ = (u32) (a0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    { u32 a_ = (u32) (a0 + 16) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (a0 + 32) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    __asm__ volatile("sqc2 $vf5, 48(%0)" : : "r"((u32) a0) : "memory"); return;
}
