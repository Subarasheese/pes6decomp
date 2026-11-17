/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


f32 func_0012FDF0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };

    a2 = (*(volatile s16 *) (u32) a1);
    v1 = (s32) 0x38000000U;
    v1 = v1 | 0x100;
    v0 = (s32) ((u32) a1 + 0x8U);
    f1.i = (s32) v1;
    f0.i = (s32) a2;
    f0.f = (f32) f0.i;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) a0) = f0.f;
    v1 = (*(volatile s16 *) (u32) (a1 + 2));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (a0 + 4)) = f0.f;
    v1 = (*(volatile s16 *) (u32) (a1 + 4));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (a0 + 8)) = f0.f;
    v1 = (*(volatile s16 *) (u32) (a1 + 6));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (a0 + 12)) = f0.f; return f0.f;
}
