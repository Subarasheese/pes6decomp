/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00141000(s64);
s64 func_00141390(s64);

s64 func_0017C2C0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    u64 qh_a1 = 0;
    u64 qh_a2 = 0;

    s2 = a3;
    s1 = (*(volatile s32 *) (u32) a0);
    s0 = a2;
    a0 = a1; v0 = func_00141000(a0);
    a0 = s0;
    s0 = v0; v0 = func_00141390(a0);
    { s32 c_ = s2 != 0; a4 = v0; if (c_) goto L_0017C340; }
    if (a4 == 0) goto L_0017C398;
L_0017C304:;
    a3 = (*(volatile s32 *) (u32) (s1 + 260));
    a4 = (s32) ((u32) a4 + 0xffffffffU);
    { u32 a_ = (u32) (s1 + 16) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s1 + 32) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s1 + 48) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s1 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    s1 = a3;
    { u32 a_ = (u32) (s0 + 16) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    { u32 a_ = (u32) (s0 + 32) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; }
    { u32 a_ = (u32) (s0 + 48) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    { s32 c_ = a4 != 0; s0 = (s32) ((u32) s0 + 0x40U); if (c_) goto L_0017C304; }
    goto L_0017C398;
L_0017C340:;
    if (a4 == 0) goto L_0017C398;
L_0017C348:;
    v1 = (*(volatile s32 *) (u32) (s1 + 260));
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) s2) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) s1) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) s1) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) s1) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) s1) : "memory");
    __asm__ volatile("vmulx.xyzw $vf4, $vf4, $vf8x");
    __asm__ volatile("vmuly.xyzw $vf5, $vf5, $vf8y");
    __asm__ volatile("vmulz.xyzw $vf6, $vf6, $vf8z");
    __asm__ volatile("vmulw.xyz $vf7, $vf7, $vf8w");
    __asm__ volatile("vaddx.w $vf7, $vf0, $vf0x");
    __asm__ volatile("sqc2 $vf4, 0(%0)" : : "r"((u32) s0) : "memory");
    __asm__ volatile("sqc2 $vf5, 16(%0)" : : "r"((u32) s0) : "memory");
    __asm__ volatile("sqc2 $vf6, 32(%0)" : : "r"((u32) s0) : "memory");
    __asm__ volatile("sqc2 $vf7, 48(%0)" : : "r"((u32) s0) : "memory");
    a4 = (s32) ((u32) a4 + 0xffffffffU);
    s1 = v1;
    s2 = (s32) ((u32) s2 + 0x10U);
    { s32 c_ = a4 != 0; s0 = (s32) ((u32) s0 + 0x40U); if (c_) goto L_0017C348; }
L_0017C398:;
    return v0;
}
