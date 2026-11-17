/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00255E70(s32);
s32 func_002D4C40(s32, s32, s32, s32, s32, s32, s32);
s32 func_00305C60(s32, s32);
s32 func_00305E60(s32, s32);
s32 func_00BD9830(s32, s32, s32, s32);
s32 func_00BF6270(s32, s32, s32, s32);
s32 func_00C01090(s32, s32, s32, s32);

s32 func_00301120(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 hi = 0, lo = 0;

    s0 = (*(volatile s32 *) (u32) (a0 + 24));
    s1 = a0; v0 = func_00BF6270(a0, a1, a2, a3);
    v1 = 255;
    if (v0 == v1) { a0 = 1; goto L_00301160; }
    v0 = func_00BF6270(a0, a1, a2, a3);
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a0 = hi;
L_00301160:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s2 = (s32) ((u32) v0 + (u32) v1); v0 = func_00BD9830(a0, a1, a2, a3);
    if (v0 == 0) { v1 = 255; goto L_00301218; }
    a0 = (*(volatile u8 *) (u32) (s2 + 18)); v0 = func_00255E70(a0);
    s2 = (u64) 0 < (u64) v0;
    a0 = 13; v0 = func_00C01090(a0, a1, a2, a3);
    if (v0 != 0) { v1 = s2 & 0xff; goto L_003011B4; }
    a0 = 16; v0 = func_00C01090(a0, a1, a2, a3);
    if (v0 == 0) { a0 = 15; goto L_003011C0; }
    v1 = s2 & 0xff;
L_003011B4:;
    v0 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v0 + (u32) v1); goto L_00301218;
L_003011C0:;
    v0 = func_00C01090(a0, a1, a2, a3);
    if (v0 != 0) { v1 = s2 & 0xff; goto L_00301204; }
    a0 = 18; v0 = func_00C01090(a0, a1, a2, a3);
    if (v0 != 0) goto L_00301200;
    a0 = 14; v0 = func_00C01090(a0, a1, a2, a3);
    if (v0 != 0) goto L_00301200;
    a0 = 17; v0 = func_00C01090(a0, a1, a2, a3);
    if (v0 == 0) goto L_00301214;
L_00301200:;
    v1 = s2 & 0xff;
L_00301204:;
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) v0 + 0x1U); goto L_00301218;
L_00301214:;
    v1 = 255;
L_00301218:;
    v0 = 255;
    { s32 c_ = v1 == v0; (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v1; if (c_) goto L_003012C4; }
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0x4f30U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = s1; v0 = func_00305C60(a0, a1);
    v1 = 1;
    if (v0 != v1) { v1 = (*(volatile s32 *) (u32) (s0 + 36)); goto L_0030125C; }
    v1 = 255;
    v0 = 0;
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v1; goto L_003012C8;
L_0030125C:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x4f30U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4C40(a0, a1, a2, a3, a4, a5, a6);
    a0 = (*(volatile s32 *) (u32) (s0 + 36));
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0x4f30U);
    v0 = 1;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    if (v1 != v0) goto L_003012AC;
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 20272)); v0 = func_002D4C40(a0, a1, a2, a3, a4, a5, a6);
L_003012AC:;
    a1 = (s32) 0x300000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0x1050U); v0 = func_00305E60(a0, a1);
    v0 = 1; goto L_003012C8;
L_003012C4:;
    v0 = 0;
L_003012C8:;
    return v0;
}
