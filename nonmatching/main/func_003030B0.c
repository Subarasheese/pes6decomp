/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002D4C40(s32, s32, s32, s32, s32, s32, s32);
s32 func_00302E20(void);
s32 func_00305C60(s32, s32);
s32 func_00305E60(s32, s32);

s32 func_003030B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s0 = (*(volatile s32 *) (u32) (a0 + 24));
    s1 = a0; v0 = func_00302E20();
    v1 = 255;
    { s32 c_ = v0 == v1; (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v0; if (c_) goto L_00303198; }
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x4e70U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = s1; v0 = func_00305C60(a0, a1);
    v1 = 1;
    if (v0 != v1) { v1 = (*(volatile s32 *) (u32) (s0 + 36)); goto L_00303110; }
    v1 = 255;
    v0 = 0;
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v1; goto L_0030319C;
L_00303110:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x4e70U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4C40(a0, a1, a2, a3, a4, a5, a6);
    a0 = (*(volatile s32 *) (u32) (s0 + 36));
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0x4e70U);
    v0 = 2;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    if (v1 != v0) goto L_0030316C;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v0; goto L_00303180;
L_0030316C:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v0;
L_00303180:;
    a1 = (s32) 0x300000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0x3010U); v0 = func_00305E60(a0, a1);
    v0 = 1; goto L_0030319C;
L_00303198:;
    v0 = 0;
L_0030319C:;
    return v0;
}
