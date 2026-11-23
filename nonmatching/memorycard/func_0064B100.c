/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00623890(s32);
s32 func_0063B780(s32, s32, s32);
s32 func_0063CA40(s32);

void func_0064B100(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    a3 = 1;
    { s32 c_ = a1 == a3; s0 = a0; if (c_) goto L_0064B2C0; }
    v1 = -118;
    if (a1 == v1) { ; goto L_0064B2C4; }
    v1 = -119;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 2)) = (u8) a3; goto L_0064B2A4; }
    v1 = -120;
    if (a1 == v1) { v1 = (*(volatile s16 *) (u32) a2); goto L_0064B244; }
    v1 = -121;
    if (a1 == v1) goto L_0064B2C0;
    v1 = -122;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 2)) = (u8) a3; goto L_0064B230; }
    v1 = -123;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 2)) = (u8) a3; goto L_0064B220; }
    v1 = -124;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 2)) = (u8) a3; goto L_0064B210; }
    v1 = -125;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 2)) = (u8) a3; goto L_0064B1F8; }
    v1 = -126;
    if (a1 == v1) { (*(volatile u8 *) (u32) (s0 + 2)) = (u8) a3; goto L_0064B1E4; }
    v1 = -127;
    if (a1 == v1) { v1 = (*(volatile u8 *) (u32) (s0 + 2)); goto L_0064B1A4; }
    if (a1 == 0) goto L_0064B2C0;
    goto L_0064B2C0;
L_0064B1A4:;
    if (v1 == 0) { (*(volatile u8 *) (u32) (gp + -20888)) = (u8) 0; goto L_0064B1C4; }
    a0 = a2; v0 = func_00623890(a0);
    if (v0 != 0) goto L_0064B1C0;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) 0;
L_0064B1C0:;
    (*(volatile u8 *) (u32) (gp + -20888)) = (u8) 0;
L_0064B1C4:;
    v1 = 1;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 6)) = (u8) v1;
    (*(volatile u8 *) (u32) (s0 + 7)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 8)) = (u8) 0; goto L_0064B2C0;
L_0064B1E4:;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 8)) = (u8) 0; goto L_0064B2C0;
L_0064B1F8:;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 6)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 8)) = (u8) 0; goto L_0064B2C0;
L_0064B210:;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) a3; goto L_0064B2C0;
L_0064B220:;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) 0; goto L_0064B2C0;
L_0064B230:;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) a3;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 8)) = (u8) 0; goto L_0064B2C0;
L_0064B244:;
    v0 = (s32) 0x660000U;
    a1 = (*(volatile s16 *) (u32) (a2 + 2));
    v0 = (s32) ((u32) v0 + 0xffffc180U);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a1 + (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = (*(volatile s32 *) (u32) v0);
    a0 = 0; v0 = func_0063CA40(a0);
    at = s1 < v0;
    if (at == 0) { v1 = 1; goto L_0064B290; }
    v1 = 1;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v1;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v1;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) 0; goto L_0064B2C0;
L_0064B290:;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v1;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v1;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) v1;
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) 0; goto L_0064B2C0;
L_0064B2A4:;
    a0 = (s32) ((u32) gp + 0xffffaac8U);
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) a3;
    a1 = 0;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) a3;
    a2 = 2;
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) 0; v0 = func_0063B780(a0, a1, a2);
L_0064B2C0:;
L_0064B2C4:;
    return;
}
