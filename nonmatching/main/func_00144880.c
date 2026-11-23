/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6GfxRing_Alloc(s64);
void func_00142040(s64, s64, s64);
s64 sceDmaSync(s64, s64, s64, s64, s64, s64, s64, s64);

void func_00144880(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u64 qh_a3 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) 0x90000000U;
    s0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (s32) ((u32) s0 + 0x10U); v0 = Pes6GfxRing_Alloc(a0);
    s1 = v0;
    v1 = (s32) 0x70000000U;
    v0 = (s32) 0x10010000U;
    a2 = (s32) s0 >> 4;
    { s32 c_ = s0 >= 0; (*(volatile u32 *) (u32) (v0 + -12160)) = (u32) v1; if (c_) goto L_001448C0; }
    v0 = (s32) ((u32) s0 + 0xfU);
    a2 = (s32) v0 >> 4;
L_001448C0:;
    v0 = (s32) 0x10000000U;
    a1 = s1;
    a0 = v0 | 0xd000; func_00142040(a0, a1, a2);
    v1 = (s32) ((u32) s1 + (u32) s0);
    v0 = (s32) 0x20000000U;
    a4 = v1 | v0;
    a1 = 0;
    v0 = (s32) 0x370000U;
    v1 = (s32) ((u32) a4 + 0x4U);
    { u32 a_ = (u32) (v0 + 26448) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    a2 = 0;
    v0 = (s32) 0x10000000U;
    { u32 a_ = (u32) (a4 + 0) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    a0 = v0 | 0xd000;
    v0 = (*(volatile s32 *) (u32) (gp + -23416));
    (*(volatile u32 *) (u32) v0) = (u32) s1;
    (*(volatile u32 *) (u32) (gp + -23416)) = (u32) v1; v0 = sceDmaSync(a0, a1, a2, a3, a4, a5, a6, a7);
    return;
}
