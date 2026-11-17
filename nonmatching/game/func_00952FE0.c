/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_00952FE0(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, a3 = 0, a4 = 0, a5 = 0;

    a4 = a1 & 0xff;
    a3 = a2 & 0xff;
    a5 = 0;
    v1 = (s32) 0xcb0000U;
    a1 = 255;
    v1 = (s32) ((u32) v1 + 0x52a0U);
L_00952FF8:;
    v0 = a5 < a4;
    if (v0 != 0) { v0 = (s32) ((u32) a0 + (u32) a5); goto L_0095300C; }
    v0 = 0xffff; goto L_00953054;
L_0095300C:;
    a2 = (*(u8 *) (u32) v0);
    if (a2 == a1) goto L_00953038;
    v0 = (s32) ((u32) v1 + (u32) a2);
    v0 = (*(u8 *) (u32) (v0 + 212));
    at = a3 < v0;
    if (at == 0) goto L_00953040;
    a5 = (s32) ((u32) a5 + 0x1U); goto L_00952FF8;
L_00953038:;
    v0 = 0xffff; goto L_00953054;
L_00953040:;
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a2 << 1);
    v0 = (s32) ((u32) v0 + 0xffff9950U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u16 *) (u32) v0);
L_00953054:;
    return v0;
}
