/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00C894D0(s32, s32);
void func_00C89590(s32, s32);
void func_00C916B0(void);

void func_00C91580(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a3 = (s32) 0xcb0000U;
    a2 = (s32) 0xcb0000U;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0xcd0000U;
    a3 = (s32) ((u32) a3 + 0xffff8990U);
    a2 = (s32) ((u32) a2 + 0xffff8994U);
    v1 = (s32) ((u32) v1 + 0xffff8998U);
    s0 = (*(volatile s32 *) (u32) (v0 + -10064));
    a0 = 0;
    a1 = (s32) ((u32) sp + 0x40U);
    v0 = (s32) 0xcb0000U;
    a4 = (s32) ((u32) s0 << 4);
    v0 = (s32) ((u32) v0 + 0xffff899cU);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a2 = (s32) ((u32) a2 + (u32) a4);
    v1 = (s32) ((u32) v1 + (u32) a4);
    v0 = (s32) ((u32) v0 + (u32) a4);
    f23.f = (*(volatile f32 *) (u32) a3);
    f22.f = (*(volatile f32 *) (u32) a2);
    f21.f = (*(volatile f32 *) (u32) v1);
    f20.f = (*(volatile f32 *) (u32) v0);
    (*(volatile f32 *) (u32) (sp + 64)) = f23.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f22.f;
    (*(volatile f32 *) (u32) (sp + 72)) = f21.f;
    (*(volatile f32 *) (u32) (sp + 76)) = f20.f; func_00C89590(a0, a1);
    f0.f = f22.f + f20.f;
    a0 = 1;
    a1 = (s32) ((u32) sp + 0x30U);
    f0.f = f20.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f;
    f0.i = f20.i ^ (s32) 0x80000000U;
    (*(volatile f32 *) (u32) (sp + 60)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 48)) = f23.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f21.f; func_00C89590(a0, a1);
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) s0 << 3);
    v0 = (s32) ((u32) v0 + 0xffff89d0U);
    a0 = 0;
    s0 = (s32) ((u32) v0 + (u32) v1);
    a1 = s0; func_00C894D0(a0, a1);
    a1 = s0;
    a0 = 1; func_00C894D0(a0, a1);
    func_00C916B0();
    return;
}
