/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0093FB00(s32, s32, s32, s32);

void func_009A0B10(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    a2 = 0;
    a1 = (s32) 0xcb0000U;
    v1 = 255;
    a1 = (s32) ((u32) a1 + 0x63b0U);
L_009A0B20:;
    a0 = a2 & 0xff;
    v0 = (s32) ((u32) a2 + 0x1U);
    a2 = v0 & 0xff;
    v0 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v0 - (u32) a0);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v0 = a2 < 2;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 5)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 6)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 7)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 8)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 9)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 10)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 11)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 12)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 13)) = (u8) v1;
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) (a0 + 14)) = (u8) v1; if (c_) goto L_009A0B20; }
    v0 = func_0093FB00(a0, a1, a2, a3); return;
}
