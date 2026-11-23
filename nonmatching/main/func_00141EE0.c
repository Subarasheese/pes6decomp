/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00141EE0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0;
    u64 qh_v1 = 0;
    u64 qh_a3 = 0;

    v1 = (s32) 0x500000U;
    a0 = (s32) 0x500000U;
    a2 = (*(volatile s64 *) (u32) (v1 + -8336));
    a1 = (s32) 0x500000U;
    a0 = (*(volatile s64 *) (u32) (a0 + -8328));
    v1 = (s32) 0xffff0000U;
    v1 = v1 | 0x3fff;
    { u64 h_ = (u64) 0; a3 = (s64) (u64) v1; qh_a3 = h_; }
    a2 = a2 & a3;
    v1 = (s32) 0x500000U;
    a0 = a0 & a3;
    (*(volatile u64 *) (u32) (a1 + -8336)) = (u64) a2;
    (*(volatile u64 *) (u32) (v1 + -8328)) = (u64) a0; return;
}
