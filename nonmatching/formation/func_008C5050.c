/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0020E310(s32, s32);

s32 func_008C5050(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    a1 = 4;
    if (a0 == a1) goto L_008C50E4;
    v1 = 3;
    if (a0 == v1) { v0 = 120; goto L_008C50C8; }
    v0 = 2;
    if (a0 == v0) { a0 = a1; goto L_008C50B8; }
    v0 = 1;
    if (a0 == v0) { a0 = 2; goto L_008C50A8; }
    if (a0 == 0) { a0 = v1; goto L_008C5094; }
    goto L_008C50A4;
L_008C5094:;
    a1 = (s32) ((u32) gp + 0xffffb188U); func_0020E310(a0, a1);
    goto L_008C5100;
L_008C50A4:;
    a0 = 2;
L_008C50A8:;
    a1 = (s32) ((u32) gp + 0xffffb188U); func_0020E310(a0, a1);
    goto L_008C50FC;
L_008C50B8:;
    a1 = (s32) ((u32) gp + 0xffffb188U); func_0020E310(a0, a1);
    goto L_008C50FC;
L_008C50C8:;
    v1 = 49;
    (*(volatile u8 *) (u32) (gp + -20087)) = (u8) v0;
    v0 = 255;
    (*(volatile u8 *) (u32) (gp + -20088)) = (u8) v1;
    (*(volatile u8 *) (u32) (gp + -20085)) = (u8) v0;
    (*(volatile u8 *) (u32) (gp + -20086)) = (u8) v1; goto L_008C50FC;
L_008C50E4:;
    v1 = 120;
    v0 = 255;
    (*(volatile u8 *) (u32) (gp + -20086)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -20088)) = (u8) v1;
    (*(volatile u8 *) (u32) (gp + -20087)) = (u8) v1;
    (*(volatile u8 *) (u32) (gp + -20085)) = (u8) v0;
L_008C50FC:;
L_008C5100:;
    v0 = (s32) ((u32) gp + 0xffffb188U);
    return v0;
}
