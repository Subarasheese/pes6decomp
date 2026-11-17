/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0099DFF0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s64 frame[2];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    a3 = (*(volatile s32 *) (u32) (v0 + 7804));
    if (a3 == 0) { v1 = (*(volatile s32 *) (u32) (a0 + 4)); goto L_0099E078; }
    a2 = (s32) 0xca0000U;
    a1 = (s32) ((u32) sp + 0x0U);
    a2 = (s32) ((u32) a2 + 0xffffa3d0U);
    a0 = 4;
L_0099E014:;
    v1 = (*(volatile s16 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s16 *) (u32) (a2 + 2));
    (*(volatile u16 *) (u32) a1) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 2)) = (u16) v0;
    a2 = (s32) ((u32) a2 + 0x4U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_0099E014; }
    v1 = (s32) 0xcb0000U;
    a0 = 0;
    v1 = (s32) ((u32) v1 + 0xffffa2e0U);
L_0099E040:;
    v0 = (*(volatile s32 *) (u32) v1);
    if (a3 != v0) { a0 = (s32) ((u32) a0 + 0x1U); goto L_0099E05C; }
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile u16 *) (u32) v0); goto L_0099E070;
L_0099E05C:;
    v0 = a0 < 8;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x4U); if (c_) goto L_0099E040; }
    v0 = 0xffff;
    v0 = v0 & 0xffff;
L_0099E070:;
    goto L_0099E0B0;
L_0099E078:;
    v0 = 695;
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 == v0) { v0 = (*(volatile u16 *) (u32) (a0 + 52)); goto L_0099E0AC; }
    v1 = (*(volatile u8 *) (u32) (a0 + 22));
    v0 = 2;
    if (v1 != v0) { v0 = (*(volatile u16 *) (u32) (a0 + 38)); goto L_0099E0A0; }
    v0 = (*(volatile u16 *) (u32) (a0 + 44)); goto L_0099E0AC;
L_0099E0A0:;
    v0 = (s32) ((u32) v0 + 0x1000U);
    v0 = v0 & 0xe000;
    v0 = v0 & 0xffff;
L_0099E0AC:;
L_0099E0B0:;
    return v0;
}
