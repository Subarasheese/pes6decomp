/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021DB40(s32);
s32 func_002E9230(s32);
void func_002E9340(s32);
s32 func_0063B780(s32, s32, s32);
s32 func_0063C390(s32);
s32 func_00645860(s32);
void func_0064B100(s32, s32, s32);
void func_0064B2E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_006557C0(void);
void func_00655940(void);
void func_00655D10(void);
void func_00656020(s32, s32);

s32 func_0064CEA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    s1 = a0;
    a0 = (s32) 0x660000U;
    s0 = a1;
    a0 = (s32) ((u32) a0 + 0xffffc0e0U); v0 = func_0021DB40(a0);
    if (v0 != 0) goto L_0064CF78;
    v1 = (*(volatile u8 *) (u32) (gp + -20892));
    v0 = 1;
    { s32 c_ = v1 != v0; (*(volatile u8 *) (u32) (gp + -20804)) = (u8) 0; if (c_) goto L_0064CF38; }
    func_00655940();
    a0 = 26; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00656020(a0, a1);
    a0 = 95; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00656020(a0, a1);
    a0 = 1; func_00655D10();
    func_006557C0();
    a0 = (s32) ((u32) gp + 0xffffaac8U);
    a1 = 0;
    a2 = 2; v0 = func_0063B780(a0, a1, a2);
    v0 = 0; goto L_0064D048;
L_0064CF38:;
    (*(volatile u8 *) (u32) (gp + -20884)) = (u8) v0;
    a0 = (s32) ((u32) gp + 0xffffaac8U);
    (*(volatile u8 *) (u32) (gp + -20888)) = (u8) v0;
    a1 = 0;
    a2 = 2; v0 = func_0063B780(a0, a1, a2);
    a0 = s1;
    a1 = -119;
    a2 = (s32) ((u32) gp + 0xffffaac8U); func_0064B2E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s1;
    a1 = -119;
    a2 = (s32) ((u32) gp + 0xffffaac8U); func_0064B100(a0, a1, a2);
    v0 = 2; goto L_0064D048;
L_0064CF78:;
    v0 = (s32) 0x660000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + -16152));
    (*(volatile u8 *) (u32) (gp + -20804)) = (u8) v1;
    s2 = (*(volatile s32 *) (u32) (v0 + 16));
    a0 = 46; v0 = func_0063C390(a0);
    v0 = (s32) ((u32) v0 << 10);
    if (s2 == v0) { v1 = (*(volatile u8 *) (u32) (s1 + 6)); goto L_0064CFAC; }
    a0 = -1; func_002E9340(a0);
    v1 = (*(volatile u8 *) (u32) (s1 + 6));
L_0064CFAC:;
    v0 = 1;
    if (v1 != v0) { v1 = (*(volatile u8 *) (u32) (s1 + 6)); goto L_0064CFD4; }
    a0 = 0; v0 = func_002E9230(a0);
    if (v0 == 0) goto L_0064CFD0;
    v0 = 1; goto L_0064D048;
L_0064CFD0:;
    v1 = (*(volatile u8 *) (u32) (s1 + 6));
L_0064CFD4:;
    v0 = 1;
    if (v1 != v0) goto L_0064CFF4;
    v1 = 2;
    if (s0 != v1) goto L_0064CFF4;
    goto L_0064D04C;
L_0064CFF4:;
    func_00655940();
    a0 = 24; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00656020(a0, a1);
    a0 = 95; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00656020(a0, a1);
    a0 = 1; func_00655D10();
    func_006557C0();
    a0 = (s32) ((u32) gp + 0xffffaac8U);
    a1 = 0;
    a2 = 1; v0 = func_0063B780(a0, a1, a2);
    v0 = 0;
L_0064D048:;
L_0064D04C:;
    return v0;
}
