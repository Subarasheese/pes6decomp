/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00C39160(void) {
    s32 v0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0xcb0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -32736));
    v0 = (s32) 0xcb0000U;
    f5.f = (*(volatile f32 *) (u32) (v0 + -32732));
    (*(volatile f32 *) (u32) sp) = f1.f;
    v0 = (s32) 0xcb0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -32728));
    (*(volatile f32 *) (u32) (sp + 4)) = f5.f;
    v0 = (s32) 0xcb0000U;
    f4.f = (*(volatile f32 *) (u32) (v0 + -32724));
    (*(volatile f32 *) (u32) (sp + 8)) = f0.f;
    v0 = (s32) 0xcb0000U;
    f3.f = (*(volatile f32 *) (u32) (v0 + -32720));
    (*(volatile f32 *) (u32) (sp + 12)) = f4.f;
    v0 = (s32) 0xcb0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + -32716));
    (*(volatile f32 *) (u32) (sp + 16)) = f3.f;
    v0 = (s32) 0xcb0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -32712));
    (*(volatile f32 *) (u32) (sp + 20)) = f2.f;
    v0 = (s32) 0xcb0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -32708));
    (*(volatile f32 *) (u32) (sp + 24)) = f1.f;
    v0 = (s32) 0xcd0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -18192));
    (*(volatile f32 *) (u32) (sp + 28)) = f0.f;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) v0);
    return v0;
}
