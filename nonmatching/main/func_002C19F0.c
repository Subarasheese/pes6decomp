/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C12FD0(s32, s32, s32, s32);
s32 func_00C13280(s32, s32, s32, s32);
s32 func_00C132C0(s32, s32, s32, s32);
s32 func_00C136E0(s32, s32, s32, s32);
s32 func_00C13740(s32, s32, s32, s32);
s32 func_00C13840(s32, s32, s32, s32);

s32 func_002C19F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;

    v0 = -1;
    v1 = 0;
    s4 = a0;
    s3 = a1;
    s2 = a3;
    s1 = a4;
    { s32 c_ = s4 == v0; (*(volatile u8 *) (u32) (gp + -22047)) = (u8) a2; if (c_) goto L_002C1AD8; }
    v0 = 22;
    if (s2 == v0) goto L_002C1A4C;
    v0 = 21;
    if (s2 == v0) goto L_002C1A4C;
    v0 = 255; goto L_002C1ADC;
L_002C1A4C:;
    a0 = s4;
    s0 = s4; v0 = func_00C132C0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    a1 = 1;
    if (v0 != a1) { a0 = s4; goto L_002C1A84; }
L_002C1A68:;
    v0 = -1;
L_002C1A6C:;
    if (s0 == v0) { v1 = 0; goto L_002C1AD8; }
    a0 = s0; v0 = func_00C13280(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (v0 + 1)); goto L_002C1AD8;
L_002C1A84:;
    v0 = func_00C136E0(a0, a1, a2, a3);
    s0 = v0;
    v0 = -1;
    if (s0 != v0) goto L_002C1A68;
    v0 = func_00C13840(a0, a1, a2, a3);
    s0 = v0;
    a0 = s0; v0 = func_00C132C0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    a1 = 1;
    if (v0 != a1) { a0 = s0; goto L_002C1AC8; }
    v0 = -1; goto L_002C1A6C;
L_002C1AC8:;
    v0 = func_00C13740(a0, a1, a2, a3);
    s0 = v0; goto L_002C1A68;
L_002C1AD8:;
    v0 = 255;
L_002C1ADC:;
    (*(volatile u8 *) (u32) (gp + -22046)) = (u8) v1;
    (*(volatile u8 *) (u32) (gp + -22045)) = (u8) v0;
    v1 = (s32) ((u32) s2 << 2);
    v0 = (s32) 0x3e0000U;
    a0 = s4;
    v0 = (s32) ((u32) v0 + 0xffffa450U);
    a1 = s3;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile s32 *) (u32) v0);
    a3 = s1; v0 = func_00C12FD0(a0, a1, a2, a3);
    return v0;
}
