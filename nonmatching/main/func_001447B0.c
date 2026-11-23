/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00144920(s64, s64, s64, s64, s64, s64, s64);

s64 func_001447B0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, t4 = 0, t5 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[4];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x500000U;
    a6 = (s32) 0x6c040000U;
    t5 = (*(volatile s32 *) (u32) (v0 + 3776));
    v1 = (s32) 0x14000000U;
    t4 = (*(volatile s32 *) (u32) (gp + -23400));
    a4 = (s32) 0x6c010000U;
    a5 = (s32) 0x4000000U;
    a2 = (s32) ((u32) sp + 0x10U);
    v0 = (s32) 0x30000000U;
    t5 = t5 | a6;
    a7 = v0 | 0x4;
    a6 = v1 | 0x16;
    v0 = (s32) 0x1000000U;
    (*(volatile u32 *) (u32) a1) = (u32) a7;
    v1 = (s32) ((u32) t4 + 0x540U);
    a3 = v0 | 0x101;
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) v1;
    v0 = (s32) 0x500000U;
    (*(volatile u32 *) (u32) (a1 + 8)) = (u32) a3;
    (*(volatile u32 *) (u32) (a1 + 12)) = (u32) t5;
    a7 = (*(volatile s64 *) (u32) (v0 + 3776));
    f0.f = (*(volatile f32 *) (u32) (a0 + 80));
    v0 = (s64) ((u64) a7 + (u64) (s64) 4);
    a0 = (s32) ((u32) a1 + 0x10U);
    v1 = (s64) ((u64) v0 << 32);
    a1 = 16;
    v0 = (s64) ((u64) a7 << 32);
    v1 = v1 >> 32;
    v0 = v0 >> 32;
    a4 = v1 | a4;
    (*(volatile f32 *) (u32) (sp + 28)) = f0.f;
    a5 = v0 | a5; v0 = func_00144920(a0, a1, a2, a3, a4, a5, a6);
    a0 = (s32) 0x500000U;
    v1 = (s32) 0x500000U;
    a0 = (*(volatile s64 *) (u32) (a0 + 3776));
    a0 = a0 ^ 0x200;
    (*(volatile u64 *) (u32) (v1 + 3776)) = (u64) a0;
    return v0;
}
