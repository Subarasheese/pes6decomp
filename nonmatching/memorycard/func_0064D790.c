/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002212F0(void);

void func_0064D790(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    s0 = a0; v0 = func_002212F0();
    a2 = v0;
    a1 = 126;
L_0064D7AC:;
    a0 = (*(volatile s32 *) (u32) a2);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s32 *) (u32) (a2 + 4));
    (*(volatile u32 *) (u32) s0) = (u32) a0;
    a2 = (s32) ((u32) a2 + 0x8U);
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v1;
    { s32 c_ = a1 > 0; s0 = (s32) ((u32) s0 + 0x8U); if (c_) goto L_0064D7AC; }
    return;
}
