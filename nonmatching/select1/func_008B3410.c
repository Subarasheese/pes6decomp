/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00154530(void);
s32 func_00154540(void);

void func_008B3410(s32 a0) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x8d0000U;
    v1 = (s32) 0x8d0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -4832));
    s0 = a0;
    f1.f = (*(volatile f32 *) (u32) (v1 + -4828));
    v0 = (s32) 0x8d0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + -4824));
    v1 = (s32) 0x8d0000U;
    (*(volatile f32 *) (u32) (sp + 32)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 36)) = f1.f;
    v0 = (s32) 0x8d0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -4816));
    f0.f = (*(volatile f32 *) (u32) (v1 + -4820));
    (*(volatile f32 *) (u32) (sp + 40)) = f2.f;
    v0 = (s32) 0x8d0000U;
    (*(volatile f32 *) (u32) (sp + 44)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + -4812));
    (*(volatile f32 *) (u32) (sp + 48)) = f1.f;
    v0 = (s32) 0x8d0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -4808));
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f;
    v0 = (s32) 0x8d0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -4804));
    (*(volatile f32 *) (u32) (sp + 56)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 60)) = f0.f; v0 = func_00154540();
    v0 = func_00154530();
    v1 = (s32) ((u32) s0 << 2);
    a0 = v0 & 0xff;
    v0 = (s32) ((u32) v1 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 32));
    v0 = a0 & v0;
    v0 = (u64) 0 < (u64) v0;
    return;
}
