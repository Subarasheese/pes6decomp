/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00102600(void) {
    s32 v0 = 0;

    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi28" : "=r"(t_)); v0 = t_; }
    v0 = v0 | 0x2;
    __asm__ volatile("ctc2.ni %0, $vi28" : : "r"((s32) v0));
    return;
}
