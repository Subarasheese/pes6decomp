/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_006232C0(s64);
s64 func_00627810(void);
s64 func_00652060(s64, s64, s64, s64, s64, s64, s64, s64);
void func_00652220(s64, s64, s64, s64);
void func_00652240(void);
s64 strcmp(s64, s64);

s64 func_00628620(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    s64 frame[8];
    s64 sp = (s32) (u32) frame;

    s1 = 0;
    a0 = (*(volatile s32 *) (u32) (gp + -21812));
    s0 = (s32) 0x660000U;
    s0 = (s32) ((u32) s0 + 0xffffc1d0U); v0 = func_006232C0(a0);
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -21092)); goto L_00628658; }
    (*(volatile u8 *) (u32) (gp + -21832)) = (u8) 0;
    s1 = 3;
    v1 = (*(volatile s32 *) (u32) (gp + -21092));
L_00628658:;
    v0 = 3;
    if (v1 == v0) { (*(volatile u32 *) (u32) (gp + -21092)) = (u32) 0; goto L_00628790; }
    v0 = 2;
    if (v1 == v0) { v0 = 3; goto L_006286B4; }
    v0 = 1;
    if (v1 == v0) { v0 = 3; goto L_00628690; }
    func_00652240();
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -21092)) = (u32) v0;
    v0 = 3;
L_00628690:;
    if (s1 == v0) { v0 = s1; goto L_00628798; }
    v0 = func_00627810();
    if (v0 == 0) goto L_00628794;
    v0 = 2;
    (*(volatile u32 *) (u32) (gp + -21092)) = (u32) v0;
    v0 = 3;
L_006286B4:;
    if (s1 != v0) { v1 = (s32) ((u32) s0 + 0x4aU); goto L_006286CC; }
    func_00652220(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -21092)) = (u32) 0; goto L_00628794;
L_006286CC:;
    v0 = (s32) ((u32) s0 + 0x78U);
    (*(volatile u64 *) (u32) sp) = (u64) v1;
    (*(volatile u64 *) (u32) (sp + 8)) = (u64) v0;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (*(volatile s32 *) (u32) (s0 + 4));
    a2 = (*(volatile s32 *) (u32) (s0 + 8));
    a3 = (*(volatile s32 *) (u32) (s0 + 12));
    a4 = (*(volatile s32 *) (u32) (s0 + 16));
    a5 = (*(volatile s32 *) (u32) (s0 + 20));
    a6 = (*(volatile s32 *) (u32) (s0 + 24));
    a7 = (s32) ((u32) s0 + 0x1cU); v0 = func_00652060(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 2;
    if (v0 == v1) { s1 = v1; goto L_00628794; }
    v1 = 1;
    if (v0 == v1) goto L_00628724;
    if (v0 == 0) goto L_00628794;
    goto L_00628794;
L_00628724:;
    a0 = (s32) 0x660000U;
    a1 = (s32) 0x660000U;
    s1 = (s32) 0x660000U;
    s0 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0xffffc1ecU);
    a1 = (s32) ((u32) a1 + 0xffffc21aU);
    s1 = (s32) ((u32) s1 + 0xffffc1d0U);
    s0 = (s32) ((u32) s0 + 0xffffc268U); v0 = strcmp(a0, a1);
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (s0 + 1)); goto L_00628758; }
    v0 = 0; goto L_0062877C;
L_00628758:;
    v0 = 35;
    if (v1 != v0) { v0 = 1; goto L_0062877C; }
    v0 = (*(volatile s8 *) (u32) (s1 + 28));
    if (v0 != 0) goto L_00628778;
    v0 = 0; goto L_0062877C;
L_00628778:;
    v0 = 1;
L_0062877C:;
    s1 = 1;
    if (v0 != s1) { s1 = 2; goto L_00628794; }
    goto L_00628794;
L_00628790:;
    s1 = 1;
L_00628794:;
    v0 = s1;
L_00628798:;
    return v0;
}
