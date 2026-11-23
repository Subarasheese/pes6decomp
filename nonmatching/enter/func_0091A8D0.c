/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DF420(s32, s32);
void func_001DF4F0(s32, s32);
s32 func_002F96F0(s32, s32);
void func_002FA790(s32, s32, s32, s32);

void func_0091A8D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a1 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v1 + 20));
    a0 = (*(volatile s32 *) (u32) v1);
    s0 = (s32) ((u32) v0 << 3); v0 = func_002F96F0(a0, a1);
    a2 = (*(volatile s32 *) (u32) (gp + -20008));
    a1 = v0;
    v0 = (s32) 0x930000U;
    a0 = (s32) ((u32) gp + 0xffffb1dcU);
    v0 = (s32) ((u32) v0 + 0xffffe800U);
    a2 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) v0 + (u32) s0);
    a0 = (s32) ((u32) a0 + (u32) a2);
    v0 = (s32) 0x930000U;
    a2 = (*(volatile s32 *) (u32) v1);
    v0 = (s32) ((u32) v0 + 0xffffe804U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) a0);
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a3 = (*(volatile s32 *) (u32) v0); func_002FA790(a0, a1, a2, a3);
    s1 = 1;
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
L_0091A950:;
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a1 = s1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0091A980;
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
L_0091A980:;
    a0 = s0;
    a1 = 0; func_001DF4F0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 11;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20008)); goto L_0091A950; }
    s1 = 1;
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
L_0091A9A4:;
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a1 = s1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0091A9D0;
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
L_0091A9D0:;
    a0 = s0;
    a1 = 0; func_001DF420(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 11;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20008)); goto L_0091A9A4; }
    s1 = 1;
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
L_0091A9F4:;
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    a1 = s1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0091AA20;
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
L_0091AA20:;
    a0 = s0;
    a1 = 0; func_001DF420(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 11;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20008)); goto L_0091A9F4; }
    return;
}
