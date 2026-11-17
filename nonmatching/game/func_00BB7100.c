/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB7100(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };

    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (s32) 0xca0000U;
    a3 = (s32) ((u32) v1 << 1);
    a0 = (s32) ((u32) a0 + 0xffffe760U);
    v1 = (s32) 0xca0000U;
    a2 = (s32) ((u32) a0 + (u32) a3);
    v1 = (s32) ((u32) v1 + 0xffffe762U);
    a2 = (*(volatile s16 *) (u32) a2);
    a0 = (s32) ((u32) v1 + (u32) a3);
    v1 = (s32) 0xca0000U;
    v1 = (s32) ((u32) v1 + 0xffffe764U);
    v1 = (s32) ((u32) v1 + (u32) a3);
    f0.i = (s32) a2;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) a1) = f0.f;
    a0 = (*(volatile s16 *) (u32) a0);
    f0.i = (s32) a0;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a1 + 4)) = f0.f;
    v1 = (*(volatile s16 *) (u32) v1);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a1 + 8)) = f0.f; return;
}
