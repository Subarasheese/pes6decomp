/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_00952910(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, t4 = 0, t5 = 0;

    v1 = a1 & 0xffff;
    a7 = 100;
    v1 = (s32) ((u32) v1 + 0x1000U);
    t5 = 0;
    v1 = v1 & 0xe000;
    a1 = v1 & 0xffff;
    a0 = (s32) ((u32) a1 + 0xffffe000U);
    v1 = (s32) ((u32) a1 + 0x2000U);
    a3 = a0 & 0xffff;
    a2 = v1 & 0xffff;
    a0 = (s32) 0xcb0000U;
    a4 = a1 & 0xffff;
    a5 = 1;
    a0 = (s32) ((u32) a0 + 0x52a0U);
    a6 = 2;
L_0095294C:;
    if (t5 == a6) goto L_00952980;
    if (t5 == a5) goto L_00952978;
    if (t5 == 0) goto L_00952970;
    goto L_00952988;
L_00952970:;
    t4 = a4; goto L_00952988;
L_00952978:;
    t4 = a3; goto L_00952988;
L_00952980:;
    t4 = a2;
L_00952988:;
    v1 = t4 & 0xffff;
    v1 = (s32) ((u32) v1 + 0x1000U);
    a1 = v1 & 0xe000;
    { s32 c_ = a1 >= 0; v1 = (s32) a1 >> 13; if (c_) goto L_009529A4; }
    v1 = (s32) ((u32) a1 + 0x1fffU);
    v1 = (s32) v1 >> 13;
L_009529A4:;
    v1 = v1 & 0xffff;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(u8 *) (u32) (v1 + 212));
    at = v1 < a7;
    if (at == 0) goto L_009529C8;
    a7 = v1;
    v0 = t4 & 0xffff;
L_009529C8:;
    t5 = (s32) ((u32) t5 + 0x1U);
    v1 = t5 < 3;
    if (v1 != 0) goto L_0095294C;
    return v0;
}
