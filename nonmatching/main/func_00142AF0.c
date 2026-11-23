/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00104148(s64, s64, s64, f32);
void sceVu0TransposeMatrix(s64, s64);

void func_00142AF0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, f32 fa12) {
    s64 v0 = 0, v1 = 0;
    u64 qh_a3 = 0;
    u64 qh_a4 = 0;
    u64 qh_a5 = 0;
    u64 qh_a6 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    a2 = a0;
    a1 = (s32) 0x370000U;
    a0 = (s32) ((u32) sp + 0x10U);
    a1 = (s32) ((u32) a1 + 0x67c0U); func_00104148(a0, a1, a2, f12.f);
    a0 = (s32) ((u32) sp + 0x10U);
    a1 = a0; sceVu0TransposeMatrix(a0, a1);
    { u32 a_ = (u32) (sp + 32) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    a1 = (s32) 0x500000U;
    { u32 a_ = (u32) (sp + 48) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) 0x500000U;
    { u32 a_ = (u32) (sp + 64) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x500000U;
    { u32 a_ = (u32) (sp + 16) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    a2 = (s32) 0x500000U;
    { u32 a_ = (u32) (a1 + -8400) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    { u32 a_ = (u32) (a0 + -8384) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    { u32 a_ = (u32) (v1 + -8368) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { u32 a_ = (u32) (a2 + -8416) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    return;
}
