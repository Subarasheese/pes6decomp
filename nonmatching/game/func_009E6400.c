/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00207390(s32, s32);
s32 func_00AFBA70(s32);
s32 func_00BC03A0(s32, s32, s32, s32);

void func_009E6400(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    s0 = a0;
    a0 = (*(volatile u8 *) (u32) a0); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_009E6440; }
    a0 = (*(volatile u8 *) (u32) s0); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_009E6440:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile u16 *) (u32) (v0 + 48)); v0 = func_00BC03A0(a0, a1, a2, a3);
    v1 = 63;
    if (v0 == v1) { a1 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_009E6528; }
    v1 = 64;
    if (v0 == v1) { a1 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_009E64CC; }
    v1 = 65;
    if (v0 == v1) { a1 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_009E6490; }
    goto L_009E6568;
L_009E6490:;
    a0 = (*(volatile s32 *) (u32) (a1 + 4));
    f1.f = (*(volatile f32 *) (u32) (a1 + 56));
    a0 = (*(volatile u8 *) (u32) (a0 + 3));
    a0 = (s32) ((u32) a0 << 1);
    f0.i = (s32) a0;
    f0.f = (f32) f0.i;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; v1 = (s32) ((u32) a1 + 0x38U); if (c_) goto L_009E6570; }
    a0 = 54;
L_009E64BC:;
    v1 = 23;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) a0;
    (*(volatile u16 *) (u32) (s0 + 24)) = (u16) v1; goto L_009E6560;
L_009E64CC:;
    a0 = (*(volatile s32 *) (u32) (a1 + 4));
    f1.f = (*(volatile f32 *) (u32) (a1 + 56));
    a0 = (*(volatile u8 *) (u32) (a0 + 3));
    a0 = (s32) ((u32) a0 << 1);
    f0.i = (s32) a0;
    f0.f = (f32) f0.i;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; v1 = (s32) ((u32) a1 + 0x38U); if (c_) goto L_009E6588; }
    a2 = (*(volatile s32 *) (u32) (gp + -32420));
L_009E64F8:;
    v1 = (s32) 0x3f4c0000U;
    v1 = v1 | 0xcccd;
    a1 = (*(volatile s32 *) (u32) (s0 + 4));
    f1.i = (s32) v1;
    a0 = 54;
    v1 = 20;
    f0.f = (*(volatile f32 *) (u32) a2);
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (a1 + 40)) = f0.f;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) a0;
    (*(volatile u16 *) (u32) (s0 + 24)) = (u16) v1; goto L_009E6560;
L_009E6528:;
    a0 = (*(volatile s32 *) (u32) (a1 + 4));
    f1.f = (*(volatile f32 *) (u32) (a1 + 56));
    a0 = (*(volatile u8 *) (u32) (a0 + 3));
    a0 = (s32) ((u32) a0 << 1);
    f0.i = (s32) a0;
    f0.f = (f32) f0.i;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; v1 = (s32) ((u32) a1 + 0x38U); if (c_) goto L_009E65A0; }
    a0 = 54;
L_009E6554:;
    v1 = 22;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) a0;
    (*(volatile u16 *) (u32) (s0 + 24)) = (u16) v1;
L_009E6560:;
    goto L_009E65BC;
L_009E6568:;
    goto L_009E65B8;
L_009E6570:;
    (*(volatile f32 *) (u32) v1) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = 8; func_00207390(a0, a1);
    a0 = 54; goto L_009E64BC;
L_009E6588:;
    (*(volatile f32 *) (u32) v1) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = 4; func_00207390(a0, a1);
    a2 = (*(volatile s32 *) (u32) (gp + -32420)); goto L_009E64F8;
L_009E65A0:;
    (*(volatile f32 *) (u32) v1) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = 8; func_00207390(a0, a1);
    a0 = 54; goto L_009E6554;
L_009E65B8:;
L_009E65BC:;
    return;
}
