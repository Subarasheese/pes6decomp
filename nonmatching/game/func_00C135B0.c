/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00C135B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = -1;
    if (a0 == v0) goto L_00C13628;
    if (a1 == 0) goto L_00C13628;
    a3 = (s32) 0xcc0000U;
    a0 = (s32) ((u32) a0 + 0xfffffffcU);
    a3 = (s32) ((u32) a3 + 0xfffffaa0U);
    v0 = (u64) a0 < (u64) a3;
    if (v0 != 0) goto L_00C13628;
L_00C135DC:;
    v0 = (*(volatile u8 *) (u32) (a0 + 2));
    { s32 c_ = a2 == 0; a4 = a2; if (c_) goto L_00C13618; }
    v1 = v0 & 0xff;
L_00C135F0:;
    a4 = (s32) ((u32) a4 + 0xffffffffU);
    v0 = (s32) ((u32) a1 + (u32) a4);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v1 != v0) goto L_00C1360C;
    v0 = a0; goto L_00C1362C;
L_00C1360C:;
    if (a4 != 0) goto L_00C135F0;
L_00C13618:;
    a0 = (s32) ((u32) a0 + 0xfffffffcU);
    at = (u64) a0 < (u64) a3;
    if (at == 0) goto L_00C135DC;
L_00C13628:;
    v0 = -1;
L_00C1362C:;
    return v0;
}
