/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_002600E0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };

    v1 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    f4.f = (*(volatile f32 *) (u32) (v1 + -11600));
    a2 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (a0 + -11596));
    a1 = (s32) 0x590000U;
    v1 = (s32) 0x40000000U;
    f3.i = (s32) v1;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + -11592));
    v1 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -11588));
    f2.f = f2.f / f3.f;
    v1 = (s32) 0x590000U;
    f0.f = f0.f / f3.f;
    (*(volatile f32 *) (u32) (a0 + -11524)) = f2.f;
    (*(volatile f32 *) (u32) (v1 + -11520)) = f0.f;
    f2.f = f4.f + f2.f;
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (a2 + -11532)) = f2.f;
    (*(volatile f32 *) (u32) (a1 + -11528)) = f0.f; return;
}
