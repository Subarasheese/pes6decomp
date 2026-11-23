/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_008D7630(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0;

    a5 = 0;
L_008D7634:;
    a4 = (s32) ((u32) a1 + (u32) a5);
    a3 = (s32) ((u32) a0 + (u32) a5);
    a2 = (*(volatile u8 *) (u32) a4);
    a5 = (s32) ((u32) a5 + 0x5U);
    v1 = a5 < 6;
    (*(volatile u8 *) (u32) (a3 + 36)) = (u8) a2;
    a2 = (*(volatile u8 *) (u32) (a4 + 1));
    (*(volatile u8 *) (u32) (a3 + 37)) = (u8) a2;
    a2 = (*(volatile u8 *) (u32) (a4 + 2));
    (*(volatile u8 *) (u32) (a3 + 38)) = (u8) a2;
    a2 = (*(volatile u8 *) (u32) (a4 + 3));
    (*(volatile u8 *) (u32) (a3 + 39)) = (u8) a2;
    a2 = (*(volatile u8 *) (u32) (a4 + 4));
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (a3 + 40)) = (u8) a2; if (c_) goto L_008D7634; }
    a1 = (s32) ((u32) a1 + (u32) a5);
    v1 = (s32) ((u32) a5 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) a1);
    (*(volatile u8 *) (u32) (v1 + 36)) = (u8) a0; return;
}
