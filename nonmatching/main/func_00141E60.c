/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00141E60(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0;
    u64 qh_v1 = 0;
    u64 qh_a1 = 0;

    v1 = (s32) 0x500000U;
    a0 = (s32) 0x50000U;
    a2 = (*(volatile s64 *) (u32) (v1 + -8336));
    v1 = (s32) 0xfff80000U;
    v1 = v1 | 0xffff;
    { u64 h_ = (u64) 0; a1 = (s64) (u64) v1; qh_a1 = h_; }
    a1 = a2 & a1;
    v1 = (s32) 0x500000U;
    a0 = a1 | a0;
    (*(volatile u64 *) (u32) (v1 + -8336)) = (u64) a0; return;
}
