/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0017F9A0(s32, s32, s32, s32, s32);

s32 func_001A6D50(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) ((u32) gp + 0xffffa544U);
    v1 = 20;
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) v0;
    v0 = (s32) 0x3b0000U;
    a1 = (*(volatile s32 *) (u32) (v0 + 612));
    v0 = (s32) ((u32) sp + 0x10U);
L_001A6D70:;
    (*(volatile u8 *) (u32) v0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xfffffffbU);
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) 0;
    (*(volatile u8 *) (u32) (v0 + 2)) = (u8) 0;
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) 0;
    (*(volatile u8 *) (u32) (v0 + 4)) = (u8) 0;
    { s32 c_ = v1 > 0; v0 = (s32) ((u32) v0 + 0x5U); if (c_) goto L_001A6D70; }
    v0 = a0 & 0xff;
    v1 = 1;
    a0 = a1;
    (*(volatile u32 *) (u32) (sp + 16)) = (u32) v1;
    a1 = (s32) 0x1a0000U;
    (*(volatile u32 *) (u32) (sp + 28)) = (u32) v0;
    a1 = (s32) ((u32) a1 + 0x6dd0U);
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) v0;
    a2 = (s32) ((u32) sp + 0x2cU);
    a3 = 4;
    a4 = (s32) ((u32) sp + 0x10U); v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    return v0;
}
