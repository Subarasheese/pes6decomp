/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C12FD0(s32, s32, s32, s32);
s32 func_00C137F0(void);
s32 func_00C13840(void);
s32 func_00C32B50(s32);

s32 func_002C1B30(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) a3 << 2);
    v0 = (s32) ((u32) v0 + 0xffffa450U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s2 = a1;
    a1 = 255;
    s0 = (*(volatile s32 *) (u32) v0);
    s1 = a4;
    (*(volatile u8 *) (u32) (gp + -22047)) = (u8) a2;
    (*(volatile u8 *) (u32) (gp + -22046)) = (u8) a0;
    v0 = a0 & 0xff;
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) (gp + -22045)) = (u8) a1; if (c_) goto L_002C1B8C; }
    v0 = func_00C13840();
    s3 = v0; goto L_002C1B98;
L_002C1B8C:;
    v0 = func_00C32B50(a0);
    s3 = v0;
L_002C1B98:;
    v1 = s2 & 0xff;
    v0 = 255;
    if (v1 != v0) { a0 = s2; goto L_002C1BB8; }
    v0 = func_00C137F0();
    a0 = s3; goto L_002C1BC4;
L_002C1BB8:;
    v0 = func_00C32B50(a0);
    a0 = s3;
L_002C1BC4:;
    a2 = s0;
    a3 = s1;
    a1 = v0; v0 = func_00C12FD0(a0, a1, a2, a3);
    return v0;
}
