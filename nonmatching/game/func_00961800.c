/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00960F90(s32, s32, s32, s32, s32, f32);
s32 func_00990750(s32, s32, f32, f32);
s32 func_00BBB8C0(s32);

void func_00961800(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x5372U);
    v1 = (*(volatile u8 *) (u32) (a0 + 19));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    { s32 c_ = v0 != 0; s0 = a0; if (c_) goto L_009618F8; }
    f0.f = (*(volatile f32 *) (u32) (s0 + 232));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45a10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_009618F8;
    a0 = 3; v0 = func_00BBB8C0(a0);
    if (v0 != 0) goto L_009618F8;
    v1 = (*(volatile s16 *) (u32) (s0 + 20));
    v0 = (s32) 0x463c0000U;
    v0 = v0 | 0x6400;
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    f0.i = (s32) v0;
    a1 = 2344;
    f13.i = (s32) 0;
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    f12.f = f0.f * f1.f; v0 = func_00990750(a0, a1, f12.f, f13.f);
    if (v0 == 0) goto L_009618F8;
    v1 = 255;
    a0 = 16384;
    (*(volatile u8 *) (u32) (s0 + 72)) = (u8) v1;
    v1 = 5;
    (*(volatile u32 *) (u32) (s0 + 180)) = (u32) a0;
    (*(volatile u8 *) (u32) (s0 + 76)) = (u8) v1;
    a2 = (*(volatile u8 *) (u32) (s0 + 19));
L_009618B0:;
    (*(volatile u32 *) (u32) (s0 + 480)) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) (s0 + 176));
    if (v1 == 0) { a0 = (*(volatile u8 *) (u32) (s0 + 19)); goto L_00961914; }
L_009618C0:;
    v1 = (s32) 0xcb0000U;
    a0 = a2 & 0xff;
    v1 = (s32) ((u32) v1 + 0x539cU);
    (*(volatile u32 *) (u32) (s0 + 484)) = (u32) 0;
    a0 = (s32) ((u32) v1 + (u32) a0);
    a1 = 1;
    (*(volatile u8 *) (u32) a0) = (u8) a1;
    v1 = (s32) 0xcb0000U;
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    v1 = (s32) ((u32) v1 + 0x5360U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0; goto L_0096192C;
L_009618F8:;
    (*(volatile u8 *) (u32) (s0 + 72)) = (u8) 0;
    v0 = 8192;
    (*(volatile u32 *) (u32) (s0 + 180)) = (u32) v0;
    a0 = s0; func_00960F90(a0, a1, a2, a3, a4, f12.f);
    a2 = (*(volatile u8 *) (u32) (s0 + 19)); goto L_009618B0;
L_00961914:;
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x539cU);
    a1 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) v1) = (u8) a1; goto L_009618C0;
L_0096192C:;
    return;
}
