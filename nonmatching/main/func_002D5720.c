/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021E4B0(s32, s32, s32);
s32 func_00225520(s32);

s32 func_002D5720(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, a3 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7177));
    v0 = 2;
    if (v1 == v0) { v1 = (*(volatile s32 *) (u32) (gp + -31680)); goto L_002D57A0; }
    v0 = 1;
    if (v1 == v0) goto L_002D579C;
    v0 = (s32) 0x590000U;
    s0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + 0x1bb0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (s32) ((u32) s0 + 0xffffab60U);
    a0 = (*(volatile u16 *) (u32) v0);
    a1 = 0;
    a2 = 0;
    a3 = 0;
    v0 = func_0021E4B0(a0, a1, a2);
    if (v0 == 0) { v0 = s0; goto L_002D57C8; }
    v1 = (*(volatile s8 *) (u32) v0);
    if (v1 == 0) goto L_002D57C4;
    s0 = v0;
    goto L_002D57C4;
L_002D579C:;
    v1 = (*(volatile s32 *) (u32) (gp + -31680));
L_002D57A0:;
    { s32 c_ = a0 >= 0; v0 = a0 & 0x1; if (c_) goto L_002D57B4; }
    if (v0 == 0) { v0 = (s32) ((u32) v0 + (u32) v1); goto L_002D57B8; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_002D57B4:;
    v0 = (s32) ((u32) v0 + (u32) v1);
L_002D57B8:;
    a0 = (*(volatile u8 *) (u32) (v0 + 44)); v0 = func_00225520(a0);
    s0 = v0;
L_002D57C4:;
    v0 = s0;
L_002D57C8:;
    return v0;
}
