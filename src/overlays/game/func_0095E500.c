/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00C04830(s64, s64, s64);

s64 func_0095E500(s64 a0, s64 a1) {
    s64 v0 = 0, a2 = 0;

    a2 = a1;
    a1 = 7; v0 = func_00C04830(a0, a1, a2); return v0;
}
