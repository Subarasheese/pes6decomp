/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00B42980(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0;

    a5 = a1 & 0xff;
    a7 = 0;
    a6 = 0;
    a1 = (s32) 0xcb0000U;
    a3 = 255;
    a1 = (s32) ((u32) a1 + 0x52a0U);
L_00B42998:;
    v1 = a7 & 0xffff;
    v0 = v1 < a5;
    if (v0 != 0) { v0 = (s32) ((u32) a0 + (u32) v1); goto L_00B429B0; }
    v0 = 0xffff; goto L_00B42A18;
L_00B429B0:;
    a4 = (*(volatile u8 *) (u32) v0);
    if (a4 == a3) goto L_00B429F8;
    v1 = (s32) ((u32) a1 + (u32) a4);
    v0 = a6 & 0xff;
    v1 = (*(volatile u8 *) (u32) (v1 + 212));
    at = v0 < v1;
    if (at == 0) goto L_00B429D8;
    a6 = v1;
L_00B429D8:;
    v0 = (*(volatile u8 *) (u32) a2);
    at = v0 < v1;
    if (at == 0) goto L_00B42A00;
    v0 = (s32) ((u32) a7 + 0x1U);
    a7 = v0 & 0xffff; goto L_00B42998;
L_00B429F8:;
    v0 = 0xffff; goto L_00B42A18;
L_00B42A00:;
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a4 << 1);
    v0 = (s32) ((u32) v0 + 0xffffc770U);
    (*(volatile u8 *) (u32) a2) = (u8) a6;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0);
L_00B42A18:;
    return v0;
}
