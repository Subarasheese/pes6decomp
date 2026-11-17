/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_002FE050(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0;
    s64 frame[2];
    s32 sp = (s32) (u32) frame;

    a5 = (s32) 0x3b0000U;
    a5 = (s32) ((u32) a5 + 0x4e28U);
    a4 = (s32) ((u32) sp + 0x8U);
    a3 = 4;
L_002FE064:;
    v1 = (*(volatile s8 *) (u32) a5);
    a3 = (s32) ((u32) a3 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a5 + 1));
    (*(volatile u8 *) (u32) a4) = (u8) v1;
    (*(volatile u8 *) (u32) (a4 + 1)) = (u8) v0;
    a5 = (s32) ((u32) a5 + 0x2U);
    { s32 c_ = a3 > 0; a4 = (s32) ((u32) a4 + 0x2U); if (c_) goto L_002FE064; }
    v0 = a2 & 0xff;
    at = v0 < 4;
    if (at != 0) { v0 = a1 & 0xff; goto L_002FE09C; }
    a2 = 0;
    v0 = a1 & 0xff;
L_002FE09C:;
    v0 = v0 < 4;
    if (v0 != 0) { v1 = a1 & 0xff; goto L_002FE0B0; }
    a1 = 0;
    v1 = a1 & 0xff;
L_002FE0B0:;
    v0 = 3;
    if (v1 == v0) { v0 = a2 & 0xff; goto L_002FE100; }
    v0 = 2;
    if (v1 == v0) { v0 = 1; goto L_002FE0F4; }
    v0 = 1;
    if (v1 == v0) { (*(volatile u8 *) (u32) a0) = (u8) v0; goto L_002FE0EC; }
    if (v1 == 0) { (*(volatile u8 *) (u32) a0) = (u8) v0; goto L_002FE0E4; }
    v0 = 1; goto L_002FE11C;
L_002FE0E4:;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v0; goto L_002FE118;
L_002FE0EC:;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) 0; goto L_002FE118;
L_002FE0F4:;
    (*(volatile u8 *) (u32) a0) = (u8) v0;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v0; goto L_002FE118;
L_002FE100:;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v1 = (*(volatile u8 *) (u32) (v0 + 8));
    v0 = (*(volatile u8 *) (u32) (v0 + 9));
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v0;
L_002FE118:;
    v0 = 1;
L_002FE11C:;
    return v0;
}
