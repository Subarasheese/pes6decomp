/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002F9650(s32, s32, s32, s32);

void func_00918E50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    s2 = 0;
    s0 = 0;
L_00918E6C:;
    s1 = 1;
L_00918E70:;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = s1; func_002F9650(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 10;
    if (at != 0) goto L_00918E70;
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 2;
    { s32 c_ = at != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00918E6C; }
    s0 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
L_00918EBC:;
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = s0; func_002F9650(a0, a1, a2, a3);
    s0 = (s32) ((u32) s0 + 0x1U);
    at = s0 < 8;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20020)); goto L_00918EBC; }
    a2 = (*(volatile s32 *) (u32) (gp + -20020));
    a0 = 0 & 0x1;
    a1 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = -5;
    a0 = (s32) ((u32) a0 << 2);
    a2 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a2 = (*(volatile s32 *) (u32) a1);
    a1 = (*(volatile u8 *) (u32) (a2 + 44));
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (a2 + 44)) = (u8) v1;
    return;
}
