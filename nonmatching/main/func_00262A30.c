/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00221150(void);
s64 func_00263170(void);

s64 func_00262A30(s64 a0) {
    s64 v0 = 0, v1 = 0, s0 = 0;

    s0 = a0;
    v0 = s0 & 0xffff;
    if (v0 != 0) goto L_00262A50;
    s0 = (s64) ((u64) 0 + (u64) (s64) 10);
L_00262A50:;
    v0 = func_00263170();
    if (v0 == 0) { v1 = 0; goto L_00262A6C; }
    v0 = func_00221150();
    v1 = v0;
L_00262A6C:;
    (*(volatile u16 *) (u32) (v1 + 12)) = (u16) s0;
    return v0;
}
