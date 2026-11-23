/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0013B630(void);
void func_0013B6A0(f32);

s32 func_00152220(s32 a0, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    f32 acc = 0;

    v1 = (s32) 0x510000U;
    a0 = (*(volatile s32 *) (u32) (v1 + -11132));
    v1 = 1;
    if (a0 != v1) goto L_00152330;
    v0 = (s32) 0x510000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -11136));
    if (v0 == v1) goto L_0015227C;
    if (v0 == 0) goto L_0015225C;
    goto L_00152298;
L_0015225C:;
    v0 = (s32) 0x510000U;
    v1 = (s32) 0x510000U;
    a0 = (*(volatile s16 *) (u32) (v0 + -11128));
    v1 = (*(volatile u8 *) (u32) (v1 + -11126));
    v0 = (s32) 0x510000U;
    v1 = (s32) ((u32) a0 - (u32) v1);
    (*(volatile u16 *) (u32) (v0 + -11128)) = (u16) v1; goto L_00152298;
L_0015227C:;
    v0 = (s32) 0x510000U;
    v1 = (s32) 0x510000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -11126));
    v1 = (*(volatile s16 *) (u32) (v1 + -11128));
    v0 = (s32) 0x510000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u16 *) (u32) (v0 + -11128)) = (u16) v1;
L_00152298:;
    v0 = (s32) 0x510000U;
    a0 = (*(volatile s16 *) (u32) (v0 + -11128));
    at = a0 < 256;
    if (at != 0) goto L_001522B4;
    a0 = 255; goto L_001522C4;
L_001522B4:;
    if (a0 >= 0) goto L_001522C4;
    a0 = 0; goto L_001522C4;
L_001522C4:;
    v0 = (s32) 0x510000U;
    v1 = (s32) 0x3f000000U;
    (*(volatile u16 *) (u32) (v0 + -11128)) = (u16) a0;
    f0.i = (s32) 0;
    v0 = v1 | 0x8081;
    f2.i = (s32) v0;
    v0 = (s32) 0x510000U;
    v1 = (*(volatile s16 *) (u32) (v0 + -11128));
    v0 = (s32) 0x43000000U;
    f1.i = (s32) v0;
    acc = f0.f + f1.f;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f12.f = acc - f2.f * f0.f; func_0013B6A0(f12.f);
    v0 = func_0013B630();
    if (v0 != 0) goto L_00152320;
L_00152318:;
    goto L_00152334;
L_00152320:;
    a0 = 2;
    v1 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (v1 + -11132)) = (u32) a0; goto L_00152318;
L_00152330:;
L_00152334:;
    return v0;
}
