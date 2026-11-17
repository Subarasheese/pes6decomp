/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0023DF20(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0x590000U;
    a2 = (*(volatile u8 *) (u32) (v1 + 7177));
    if (a2 == 0) { at = (u64) a0 < (u64) (s64) 9; goto L_0023DF4C; }
    v1 = 7;
    if (a2 == v1) goto L_0023DF48;
    v1 = 5;
    if (a2 != v1) goto L_0023E084;
L_0023DF48:;
    at = (u64) a0 < (u64) (s64) 9;
L_0023DF4C:;
    if (at == 0) goto L_0023E084;
    v1 = (s32) ((u32) a0 << 2);
    a0 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) a0 + 0xffff89a0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x23df70U) goto L_0023DF70; if (t_ == 0x23df8cU) goto L_0023DF8C; if (t_ == 0x23dfacU) goto L_0023DFAC; if (t_ == 0x23dfccU) goto L_0023DFCC; if (t_ == 0x23dfecU) goto L_0023DFEC; if (t_ == 0x23e00cU) goto L_0023E00C; if (t_ == 0x23e02cU) goto L_0023E02C; if (t_ == 0x23e04cU) goto L_0023E04C; if (t_ == 0x23e06cU) goto L_0023E06C; }
L_0023DF70:;
    a0 = a1 & 0x1;
    v1 = -2;
    a1 = (*(volatile u8 *) (u32) (gp + -22772));
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (gp + -22772)) = (u8) v1; goto L_0023E084;
L_0023DF8C:;
    v1 = a1 & 0x1;
    a1 = (*(volatile u8 *) (u32) (gp + -22772));
    a0 = (s32) ((u32) v1 << 1);
    v1 = -3;
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (gp + -22772)) = (u8) v1; goto L_0023E084;
L_0023DFAC:;
    v1 = a1 & 0x1;
    a1 = (*(volatile u8 *) (u32) (gp + -22772));
    a0 = (s32) ((u32) v1 << 2);
    v1 = -5;
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (gp + -22772)) = (u8) v1; goto L_0023E084;
L_0023DFCC:;
    v1 = a1 & 0x1;
    a1 = (*(volatile u8 *) (u32) (gp + -22772));
    a0 = (s32) ((u32) v1 << 3);
    v1 = -9;
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (gp + -22772)) = (u8) v1; goto L_0023E084;
L_0023DFEC:;
    v1 = a1 & 0x1;
    a1 = (*(volatile u8 *) (u32) (gp + -22772));
    a0 = (s32) ((u32) v1 << 4);
    v1 = -17;
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (gp + -22772)) = (u8) v1; goto L_0023E084;
L_0023E00C:;
    v1 = a1 & 0x1;
    a1 = (*(volatile u8 *) (u32) (gp + -22772));
    a0 = (s32) ((u32) v1 << 5);
    v1 = -33;
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (gp + -22772)) = (u8) v1; goto L_0023E084;
L_0023E02C:;
    v1 = a1 & 0x1;
    a1 = (*(volatile u8 *) (u32) (gp + -22772));
    a0 = (s32) ((u32) v1 << 6);
    v1 = -65;
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (gp + -22772)) = (u8) v1; goto L_0023E084;
L_0023E04C:;
    v1 = a1 & 0x1;
    a1 = (*(volatile u8 *) (u32) (gp + -22772));
    a0 = (s32) ((u32) v1 << 7);
    v1 = -129;
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (gp + -22772)) = (u8) v1; goto L_0023E084;
L_0023E06C:;
    a0 = a1 & 0x1;
    v1 = -2;
    a1 = (*(volatile u8 *) (u32) (gp + -22771));
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (gp + -22771)) = (u8) v1;
L_0023E084:;
    return v0;
}
