/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s32, s32);
s32 func_001F08B0(s32);
void func_00634BD0(s32);
void func_0063ABF0(s32, s32, s32);
void func_0063AD20(s32, s32, s32, s32);
s32 func_0063AD90(s32, s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_00632F40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    s6 = a1;
    s5 = (s32) ((u32) s6 + 0x2acU);
    s4 = a0;
    s2 = 0;
    s1 = s5;
    s7 = (*(volatile s32 *) (u32) (a1 + 4));
    s0 = (s32) 0x650000U;
    s0 = (s32) ((u32) s0 + 0x7ce0U);
    s3 = (*(volatile s32 *) (u32) (s7 + 76));
L_00632F8C:;
    v0 = (*(volatile s32 *) (u32) s1);
    if (v0 != 0) goto L_00632FB0;
    a2 = (*(volatile s32 *) (u32) s0);
    a0 = s3;
    a1 = s1;
    a3 = (s32) ((u32) gp + 0xffff83acU); v0 = func_0063AD90(a0, a1, a2, a3);
L_00632FB0:;
    a1 = (*(volatile s32 *) (u32) s0);
    a2 = (*(volatile s32 *) (u32) s1);
    a0 = s3; func_0063ABF0(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s2 < 21;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00632F8C; }
    a0 = s3;
    a1 = 1; func_001D7D60(a0, a1);
    a0 = s6; func_00634BD0(a0);
    s1 = 0;
    s0 = s5;
L_00632FF0:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) gp + 0xffff83acU); func_0063AD20(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 21;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00632FF0; }
    v0 = (s32) 0x350000U;
    a0 = v0 | 0x7b; v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) (s5 + 28));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s4 + 44));
    v0 = 1;
    if (v1 != v0) { v0 = (s32) 0x6d0000U; goto L_00633048; }
    v0 = (s32) 0x6d0000U;
    a0 = v0 | 0x26; v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) (s5 + 24)); goto L_00633054;
L_00633048:;
    a0 = v0 | 0x27; v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) (s5 + 24));
L_00633054:;
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a2 = (*(volatile u8 *) (u32) (s4 + 102));
    a4 = 100;
    a0 = (s32) 0x660000U;
    a1 = (s32) 0x660000U;
    v1 = (*(volatile u8 *) (u32) (s4 + 103));
    a0 = (s32) ((u32) a0 + 0xffff8190U);
    if ((s32) a4 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) a4); hi = (s32) ((s32) a2 % (s32) a4); lo = q_; }
    v0 = (*(volatile u8 *) (u32) (s4 + 104));
    a2 = hi;
    if ((s32) a4 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a4); hi = (s32) ((s32) v1 % (s32) a4); lo = q_; }
    a3 = hi;
    if ((s32) a4 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a4); hi = (s32) ((s32) v0 % (s32) a4); lo = q_; }
    a4 = hi;
    a1 = (s32) ((u32) a1 + 0xffffaf60U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s5 + 36));
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffff8190U); func_0063AD20(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s4 + 44));
    v0 = 1;
    if (v1 != v0) { a1 = (s32) ((u32) gp + 0xffff83acU); goto L_00633104; }
    a2 = (*(volatile u8 *) (u32) (s4 + 96));
    a4 = 100;
    a0 = (s32) 0x660000U;
    a1 = (s32) 0x660000U;
    v1 = (*(volatile u8 *) (u32) (s4 + 97));
    a0 = (s32) ((u32) a0 + 0xffff81a0U);
    if ((s32) a4 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) a4); hi = (s32) ((s32) a2 % (s32) a4); lo = q_; }
    v0 = (*(volatile u8 *) (u32) (s4 + 98));
    a2 = hi;
    if ((s32) a4 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a4); hi = (s32) ((s32) v1 % (s32) a4); lo = q_; }
    a3 = hi;
    if ((s32) a4 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a4); hi = (s32) ((s32) v0 % (s32) a4); lo = q_; }
    a4 = hi;
    a1 = (s32) ((u32) a1 + 0xffffaf60U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffff81a0U);
L_00633104:;
    a0 = (*(volatile s32 *) (u32) (s5 + 32)); func_0063AD20(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s4 + 44));
    v0 = 1;
    if (v1 != v0) { a1 = (s32) ((u32) gp + 0xffff83acU); goto L_00633120; }
    a1 = (s32) ((u32) s4 + 0x2dU);
L_00633120:;
    a0 = (*(volatile s32 *) (u32) (s5 + 40)); func_0063AD20(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s4 + 44));
    v0 = 1;
    if (v1 != v0) { a1 = (s32) ((u32) gp + 0xffff83acU); goto L_00633164; }
    v1 = (*(volatile u16 *) (u32) (s4 + 100));
    v0 = 10000;
    a0 = (s32) 0x660000U;
    a1 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0xffff81b0U);
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a2 = hi;
    a1 = (s32) ((u32) a1 + 0xffffaec0U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffff81b0U);
L_00633164:;
    a0 = (*(volatile s32 *) (u32) (s5 + 48)); func_0063AD20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s7 + 76));
    a1 = 1; func_001D7D60(a0, a1);
    return;
}
