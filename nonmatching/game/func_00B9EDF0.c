/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001A5520(void);

void func_00B9EDF0(s32 a0, s32 a1, f32 fa12, f32 fa13, f32 fa14) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };

    v0 = (s32) 0xcc0000U;
    a0 = 1;
    f12.f = (*(volatile f32 *) (u32) (v0 + -12720));
    v1 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v1 + -12755)) = (u8) a0;
    a1 = (s32) 0xcc0000U;
    a0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    v0 = (s32) 0xcc0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + -12716));
    (*(volatile f32 *) (u32) (a1 + -12704)) = f12.f;
    v0 = (s32) 0xcc0000U;
    f14.f = (*(volatile f32 *) (u32) (v0 + -12712));
    (*(volatile f32 *) (u32) (a0 + -12700)) = f13.f;
    v0 = (s32) 0xcc0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -12708));
    (*(volatile f32 *) (u32) (v1 + -12696)) = f14.f;
    v0 = (s32) 0xcc0000U;
    (*(volatile f32 *) (u32) (v0 + -12692)) = f0.f; v0 = func_001A5520(); return;
}
