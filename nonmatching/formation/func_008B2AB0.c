/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);

s32 func_008B2AB0(s32 a0) {
    s32 v0 = 0, v1 = 0;

    v1 = a0 & 0xff;
    v0 = v1 < 17;
    if (v0 != 0) goto L_008B2AD0;
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffc9f0U); goto L_008B2AE8;
L_008B2AD0:;
    v0 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffc790U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
L_008B2AE8:;
    return v0;
}
