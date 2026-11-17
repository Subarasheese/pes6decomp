/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7F10(s32, s32, s32, s32);
s32 func_002F9630(s32);
void func_002F9650(s32, s32, s32, s32);
s32 func_002F96F0(s32, s32);
void func_002F97A0(s32, s32, s32, s32);

void func_00C77200(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s32 *) (u32) (gp + -19256));
    { s32 c_ = v1 == 0; (*(volatile u32 *) (u32) (gp + -19260)) = (u32) 0; if (c_) goto L_00C77388; }
    v1 = (s32) 0xcd0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -16772));
    v1 = v1 & 0x1;
    if (v1 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -19260)); goto L_00C77378; }
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -16876)); func_002F97A0(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (gp + -19260));
    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + 0xffffbe14U);
    v0 = (s32) ((u32) v0 + 0xffffbe10U);
    a0 = (s32) ((u32) a1 << 5);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_00C772C0; }
    a0 = (*(volatile s32 *) (u32) (gp + -19260));
L_00C77280:;
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe10U);
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0; func_001D7F10(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (gp + -19260)); goto L_00C77280; }
L_00C772C0:;
    a0 = (*(volatile s32 *) (u32) (gp + -19260));
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe10U);
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_002F97A0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -19260));
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe10U);
    s0 = 0;
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (gp + -19260));
L_00C7730C:;
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe10U);
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = s0; func_002F9650(a0, a1, a2, a3);
    s0 = (s32) ((u32) s0 + 0x1U);
    at = s0 < 2;
    if (at != 0) { a0 = (*(volatile s32 *) (u32) (gp + -19260)); goto L_00C7730C; }
    a3 = (*(volatile s32 *) (u32) (gp + -19260));
    a1 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) a1 + 0xffffbe10U);
    v1 = -2;
    a0 = 0 & 0x1;
    a2 = (s32) ((u32) a3 << 5);
    a2 = (s32) ((u32) a2 - (u32) a3);
    a2 = (s32) ((u32) a2 << 2);
    a2 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile u8 *) (u32) (a2 + 108));
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (a2 + 108)) = (u8) v1;
    a0 = (*(volatile s32 *) (u32) (gp + -19260));
L_00C77378:;
    v1 = (s32) ((u32) gp + 0xffffb4c8U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
L_00C77388:;
    return;
}
