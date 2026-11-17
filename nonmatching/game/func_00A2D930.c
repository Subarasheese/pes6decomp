/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00AB4460(s32);

s32 func_00A2D930(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;

    v0 = 1;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (*(volatile u16 *) (u32) (v1 + 132));
    { s32 c_ = v1 == v0; s0 = a0; if (c_) goto L_00A2DA58; }
L_00A2D950:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile u8 *) (u32) (v0 + 9958));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f2.f = (*(volatile f32 *) (u32) (v0 + 1148));
L_00A2D968:;
    a0 = (*(volatile s16 *) (u32) (s0 + 20));
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    f0.i = (s32) a0;
    v1 = v1 ^ 0x1;
    f0.f = (f32) f0.i;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    { s32 c_ = v0 == 0; f2.f = f2.f * f0.f; if (c_) goto L_00A2D9A0; }
    v0 = (s32) 0x44800000U;
    f0.i = (s32) v0;
    f2.f = f2.f - f0.f;
L_00A2D9A0:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) goto L_00A2D9C4;
    goto L_00A2D9C8;
L_00A2D9C4:;
    v0 = (s32) ((u32) 0 - (u32) v0);
L_00A2D9C8:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0xc6100000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_00A2DA20;
    v0 = (s32) 0x45a10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00A2DA14;
    v0 = 4; goto L_00A2DA18;
L_00A2DA14:;
    v0 = 3;
L_00A2DA18:;
    goto L_00A2DA84;
L_00A2DA20:;
    v0 = (s32) 0xc5800000U;
    f0.i = (s32) v0;
    fcc = f2.f < f0.f;
    if (fcc) goto L_00A2DA7C;
    f0.i = (s32) 0;
    fcc = f2.f < f0.f;
    { s32 c_ = fcc; v0 = 1; if (c_) goto L_00A2DA80; }
    v0 = 0;
    goto L_00A2DA80;
L_00A2DA58:;
    v0 = func_00AB4460(a0);
    at = v0 < 2;
    if (at != 0) goto L_00A2D950;
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7964));
    f2.f = (f32) f0.i; goto L_00A2D968;
L_00A2DA7C:;
    v0 = 2;
L_00A2DA80:;
L_00A2DA84:;
    return v0;
}
