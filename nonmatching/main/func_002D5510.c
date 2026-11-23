/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_002D5510(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v0 = 14;
    if (a0 == v0) goto L_002D5548;
    v0 = 4;
    if (a0 == v0) goto L_002D5548;
    v0 = 2;
    if (a0 == v0) goto L_002D5548;
    v0 = 1;
    if (a0 == v0) goto L_002D5548;
    v0 = 0; goto L_002D5588;
L_002D5548:;
    a0 = (s32) 0x3b0000U;
    v0 = 0;
    a2 = 0;
    a0 = (s32) ((u32) a0 + 0x24d0U);
L_002D5558:;
    v1 = (*(volatile s16 *) (u32) a0);
    if (a1 != v1) { a2 = (s32) ((u32) a2 + 0x1U); goto L_002D557C; }
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) v0 + 0x24d2U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s16 *) (u32) v0); goto L_002D5588;
L_002D557C:;
    v1 = a2 < 59;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_002D5558; }
L_002D5588:;
    a0 = (*(volatile s32 *) (u32) (gp + -32100));
    v1 = -1;
    if (a0 == v1) goto L_002D55A0;
    (*(volatile u32 *) (u32) (gp + -32100)) = (u32) v1;
    v0 = a0;
L_002D55A0:;
    return v0;
}
