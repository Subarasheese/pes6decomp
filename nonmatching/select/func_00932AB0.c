/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B8380(s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023EA10(s32, s32, s32, s32);
s32 func_0026DA20(void);
void func_008B31C0(s32, s32, s32, s32);
s32 func_008B31F0(s32, s32, s32, s32);
s32 func_008B3310(s32, s32, s32, s32);

s32 func_00932AB0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v0 = func_0026DA20();
    if (v0 == 0) { v0 = 0; goto L_00932D74; }
    v0 = (*(volatile s32 *) (u32) (gp + -18732));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    if (a0 == 0) { v1 = (*(volatile s16 *) (u32) (gp + -30724)); goto L_00932AEC; }
    v0 = func_008B31F0(a0, a1, a2, a3);
    (*(volatile u16 *) (u32) (gp + -30724)) = (u16) v0;
    v1 = (*(volatile s16 *) (u32) (gp + -30724));
L_00932AEC:;
    v0 = 41;
    if (v1 == v0) { s0 = 2; goto L_00932C90; }
    v0 = -1;
    if (v1 == v0) { s1 = 2; goto L_00932B0C; }
    goto L_00932D70;
L_00932B0C:;
    s0 = 8;
L_00932B10:;
    a0 = (*(volatile s32 *) (u32) (gp + -18728));
    a1 = s1;
    a2 = 0;
    a3 = 2;
    a4 = 0;
    a5 = 1; v0 = func_008B3310(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -18732));
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 12;
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    { s32 c_ = at != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00932B10; }
    a0 = (*(volatile s32 *) (u32) (gp + -18728));
    a2 = 1;
    a1 = 0;
    a3 = 2;
    a4 = 0;
    a5 = a2; v0 = func_008B3310(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -18732));
    a1 = 1;
    a2 = a1;
    a3 = 2;
    a4 = 0;
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (gp + -18728));
    a5 = a1; v0 = func_008B3310(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -18732));
    a0 = 0;
    (*(volatile u32 *) (u32) (v1 + 4)) = (u32) v0; func_001B8380(a0);
    v0 = (s32) 0x540000U;
    v1 = 1;
    v0 = (*(volatile s8 *) (u32) (v0 + -15608));
    if (v0 != v1) goto L_00932C14;
    a0 = (s32) 0x960000U;
    v1 = 0;
    a0 = (s32) ((u32) a0 + 0x6cf0U);
L_00932BB8:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0x5U);
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) 0;
    v0 = v1 < 6;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) 0;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x5U); if (c_) goto L_00932BB8; }
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (gp + -18728));
    v0 = (s32) ((u32) v0 + 0x6cf0U);
    a1 = 12;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = 0;
    (*(volatile u8 *) (u32) v0) = (u8) 0;
    a3 = 0;
    a4 = 0;
    a5 = 1; v0 = func_008B3310(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -18732));
    (*(volatile u32 *) (u32) (v1 + 48)) = (u32) v0; goto L_00932C80;
L_00932C14:;
    a0 = (s32) 0x960000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0x6cf0U);
L_00932C20:;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    a1 = (s32) ((u32) a1 + 0x5U);
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
    v0 = a1 < 6;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) v1;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x5U); if (c_) goto L_00932C20; }
    v0 = (s32) 0x960000U;
    a0 = 0;
    v0 = (s32) ((u32) v0 + 0x6cf0U);
    v0 = (s32) ((u32) v0 + (u32) a1);
    (*(volatile u8 *) (u32) v0) = (u8) v1; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile s32 *) (u32) (gp + -22756));
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0xffffd5f0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_0023EA10(a0, a1, a2, a3);
    v0 = 1; goto L_00932D74;
L_00932C80:;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (gp + -18736)) = (u32) 0;
    (*(volatile u8 *) (u32) (v0 + -15608)) = (u8) 0; goto L_00932D70;
L_00932C90:;
    s1 = 8;
L_00932C94:;
    v0 = (*(volatile s32 *) (u32) (gp + -18732));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_008B31C0(a0, a1, a2, a3);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 11;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00932C94; }
    a0 = 0; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile s32 *) (u32) (gp + -22756));
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0xffffd5f0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_0023EA10(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18732));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 2; func_008B31C0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18732));
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 2; func_008B31C0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18732));
    a0 = (*(volatile s32 *) (u32) (v0 + 48));
    a1 = 0; func_008B31C0(a0, a1, a2, a3);
    a0 = (s32) 0x960000U;
    v1 = 0;
    a0 = (s32) ((u32) a0 + 0x6cf0U);
    a2 = 5;
L_00932D1C:;
    (*(volatile u8 *) (u32) a0) = (u8) a2;
    v1 = (s32) ((u32) v1 + 0x5U);
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) a2;
    v0 = v1 < 6;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) a2;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) a2;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) a2;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x5U); if (c_) goto L_00932D1C; }
    a1 = (s32) 0x960000U;
    a0 = 2;
    a1 = (s32) ((u32) a1 + 0x6cf0U);
    v0 = (s32) ((u32) a1 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) (gp + -22756));
    (*(volatile u8 *) (u32) v0) = (u8) a2;
    v0 = -1;
    (*(volatile u16 *) (u32) (gp + -30724)) = (u16) v0;
    v1 = (s32) ((u32) a1 + (u32) v1);
    v0 = 1;
    (*(volatile u8 *) (u32) v1) = (u8) a0; goto L_00932D74;
L_00932D70:;
    v0 = 0;
L_00932D74:;
    return v0;
}
