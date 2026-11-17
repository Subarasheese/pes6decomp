/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C37590(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    a4 = (s32) ((u32) a0 + 0xffffffffU);
    a2 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) a4 << 3);
    a0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + (u32) a4);
    a2 = (s32) ((u32) a2 + 0xffffb6f0U);
    a3 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffb6f4U);
    a3 = (s32) ((u32) a3 + (u32) a4);
    v1 = (s32) 0xcd0000U;
    a3 = (s32) ((u32) a3 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb6f8U);
    a2 = (s32) ((u32) a2 + (u32) a3);
    a0 = (s32) ((u32) a0 + (u32) a3);
    (*(volatile f32 *) (u32) a2) = f12.f;
    v1 = (s32) ((u32) v1 + (u32) a3);
    (*(volatile f32 *) (u32) a0) = f13.f;
    (*(volatile u16 *) (u32) v1) = (u16) a1; return;
}
