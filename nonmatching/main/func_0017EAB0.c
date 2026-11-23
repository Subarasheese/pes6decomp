/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0017F390(s32, s32);

void func_0017EAB0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v1 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v1 + -25040));
    if (a0 == 0) goto L_0017EB40;
L_0017EACC:;
    a2 = (*(volatile u8 *) (u32) (a0 + 132));
    a1 = 1;
    { s32 c_ = a2 == a1; s0 = (*(volatile s32 *) (u32) (a0 + 4)); if (c_) goto L_0017EAF8; }
    v1 = 2;
    if (a2 == v1) goto L_0017EAF0;
    goto L_0017EB38;
L_0017EAF0:;
    (*(volatile u8 *) (u32) (a0 + 133)) = (u8) a1; goto L_0017EB38;
L_0017EAF8:;
    (*(volatile u32 *) (u32) (a0 + 92)) = (u32) 0;
    a2 = (*(volatile u8 *) (u32) (a0 + 132));
    if (a2 == 0) goto L_0017EB38;
    v0 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = v0 == 0; a1 = (*(volatile s32 *) (u32) (a0 + 4)); if (c_) goto L_0017EBD0; }
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) a1;
L_0017EB18:;
    if (a1 == 0) goto L_0017EBE8;
    v0 = (*(volatile s32 *) (u32) a0);
    (*(volatile u32 *) (u32) a1) = (u32) v0;
L_0017EB28:;
    (*(volatile u8 *) (u32) (a0 + 132)) = (u8) 0;
    a1 = 0; func_0017F390(a0, a1);
L_0017EB38:;
    { s32 c_ = s0 != 0; a0 = s0; if (c_) goto L_0017EACC; }
L_0017EB40:;
    v1 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v1 + -25048));
    if (a0 == 0) goto L_0017EBC8;
L_0017EB50:;
    a2 = (*(volatile u8 *) (u32) (a0 + 132));
    a1 = 1;
    { s32 c_ = a2 == a1; s0 = (*(volatile s32 *) (u32) (a0 + 4)); if (c_) goto L_0017EB80; }
    v1 = 2;
    if (a2 == v1) goto L_0017EB78;
    goto L_0017EBC0;
L_0017EB78:;
    (*(volatile u8 *) (u32) (a0 + 133)) = (u8) a1; goto L_0017EBC0;
L_0017EB80:;
    (*(volatile u32 *) (u32) (a0 + 92)) = (u32) 0;
    a2 = (*(volatile u8 *) (u32) (a0 + 132));
    if (a2 == 0) goto L_0017EBC0;
    v0 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = v0 == 0; a1 = (*(volatile s32 *) (u32) (a0 + 4)); if (c_) goto L_0017EC08; }
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) a1;
L_0017EBA0:;
    if (a1 == 0) goto L_0017EC20;
    v0 = (*(volatile s32 *) (u32) a0);
    (*(volatile u32 *) (u32) a1) = (u32) v0;
L_0017EBB0:;
    (*(volatile u8 *) (u32) (a0 + 132)) = (u8) 0;
    a1 = 0; func_0017F390(a0, a1);
L_0017EBC0:;
    { s32 c_ = s0 != 0; a0 = s0; if (c_) goto L_0017EB50; }
L_0017EBC8:;
    goto L_0017EC40;
L_0017EBD0:;
    v0 = (s32) 0x520000U;
    v1 = (s32) ((u32) a2 << 3);
    v0 = (s32) ((u32) v0 + 0xffff9e20U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) a1; goto L_0017EB18;
L_0017EBE8:;
    a1 = (*(volatile s32 *) (u32) a0);
    v0 = (s32) 0x520000U;
    v1 = (s32) ((u32) a2 << 3);
    v0 = (s32) ((u32) v0 + 0xffff9e20U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) a1; goto L_0017EB28;
L_0017EC08:;
    v0 = (s32) 0x520000U;
    v1 = (s32) ((u32) a2 << 3);
    v0 = (s32) ((u32) v0 + 0xffff9e20U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) a1; goto L_0017EBA0;
L_0017EC20:;
    a1 = (*(volatile s32 *) (u32) a0);
    v0 = (s32) 0x520000U;
    v1 = (s32) ((u32) a2 << 3);
    v0 = (s32) ((u32) v0 + 0xffff9e20U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) a1; goto L_0017EBB0;
L_0017EC40:;
    return;
}
