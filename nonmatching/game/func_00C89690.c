/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF860(s64, s64);

void func_00C89690(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0;
    u64 qh_v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[4];
    s64 sp = (s32) (u32) frame;

    at = (u64) a0 < (u64) (s64) 127;
    { u32 a_ = (u32) (a1 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 16) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    a1 = (s32) ((u32) sp + 0x10U);
    f0.f = (*(volatile f32 *) (u32) (sp + 16));
    { s32 c_ = at == 0; (*(volatile f32 *) (u32) (sp + 16)) = f0.f; if (c_) goto L_00C896CC; }
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffce4cU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_001EF860(a0, a1);
L_00C896CC:;
    return;
}
