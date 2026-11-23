/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0021DAF0(s32, s32, s32, s32);
s32 func_006232C0(s32);
void func_0064B100(s32, s32, s32);
void func_0064B2E0(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_0064D250(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (gp + -21816)); v0 = func_006232C0(a0);
    a0 = (*(volatile s16 *) (u32) (gp + -21816));
    v0 = (s32) 0x660000U;
    a1 = (*(volatile s16 *) (u32) (gp + -21814));
    v0 = (s32) ((u32) v0 + 0xffffc090U);
    v1 = 2;
    a0 = (s32) ((u32) a0 << 2);
    a1 = (s32) ((u32) a1 + (u32) a0);
    a0 = (s32) ((u32) a1 << 3);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 != v1) goto L_0064D2D8;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffc094U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 != v1) { s0 = 0; goto L_0064D368; }
    a0 = s0;
    a1 = -124;
    a2 = (s32) ((u32) gp + 0xffffaac8U); func_0064B2E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0;
    a1 = -124;
    a2 = (s32) ((u32) gp + 0xffffaac8U); func_0064B100(a0, a1, a2);
    s0 = 2; goto L_0064D368;
L_0064D2D8:;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffc180U);
    a0 = (*(volatile s32 *) (u32) (gp + -21816));
    a1 = -1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) a1; v0 = func_006232C0(a0);
    v1 = 3;
    if (v0 == v1) { a0 = s0; goto L_0064D348; }
    v1 = 1;
    if (v0 == v1) goto L_0064D344;
    if (v0 == 0) { a0 = s0; goto L_0064D320; }
    s0 = 2; goto L_0064D368;
L_0064D320:;
    a1 = -127;
    a2 = (s32) ((u32) gp + 0xffffaac8U); func_0064B2E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0;
    a1 = -127;
    a2 = (s32) ((u32) gp + 0xffffaac8U); func_0064B100(a0, a1, a2);
    goto L_0064D364;
L_0064D344:;
    a0 = s0;
L_0064D348:;
    a1 = -126;
    a2 = (s32) ((u32) gp + 0xffffaac8U); func_0064B2E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0;
    a1 = -126;
    a2 = (s32) ((u32) gp + 0xffffaac8U); func_0064B100(a0, a1, a2);
L_0064D364:;
    s0 = 2;
L_0064D368:;
    a0 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0xffffc0e0U); func_0021DAF0(a0, a1, a2, a3);
    v0 = s0;
    return v0;
}
