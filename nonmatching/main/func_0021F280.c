/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);

s32 func_0021F280(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    v0 = 0xffff;
    if (a0 != v0) goto L_0021F294;
    a0 = 105;
L_0021F294:;
    v0 = a0 < 115;
    if (v0 != 0) goto L_0021F2A8;
    v0 = 0; goto L_0021F300;
L_0021F2A8:;
    if (a1 != 0) goto L_0021F2EC;
    v0 = 105;
    if (a0 != v0) goto L_0021F2D0;
    v0 = (s32) 0x6c0000U;
    a0 = v0 | 0x77; v0 = func_001F08B0(a0);
    goto L_0021F2E4;
L_0021F2D0:;
    v0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v0 + 0xff0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
L_0021F2E4:;
    goto L_0021F304;
L_0021F2EC:;
    v0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v0 + 0xff4U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
L_0021F300:;
L_0021F304:;
    return v0;
}
