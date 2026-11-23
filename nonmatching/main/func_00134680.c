/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001010F8(void);

void func_00134680(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0x540000U;
    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (gp + -23504));
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v1 + -12034));
    if (v1 == 0) goto L_001346C8;
    a1 = (*(volatile s32 *) (u32) (gp + -23504));
L_001346AC:;
    v1 = (s32) 0x540000U;
    a0 = 1;
    v1 = (s32) ((u32) a1 + (u32) v1);
    (*(volatile u32 *) (u32) (v1 + -12640)) = (u32) 0;
    (*(volatile u32 *) (u32) (gp + -23500)) = (u32) a0;
    (*(volatile u32 *) (u32) (gp + -23496)) = (u32) 0; goto L_001346EC;
L_001346C8:;
    a0 = 0; v0 = func_001010F8();
    if (s0 == v0) goto L_001346C8;
    a1 = (*(volatile s32 *) (u32) (gp + -23504)); goto L_001346AC;
L_001346EC:;
    return;
}
