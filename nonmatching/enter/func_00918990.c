/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s32, s32);
void func_001D7840(s32, s32);
void func_001D7D60(s32, s32);
s32 func_002F9630(s32);
s32 func_002F96F0(s32, s32);
s32 func_002F97E0(s32, s32, s32, s32);
s32 func_0035A3D0(s32);
s32 func_0035ECA0(s32, s32, s32, s32);

void func_00918990(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    a0 = 0;
    v0 = func_0035A3D0(a0);
    a1 = (s32) 0x930000U;
    a0 = v0;
    a1 = (s32) ((u32) a1 + 0xffff9e20U);
    a2 = 4; v0 = func_0035ECA0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -20020));
    v1 = (s32) ((u32) gp + 0xffffb1d0U);
    s1 = 0;
    s0 = 0;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
L_009189DC:;
    a0 = 10; v0 = func_002F97E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -20020));
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = (s32) ((u32) gp + 0xffffb1d0U);
    at = s1 < 2;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u32 *) (u32) (v1 + 8)) = (u32) v0;
    { s32 c_ = at != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_009189DC; }
    a0 = 8; v0 = func_002F97E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -20020));
    v1 = (s32) ((u32) gp + 0xffffb1d0U);
    s0 = 0;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (v1 + 4)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
L_00918A38:;
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s0; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 3; func_001D7840(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 4;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20020)); goto L_00918A38; }
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_00918AD8; }
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
L_00918A9C:;
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 1; func_001D7D60(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20020)); goto L_00918A9C; }
L_00918AD8:;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_00918B40; }
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
L_00918B04:;
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 0; func_001D76B0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < s0;
    if (v1 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20020)); goto L_00918B04; }
L_00918B40:;
    return;
}
