/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7F10(s32, s32, s32, s32);
s32 func_002F9630(s32);
void func_002F9650(s32, s32, s32, s32);
s32 func_002F96F0(s32, s32);
void func_002F97A0(s32, s32, s32, s32);

void func_0091B2A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) ((u32) gp + 0xffffb1e4U);
    a0 = (*(volatile s32 *) (u32) (gp + -20000));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == 0) { ; goto L_0091B464; }
    v1 = (*(volatile u8 *) (u32) (v1 + 40));
    v1 = v1 & 0x1;
    if (v1 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -20000)); goto L_0091B450; }
    s0 = 1;
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
L_0091B2E4:;
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = s0; func_002F9650(a0, a1, a2, a3);
    s0 = (s32) ((u32) s0 + 0x1U);
    at = s0 < 4;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20000)); goto L_0091B2E4; }
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 0; func_002F9650(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -20000));
    v1 = 0 & 0x1;
    a2 = (s32) ((u32) gp + 0xffffb1e4U);
    v0 = -3;
    v1 = (s32) ((u32) v1 << 1);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a2 + (u32) a0);
    a1 = (*(volatile s32 *) (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a1 + 40));
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (a1 + 40)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -20000));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a2 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); func_002F97A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -20000));
    v1 = (s32) ((u32) gp + 0xffffb1e4U);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (gp + -20000));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_0091B3F0; }
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
L_0091B3B8:;
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0; func_001D7F10(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20000)); goto L_0091B3B8; }
L_0091B3F0:;
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); func_002F97A0(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (gp + -20000));
    a2 = (s32) ((u32) gp + 0xffffb1e4U);
    v1 = -2;
    a0 = 0 & 0x1;
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a1 = (*(volatile s32 *) (u32) a1);
    (*(volatile u32 *) (u32) a1) = (u32) 0;
    a1 = (*(volatile s32 *) (u32) (gp + -20000));
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a2 = (*(volatile s32 *) (u32) a1);
    a1 = (*(volatile u8 *) (u32) (a2 + 40));
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (a2 + 40)) = (u8) v1;
    a0 = (*(volatile s32 *) (u32) (gp + -20000));
L_0091B450:;
    v1 = (s32) ((u32) gp + 0xffffb1e4U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
L_0091B464:;
    return;
}
