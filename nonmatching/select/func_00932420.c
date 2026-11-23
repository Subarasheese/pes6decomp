/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B8380(s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_008B3310(s32, s32, s32, s32);
s32 func_00932720(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00932420(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    s1 = 2;
    s0 = 8;
L_00932438:;
    a0 = (*(volatile s32 *) (u32) (gp + -18728));
    a1 = s1;
    a2 = 40;
    a3 = 0;
    a4 = 0;
    a5 = 0; v0 = func_008B3310(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -18732));
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 12;
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    { s32 c_ = at != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00932438; }
    a0 = (*(volatile s32 *) (u32) (gp + -18728));
    a1 = 0;
    a2 = 1;
    a3 = 2;
    a4 = 0;
    a5 = 0; v0 = func_008B3310(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -18732));
    a1 = 1;
    a2 = a1;
    a3 = 2;
    a4 = 0;
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (gp + -18728));
    a5 = 0; v0 = func_008B3310(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -18732));
    a1 = 12;
    a2 = 40;
    a3 = 0;
    a4 = 0;
    (*(volatile u32 *) (u32) (v1 + 4)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (gp + -18728));
    a5 = 0; v0 = func_008B3310(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -18732));
    a0 = (s32) 0x960000U;
    a3 = 0;
    a0 = (s32) ((u32) a0 + 0x6cf0U);
    a2 = 5;
    (*(volatile u32 *) (u32) (v1 + 48)) = (u32) v0;
L_009324EC:;
    (*(volatile u8 *) (u32) a0) = (u8) a2;
    a3 = (s32) ((u32) a3 + 0x5U);
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) a2;
    v0 = a3 < 6;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) a2;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) a2;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) a2;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x5U); if (c_) goto L_009324EC; }
    a1 = (s32) 0x960000U;
    v0 = (*(volatile s32 *) (u32) (gp + -22756));
    a1 = (s32) ((u32) a1 + 0x6cf0U);
    a0 = 2;
    v1 = (s32) ((u32) a1 + (u32) a3);
    (*(volatile u8 *) (u32) v1) = (u8) a2;
    v0 = (s32) ((u32) a1 + (u32) v0);
    (*(volatile u8 *) (u32) v0) = (u8) a0; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 1; func_001B8380(a0);
    v0 = func_00932720(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 1;
    return v0;
}
