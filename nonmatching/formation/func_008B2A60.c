/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);

s32 func_008B2A60(s32 a0) {
    s32 v0 = 0, v1 = 0;

    { s32 c_ = a0 >= 0; v0 = a0 & 0x1; if (c_) goto L_008B2A74; }
    if (v0 == 0) { v1 = (s32) ((u32) v0 << 2); goto L_008B2A78; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_008B2A74:;
    v1 = (s32) ((u32) v0 << 2);
L_008B2A78:;
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffc7e8U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0); return v0;
}
