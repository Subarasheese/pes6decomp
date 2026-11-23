/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001ED780(s64, s64, s64, s64);

s64 func_001ED5F0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, t8 = 0;
    u64 qh_v1 = 0;
    s64 gp = 0x3ef370;
    s64 frame[12];
    s64 sp = (s32) (u32) frame;

    v0 = 16;
    v1 = (s32) ((u32) sp + 0x40U);
    if (v1 == 0) goto L_001ED62C;
L_001ED610:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001ED610;
L_001ED62C:;
    a2 = (*(volatile u8 *) (u32) (gp + -32440));
    s2 = (s32) ((u32) sp + 0x5dU);
    a1 = (*(volatile u8 *) (u32) (gp + -32439));
    s1 = (s32) ((u32) sp + 0x5eU);
    v1 = (*(volatile u8 *) (u32) (gp + -32438));
    s0 = (s32) ((u32) sp + 0x5fU);
    v0 = (*(volatile u8 *) (u32) (gp + -32437));
    (*(volatile u8 *) (u32) (sp + 92)) = (u8) a2;
    (*(volatile u8 *) (u32) s2) = (u8) a1;
    (*(volatile u8 *) (u32) s1) = (u8) v1;
    (*(volatile u8 *) (u32) s0) = (u8) v0; v0 = func_001ED780(a0, a1, a2, a3);
    if (v0 == 0) goto L_001ED684;
    v1 = (s32) ((u32) sp + 0x40U);
    if (v1 == 0) goto L_001ED684;
    { u32 a_ = (u32) (sp + 64) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (v0 + 16) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile u8 *) (u32) (v0 + 53));
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) (v0 + 53)) = (u8) v1;
L_001ED684:;
    if (v0 == 0) goto L_001ED75C;
    v1 = (s32) ((u32) sp + 0x5cU);
    if (v1 == 0) goto L_001ED75C;
    v1 = (*(volatile s32 *) (u32) (v0 + 8));
    at = 0 < v1;
    { s32 c_ = at == 0; t4 = 0; if (c_) goto L_001ED75C; }
    a0 = (*(volatile u8 *) (u32) s2);
    a7 = 0;
    v1 = (*(volatile u8 *) (u32) s1);
    a6 = 0;
    t8 = (*(volatile u8 *) (u32) s0);
    t6 = (s32) 0x3f800000U;
    a5 = (*(volatile u8 *) (u32) (sp + 92));
    a4 = (*(volatile u8 *) (u32) (sp + 93));
    a3 = (*(volatile u8 *) (u32) (sp + 94));
    a2 = (*(volatile u8 *) (u32) (sp + 95));
    s2 = 128;
    a1 = (*(volatile u8 *) (u32) (sp + 92));
    s1 = 255;
    t7 = (s32) t8 >> 1;
L_001ED6E0:;
    t5 = (*(volatile s32 *) (u32) (v0 + 48));
    t5 = (s32) ((u32) t5 + (u32) a7);
    (*(volatile u8 *) (u32) t5) = (u8) a5;
    (*(volatile u8 *) (u32) (t5 + 1)) = (u8) a4;
    (*(volatile u8 *) (u32) (t5 + 2)) = (u8) a3;
    (*(volatile u8 *) (u32) (t5 + 3)) = (u8) a2;
    t5 = (*(volatile s32 *) (u32) (v0 + 44));
    t5 = (s32) ((u32) t5 + (u32) a6);
    (*(volatile u8 *) (u32) t5) = (u8) a1;
    t5 = (*(volatile s32 *) (u32) (v0 + 44));
    t5 = (s32) ((u32) t5 + (u32) a6);
    (*(volatile u8 *) (u32) (t5 + 1)) = (u8) a0;
    t5 = (*(volatile s32 *) (u32) (v0 + 44));
    t5 = (s32) ((u32) t5 + (u32) a6);
    { s32 c_ = t8 != s1; (*(volatile u8 *) (u32) (t5 + 2)) = (u8) v1; if (c_) goto L_001ED728; }
    s0 = s2; goto L_001ED72C;
L_001ED728:;
    s0 = t7;
L_001ED72C:;
    t5 = (*(volatile s32 *) (u32) (v0 + 44));
    t4 = (s32) ((u32) t4 + 0x1U);
    a7 = (s32) ((u32) a7 + 0x4U);
    t5 = (s32) ((u32) t5 + (u32) a6);
    (*(volatile u8 *) (u32) (t5 + 3)) = (u8) s0;
    t5 = (*(volatile s32 *) (u32) (v0 + 44));
    t5 = (s32) ((u32) t5 + (u32) a6);
    (*(volatile u32 *) (u32) (t5 + 4)) = (u32) t6;
    t5 = (*(volatile s32 *) (u32) (v0 + 8));
    t5 = t4 < t5;
    { s32 c_ = t5 != 0; a6 = (s32) ((u32) a6 + 0x8U); if (c_) goto L_001ED6E0; }
L_001ED75C:;
    return v0;
}
