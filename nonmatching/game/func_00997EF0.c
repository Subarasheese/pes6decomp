/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00997EF0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    v1 = (*(volatile u8 *) (u32) (a0 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    a1 = (*(volatile u8 *) (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a1 == v0) { v0 = 1; goto L_00997F44; }
    v1 = (s32) 0x590000U;
    a0 = 0;
    v1 = (s32) ((u32) v1 + 0x2800U);
L_00997F20:;
    v0 = (*(volatile u8 *) (u32) (v1 + 16));
    if (a1 != v0) { a0 = (s32) ((u32) a0 + 0x1U); goto L_00997F34; }
    v0 = 1; goto L_00997F44;
L_00997F34:;
    v0 = a0 < 8;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x28U); if (c_) goto L_00997F20; }
    v0 = 0;
L_00997F44:;
    return v0;
}
