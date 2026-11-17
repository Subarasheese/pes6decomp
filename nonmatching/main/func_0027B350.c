/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0017F9A0(s32, s32, s32, s32, s32);

s32 func_0027B350(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v0 = 20;
    a2 = (*(volatile s8 *) (u32) (gp + -32260));
    v1 = (*(volatile s8 *) (u32) (gp + -32256));
    (*(volatile u32 *) (u32) (sp + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 20)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 28)) = (u32) a2;
    { s32 c_ = a1 == v0; (*(volatile u32 *) (u32) (sp + 32)) = (u32) v1; if (c_) goto L_0027B384; }
    v0 = (s32) ((u32) gp + 0xffffa950U); goto L_0027B3AC;
L_0027B384:;
    v0 = (s32) ((u32) gp + 0xffffa950U);
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) v0;
    v1 = (*(volatile u8 *) (u32) (a0 + 49));
    { s32 c_ = v1 >= 0; v0 = v1 & 0x3; if (c_) goto L_0027B3A4; }
    if (v0 == 0) goto L_0027B3A4;
    v0 = (s32) ((u32) v0 + 0xfffffffcU);
L_0027B3A4:;
    a1 = (s32) ((u32) v0 + 0x14U); goto L_0027B3B0;
L_0027B3AC:;
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) v0;
L_0027B3B0:;
    v0 = (*(volatile s32 *) (u32) (gp + -22188));
    v1 = (s32) ((u32) a1 << 2);
    a1 = (s32) 0x180000U;
    a2 = (s32) ((u32) sp + 0x2cU);
    a1 = (s32) ((u32) a1 + 0xffffe180U);
    a3 = 4;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a4 = (s32) ((u32) sp + 0x10U); v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    v0 = (*(volatile s32 *) (u32) (sp + 44));
    return v0;
}
