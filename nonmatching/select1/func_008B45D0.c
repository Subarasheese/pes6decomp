/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B6A30(s32, s32, s32, s32);
void func_001B8DC0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023B040(s32, s32, s32, s32);
void func_0023BC00(s32, s32, s32, s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023EA10(s32, s32, s32, s32);
void func_0023EFB0(s32, s32, s32, s32);
void func_0023F3A0(s32, s32, s32, s32);
void func_002405A0(s32, s32, s32, s32);
void func_002DF960(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00363E10(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_008223F0(s32, s32, s32, s32);
s32 func_008B32E0(s32, s32, s32, s32);
void func_008B34C0(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_008B45D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x510000U;
    s1 = 0;
    v1 = (*(volatile s32 *) (u32) (v0 + 4048));
    s0 = (s32) 0x540000U;
    v0 = 15;
    { s32 c_ = v1 != v0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_008B461C; }
    v0 = func_008223F0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { a0 = 1; goto L_008B4620; }
    s1 = v1; goto L_008B4638;
L_008B461C:;
    a0 = 1;
L_008B4620:;
    v0 = func_001B6A30(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { v0 = 1; goto L_008B463C; }
    s1 = v1;
L_008B4638:;
    v0 = 1;
L_008B463C:;
    if (s1 != v0) { v0 = 0; goto L_008B4748; }
    a0 = 0; func_0023EA10(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    v1 = 1;
    v0 = (*(volatile s8 *) (u32) (v0 + 7605));
    if (v0 != v1) { s2 = 0; goto L_008B4670; }
    v0 = (*(volatile s32 *) (u32) (gp + -20312));
    (*(volatile u8 *) (u32) (gp + -32364)) = (u8) v0; func_0023F3A0(a0, a1, a2, a3);
    s2 = 0;
L_008B4670:;
    s1 = 0;
L_008B4674:;
    v0 = (*(volatile s32 *) (u32) (gp + -20320));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B32E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -20320));
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 12;
    a0 = (s32) ((u32) a0 + (u32) s1);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_008B4674; }
    a0 = (s32) ((u32) gp + 0xffffb0a0U); func_002405A0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x14U); func_002405A0(a0, a1, a2, a3);
    s1 = (s32) 0x8e0000U;
    s0 = 0;
    s1 = (s32) ((u32) s1 + 0xffffc290U);
L_008B46BC:;
    a0 = (*(volatile s32 *) (u32) s1); func_00363E10(a0, a1, a2, a3, a4, a5, a6, a7);
    s0 = (s32) ((u32) s0 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s0 < 3;
    if (v0 != 0) goto L_008B46BC;
    a0 = 31; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (gp + -20324)); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    func_0023EFB0(a0, a1, a2, a3);
    func_0023B040(a0, a1, a2, a3);
    func_008B34C0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x510000U;
    v1 = 15;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) goto L_008B4728;
    v0 = func_008223F0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 == v1) goto L_008B4730;
L_008B4728:;
    func_001B8DC0(a0, a1, a2, a3, a4, a5, a6, a7);
L_008B4730:;
    func_0023BC00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -20336)) = (u32) 0;
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -20332)) = (u8) 0;
    (*(volatile u32 *) (u32) (gp + -22824)) = (u32) 0;
L_008B4748:;
    return v0;
}
