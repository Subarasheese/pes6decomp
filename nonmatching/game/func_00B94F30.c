/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BC9520(void);

void func_00B94F30(void) {
    s32 v0 = 0, a0 = 0;

    v0 = (s32) 0xcc0000U;
    a0 = 0;
    (*(volatile u8 *) (u32) (v0 + -12879)) = (u8) 0;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -12878)) = (u8) 0; v0 = func_00BC9520(); return;
}
