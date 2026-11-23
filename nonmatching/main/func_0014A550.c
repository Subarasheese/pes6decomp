/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0014A410(s32);

void func_0014A550(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0;

    v1 = (s32) 0x510000U;
    a0 = (*(volatile s32 *) (u32) (v1 + -20932));
L_0014A560:;
    v1 = (*(volatile u16 *) (u32) (a0 + 32));
    { s32 c_ = v1 != 0; a5 = (*(volatile s32 *) (u32) (a0 + 12)); if (c_) goto L_0014A588; }
    v1 = (s32) 0x510000U;
    v1 = (s32) ((u32) v1 + 0xffffae30U);
    if (a0 == v1) goto L_0014A590;
    func_0014A410(a0);
L_0014A588:;
    a0 = a5; goto L_0014A560;
L_0014A590:;
    return;
}
