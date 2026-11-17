/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00311CD0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0;
    s64 frame[2];
    s32 sp = (s32) (u32) frame;

    a5 = (s32) 0x3b0000U;
    a5 = (s32) ((u32) a5 + 0x7208U);
    a4 = (s32) ((u32) sp + 0x8U);
    a3 = 4;
L_00311CE4:;
    v1 = (*(volatile s8 *) (u32) a5);
    a3 = (s32) ((u32) a3 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a5 + 1));
    (*(volatile u8 *) (u32) a4) = (u8) v1;
    (*(volatile u8 *) (u32) (a4 + 1)) = (u8) v0;
    a5 = (s32) ((u32) a5 + 0x2U);
    { s32 c_ = a3 > 0; a4 = (s32) ((u32) a4 + 0x2U); if (c_) goto L_00311CE4; }
    if (a1 < 0) { v1 = 1; goto L_00311D30; }
    if (a2 < 0) goto L_00311D2C;
    at = a1 < 2;
    if (at == 0) goto L_00311D2C;
    v0 = a2 < 32;
    if (v0 != 0) { v0 = (s32) ((u32) a1 << 4); goto L_00311D3C; }
L_00311D2C:;
    v1 = 1;
L_00311D30:;
    v0 = 0;
    (*(volatile u8 *) (u32) a0) = (u8) v1; goto L_00311D88;
L_00311D3C:;
    a3 = (s32) 0x590000U;
    a1 = (s32) ((u32) v0 - (u32) a1);
    a3 = (s32) ((u32) a3 + 0x2980U);
    v0 = (s32) ((u32) a2 << 4);
    v1 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a3 + (u32) v1);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v1 + 181));
    v0 = 1;
    v1 = v1 & 0x7;
    v1 = (s32) ((u32) v1 + (u32) sp);
    v1 = (*(volatile u8 *) (u32) (v1 + 8));
    (*(volatile u8 *) (u32) a0) = (u8) v1;
L_00311D88:;
    return v0;
}
