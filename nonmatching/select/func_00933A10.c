/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B8380(s32);
void func_00212E00(s32, s32, s32, s32);
s32 func_002133E0(s32, s32, s32, s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023EA10(s32, s32, s32, s32);
void func_0023F3A0(s32, s32, s32, s32);
void func_0023F510(s32, s32, s32, s32);
void func_00931BB0(s32, s32, s32, s32);
void func_00931D70(s32, s32, s32, s32);
void func_00932560(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00932720(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00933A10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x540000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + -15600));
    s0 = (s32) 0x540000U;
    v0 = v0 & 0x1;
    { s32 c_ = v0 != v1; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_00933A58; }
    v1 = (*(volatile s32 *) (u32) (gp + -22756));
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0xffffd5f0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_0023EA10(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) 0;
L_00933A58:;
    v1 = (*(volatile s32 *) (u32) (s0 + 16));
    v0 = 2;
    v1 = v1 & 0x2;
    if (v1 != v0) { v1 = (*(volatile s32 *) (u32) (s0 + 16)); goto L_00933A88; }
    v0 = func_00932720(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) goto L_00933A84;
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) 0;
L_00933A84:;
    v1 = (*(volatile s32 *) (u32) (s0 + 16));
L_00933A88:;
    v0 = 4;
    v1 = v1 & 0x4;
    if (v1 != v0) { v1 = (*(volatile s32 *) (u32) (s0 + 16)); goto L_00933B28; }
    a1 = (*(volatile s32 *) (u32) (gp + -22756));
    v1 = (s32) 0x960000U;
    v0 = (*(volatile s32 *) (u32) (gp + -18788));
    v1 = (s32) ((u32) v1 + 0xffffd620U);
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) a0 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_0023EA10(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18788));
    v0 = 6;
    v1 = (*(volatile s32 *) (u32) (gp + -22756));
    { s32 c_ = v1 != v0; a1 = a0; if (c_) goto L_00933B14; }
    at = a0 < 8;
    if (at != 0) { at = a0 < 9; goto L_00933AF8; }
    a1 = (s32) ((u32) a0 + 0xffffffffU);
    at = a0 < 9;
L_00933AF8:;
    if (at != 0) { at = a0 < 10; goto L_00933B08; }
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    at = a0 < 10;
L_00933B08:;
    if (at != 0) { a0 = (*(volatile s32 *) (u32) (gp + -18800)); goto L_00933B18; }
    a1 = (s32) ((u32) a1 + 0xffffffffU);
L_00933B14:;
    a0 = (*(volatile s32 *) (u32) (gp + -18800));
L_00933B18:;
    func_00212E00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) (s0 + 16));
L_00933B28:;
    v0 = 8;
    v1 = v1 & 0x8;
    if (v1 != v0) { v1 = (*(volatile s32 *) (u32) (s0 + 16)); goto L_00933BD4; }
    a0 = (*(volatile s32 *) (u32) (gp + -18800)); v0 = func_002133E0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -18800)) = (u32) v0;
    a0 = 0;
    (*(volatile u32 *) (u32) (gp + -18796)) = (u32) 0; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 0; func_001B8380(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -22756));
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0xffffd5f0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_0023EA10(a0, a1, a2, a3);
    func_0023F3A0(a0, a1, a2, a3);
    a0 = 1; func_0023F510(a0, a1, a2, a3);
    a0 = (s32) 0x960000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0x6cf0U);
    v1 = 7;
L_00933B94:;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    a1 = (s32) ((u32) a1 + 0x5U);
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    v0 = a1 < 6;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) v1;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x5U); if (c_) goto L_00933B94; }
    v0 = (s32) 0x960000U;
    (*(volatile u32 *) (u32) (gp + -18736)) = (u32) 0;
    v0 = (s32) ((u32) v0 + 0x6cf0U);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) 0;
    v0 = (s32) ((u32) v0 + (u32) a1);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 16));
L_00933BD4:;
    v0 = 16;
    v1 = v1 & 0x10;
    if (v1 != v0) { v1 = (*(volatile s32 *) (u32) (s0 + 16)); goto L_00933BF4; }
    func_00932560(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) (s0 + 16));
L_00933BF4:;
    v0 = 32;
    v1 = v1 & 0x20;
    if (v1 != v0) { v1 = (*(volatile s32 *) (u32) (s0 + 16)); goto L_00933C20; }
    a1 = (*(volatile s32 *) (u32) (gp + -18784));
    a0 = (*(volatile s32 *) (u32) (gp + -18792)); func_00212E00(a0, a1, a2, a3);
    func_00931BB0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) (s0 + 16));
L_00933C20:;
    v0 = 64;
    v1 = v1 & 0x40;
    if (v1 != v0) goto L_00933CA8;
    a0 = (*(volatile s32 *) (u32) (gp + -18792)); v0 = func_002133E0(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (gp + -22756));
    v1 = (s32) 0x960000U;
    (*(volatile u32 *) (u32) (gp + -18792)) = (u32) v0;
    v1 = (s32) ((u32) v1 + 0xffffd620U);
    v0 = (*(volatile s32 *) (u32) (gp + -18788));
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_0023EA10(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -22756));
    v0 = 6;
    if (v1 != v0) { v0 = 1; goto L_00933C9C; }
    v1 = (*(volatile s32 *) (u32) (gp + -18788));
    v0 = 2;
    if (v1 != v0) goto L_00933C98;
    (*(volatile u8 *) (u32) (gp + -18740)) = (u8) 0;
L_00933C98:;
    v0 = 1;
L_00933C9C:;
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (gp + -18736)) = (u32) v0;
    (*(volatile u32 *) (u32) (gp + -18784)) = (u32) 0;
L_00933CA8:;
    func_00931D70(a0, a1, a2, a3);
    v0 = 0;
    return v0;
}
