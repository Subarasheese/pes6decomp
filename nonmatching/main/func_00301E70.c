/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002D4C40(s32, s32, s32, s32, s32, s32, s32);
s32 func_00301BA0(s32, s32, s32, s32);
s32 func_00305C60(s32, s32);
s32 func_00305E60(s32, s32);

s32 func_00301E70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s0 = (*(volatile s32 *) (u32) (a0 + 24));
    s1 = a0; v0 = func_00301BA0(a0, a1, a2, a3);
    v1 = 255;
    { s32 c_ = v0 == v1; (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v0; if (c_) goto L_00301F1C; }
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x4ed0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = s1; v0 = func_00305C60(a0, a1);
    v1 = 1;
    if (v0 != v1) { v1 = (*(volatile s32 *) (u32) (s0 + 36)); goto L_00301ED0; }
    v1 = 255;
    v0 = 0;
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v1; goto L_00301F20;
L_00301ED0:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x4ed0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4C40(a0, a1, a2, a3, a4, a5, a6);
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    v0 = (s32) 0x3b0000U;
    a1 = (s32) 0x300000U;
    v0 = (s32) ((u32) v0 + 0x4ed0U);
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0x1d90U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) v0; v0 = func_00305E60(a0, a1);
    v0 = 1; goto L_00301F20;
L_00301F1C:;
    v0 = 0;
L_00301F20:;
    return v0;
}
