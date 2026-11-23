/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00141FA0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0;
    u64 qh_v1 = 0;
    u64 qh_a2 = 0;

    v1 = (s32) 0x500000U;
    a0 = (s32) 0x500000U;
    a1 = (*(volatile s64 *) (u32) (v1 + -8328));
    v1 = (s32) 0x500000U;
    a3 = (*(volatile s64 *) (u32) (v1 + -8336));
    v1 = -16384;
    { u64 h_ = (u64) 0; a2 = (s64) (u64) v1; qh_a2 = h_; }
    a1 = a1 & a2;
    v1 = (s32) 0x500000U;
    a1 = a1 | 0xd;
    a2 = a3 & a2;
    (*(volatile u64 *) (u32) (v1 + -8328)) = (u64) a1;
    v1 = a2 | 0x3;
    (*(volatile u64 *) (u32) (a0 + -8336)) = (u64) v1; return;
}
