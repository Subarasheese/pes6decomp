/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_003413D0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    if (a0 != 0) { v1 = (*(volatile s32 *) (u32) a0); goto L_003413E0; }
    v0 = 0; goto L_0034142C;
L_003413E0:;
    v0 = 1;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (a0 + 33)); goto L_003413F4; }
    v0 = 0; goto L_0034142C;
L_003413F4:;
    v0 = (s32) ((u32) v0 + 0xfffffffaU);
    at = (u64) v0 < (u64) (s64) 10;
    if (at == 0) { v0 = 1; goto L_0034142C; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x6070U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x341420U) goto L_00341420; }
L_00341420:;
    v0 = 0; goto L_0034142C;
    v0 = 1;
L_0034142C:;
    return v0;
}
