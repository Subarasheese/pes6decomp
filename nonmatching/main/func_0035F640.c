/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7F10(s32, s32, s32, s32);
s32 func_002F9630(s32);
void func_002F9650(s32, s32, s32, s32);
s32 func_002F96F0(s32, s32);
void func_002F97A0(s32, s32, s32, s32);

void func_0035F640(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) ((u32) gp + 0xffffac5cU);
    a0 = (*(volatile s32 *) (u32) (gp + -21416));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v1 + 32));
    v1 = v1 & 0x1;
    if (v1 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -21416)); goto L_0035F7E8; }
    s0 = 1;
    v1 = (*(volatile s32 *) (u32) (gp + -21416));
L_0035F67C:;
    v0 = (s32) ((u32) gp + 0xffffac5cU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = s0; func_002F9650(a0, a1, a2, a3);
    s0 = (s32) ((u32) s0 + 0x1U);
    at = s0 < 5;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -21416)); goto L_0035F67C; }
    v1 = (*(volatile s32 *) (u32) (gp + -21416));
    v0 = (s32) ((u32) gp + 0xffffac5cU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 0; func_002F9650(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -21416));
    v1 = 0 & 0x1;
    a2 = (s32) ((u32) gp + 0xffffac5cU);
    v0 = -3;
    v1 = (s32) ((u32) v1 << 1);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a2 + (u32) a0);
    a1 = (*(volatile s32 *) (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a1 + 32));
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (a1 + 32)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -21416));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a2 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); func_002F97A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -21416));
    v1 = (s32) ((u32) gp + 0xffffac5cU);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (gp + -21416));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_0035F788; }
    v1 = (*(volatile s32 *) (u32) (gp + -21416));
L_0035F750:;
    v0 = (s32) ((u32) gp + 0xffffac5cU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0; func_001D7F10(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -21416)); goto L_0035F750; }
L_0035F788:;
    v1 = (*(volatile s32 *) (u32) (gp + -21416));
    v0 = (s32) ((u32) gp + 0xffffac5cU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); func_002F97A0(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (gp + -21416));
    a2 = (s32) ((u32) gp + 0xffffac5cU);
    v1 = -2;
    a0 = 0 & 0x1;
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a1 = (*(volatile s32 *) (u32) a1);
    (*(volatile u32 *) (u32) a1) = (u32) 0;
    a1 = (*(volatile s32 *) (u32) (gp + -21416));
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a2 = (*(volatile s32 *) (u32) a1);
    a1 = (*(volatile u8 *) (u32) (a2 + 32));
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (a2 + 32)) = (u8) v1;
    a0 = (*(volatile s32 *) (u32) (gp + -21416));
L_0035F7E8:;
    v1 = (s32) ((u32) gp + 0xffffac5cU);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    return;
}
