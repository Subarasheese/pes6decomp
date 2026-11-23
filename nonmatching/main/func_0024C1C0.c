/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B8DC0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023B040(s32, s32, s32, s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023F3A0(s32, s32, s32, s32);
void func_002405A0(s32, s32, s32, s32);
void func_002685F0(s32);
void func_002DF960(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00363E10(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_008B2E20(s32, s32, s32, s32);
void func_008B3040(s32, s32, s32, s32);
s32 func_008B32E0(s32, s32, s32, s32);

void func_0024C1C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x510000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 4048));
    v0 = 4;
    if (v1 == v0) goto L_0024C20C;
    func_001B8DC0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x510000U;
    v1 = 5;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 == v1) goto L_0024C20C;
    func_0023F3A0(a0, a1, a2, a3);
L_0024C20C:;
    s1 = (s32) 0x540000U;
    s0 = (s32) 0x540000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffffcd50U);
    s0 = (s32) ((u32) s0 + 0xffffcb90U);
L_0024C220:;
    a0 = (*(volatile s32 *) (u32) s1); func_00363E10(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) s0); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s2 < 8;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_0024C220; }
    v0 = (s32) 0x510000U;
    v1 = 4;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 == v1) { a0 = 0; goto L_0024C264; }
    a0 = 31; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 0;
L_0024C264:;
    func_002685F0(a0);
    s0 = 0;
    s1 = 0;
L_0024C274:;
    v0 = (*(volatile s32 *) (u32) (gp + -22620));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B2E20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -22620));
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 49;
    a0 = (s32) ((u32) a0 + (u32) s1);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0024C274; }
    s0 = 0;
    s1 = 0;
L_0024C2A8:;
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B32E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -22616));
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 73;
    a0 = (s32) ((u32) a0 + (u32) s1);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0024C2A8; }
    a0 = (s32) ((u32) gp + 0xffffa7a8U); func_002405A0(a0, a1, a2, a3);
    a0 = (s32) ((u32) gp + 0xffffa7a4U); func_002405A0(a0, a1, a2, a3);
    func_008B3040(a0, a1, a2, a3);
    func_0023B040(a0, a1, a2, a3);
    return;
}
