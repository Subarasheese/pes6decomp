/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00927B50(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff798U);
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
    s0 = (s32) 0x930000U;
    a2 = (s32) ((u32) v1 << 9);
    v0 = (s32) ((u32) v0 + (u32) a2);
    a1 = (*(volatile s32 *) (u32) v0);
    v0 = a1 < 32;
    { s32 c_ = v0 == 0; s0 = (s32) ((u32) s0 + 0xffffee90U); if (c_) goto L_00927BAC; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + 0xfffff7a8U);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = v0 < 0;
    v0 = v0 ^ 0x1;
L_00927BAC:;
    if (v0 == 0) { v0 = s0; goto L_00927BF8; }
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + 0xfffff720U);
    v0 = (s32) ((u32) v0 + 0xfffff7a4U);
    a0 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) ((u32) v0 + (u32) a2);
    s0 = (s32) ((u32) a0 + 0x40U);
    v0 = (s32) ((u32) a1 << 1);
    a0 = s0;
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 2);
    a1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) a1 + 0xffffee98U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = s0;
L_00927BF8:;
    return v0;
}
