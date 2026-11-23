/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00102C60(void) {
    s32 v0 = 0;

    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi28" : "=r"(t_)); v0 = t_; }
    v0 = (s32) ((u32) v0 >> 10);
    v0 = v0 & 0x1; return v0;
}
