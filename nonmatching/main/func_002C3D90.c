/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C12D00(s32, s32, s32, s32);
s32 func_00C13110(s32, s32, s32, s32);
s32 func_00C13280(s32, s32, s32, s32);
s32 func_00C132B0(s32, s32, s32, s32);
s32 func_00C132C0(s32, s32, s32, s32);
s32 func_00C136E0(s32, s32, s32, s32);
s32 func_00C13740(s32, s32, s32, s32);
s32 func_00C137C0(s32, s32, s32, s32);
s32 func_00C13840(s32, s32, s32, s32);
s32 func_00C18DC0(s32, s32, s32, s32);

s32 func_002C3D90(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    a2 = 0;
    a3 = 0;
    s7 = 5;
    s6 = a1;
    a1 = 0;
    s2 = a0;
    a0 = 0;
    { u32 t_ = (u32) s6; ; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    s5 = v0;
    v1 = (s32) ((u32) sp + 0xa8U);
    s4 = s5;
    s1 = s5;
    { s32 c_ = v1 == 0; v0 = 8; if (c_) goto L_002C3E10; }
L_002C3DF4:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_002C3DF4;
L_002C3E10:;
    v1 = (s32) ((u32) sp + 0xa0U);
    { s32 c_ = v1 == 0; v0 = 8; if (c_) goto L_002C3E38; }
L_002C3E1C:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_002C3E1C;
L_002C3E38:;
    v0 = func_00C13840(a0, a1, a2, a3);
    s0 = v0;
    v0 = -1;
    if (s2 == v0) goto L_002C4074;
    a0 = s2; v0 = func_00C12D00(a0, a1, a2, a3);
    if (v0 == 0) goto L_002C4074;
    a0 = s2; v0 = func_00C137C0(a0, a1, a2, a3);
    s2 = v0;
    v0 = (u64) s0 < (u64) s2;
    if (v0 != 0) { fp = (s32) ((u32) sp + 0xa4U); goto L_002C3ED8; }
    a2 = (*(volatile s32 *) (u32) (sp + 168));
L_002C3E7C:;
    v0 = 1;
    a1 = (*(volatile s32 *) (u32) (sp + 160));
    a0 = (*(volatile s32 *) (u32) (sp + 172));
    v1 = (*(volatile s32 *) (u32) (sp + 164));
    a1 = (s32) ((u32) a2 + (u32) a1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    if (v1 != v0) goto L_002C3EA4;
    s7 = 3;
L_002C3EA4:;
    if (s5 == s4) goto L_002C4070;
    v0 = 2;
    if (s5 == v0) { s7 = v0; goto L_002C4074; }
    if (s5 == s1) { s7 = 1; goto L_002C4074; }
    if (s4 == s1) goto L_002C4074;
    if (s4 != v0) goto L_002C4074;
    s7 = 0; goto L_002C4074;
L_002C3ED8:;
    a2 = (s32) 0xc10000U;
    a0 = s0;
    a1 = s2;
    a2 = (s32) ((u32) a2 + 0x2d00U); v0 = func_00C13110(a0, a1, a2, a3);
    s3 = v0;
    v0 = -1;
    if (s3 == v0) goto L_002C4074;
    a0 = s3;
    s0 = s3; v0 = func_00C132C0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    a1 = 1;
    if (v0 == a1) goto L_002C4024;
    a0 = s3; v0 = func_00C136E0(a0, a1, a2, a3);
    s0 = v0;
    v0 = -1;
    if (s0 != v0) goto L_002C4024;
    v0 = func_00C13840(a0, a1, a2, a3);
    s0 = v0;
    a0 = s0; v0 = func_00C132C0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    a1 = 1;
    if (v0 != a1) goto L_002C3F60;
    a0 = s0; goto L_002C4028;
L_002C3F60:;
    a0 = s0; v0 = func_00C13740(a0, a1, a2, a3);
    s0 = v0; goto L_002C4024;
L_002C3F70:;
    v0 = s1 & 0xff;
    v0 = v0 ^ 0x1;
    s1 = v0 & 0xff;
L_002C3F80:;
    v1 = s0 & 0xff;
    v0 = 3;
    if (v1 == v0) goto L_002C3FC8;
    v0 = 2;
    if (v1 == v0) goto L_002C3FC8;
    v0 = 1;
    if (v1 == v0) goto L_002C3FA8;
L_002C3FA8:;
    v0 = s1 & 0xff;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v1 + 168));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 168)) = (u32) v0; goto L_002C3FE0;
L_002C3FC8:;
    v0 = s1 & 0xff;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v1 + 160));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 160)) = (u32) v0;
L_002C3FE0:;
    v0 = (s32) ((u32) sp + 0xacU);
    a0 = (*(volatile s32 *) (u32) (sp + 168));
    s1 = s4;
    a1 = (*(volatile s32 *) (u32) v0);
    a2 = (*(volatile s32 *) (u32) (sp + 160));
    a3 = (*(volatile s32 *) (u32) fp);
    { u32 t_ = (u32) s6; s4 = s5; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    a0 = s3;
    s5 = v0; v0 = func_00C137C0(a0, a1, a2, a3);
    s0 = v0;
    v0 = (u64) s0 < (u64) s2;
    if (v0 != 0) goto L_002C3ED8;
    a2 = (*(volatile s32 *) (u32) (sp + 168)); goto L_002C3E7C;
L_002C4024:;
    a0 = s0;
L_002C4028:;
    v0 = func_00C13280(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (v0 + 1)); v0 = func_00C18DC0(a0, a1, a2, a3);
    s0 = v0 & 0xff;
    a0 = s3; v0 = func_00C132B0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    a0 = s3;
    v0 = (s32) v0 >> 5;
    s1 = v0 & 0x1; v0 = func_00C132C0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 4;
    if (v1 != v0) goto L_002C3F80;
    goto L_002C3F70;
L_002C4070:;
    s7 = 4;
L_002C4074:;
    v0 = s7;
    return v0;
}
