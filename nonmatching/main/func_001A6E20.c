/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B0400(s32);

s32 func_001A6E20(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v0 = (*(volatile u8 *) (u32) (a0 + 51));
    { s32 c_ = v0 == 0; s2 = a0; if (c_) goto L_001A6E7C; }
    { s32 c_ = v0 != 0; v1 = (*(volatile u8 *) (u32) (s2 + 49)); if (c_) goto L_001A6E4C; }
    v1 = 0;
L_001A6E4C:;
    a0 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) v0 << 4);
    a0 = (s32) ((u32) a0 + 0x230U);
    v0 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (*(volatile u16 *) (u32) (s2 + 64));
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v1 + (u32) v0); v0 = func_001B0400(a0);
L_001A6E74:;
    goto L_001A6ED4;
L_001A6E7C:;
    s1 = 0;
    s0 = 0;
L_001A6E84:;
    v0 = (s32) 0x3b0000U;
    a1 = (*(volatile u8 *) (u32) (s2 + 49));
    a0 = (*(volatile s32 *) (u32) (v0 + 616));
    v1 = (s32) ((u32) a1 << 1);
    v0 = (s32) ((u32) s2 + (u32) s1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (*(volatile u8 *) (u32) (v0 + 68));
    a1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_001B0400(a0);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 6;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_001A6E84; }
    goto L_001A6E74;
L_001A6ED4:;
    return v0;
}
