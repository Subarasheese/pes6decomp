/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00946DA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;

    a2 = (s32) 0x960000U;
    a1 = a0 & 0xffff;
    v1 = -1;
    a3 = 0;
    a2 = (s32) ((u32) a2 + 0x7f20U);
L_00946DB4:;
    a0 = (*(volatile u16 *) (u32) (a2 + 4));
    if (a0 != a1) { a3 = (s32) ((u32) a3 + 0x1U); goto L_00946DF4; }
    a0 = (s32) 0x960000U;
    a1 = (s32) ((u32) a3 << 1);
    a0 = (s32) ((u32) a0 + 0x7f24U);
    a2 = 0xffff;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = a3;
    (*(volatile u16 *) (u32) a0) = (u16) a2;
    a1 = (s32) 0x970000U;
    a1 = (*(volatile s32 *) (u32) (a1 + -32580));
    a0 = (s32) 0x970000U;
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    (*(volatile u32 *) (u32) (a0 + -32580)) = (u32) a1; goto L_00946E00;
L_00946DF4:;
    at = a3 < 204;
    { s32 c_ = at != 0; a2 = (s32) ((u32) a2 + 0x2U); if (c_) goto L_00946DB4; }
L_00946E00:;
    a0 = -1;
    if (v1 == a0) goto L_00946F48;
    at = v1 < 203;
    if (at == 0) goto L_00946F48;
    a0 = 203;
    a2 = (s32) ((u32) a0 - (u32) v1);
    at = a2 < 9;
    if (at != 0) goto L_00946F10;
    at = v1 < 204;
    a4 = 0;
    a1 = 0;
    { s32 c_ = at == 0; a0 = 0; if (c_) goto L_00946E58; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = v1 < at;
    if (at == 0) goto L_00946E58;
    a0 = 1;
L_00946E58:;
    if (a0 == 0) goto L_00946E70;
    a0 = (s32) 0x80000000U;
    if (v1 == a0) goto L_00946E70;
    a1 = 1;
L_00946E70:;
    if (a1 == 0) goto L_00946EA8;
    a0 = (s32) ((u32) 0 - (u32) v1);
    a1 = (s32) 0x80000000U;
    a0 = a0 & a1;
    { s32 c_ = a0 != 0; a3 = 1; if (c_) goto L_00946E9C; }
    a0 = a2 & a1;
    if (a0 == 0) goto L_00946E9C;
    a3 = 0;
L_00946E9C:;
    if (a3 == 0) goto L_00946EA8;
    a4 = 1;
L_00946EA8:;
    if (a4 == 0) goto L_00946F10;
    a0 = (s32) 0x960000U;
    a1 = (s32) ((u32) v1 << 1);
    a0 = (s32) ((u32) a0 + 0x7f20U);
    a2 = (s32) ((u32) a0 + (u32) a1);
L_00946EC0:;
    a1 = (*(volatile u16 *) (u32) (a2 + 6));
    v1 = (s32) ((u32) v1 + 0x8U);
    a0 = v1 < 195;
    (*(volatile u16 *) (u32) (a2 + 4)) = (u16) a1;
    a1 = (*(volatile u16 *) (u32) (a2 + 8));
    (*(volatile u16 *) (u32) (a2 + 6)) = (u16) a1;
    a1 = (*(volatile u16 *) (u32) (a2 + 10));
    (*(volatile u16 *) (u32) (a2 + 8)) = (u16) a1;
    a1 = (*(volatile u16 *) (u32) (a2 + 12));
    (*(volatile u16 *) (u32) (a2 + 10)) = (u16) a1;
    a1 = (*(volatile u16 *) (u32) (a2 + 14));
    (*(volatile u16 *) (u32) (a2 + 12)) = (u16) a1;
    a1 = (*(volatile u16 *) (u32) (a2 + 16));
    (*(volatile u16 *) (u32) (a2 + 14)) = (u16) a1;
    a1 = (*(volatile u16 *) (u32) (a2 + 18));
    (*(volatile u16 *) (u32) (a2 + 16)) = (u16) a1;
    a1 = (*(volatile u16 *) (u32) (a2 + 20));
    (*(volatile u16 *) (u32) (a2 + 18)) = (u16) a1;
    { s32 c_ = a0 != 0; a2 = (s32) ((u32) a2 + 0x10U); if (c_) goto L_00946EC0; }
L_00946F10:;
    at = v1 < 203;
    if (at == 0) goto L_00946F48;
    a0 = (s32) 0x960000U;
    a1 = (s32) ((u32) v1 << 1);
    a0 = (s32) ((u32) a0 + 0x7f20U);
    a2 = (s32) ((u32) a0 + (u32) a1);
L_00946F2C:;
    a1 = (*(volatile u16 *) (u32) (a2 + 6));
    v1 = (s32) ((u32) v1 + 0x1U);
    a0 = v1 < 203;
    (*(volatile u16 *) (u32) (a2 + 4)) = (u16) a1;
    a2 = (s32) ((u32) a2 + 0x2U);
    if (a0 != 0) goto L_00946F2C;
L_00946F48:;
    return;
}
