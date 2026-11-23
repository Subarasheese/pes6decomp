/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021E4B0(s32, s32, s32);

s32 func_00928080(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, a3 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    a0 = (*(volatile s32 *) (u32) (gp + -19836));
    v1 = (s32) ((u32) v1 + 0xfffff798U);
    a2 = (s32) ((u32) a0 << 9);
    v1 = (s32) ((u32) v1 + (u32) a2);
    a1 = (*(volatile s32 *) (u32) v1);
    v1 = a1 < 32;
    { s32 c_ = v1 == 0; v0 = (s32) ((u32) v0 + 0xffffee90U); if (c_) goto L_009280D8; }
    a0 = (s32) 0x930000U;
    v1 = (s32) ((u32) a1 << 1);
    a0 = (s32) ((u32) a0 + 0xfffff7a8U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = v1 < 0;
    v1 = v1 ^ 0x1;
L_009280D8:;
    if (v1 == 0) { ; goto L_00928114; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) a1 << 1);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xfffff7a8U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = 0;
    a0 = (*(volatile u16 *) (u32) v0);
    a2 = 0;
    a3 = 0; v0 = func_0021E4B0(a0, a1, a2);
L_00928114:;
    return v0;
}
