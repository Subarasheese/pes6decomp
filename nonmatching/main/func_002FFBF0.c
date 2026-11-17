/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00255E70(s32);
s32 func_002D4BE0(s32, s32, s32, s32);
s32 func_002D4C40(s32, s32, s32, s32, s32, s32, s32);
s32 func_00305E60(s32, s32);
s32 func_00BDA260(s32, s32, s32, s32);

s32 func_002FFBF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 hi = 0, lo = 0;

    s0 = (*(volatile s32 *) (u32) (a0 + 24));
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    { s32 c_ = v0 == 0; s2 = a0; if (c_) goto L_002FFC20; }
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v0; goto L_002FFC8C;
L_002FFC20:;
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    v0 = 4;
    if (v1 == v0) goto L_002FFC6C;
    v0 = 5;
    if (v1 == v0) goto L_002FFC4C;
    if (v1 == 0) goto L_002FFC4C;
    goto L_002FFC8C;
L_002FFC4C:;
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 20400)); v0 = func_002D4C40(a0, a1, a2, a3, a4, a5, a6);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) ((u32) v0 << 1);
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v0; goto L_002FFC8C;
L_002FFC6C:;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 7140));
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v1;
    a0 = (*(volatile s32 *) (u32) (v0 + 20416)); v0 = func_002D4C40(a0, a1, a2, a3, a4, a5, a6);
L_002FFC8C:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 9983));
    v0 = 5;
    { s32 c_ = v1 == v0; s1 = 0; if (c_) goto L_002FFCCC; }
    v0 = 4;
    if (v1 == v0) goto L_002FFCB4;
    s1 = 1; goto L_002FFCE0;
L_002FFCB4:;
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -16839));
    if (v0 != 0) goto L_002FFCE0;
    s1 = 1; goto L_002FFCE0;
L_002FFCCC:;
    v0 = func_00BDA260(a0, a1, a2, a3);
    if (v0 != 0) goto L_002FFCE0;
    s1 = 1;
L_002FFCE0:;
    if (s1 == 0) { v0 = 0; goto L_002FFD6C; }
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x4fb0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4BE0(a0, a1, a2, a3);
    a1 = (s32) 0x300000U;
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0xfffffa50U); v0 = func_00305E60(a0, a1);
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7757));
    if (a0 == v1) { a0 = 1; goto L_002FFD34; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
L_002FFD34:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5c2U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) v0); v0 = func_00255E70(a0);
    if (v0 == 0) { v0 = 1; goto L_002FFD6C; }
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 20412)); v0 = func_002D4C40(a0, a1, a2, a3, a4, a5, a6);
    v0 = 1;
L_002FFD6C:;
    return v0;
}
