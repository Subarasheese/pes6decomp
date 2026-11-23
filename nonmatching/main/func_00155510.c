/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00111650(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00111AA8(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00154CB8(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00154DD8(s32);
void memset(s32, s32, s32);
void scePadSetWarningLevel(s32);

void func_00155510(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

L_00155524:;
    v0 = func_00154CB8(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) goto L_00155524;
L_00155548:;
    a0 = 0; v0 = func_00111650(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) goto L_00155548;
L_00155568:;
    a0 = 0; v0 = func_00154DD8(a0);
    v1 = 1;
    if (v0 != v1) goto L_00155568;
L_00155588:;
    a0 = 1; v0 = func_00154DD8(a0);
    v1 = 1;
    if (v0 != v1) goto L_00155588;
    a0 = 0; scePadSetWarningLevel(a0);
    s2 = 0;
    s0 = 0;
L_001555B4:;
    s1 = 0;
L_001555B8:;
    a0 = (s32) ((u32) s1 + (u32) s0);
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) 0x510000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffd8c0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = s2;
    a1 = s1;
    a2 = (s32) ((u32) v0 + (u32) v1); func_00111AA8(a0, a1, a2, a3, a4, a5, a6, a7);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 4;
    if (v0 != 0) goto L_001555B8;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_001555B4; }
    a0 = (s32) 0x510000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffd8c0U);
    a2 = 2560; memset(a0, a1, a2);
    a0 = (s32) ((u32) gp + 0xffffa4c8U);
    a1 = 0;
    a2 = 2; memset(a0, a1, a2);
    a0 = (s32) 0x510000U;
    v1 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (a0 + -9792)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + -9472)) = (u32) 0;
    a0 = (s32) 0x510000U;
    v1 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (a0 + -9152)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + -8832)) = (u32) 0;
    a0 = (s32) 0x510000U;
    v1 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (a0 + -8512)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + -8192)) = (u32) 0;
    a0 = (s32) 0x510000U;
    v1 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (a0 + -7872)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + -7552)) = (u32) 0;
    return;
}
