/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001CDA50(s32);

void func_00342410(s32 a0) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 30480));
    a0 = 0;
    v0 = (s32) 0x3b0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 30484));
    (*(volatile f32 *) (u32) (sp + 16)) = f0.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 30488));
    (*(volatile f32 *) (u32) (sp + 20)) = f2.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 30492));
    (*(volatile f32 *) (u32) (sp + 24)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 30496));
    (*(volatile f32 *) (u32) (sp + 28)) = f0.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 30500));
    (*(volatile f32 *) (u32) (sp + 32)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 30504));
    (*(volatile f32 *) (u32) (sp + 36)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 30508));
    (*(volatile f32 *) (u32) (sp + 40)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 30512));
    (*(volatile f32 *) (u32) (sp + 44)) = f0.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 30516));
    (*(volatile f32 *) (u32) (sp + 48)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f; v0 = func_001CDA50(a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 16));
    return;
}
