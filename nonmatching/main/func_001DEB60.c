/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_001DEB60(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    s64 frame[12];
    s64 sp = (s32) (u32) frame;

    a2 = 4;
    s2 = a0;
    s1 = a1;
    s0 = (*(volatile s32 *) (u32) a0);
    a1 = (s32) ((u32) sp + 0x40U);
    v0 = (*(volatile s32 *) (u32) (gp + -23044));
    { u32 t_ = (u32) v0; a0 = (s32) ((u32) s1 + 0x50U); v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    a4 = (*(volatile s32 *) (u32) (s1 + 4));
    a3 = 6;
    v1 = 1;
    a2 = 3;
    a1 = 13;
    a0 = 5;
    a4 = (*(volatile s32 *) (u32) (a4 + 4));
    a4 = (*(volatile s64 *) (u32) (a4 + 8));
    (*(volatile u64 *) (u32) s0) = (u64) a4;
    (*(volatile u64 *) (u32) (s0 + 8)) = (u64) a3;
    a3 = (*(volatile s64 *) (u32) (s1 + 152));
    (*(volatile u64 *) (u32) (s0 + 16)) = (u64) a3;
    (*(volatile u64 *) (u32) (s0 + 24)) = (u64) v1;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    v1 = (*(volatile s64 *) (u32) (v1 + 16));
    (*(volatile u64 *) (u32) (s0 + 32)) = (u64) v1;
    (*(volatile u64 *) (u32) (s0 + 40)) = (u64) a2;
    v1 = (*(volatile s64 *) (u32) (sp + 64));
    (*(volatile u64 *) (u32) (s0 + 48)) = (u64) v1;
    (*(volatile u64 *) (u32) (s0 + 56)) = (u64) a1;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    v1 = (*(volatile s64 *) (u32) (v1 + 24));
    (*(volatile u64 *) (u32) (s0 + 64)) = (u64) v1;
    (*(volatile u64 *) (u32) (s0 + 72)) = (u64) a2;
    v1 = (*(volatile s64 *) (u32) (sp + 72));
    (*(volatile u64 *) (u32) (s0 + 80)) = (u64) v1;
    (*(volatile u64 *) (u32) (s0 + 88)) = (u64) a1;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    v1 = (*(volatile s64 *) (u32) (v1 + 32));
    (*(volatile u64 *) (u32) (s0 + 96)) = (u64) v1;
    (*(volatile u64 *) (u32) (s0 + 104)) = (u64) a2;
    v1 = (*(volatile s64 *) (u32) (sp + 80));
    (*(volatile u64 *) (u32) (s0 + 112)) = (u64) v1;
    (*(volatile u64 *) (u32) (s0 + 120)) = (u64) a0;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    v1 = (*(volatile s64 *) (u32) (v1 + 40));
    (*(volatile u64 *) (u32) (s0 + 128)) = (u64) v1;
    (*(volatile u64 *) (u32) (s0 + 136)) = (u64) a2;
    v1 = (*(volatile s64 *) (u32) (sp + 88));
    (*(volatile u64 *) (u32) (s0 + 144)) = (u64) v1;
    (*(volatile u64 *) (u32) (s0 + 152)) = (u64) a0;
    v1 = (*(volatile s32 *) (u32) s2);
    v1 = (s32) ((u32) v1 + 0xa0U);
    (*(volatile u32 *) (u32) s2) = (u32) v1;
    return v0;
}
