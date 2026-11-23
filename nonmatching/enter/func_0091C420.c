/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);

s32 func_0091C420(s32 a0) {
    s32 v0 = 0, v1 = 0;

    v0 = (s32) 0x360000U;
    a0 = v0 | 0x54; v0 = func_001F08B0(a0);
    if (v0 == 0) goto L_0091C448;
    v1 = (*(volatile s8 *) (u32) v0);
    if (v1 != 0) { ; goto L_0091C454; }
L_0091C448:;
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xffffe918U);
L_0091C454:;
    return v0;
}
