/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s32, s32);
void func_001DF420(s32, s32);
void func_001ED8F0(s32, s32);
s32 func_002F9630(s32);
s32 func_002F96F0(s32, s32);
void func_0091C180(s32);

s32 func_0091BA40(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    a0 = 1;
    func_0091C180(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 40));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_0091BB60;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_0091BAD0; }
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
L_0091BA94:;
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 255; func_001D76B0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20000)); goto L_0091BA94; }
L_0091BAD0:;
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_0091BB04; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_0091BB04:;
    a1 = 255; func_001ED8F0(a0, a1);
    s1 = 1;
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
L_0091BB14:;
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    a1 = s1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0091BB40;
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
L_0091BB40:;
    a0 = s0;
    a1 = 255; func_001DF420(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 4;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20000)); goto L_0091BB14; }
L_0091BB60:;
    v0 = 1;
    return v0;
}
