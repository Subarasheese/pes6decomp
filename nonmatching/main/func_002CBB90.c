/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_002CBB90(s64 a0) {
    s64 at = 0, v0 = 0, v1 = 0;

    v1 = (s64) ((u64) a0 << 56);
    v0 = -1;
    v1 = v1 >> 56;
    if (v1 == v0) goto L_002CBBC8;
    at = v1 < 28;
    if (at == 0) goto L_002CBBC8;
    v0 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + 0x3ba4U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_002CBBCC;
L_002CBBC8:;
    v0 = 0;
L_002CBBCC:;
    return v0;
}
