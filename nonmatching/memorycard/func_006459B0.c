/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002E8BD0(void);
s32 func_0063B780(s32, s32, s32);
s32 func_0063CFA0(void);
s32 func_00645BA0(void);
s32 func_00646C60(s32, s32, s32, s32, s32, s32, s32, s32);
void memset(s32, s32, s32);

s32 func_006459B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s32 *) (u32) (gp + -20924));
    v0 = 3;
    { s32 c_ = v1 == v0; s0 = 0; if (c_) goto L_00645B7C; }
    v0 = 2;
    if (v1 == v0) goto L_00645B30;
    v0 = 1;
    if (v1 == v0) goto L_00645AE4;
    a0 = (s32) 0x660000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffde00U);
    a2 = 28; memset(a0, a1, a2);
    v1 = 4;
    v0 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (v0 + -8697)) = (u8) v1;
    a0 = 1;
    v1 = (s32) 0x660000U;
    v0 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (v1 + -8693)) = (u8) a0;
    a2 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (v0 + -8694)) = (u8) a0;
    v1 = (s32) 0x660000U;
    v0 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (v1 + -8691)) = (u8) a0;
    (*(volatile u8 *) (u32) (v0 + -8692)) = (u8) a0;
    v1 = (s32) 0x660000U;
    v0 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (v1 + -8688)) = (u8) 0;
    (*(volatile u8 *) (u32) (v0 + -8690)) = (u8) a0;
    v1 = (s32) 0x660000U;
    a4 = (*(volatile s32 *) (u32) (v1 + -4248));
    v0 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (v0 + -8687)) = (u8) 0;
    a1 = (s32) 0x660000U;
    v0 = (s32) 0x660000U;
    a3 = 1024;
    (*(volatile u32 *) (u32) (v0 + -24968)) = (u32) a4;
    a0 = (s32) 0x660000U;
    v1 = (s32) 0x660000U;
    v0 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (a2 + -25128)) = (u32) a4;
    (*(volatile u32 *) (u32) (a1 + -24936)) = (u32) a4;
    (*(volatile u32 *) (u32) (a0 + -24964)) = (u32) a3;
    (*(volatile u32 *) (u32) (v1 + -25124)) = (u32) a3;
    (*(volatile u32 *) (u32) (v0 + -24932)) = (u32) a3;
    (*(volatile u16 *) (u32) (gp + -20926)) = (u16) 0;
    (*(volatile u16 *) (u32) (gp + -20928)) = (u16) 0; v0 = func_0063CFA0();
    v1 = (s32) 0x660000U;
    a0 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -25032)) = (u32) v0;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (a0 + -25064)) = (u32) v0;
    (*(volatile u32 *) (u32) (v1 + -24872)) = (u32) v0; v0 = func_002E8BD0();
    v1 = 66;
    if (v0 != v1) { a0 = (s32) ((u32) gp + 0xffffae40U); goto L_00645ACC; }
    a0 = (s32) ((u32) gp + 0xffffae40U);
    a1 = 15;
    a2 = 4; v0 = func_0063B780(a0, a1, a2);
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -20924)) = (u32) v0; goto L_00645B84;
L_00645ACC:;
    a1 = 15;
    a2 = 3; v0 = func_0063B780(a0, a1, a2);
    v0 = 2;
    (*(volatile u32 *) (u32) (gp + -20924)) = (u32) v0; goto L_00645B84;
L_00645AE4:;
    v0 = func_00646C60(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 2;
    if (v0 == v1) { v0 = 3; goto L_00645B24; }
    v1 = 1;
    if (v0 == v1) { v1 = 6; goto L_00645B14; }
    if (v0 == 0) { v0 = s0; goto L_00645B88; }
    goto L_00645B84;
L_00645B14:;
    v0 = 3;
    (*(volatile u32 *) (u32) (gp + -21836)) = (u32) v1;
    (*(volatile u32 *) (u32) (gp + -20924)) = (u32) v0; goto L_00645B84;
L_00645B24:;
    (*(volatile u32 *) (u32) (gp + -21836)) = (u32) v0;
    (*(volatile u32 *) (u32) (gp + -20924)) = (u32) v0; goto L_00645B84;
L_00645B30:;
    v0 = func_00645BA0();
    v1 = 2;
    if (v0 == v1) { v0 = 3; goto L_00645B70; }
    v1 = 1;
    if (v0 == v1) { v1 = 6; goto L_00645B60; }
    if (v0 == 0) goto L_00645B84;
    goto L_00645B84;
L_00645B60:;
    v0 = 3;
    (*(volatile u32 *) (u32) (gp + -21836)) = (u32) v1;
    (*(volatile u32 *) (u32) (gp + -20924)) = (u32) v0; goto L_00645B84;
L_00645B70:;
    (*(volatile u32 *) (u32) (gp + -21836)) = (u32) v0;
    (*(volatile u32 *) (u32) (gp + -20924)) = (u32) v0; goto L_00645B84;
L_00645B7C:;
    (*(volatile u32 *) (u32) (gp + -20924)) = (u32) 0;
    s0 = 1;
L_00645B84:;
    v0 = s0;
L_00645B88:;
    return v0;
}
