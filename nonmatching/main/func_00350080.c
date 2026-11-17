/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 memset(s32, s32, s32);

s32 func_00350080(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v0 = 2;
    { s32 c_ = a1 == v0; s0 = a0; if (c_) goto L_00350144; }
    v0 = 1;
    if (a1 == v0) { a1 = 0; goto L_003500AC; }
    goto L_00350170;
L_003500AC:;
    a2 = 28; v0 = memset(a0, a1, a2);
    v0 = 26;
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v0;
    (*(volatile u32 *) (u32) (s0 + 24)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    { s32 c_ = v0 <= 0; a1 = 0; if (c_) goto L_003500F8; }
    a0 = (s32) 0x3b0000U;
    v1 = 1;
    a0 = (s32) ((u32) a0 + 0x77d0U);
L_003500D8:;
    (*(volatile u8 *) (u32) (a0 + 9)) = (u8) v1;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (s32) ((u32) a0 + 0xcU);
    v0 = a1 < v0;
    if (v0 != 0) goto L_003500D8;
L_003500F8:;
    v0 = 255;
    (*(volatile u8 *) (u32) (gp + -21500)) = (u8) v0;
    v1 = (s32) 0x620000U;
    (*(volatile u8 *) (u32) (gp + -21504)) = (u8) v0;
    a0 = (s32) 0x620000U;
    v0 = (s32) 0x620000U;
    (*(volatile u32 *) (u32) (v1 + -14608)) = (u32) 0;
    a0 = (s32) ((u32) a0 + 0xffffc6e0U);
    (*(volatile u32 *) (u32) (v0 + -14604)) = (u32) 0;
    a1 = 8;
    a2 = 16;
    (*(volatile u8 *) (u32) (gp + -21492)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -21496)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -21508)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -21592)) = (u8) 0;
    (*(volatile u16 *) (u32) (gp + -21512)) = (u16) 0; v0 = memset(a0, a1, a2);
    goto L_0035016C;
L_00350144:;
    v0 = 255;
    a0 = (s32) 0x620000U;
    (*(volatile u8 *) (u32) (gp + -21500)) = (u8) v0;
    a0 = (s32) ((u32) a0 + 0xffffc6e0U);
    a1 = 8;
    a2 = 16;
    (*(volatile u8 *) (u32) (gp + -21492)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -21496)) = (u8) 0; v0 = memset(a0, a1, a2);
    (*(volatile u32 *) (u32) (s0 + 24)) = (u32) 0;
L_0035016C:;
L_00350170:;
    v0 = 1;
    return v0;
}
