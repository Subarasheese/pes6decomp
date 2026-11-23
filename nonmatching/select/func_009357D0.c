/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001CDA50(s32);
void func_0023B460(s32, s32, s32, s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023EC10(s32, s32);
void func_0023F510(s32, s32, s32, s32);
void func_002405D0(s32, s32, s32, s32);
void func_002DF0A0(s32, s32);
void func_002DF8E0(s32, s32, s32, s32);
s32 func_002DFC30(s32);
void func_008B31A0(s32, s32, s32, s32);
void func_008B32B0(s32, s32, s32, s32);
s32 func_008B3310(s32, s32, s32, s32);
s32 func_008B33C0(s32, s32, s32, s32);

void func_009357D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x510000U;
    v1 = 4;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    s0 = (s32) 0x540000U;
    { s32 c_ = v0 != v1; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_00935820; }
    a0 = 1; v0 = func_001CDA50(a0);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0xffffd8a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B33C0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -18648)) = (u32) v0; goto L_00935830;
L_00935820:;
    v0 = (s32) 0x10000U;
    a0 = v0 | 0x38b; v0 = func_008B33C0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -18648)) = (u32) v0;
L_00935830:;
    a1 = 4;
    a0 = (s32) ((u32) gp + 0xffffb724U);
    a2 = a1; func_002405D0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x14U);
    a1 = 9;
    a2 = 4; func_002405D0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18648));
    a1 = 2;
    a2 = 0;
    a3 = a1;
    a4 = 0;
    a5 = 1; v0 = func_008B3310(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -18652));
    a1 = 3;
    a2 = 0;
    a3 = 2;
    a4 = 0;
    (*(volatile u32 *) (u32) (v1 + 8)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (gp + -18648));
    a5 = 1; v0 = func_008B3310(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -18652));
    a0 = 0;
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) v0; v0 = func_002DFC30(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -18648));
    a1 = 0;
    (*(volatile u32 *) (u32) (gp + -18656)) = (u32) v0;
    a2 = 0;
    a3 = 2;
    a4 = 0;
    a5 = 1; v0 = func_008B3310(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -18652));
    a1 = 1;
    a2 = 0;
    a3 = 2;
    a4 = 0;
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (gp + -18648));
    a5 = a1; v0 = func_008B3310(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -18652));
    a1 = (s32) ((u32) sp + 0x30U);
    (*(volatile u32 *) (u32) (v1 + 4)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -18652));
    a0 = (*(volatile s32 *) (u32) v0);
    a2 = 0; func_008B32B0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18656));
    a1 = (s32) ((u32) sp + 0x30U); func_002DF0A0(a0, a1);
    a0 = 0;
    a1 = 0; func_0023B460(a0, a1, a2, a3);
    a0 = 1;
    a1 = a0; func_0023B460(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18784));
    if (v0 == 0) { a0 = 2; goto L_00935948; }
    v0 = (s32) 0x510000U;
    v1 = 6;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) { s1 = 0; goto L_0093597C; }
    a0 = 2;
L_00935948:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 2; func_0023EC10(a0, a1);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 1; func_0023EC10(a0, a1);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 4; func_0023EC10(a0, a1);
    goto L_009359B0;
L_0093597C:;
    s0 = 0;
L_00935980:;
    v0 = (*(volatile s32 *) (u32) (gp + -18652));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 4;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00935980; }
    a0 = (*(volatile s32 *) (u32) (gp + -18656));
    a1 = 0; func_002DF8E0(a0, a1, a2, a3);
L_009359B0:;
    v1 = (s32) 0x510000U;
    a0 = 4;
    v1 = (*(volatile s32 *) (u32) (v1 + 4048));
    if (v1 != a0) { ; goto L_009359D0; }
    a0 = 6; func_0023F510(a0, a1, a2, a3);
L_009359D0:;
    return;
}
