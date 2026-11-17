/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00188CE0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    if (a1 != 0) goto L_00188CF4;
    v0 = (s32) 0x520000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -183)); goto L_00188CFC;
L_00188CF4:;
    v0 = (s32) 0x520000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -184));
L_00188CFC:;
    if (v0 == 0) { v0 = 0; goto L_00188D60; }
    v0 = 1;
    if (a0 == v0) goto L_00188D40;
    if (a0 == 0) goto L_00188D20;
    v0 = (*(volatile s32 *) (u32) v1); goto L_00188D60;
L_00188D20:;
    if (a1 != v0) goto L_00188D34;
    v0 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 160)); goto L_00188D5C;
L_00188D34:;
    v0 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 164)); goto L_00188D5C;
L_00188D40:;
    if (a1 != v0) goto L_00188D54;
    v0 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 168)); goto L_00188D5C;
L_00188D54:;
    v0 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 172));
L_00188D5C:;
    v0 = (*(volatile s32 *) (u32) v1);
L_00188D60:;
    return v0;
}
