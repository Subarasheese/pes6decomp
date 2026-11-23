/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0012B870(s32);

void func_0012B830(s32 a0, s32 a1) {
    s32 v0 = 0, s0 = 0;

    s0 = a0;
    a0 = a1; func_0012B870(a0);
    __asm__ volatile("vsubx.x $vf8, $vf6, $vf7x");
    __asm__ volatile("vaddy.y $vf8, $vf6, $vf7y");
    __asm__ volatile("vsubz.z $vf8, $vf6, $vf7z");
    __asm__ volatile("vaddw.w $vf8, $vf6, $vf7w");
    __asm__ volatile("sqc2 $vf8, 0(%0)" : : "r"((u32) s0) : "memory");
    return;
}
