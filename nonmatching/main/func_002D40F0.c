/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7C00(s32, s32);
s32 func_001D7C20(s32, s32, s32, s32);
s32 func_001D7D80(s32, s32, s32, s32);

s32 func_002D40F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0x5e0000U;
    s0 = (*(volatile s8 *) (u32) (v1 + 23905));
    { s32 c_ = s0 <= 0; s3 = 0; if (c_) goto L_002D4260; }
    s1 = 0;
L_002D411C:;
    v1 = 1;
    a1 = (*(volatile s32 *) (u32) (gp + -21988));
    a0 = (s32) ((u32) v1 << (s3 & 31));
    v1 = (s32) 0x5e0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 23916));
    a1 = (s32) ((u32) a1 + (u32) s1);
    v1 = v1 & a0;
    { s32 c_ = v1 == 0; s2 = (*(volatile s32 *) (u32) a1); if (c_) goto L_002D4238; }
    v1 = (s32) 0x5e0000U;
    a0 = (*(volatile u16 *) (u32) (v1 + 23906));
    { s32 c_ = a0 >= 0; v1 = a0 & 0x3f; if (c_) goto L_002D415C; }
    if (v1 == 0) { a0 = v1 & 0xffff; goto L_002D4160; }
    v1 = (s32) ((u32) v1 + 0xffffffc0U);
L_002D415C:;
    a0 = v1 & 0xffff;
L_002D4160:;
    v1 = 32;
    if (a0 == v1) goto L_002D4218;
    v1 = 31;
    if (a0 == v1) goto L_002D41E8;
    a1 = 1;
    if (a0 == a1) goto L_002D41C8;
    if (a0 == 0) goto L_002D4198;
    goto L_002D4250;
L_002D4198:;
    a0 = s2;
    a1 = 0; v0 = func_001D7C00(a0, a1);
    a0 = s2;
    a1 = 0; v0 = func_001D7D80(a0, a1, a2, a3);
    a0 = s2;
    a1 = 2; v0 = func_001D7C20(a0, a1, a2, a3);
    goto L_002D4250;
L_002D41C8:;
    a0 = s2; v0 = func_001D7D80(a0, a1, a2, a3);
    a0 = s2;
    a1 = 2; v0 = func_001D7C20(a0, a1, a2, a3);
    goto L_002D4250;
L_002D41E8:;
    a0 = s2;
    a1 = 1; v0 = func_001D7C00(a0, a1);
    a0 = s2;
    a1 = 2; v0 = func_001D7D80(a0, a1, a2, a3);
    a0 = s2;
    a1 = 2; v0 = func_001D7C20(a0, a1, a2, a3);
    goto L_002D4250;
L_002D4218:;
    a0 = s2;
    a1 = 1; v0 = func_001D7D80(a0, a1, a2, a3);
    a0 = s2;
    a1 = 2; v0 = func_001D7C20(a0, a1, a2, a3);
    goto L_002D4250;
L_002D4238:;
    a0 = s2;
    a1 = 0; v0 = func_001D7D80(a0, a1, a2, a3);
    a0 = s2;
    a1 = 0; v0 = func_001D7C20(a0, a1, a2, a3);
L_002D4250:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < s0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002D411C; }
L_002D4260:;
    return v0;
}
