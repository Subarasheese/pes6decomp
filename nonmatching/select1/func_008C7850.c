/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0023B040(s32, s32, s32, s32);
void func_002405A0(s32, s32, s32, s32);
void func_002DF960(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002E33D0(s32, s32, s32, s32);
void func_002E4570(s32, s32, s32, s32);
s32 func_00825610(s32, s32, s32, s32);
s32 func_008B2E20(s32, s32, s32, s32);
s32 func_008B32E0(s32, s32, s32, s32);
void func_008C59B0(s32, s32, s32, s32);
void func_008CA7A0(s32, s32, s32, s32);

void func_008C7850(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    func_008C59B0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -20168)); func_002E33D0(a0, a1, a2, a3);
    s1 = 0;
    s0 = 0;
L_008C7874:;
    v0 = (*(volatile s32 *) (u32) (gp + -20156));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B2E20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -20156));
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 8;
    a0 = (s32) ((u32) a0 + (u32) s0);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008C7874; }
    s0 = 0;
    s1 = 0;
L_008C78A8:;
    v0 = (*(volatile s32 *) (u32) (gp + -20144));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B32E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -20144));
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 16;
    a0 = (s32) ((u32) a0 + (u32) s1);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_008C78A8; }
    a0 = (s32) ((u32) gp + 0xffffb150U); func_002405A0(a0, a1, a2, a3);
    a0 = (s32) ((u32) gp + 0xffffb144U); func_002405A0(a0, a1, a2, a3);
    func_0023B040(a0, a1, a2, a3);
    v0 = (s32) 0x8e0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 30912)); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x8e0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 30916)); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x510000U;
    v1 = 4;
    a0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (a0 == v1) goto L_008C792C;
    v0 = 15;
    if (a0 == v0) goto L_008C792C;
    a0 = (*(volatile s32 *) (u32) (gp + -20172)); func_008CA7A0(a0, a1, a2, a3);
L_008C792C:;
    v0 = (s32) 0x510000U;
    v1 = 15;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) { a0 = (*(volatile s32 *) (u32) (gp + -20164)); goto L_008C7960; }
    v0 = func_00825610(a0, a1, a2, a3);
    v1 = 6;
    if (v0 != v1) goto L_008C795C;
    a0 = (*(volatile s32 *) (u32) (gp + -20172)); func_008CA7A0(a0, a1, a2, a3);
L_008C795C:;
    a0 = (*(volatile s32 *) (u32) (gp + -20164));
L_008C7960:;
    func_002E4570(a0, a1, a2, a3);
    return;
}
