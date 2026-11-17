/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_00952840(s64 a0, s64 a1) {
    s64 v0 = 0, v1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, t4 = 0, t5 = 0;

    a0 = a1 & 0xffff;
    t4 = 0;
    a0 = (s32) ((u32) a0 + 0x1000U);
    t5 = 0;
    a0 = a0 & 0xe000;
    a2 = a0 & 0xffff;
    a1 = (s32) ((u32) a2 + 0xffffe000U);
    a0 = (s32) ((u32) a2 + 0x2000U);
    a5 = a2 & 0xffff;
    a3 = a0 & 0xffff;
    a2 = (s32) 0xcb0000U;
    a4 = a1 & 0xffff;
    a6 = 1;
    a2 = (s32) ((u32) a2 + 0x52a0U);
    a7 = 2;
L_0095287C:;
    if (t5 == a7) goto L_009528B0;
    if (t5 == a6) goto L_009528A8;
    if (t5 == 0) goto L_009528A0;
    goto L_009528B8;
L_009528A0:;
    v1 = a5; goto L_009528B8;
L_009528A8:;
    v1 = a4; goto L_009528B8;
L_009528B0:;
    v1 = a3;
L_009528B8:;
    a0 = v1 & 0xffff;
    a0 = (s32) ((u32) a0 + 0x1000U);
    a1 = a0 & 0xe000;
    { s32 c_ = a1 >= 0; a0 = (s32) a1 >> 13; if (c_) goto L_009528D4; }
    a0 = (s32) ((u32) a1 + 0x1fffU);
    a0 = (s32) a0 >> 13;
L_009528D4:;
    a0 = a0 & 0xffff;
    a0 = (s32) ((u32) a2 + (u32) a0);
    a1 = (*(u8 *) (u32) (a0 + 212));
    a0 = a1 < t4;
    if (a0 != 0) goto L_009528F8;
    t4 = a1;
    v0 = v1 & 0xffff;
L_009528F8:;
    t5 = (s32) ((u32) t5 + 0x1U);
    a0 = t5 < 3;
    if (a0 != 0) goto L_0095287C;
    return v0;
}
