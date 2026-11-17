/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00221660(s32, s32, s32, s32);
s32 func_00311A50(s32, s32, s32);

s32 func_00313BD0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    a2 = a1;
    a1 = (s32) ((u32) sp + 0x3eU);
    s1 = a0;
    s0 = (*(volatile u16 *) (u32) (a0 + 60));
    a0 = (s32) ((u32) sp + 0x3fU); v0 = func_00311A50(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (sp + 63));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1bb0U);
    a1 = (*(volatile u8 *) (u32) (sp + 62));
    a2 = 0;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u16 *) (u32) v0);
    a3 = 2; v0 = func_00221660(a0, a1, a2, a3);
    if (v0 == 0) { a2 = (*(volatile u8 *) (u32) (sp + 63)); goto L_00313C30; }
    v0 = 0; goto L_00313D60;
L_00313C30:;
    a1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (sp + 62));
    a1 = (s32) ((u32) a1 + 0x298cU);
    v0 = -1;
    v1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) a2 << 8);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 != v0) { a1 = (*(volatile u8 *) (u32) (gp + -21600)); goto L_00313C84; }
    v0 = 0; goto L_00313D60;
L_00313C84:;
    { s32 c_ = a1 <= 0; a2 = 0; if (c_) goto L_00313CB8; }
    a0 = (s32) 0x5f0000U;
    a0 = (s32) ((u32) a0 + 0xffffff50U);
L_00313C94:;
    v0 = (*(volatile s32 *) (u32) a0);
    if (v1 != v0) { a2 = (s32) ((u32) a2 + 0x1U); goto L_00313CA8; }
    v0 = 0; goto L_00313D60;
L_00313CA8:;
    v0 = a2 < a1;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_00313C94; }
L_00313CB8:;
    a0 = s0 & 0xffff;
    v0 = 1228;
    if (a0 == v0) { a0 = (*(volatile u8 *) (u32) (s1 + 19)); goto L_00313D24; }
    v0 = 146;
    if (a0 == v0) { a0 = (*(volatile u8 *) (u32) (s1 + 19)); goto L_00313CFC; }
    v0 = 4565;
    if (a0 == v0) { a0 = (*(volatile u8 *) (u32) (s1 + 17)); goto L_00313CE8; }
    a0 = a1 & 0xff; goto L_00313D3C;
L_00313CE8:;
    v0 = 10;
    if (a0 == v0) goto L_00313D38;
    v0 = 0; goto L_00313D60;
L_00313CFC:;
    v0 = 13;
    if (a0 != v0) { v0 = 0; goto L_00313D60; }
    a0 = (*(volatile u8 *) (u32) (s1 + 39));
    v0 = 3;
    if (a0 == v0) goto L_00313D38;
    v0 = 0;
    goto L_00313D60;
L_00313D24:;
    v0 = 12;
    if (a0 == v0) goto L_00313D38;
    v0 = 0; goto L_00313D60;
L_00313D38:;
    a0 = a1 & 0xff;
L_00313D3C:;
    v0 = (s32) 0x5f0000U;
    a1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffff50U);
    a0 = (*(volatile u8 *) (u32) (gp + -21600));
    a1 = (s32) ((u32) v0 + (u32) a1);
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    v0 = 1;
    v1 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -21600)) = (u8) v1;
L_00313D60:;
    return v0;
}
