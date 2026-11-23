/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001EF370(s32, s32);
void func_008C1430(s32, f32, f32);
void func_008C5BF0(s32, s32, s32);

void func_008DFB60(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13) {
    s32 v0 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    f1.f = (*(volatile f32 *) (u32) a1);
    s0 = a1;
    f0.f = (*(volatile f32 *) (u32) (a1 + 4));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = (s32) ((u32) s1 + 0x4U); func_008C5BF0(a0, a1, a2);
    f12.f = (*(volatile f32 *) (u32) s0);
    f13.f = (*(volatile f32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) (s1 + 44)); func_008C1430(a0, f12.f, f13.f);
    a0 = (*(volatile s32 *) (u32) (s1 + 44));
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 81; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s1 + 76));
    a1 = (s32) ((u32) sp + 0x30U); func_001EF370(a0, a1);
    return;
}
