/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00941DC0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;

    { s32 c_ = a1 <= 0; a4 = 0; if (c_) goto L_00941E58; }
    at = a1 < 9;
    { s32 c_ = at != 0; a3 = (s32) ((u32) a1 + 0xfffffff8U); if (c_) goto L_00941E30; }
    { s32 c_ = a1 < 0; v1 = 0; if (c_) goto L_00941DF4; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a1 < at;
    if (at == 0) goto L_00941DF4;
    v1 = 1;
L_00941DF4:;
    if (v1 == 0) goto L_00941E30;
L_00941DFC:;
    a2 = (s32) ((u32) a0 + (u32) a4);
    (*(volatile u8 *) (u32) a2) = (u8) 0;
    a4 = (s32) ((u32) a4 + 0x8U);
    (*(volatile u8 *) (u32) (a2 + 1)) = (u8) 0;
    v1 = a4 < a3;
    (*(volatile u8 *) (u32) (a2 + 2)) = (u8) 0;
    (*(volatile u8 *) (u32) (a2 + 3)) = (u8) 0;
    (*(volatile u8 *) (u32) (a2 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (a2 + 5)) = (u8) 0;
    (*(volatile u8 *) (u32) (a2 + 6)) = (u8) 0;
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (a2 + 7)) = (u8) 0; if (c_) goto L_00941DFC; }
L_00941E30:;
    at = a4 < a1;
    if (at == 0) goto L_00941E58;
L_00941E3C:;
    v1 = (s32) ((u32) a0 + (u32) a4);
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = a4 < a1;
    if (v1 != 0) goto L_00941E3C;
L_00941E58:;
    return;
}
