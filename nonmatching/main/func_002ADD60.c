/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002ADE30(s32, s32, s32, s32, s32);
s32 memmove(s32, s32, s32);

s32 func_002ADD60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s3 = a0;
    s2 = a1;
    s0 = a2 & 0xff;
    v1 = 0 < s0;
    { s32 c_ = v1 != 0; s1 = 0; if (c_) goto L_002ADD9C; }
L_002ADD94:;
    goto L_002ADE10;
L_002ADD9C:;
    v0 = s1 & 0xff;
    a4 = (s32) 0x2b0000U;
    a1 = s2;
    a0 = (s32) ((u32) s2 + (u32) v0);
    a2 = s3;
    a3 = s1;
    a4 = (s32) ((u32) a4 + 0xffffdf20U); v0 = func_002ADE30(a0, a1, a2, a3, a4);
    a0 = v0 & 0xff;
    v1 = s1 & 0xff;
    if (a0 != v1) { s4 = (s32) ((u32) s3 + (u32) a0); goto L_002ADDF4; }
    v1 = (s32) ((u32) s3 + (u32) a0);
    (*(volatile u8 *) (u32) v1) = (u8) s1;
L_002ADDD8:;
    v1 = (s32) ((u32) s1 + 0x1U);
    s1 = v1 & 0xff;
    v1 = s1 < s0;
    if (v1 != 0) goto L_002ADD9C;
    goto L_002ADD94;
L_002ADDF4:;
    a2 = (s32) ((u32) v1 - (u32) a0);
    v0 = (s32) ((u32) a0 + 0x1U);
    a1 = s4;
    a0 = (s32) ((u32) s3 + (u32) v0); v0 = memmove(a0, a1, a2);
    (*(volatile u8 *) (u32) s4) = (u8) s1; goto L_002ADDD8;
L_002ADE10:;
    return v0;
}
