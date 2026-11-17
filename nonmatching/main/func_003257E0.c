/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00223EB0(s32, s32, s32, s32);
s32 func_00311A50(s32, s32, s32);

s32 func_003257E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    a0 = (s32) ((u32) sp + 0x4fU);
    a1 = (s32) ((u32) sp + 0x4eU);
    v0 = func_00311A50(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (sp + 78));
    a2 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (sp + 79));
    a2 = (s32) ((u32) a2 + 0x2980U);
    v1 = 0;
    a0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) v0 << 10);
    a5 = (s32) ((u32) s1 + (u32) a0);
    a0 = (s32) ((u32) v0 << 4);
    a6 = a5;
    a4 = (s32) ((u32) a0 - (u32) v0);
    a3 = (s32) ((u32) a4 << 3);
    a0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a3 = (s32) ((u32) a3 - (u32) a4);
    a1 = (s32) ((u32) a3 << 8);
    a0 = (s32) ((u32) a0 << 3);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a1 = (*(volatile u16 *) (u32) (a0 + 70));
L_0032585C:;
    a0 = (*(volatile u16 *) (u32) (a6 + 200));
    if (a0 != a1) { v1 = (s32) ((u32) v1 + 0x1U); goto L_00325888; }
    if (a1 == 0) goto L_00325884;
    v1 = (s32) ((u32) v1 << 5);
    a0 = 1;
    v1 = (s32) ((u32) a5 + (u32) v1);
    s0 = (s32) ((u32) v1 + 0xc8U); goto L_00325898;
L_00325884:;
    v1 = (s32) ((u32) v1 + 0x1U);
L_00325888:;
    a0 = v1 < 32;
    { s32 c_ = a0 != 0; a6 = (s32) ((u32) a6 + 0x20U); if (c_) goto L_0032585C; }
    a0 = 0;
L_00325898:;
    if (a0 == 0) { (*(volatile u32 *) (u32) s2) = (u32) 0; goto L_003258D4; }
    a0 = (*(volatile s32 *) (u32) (gp + -31680));
    { s32 c_ = v0 >= 0; v1 = v0 & 0x1; if (c_) goto L_003258B8; }
    if (v1 == 0) { v0 = (s32) ((u32) v1 + (u32) a0); goto L_003258BC; }
    v1 = (s32) ((u32) v1 + 0xfffffffeU);
L_003258B8:;
    v0 = (s32) ((u32) v1 + (u32) a0);
L_003258BC:;
    a0 = (*(volatile u8 *) (u32) (v0 + 44));
    a1 = (*(volatile u16 *) (u32) s0);
    a2 = (*(volatile u8 *) (u32) (s1 + 44)); v0 = func_00223EB0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    (*(volatile u32 *) (u32) s2) = (u32) v0;
L_003258D4:;
    v0 = 1;
    return v0;
}
