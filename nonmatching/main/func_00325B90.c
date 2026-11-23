/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00325B90(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v0 = (*(volatile s32 *) (u32) (gp + -31680));
    a1 = (*(volatile u8 *) (u32) (v0 + 44));
    { s32 c_ = a1 != 0; v1 = (*(volatile u8 *) (u32) (v0 + 45)); if (c_) goto L_00325BAC; }
    v0 = 1;
    if (v1 == v0) { (*(volatile u32 *) (u32) a0) = (u32) 0; goto L_00325C14; }
L_00325BAC:;
    v0 = 1;
    if (a1 != v0) { v0 = 2; goto L_00325BD4; }
    v0 = 2;
    if (v1 != v0) goto L_00325BD0;
    (*(volatile u32 *) (u32) a0) = (u32) 0;
    goto L_00325C14;
L_00325BD0:;
    v0 = 2;
L_00325BD4:;
    if (a1 != v0) { v0 = 3; goto L_00325BEC; }
    v0 = 3;
    if (v1 == v0) { v0 = 1; goto L_00325C04; }
    v0 = 3;
L_00325BEC:;
    if (a1 != v0) { v0 = 255; goto L_00325C10; }
    v0 = 4;
    if (v1 != v0) goto L_00325C0C;
    v0 = 1;
L_00325C04:;
    (*(volatile u32 *) (u32) a0) = (u32) v0; goto L_00325C14;
L_00325C0C:;
    v0 = 255;
L_00325C10:;
    (*(volatile u32 *) (u32) a0) = (u32) v0;
L_00325C14:;
    v0 = 1;
    return v0;
}
