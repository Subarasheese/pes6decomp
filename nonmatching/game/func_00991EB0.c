/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00991EB0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    a4 = (*(volatile s32 *) (u32) (gp + -31080));
    v0 = 0;
    a5 = 0;
    a2 = 7;
    a3 = 255;
L_00991EC4:;
    v1 = (*(volatile u8 *) (u32) (a4 + 8));
    if (v1 == 0) goto L_00991F28;
    if (v1 == a3) goto L_00991F28;
    v1 = (*(volatile s32 *) (u32) (a4 + 4));
    if (v1 != a0) goto L_00991F28;
    if (a1 != 0) goto L_00991EF8;
    v0 = (s32) ((u32) v0 + 0x1U); goto L_00991F28;
L_00991EF8:;
    if (a0 == a2) goto L_00991F08;
    goto L_00991F20;
L_00991F08:;
    v1 = (*(volatile u8 *) (u32) (a4 + 36));
    if (v1 != a1) goto L_00991F28;
    v0 = (s32) ((u32) v0 + 0x1U); goto L_00991F28;
L_00991F20:;
    v0 = (s32) ((u32) v0 + 0x1U);
L_00991F28:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = a5 < 10;
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0x40U); if (c_) goto L_00991EC4; }
    return v0;
}
