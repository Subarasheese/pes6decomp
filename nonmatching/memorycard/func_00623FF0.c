/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00623FF0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (s32) 0x660000U;
    a3 = (*(volatile s32 *) (u32) (v0 + -16144));
    if (a3 != 0) goto L_00624008;
    v0 = 0; goto L_0062419C;
L_00624008:;
    if (a0 < 0) { a2 = a0 < 50; goto L_006240B0; }
    at = a0 < 50;
    if (at == 0) goto L_006240AC;
    v0 = (*(volatile u8 *) (u32) (a3 + 4));
    at = a0 < v0;
    if (at != 0) goto L_00624034;
    v0 = 0; goto L_0062419C;
L_00624034:;
    if (a0 < 0) { v0 = 0; goto L_0062406C; }
    at = a0 < 50;
    if (at == 0) goto L_00624068;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) v0 << 6);
    v0 = (s32) ((u32) v0 + (u32) a3);
    v0 = (s32) ((u32) v0 + 0xa4U); goto L_0062406C;
L_00624068:;
    v0 = 0;
L_0062406C:;
    v1 = 2;
    if (a1 == v1) { v0 = (s32) ((u32) v0 + 0x440U); goto L_0062419C; }
    v1 = 1;
    if (a1 == v1) { v0 = (s32) ((u32) v0 + 0x40U); goto L_0062419C; }
    if (a1 == 0) goto L_0062419C;
    goto L_0062419C;
    v0 = (s32) ((u32) v0 + 0x40U);
    goto L_0062419C;
    v0 = (s32) ((u32) v0 + 0x440U);
    goto L_0062419C;
L_006240AC:;
    a2 = a0 < 50;
L_006240B0:;
    if (a2 != 0) { v0 = 0; goto L_0062419C; }
    at = a0 < 150;
    if (at == 0) goto L_00624198;
    v1 = (*(volatile u8 *) (u32) (a3 + 5));
    v0 = (s32) ((u32) a0 + 0xffffffceU);
    at = v0 < v1;
    if (at != 0) goto L_006240E0;
    v0 = 0; goto L_0062419C;
L_006240E0:;
    if (a2 != 0) { v0 = 0; goto L_00624158; }
    at = a0 < 150;
    if (at == 0) goto L_00624154;
    { s32 c_ = v0 >= 0; a2 = (s32) v0 >> 1; if (c_) goto L_00624104; }
    v0 = (s32) ((u32) v0 + 0x1U);
    a2 = (s32) v0 >> 1;
L_00624104:;
    v1 = 49;
    v0 = (s32) ((u32) a0 + 0xffffffceU);
    a2 = (s32) ((u32) v1 - (u32) a2);
    a0 = (s32) ((u32) a2 << 3);
    v1 = v0 & 0x1;
    a2 = (s32) ((u32) a0 + (u32) a2);
    a0 = (s32) ((u32) a2 << 3);
    a0 = (s32) ((u32) a2 + (u32) a0);
    a0 = (s32) ((u32) a0 << 6);
    { s32 c_ = v0 >= 0; a0 = (s32) ((u32) a0 + (u32) a3); if (c_) goto L_0062413C; }
    if (v1 == 0) { v0 = (s32) ((u32) v1 << 4); goto L_00624140; }
    v1 = (s32) ((u32) v1 + 0xfffffffeU);
L_0062413C:;
    v0 = (s32) ((u32) v1 << 4);
L_00624140:;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 7);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xa4U); goto L_00624158;
L_00624154:;
    v0 = 0;
L_00624158:;
    v1 = 2;
    if (a1 == v1) { v0 = (s32) ((u32) v0 + 0x80U); goto L_0062419C; }
    v1 = 1;
    if (a1 == v1) { v0 = (s32) ((u32) v0 + 0x40U); goto L_0062419C; }
    if (a1 == 0) goto L_0062419C;
    goto L_0062419C;
    v0 = (s32) ((u32) v0 + 0x40U);
    goto L_0062419C;
    v0 = (s32) ((u32) v0 + 0x80U);
    goto L_0062419C;
L_00624198:;
    v0 = 0;
L_0062419C:;
    return v0;
}
