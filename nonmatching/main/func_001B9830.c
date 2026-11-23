/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B98D0(s32, s32);

void func_001B9830(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    if (a1 < 0) goto L_001B9848;
    v0 = (u64) a1 < (u64) (s64) 14;
    if (v0 != 0) goto L_001B9850;
L_001B9848:;
    a1 = -1; goto L_001B9864;
L_001B9850:;
    v0 = (s32) 0x3d0000U;
    v1 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + 0x15c0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
L_001B9864:;
    v0 = -1;
    if (a1 != v0) goto L_001B9878;
    v0 = 0; goto L_001B9880;
L_001B9878:;
    v0 = func_001B98D0(a0, a1);
L_001B9880:;
    return;
}
