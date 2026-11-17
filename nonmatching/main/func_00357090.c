/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 memset(s32, s32, s32);

s32 func_00357090(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0;
    s32 gp = 0x3ef370;

    v0 = 2;
    if (a0 == v0) goto L_003570F0;
    v0 = 1;
    if (a0 == v0) { a1 = 255; goto L_003570B4; }
    goto L_00357118;
L_003570B4:;
    v0 = 3;
    (*(volatile u8 *) (u32) (gp + -21440)) = (u8) a1;
    a0 = (s32) ((u32) gp + 0xffffac34U);
    (*(volatile u32 *) (u32) (gp + -21448)) = (u32) v0;
    a2 = 4;
    (*(volatile u8 *) (u32) (gp + -21439)) = (u8) a1;
    (*(volatile u8 *) (u32) (gp + -21444)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -21456)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -21468)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -21472)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -21464)) = (u8) 0;
    (*(volatile u32 *) (u32) (gp + -21476)) = (u32) 0; v0 = memset(a0, a1, a2);
    goto L_00357114;
L_003570F0:;
    a1 = 255;
    a0 = (s32) ((u32) gp + 0xffffac34U);
    (*(volatile u8 *) (u32) (gp + -21440)) = (u8) a1;
    a2 = 4;
    (*(volatile u8 *) (u32) (gp + -21439)) = (u8) a1;
    (*(volatile u8 *) (u32) (gp + -21464)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -21456)) = (u8) 0;
    (*(volatile u32 *) (u32) (gp + -21476)) = (u32) 0; v0 = memset(a0, a1, a2);
L_00357114:;
L_00357118:;
    v0 = 1;
    return v0;
}
