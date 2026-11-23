/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0020DDC0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 fcc = 0;
    s64 frame[2];
    s32 sp = (s32) (u32) frame;

    if (a0 == 0) goto L_0020DF18;
    v1 = (s32) ((u32) sp + 0xfU);
    if (v1 == 0) goto L_0020DEEC;
    f2.f = (*(volatile f32 *) (u32) (gp + -22916));
    v1 = (s32) 0x42700000U;
    f1.i = (s32) v1;
    fcc = f2.f <= f1.f;
    if (fcc) goto L_0020DE14;
    v1 = (s32) 0x42f00000U;
    f0.i = (s32) v1;
    f0.f = f0.f - f2.f;
    f2.f = f0.f / f1.f;
    goto L_0020DE20;
L_0020DE14:;
    f2.f = f2.f / f1.f;
L_0020DE20:;
    a1 = (s32) 0x3d0000U;
    v1 = (s32) 0x3d0000U;
    f3.f = (*(volatile f32 *) (u32) (a1 + 17092));
    f1.f = (*(volatile f32 *) (u32) (v1 + 17088));
    a1 = (s32) 0x4f000000U;
    f1.f = f1.f - f3.f;
    f1.f = f1.f * f2.f;
    f0.i = (s32) a1;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_0020DE60; }
    f0.i = (s32) f1.f;
    a2 = f0.i;
    a2 = a2 & 0xff; goto L_0020DE78;
L_0020DE60:;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a2 = f0.i;
    a2 = a2 | v1;
    a2 = a2 & 0xff;
L_0020DE78:;
    if (a2 < 0) { a1 = (s32) ((u32) a2 >> 1); goto L_0020DE8C; }
    f0.i = (s32) a2;
    f0.f = (f32) f0.i; goto L_0020DEA4;
L_0020DE8C:;
    v1 = a2 & 0x1;
    a1 = a1 | v1;
    f0.i = (s32) a1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_0020DEA4:;
    f1.f = f3.f + f0.f;
    v1 = (s32) 0x4f000000U;
    f0.i = (s32) v1;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_0020DED0; }
    f0.i = (s32) f1.f;
    a1 = f0.i;
    a1 = a1 & 0xff; goto L_0020DEE8;
L_0020DED0:;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a1 = a1 | v1;
    a1 = a1 & 0xff;
L_0020DEE8:;
    (*(volatile u8 *) (u32) (sp + 15)) = (u8) a1;
L_0020DEEC:;
    v1 = (s32) 0x3d0000U;
    a1 = (s32) 0x3d0000U;
    a2 = (*(volatile u8 *) (u32) (v1 + 17084));
    a1 = (*(volatile u8 *) (u32) (a1 + 17085));
    v1 = (s32) 0x3d0000U;
    (*(volatile u8 *) (u32) a0) = (u8) a2;
    v1 = (*(volatile u8 *) (u32) (v1 + 17086));
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) a1;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (sp + 15));
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) v1;
L_0020DF18:;
    return v0;
}
