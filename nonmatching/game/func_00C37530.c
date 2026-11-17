/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C37530(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };

    a6 = (s32) ((u32) a0 + 0xffffffffU);
    a4 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) a6 << 3);
    a0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + (u32) a6);
    a4 = (s32) ((u32) a4 + 0xffffb6f0U);
    a5 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffb6f4U);
    a5 = (s32) ((u32) a5 + (u32) a6);
    v1 = (s32) 0xcd0000U;
    a5 = (s32) ((u32) a5 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb6f8U);
    a4 = (s32) ((u32) a4 + (u32) a5);
    a0 = (s32) ((u32) a0 + (u32) a5);
    f0.f = (*(volatile f32 *) (u32) a4);
    v1 = (s32) ((u32) v1 + (u32) a5);
    (*(volatile f32 *) (u32) a1) = f0.f;
    f0.f = (*(volatile f32 *) (u32) a0);
    (*(volatile f32 *) (u32) a2) = f0.f;
    v1 = (*(volatile u16 *) (u32) v1);
    (*(volatile u16 *) (u32) a3) = (u16) v1; return;
}
