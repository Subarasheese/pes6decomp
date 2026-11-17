/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002D4BE0(s32, s32, s32, s32);
s32 func_002D4C40(s32, s32, s32, s32, s32, s32, s32);
s32 func_002FFEF0(s32, s32, s32, s32);
s32 func_00305E60(s32, s32);

s32 func_003001B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s1 = (*(volatile s32 *) (u32) (a0 + 24));
    v0 = (*(volatile s32 *) (u32) (s1 + 28));
    { s32 c_ = v0 == 0; s2 = a0; if (c_) goto L_003001E0; }
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) (s1 + 28)) = (u32) v0; goto L_0030020C;
L_003001E0:;
    v0 = (s32) 0x590000U;
    v1 = 8;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) ((u32) v0 << 1);
    (*(volatile u32 *) (u32) (s1 + 28)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s1 + 36));
    if (v0 != v1) goto L_0030020C;
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 20388)); v0 = func_002D4C40(a0, a1, a2, a3, a4, a5, a6);
L_0030020C:;
    v0 = func_002FFEF0(a0, a1, a2, a3);
    s0 = v0;
    v0 = 255;
    if (s0 == v0) { v0 = 0; goto L_00300258; }
    v1 = (*(volatile s32 *) (u32) (s1 + 36));
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x4f80U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4BE0(a0, a1, a2, a3);
    a1 = (s32) 0x300000U;
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0x130U);
    (*(volatile u32 *) (u32) (s1 + 36)) = (u32) s0; v0 = func_00305E60(a0, a1);
    v0 = 1;
L_00300258:;
    return v0;
}
