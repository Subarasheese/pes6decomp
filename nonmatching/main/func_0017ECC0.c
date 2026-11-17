/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0017F390(s32, s32);

s32 func_0017ECC0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    v1 = 1;
    if (a1 == v1) goto L_0017ED10;
    (*(volatile u32 *) (u32) (a0 + 92)) = (u32) 0;
    a3 = (*(volatile u8 *) (u32) (a0 + 132));
    if (a3 == a1) goto L_0017EDB8;
    v0 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = v0 == 0; a2 = (*(volatile s32 *) (u32) (a0 + 4)); if (c_) goto L_0017ED50; }
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) a2;
L_0017ECF0:;
    if (a2 == 0) goto L_0017ED68;
    v0 = (*(volatile s32 *) (u32) a0);
    (*(volatile u32 *) (u32) a2) = (u32) v0;
L_0017ED00:;
    (*(volatile u8 *) (u32) (a0 + 132)) = (u8) a1; v0 = func_0017F390(a0, a1);
    goto L_0017EDBC;
L_0017ED10:;
    (*(volatile u32 *) (u32) (a0 + 92)) = (u32) a2;
    a3 = (*(volatile u8 *) (u32) (a0 + 132));
    if (a3 == a1) goto L_0017EDB8;
    v0 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = v0 == 0; a2 = (*(volatile s32 *) (u32) (a0 + 4)); if (c_) goto L_0017ED84; }
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) a2;
L_0017ED30:;
    if (a2 == 0) goto L_0017ED9C;
    v0 = (*(volatile s32 *) (u32) a0);
    (*(volatile u32 *) (u32) a2) = (u32) v0;
L_0017ED40:;
    (*(volatile u8 *) (u32) (a0 + 132)) = (u8) a1; v0 = func_0017F390(a0, a1);
    goto L_0017EDB8;
L_0017ED50:;
    v0 = (s32) 0x520000U;
    v1 = (s32) ((u32) a3 << 3);
    v0 = (s32) ((u32) v0 + 0xffff9e20U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) a2; goto L_0017ECF0;
L_0017ED68:;
    a2 = (*(volatile s32 *) (u32) a0);
    v0 = (s32) 0x520000U;
    v1 = (s32) ((u32) a3 << 3);
    v0 = (s32) ((u32) v0 + 0xffff9e24U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) a2; goto L_0017ED00;
L_0017ED84:;
    v0 = (s32) 0x520000U;
    v1 = (s32) ((u32) a3 << 3);
    v0 = (s32) ((u32) v0 + 0xffff9e20U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) a2; goto L_0017ED30;
L_0017ED9C:;
    a2 = (*(volatile s32 *) (u32) a0);
    v0 = (s32) 0x520000U;
    v1 = (s32) ((u32) a3 << 3);
    v0 = (s32) ((u32) v0 + 0xffff9e24U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) a2; goto L_0017ED40;
L_0017EDB8:;
L_0017EDBC:;
    return v0;
}
