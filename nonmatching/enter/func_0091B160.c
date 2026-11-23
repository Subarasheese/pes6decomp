/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s32, s32);
void func_001DF420(s32, s32);
void func_001ED8F0(s32, s32);
s32 func_002F9630(s32);
s32 func_002F96F0(s32, s32);

void func_0091B160(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) ((u32) gp + 0xffffb1e4U);
    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (gp + -20000));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile u8 *) (u32) (a0 + 40));
    v1 = v1 & 0x1;
    if (v1 == 0) goto L_0091B280;
    a0 = (*(volatile s32 *) (u32) a0); v0 = func_002F9630(a0);
    s1 = v0;
    { s32 c_ = s1 <= 0; s2 = 0; if (c_) goto L_0091B1F0; }
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
L_0091B1B4:;
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s2; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = s0 & 0xff; func_001D76B0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < s1;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20000)); goto L_0091B1B4; }
L_0091B1F0:;
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s1; goto L_0091B224; }
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s1;
L_0091B224:;
    a1 = s0 & 0xff; func_001ED8F0(a0, a1);
    s2 = 1;
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
L_0091B234:;
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    a1 = s2;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0091B260;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_0091B260:;
    a0 = s1;
    a1 = s0 & 0xff; func_001DF420(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 4;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20000)); goto L_0091B234; }
L_0091B280:;
    return;
}
