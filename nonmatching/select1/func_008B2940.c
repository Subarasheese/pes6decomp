/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF370(s32, s32);

void func_008B2940(s32 a0, s32 a1, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffab80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    (*(volatile f32 *) (u32) (sp + 24)) = f12.f;
    (*(volatile f32 *) (u32) (sp + 28)) = f13.f;
    a1 = (s32) ((u32) sp + 0x10U);
    (*(volatile u32 *) (u32) (sp + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 20)) = (u32) 0; func_001EF370(a0, a1);
    return;
}
