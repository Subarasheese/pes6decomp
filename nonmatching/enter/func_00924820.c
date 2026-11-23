/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7F10(s32, s32, s32, s32);
s32 func_002F9630(s32);
void func_002F9650(s32, s32, s32, s32);
s32 func_002F96F0(s32, s32);
void func_002F97A0(s32, s32, s32, s32);

void func_00924820(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) ((u32) gp + 0xffffb280U);
    a0 = (*(volatile s32 *) (u32) (gp + -19844));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == 0) { ; goto L_00924994; }
    v1 = (*(volatile u8 *) (u32) (v1 + 40));
    v1 = v1 & 0x1;
    if (v1 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -19844)); goto L_00924980; }
    s0 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
L_00924864:;
    v0 = (s32) ((u32) gp + 0xffffb280U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = s0; func_002F9650(a0, a1, a2, a3);
    s0 = (s32) ((u32) s0 + 0x1U);
    at = s0 < 6;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19844)); goto L_00924864; }
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
    v0 = (s32) ((u32) gp + 0xffffb280U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); func_002F97A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -19844));
    v1 = (s32) ((u32) gp + 0xffffb280U);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (gp + -19844));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_00924920; }
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
L_009248EC:;
    v0 = (s32) ((u32) gp + 0xffffb280U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0; func_001D7F10(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19844)); goto L_009248EC; }
L_00924920:;
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
    v0 = (s32) ((u32) gp + 0xffffb280U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); func_002F97A0(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (gp + -19844));
    a2 = (s32) ((u32) gp + 0xffffb280U);
    v1 = -2;
    a0 = 0 & 0x1;
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a1 = (*(volatile s32 *) (u32) a1);
    (*(volatile u32 *) (u32) a1) = (u32) 0;
    a1 = (*(volatile s32 *) (u32) (gp + -19844));
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a2 = (*(volatile s32 *) (u32) a1);
    a1 = (*(volatile u8 *) (u32) (a2 + 40));
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (a2 + 40)) = (u8) v1;
    a0 = (*(volatile s32 *) (u32) (gp + -19844));
L_00924980:;
    v1 = (s32) ((u32) gp + 0xffffb280U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
L_00924994:;
    return;
}
