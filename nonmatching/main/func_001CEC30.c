/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_001CEC30(s64 a0, s64 a1) {
    s64 v0 = 0, v1 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;

    v1 = (s32) 0x530000U;
    a1 = (*(volatile s64 *) (u32) (v1 + -21776));
    v1 = -16384;
    { u64 h_ = (u64) 0; a0 = (s64) (u64) v1; qh_a0 = h_; }
    a0 = a1 & a0;
    v1 = (s32) 0x530000U;
    a0 = a0 | 0x1001;
    (*(volatile u64 *) (u32) (v1 + -21776)) = (u64) a0; return;
}
