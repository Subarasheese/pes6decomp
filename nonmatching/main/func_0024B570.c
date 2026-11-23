/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0023B2C0(s64, s64, s64, s64);
void func_0023B360(s64, s64, s64, s64);
void func_0023EC10(s64, s64);
s64 func_00247460(s64);
void func_0024B240(s64, s64, s64, s64);

void func_0024B570(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;

    v1 = 1;
    s3 = a0;
    s1 = (s64) ((u64) a1 << 56);
    s1 = s1 >> 56;
    a0 = (s32) ((u32) s1 << 1);
    a0 = (s32) ((u32) a0 + (u32) s1);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a0 + (u32) s1);
    a0 = (s32) ((u32) a0 << 2);
    a1 = (s32) ((u32) s3 + (u32) a0);
    a0 = (*(volatile s8 *) (u32) a1);
    if (a0 != v1) { ; goto L_0024B74C; }
    v1 = (*(volatile s8 *) (u32) (a1 + 1));
    { s32 c_ = v1 >= 0; s0 = (s32) ((u32) a1 + 0x1U); if (c_) goto L_0024B5FC; }
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
    a2 = (s32) ((u32) s1 + 0x2U);
    a1 = (*(volatile s32 *) (u32) (v0 + 8));
    a0 = s1; func_0023B2C0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
    s2 = (s32) ((u32) s1 + 0x8U);
    a2 = (s32) ((u32) s1 + 0xaU);
    a1 = (*(volatile s32 *) (u32) (v0 + 8));
    a0 = s2; func_0023B2C0(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) s0); goto L_0024B670;
L_0024B5FC:;
    if (v1 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -22616)); goto L_0024B614; }
    v0 = 10;
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) (gp + -22616)); goto L_0024B644; }
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
L_0024B614:;
    a2 = (s32) ((u32) s1 + 0xaU);
    a1 = (*(volatile s32 *) (u32) (v0 + 8));
    a0 = s1; func_0023B2C0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
    s2 = (s32) ((u32) s1 + 0x8U);
    a2 = (s32) ((u32) s1 + 0x12U);
    a1 = (*(volatile s32 *) (u32) (v0 + 8));
    a0 = s2; func_0023B2C0(a0, a1, a2, a3);
    goto L_0024B66C;
L_0024B644:;
    a2 = (s32) ((u32) s1 + 0x12U);
    a1 = (*(volatile s32 *) (u32) (v0 + 8));
    a0 = s1; func_0023B2C0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
    s2 = (s32) ((u32) s1 + 0x8U);
    a2 = (s32) ((u32) s1 + 0x1aU);
    a1 = (*(volatile s32 *) (u32) (v0 + 8));
    a0 = s2; func_0023B2C0(a0, a1, a2, a3);
L_0024B66C:;
    v1 = (*(volatile s8 *) (u32) s0);
L_0024B670:;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_0024B678; }
L_0024B678:;
    v0 = 10;
    if (v1 != v0) { v1 = (*(volatile s8 *) (u32) s0); goto L_0024B6C4; }
    a0 = 0; v0 = func_00247460(a0);
    if (v0 != 0) { a0 = 1; goto L_0024B6A4; }
    a0 = s1;
    a1 = 0; func_0023B360(a0, a1, a2, a3);
    a0 = 1;
L_0024B6A4:;
    v0 = func_00247460(a0);
    if (v0 != 0) goto L_0024B6C0;
    a0 = s2;
    a1 = 0; func_0023B360(a0, a1, a2, a3);
L_0024B6C0:;
    v1 = (*(volatile s8 *) (u32) s0);
L_0024B6C4:;
    v0 = -11;
    if (v1 != v0) { v1 = (*(volatile s8 *) (u32) s0); goto L_0024B6E0; }
    a0 = s1;
    a1 = 0; func_0023B360(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) s0);
L_0024B6E0:;
    v0 = 11;
    if (v1 != v0) { v1 = (*(volatile s32 *) (u32) (gp + -22600)); goto L_0024B6FC; }
    a0 = s2;
    a1 = 0; func_0023B360(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -22600));
L_0024B6FC:;
    v0 = 1;
    if (v1 != v0) { a0 = s3; goto L_0024B734; }
    v0 = (*(volatile s8 *) (u32) s0);
    if (v0 >= 0) { a0 = s1; goto L_0024B728; }
    a0 = s2;
    a1 = 0; func_0023B360(a0, a1, a2, a3);
    goto L_0024B730;
L_0024B728:;
    a1 = 0; func_0023B360(a0, a1, a2, a3);
L_0024B730:;
    a0 = s3;
L_0024B734:;
    func_0024B240(a0, a1, a2, a3);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    a1 = 4; func_0023EC10(a0, a1);
L_0024B74C:;
    return;
}
