/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0099DEC0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s64 frame[2];
    s32 sp = (s32) (u32) frame;

    a3 = (s32) 0xca0000U;
    a3 = (s32) ((u32) a3 + 0xffffa3d0U);
    a2 = (s32) ((u32) sp + 0x0U);
    a1 = 4;
L_0099DED4:;
    v1 = (*(volatile s16 *) (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v0 = (*(volatile s16 *) (u32) (a3 + 2));
    (*(volatile u16 *) (u32) a2) = (u16) v1;
    (*(volatile u16 *) (u32) (a2 + 2)) = (u16) v0;
    a3 = (s32) ((u32) a3 + 0x4U);
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_0099DED4; }
    v1 = (s32) 0xcb0000U;
    a1 = 0;
    v1 = (s32) ((u32) v1 + 0xffffa2e0U);
L_0099DF00:;
    v0 = (*(volatile s32 *) (u32) v1);
    if (a0 != v0) { a1 = (s32) ((u32) a1 + 0x1U); goto L_0099DF1C; }
    v0 = (s32) ((u32) a1 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile u16 *) (u32) v0); goto L_0099DF2C;
L_0099DF1C:;
    v0 = a1 < 8;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x4U); if (c_) goto L_0099DF00; }
    v0 = 0xffff;
L_0099DF2C:;
    return v0;
}
