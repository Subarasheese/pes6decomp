/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001E4FB0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    f32 acc = 0;

    v1 = (s32) 0x530000U;
    a1 = (s32) 0x530000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + -20316));
    a0 = (s32) 0x530000U;
    f1.i = (s32) 0;
    v1 = (s32) 0xbf800000U;
    f4.i = (s32) v1;
    v1 = (s32) 0xc2800000U;
    f3.i = (s32) v1;
    v1 = (s32) 0x530000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -20312));
    acc = f1.f + f3.f;
    v1 = (s32) 0x530000U;
    (*(volatile f32 *) (u32) (v1 + -20696)) = f2.f;
    f2.f = acc + f4.f * f2.f;
    v1 = (s32) 0x530000U;
    acc = f1.f + f3.f;
    (*(volatile f32 *) (u32) (v1 + -20692)) = f0.f;
    f0.f = acc + f4.f * f0.f;
    (*(volatile f32 *) (u32) (a1 + -20704)) = f2.f;
    (*(volatile f32 *) (u32) (a0 + -20700)) = f0.f; return v0;
}
