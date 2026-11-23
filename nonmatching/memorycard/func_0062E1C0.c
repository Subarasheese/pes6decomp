/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D6D30(s64, s64);
s64 func_001D6E70(s64, s64, s64);
void func_001D7D60(s64, s64);
void func_001D7D80(s64, s64, s64, s64);
void func_001DF4F0(s64, s64);
s64 func_001F08B0(s64);
void func_0063AD20(s64, s64, s64, s64);
s64 func_0063E160(s64, s64);
void sprintf(s64, s64, s64, s64, s64, s64, s64, s64);

void func_0062E1C0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 gp = 0x3ef370;
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x660000U;
    s5 = a2;
    v1 = (*(volatile s32 *) (u32) (v0 + -10088));
    { s32 c_ = a0 == 0; s4 = a1; if (c_) goto L_0062E200; }
    s0 = (*(volatile u8 *) (u32) (a0 + 12)); goto L_0062E204;
L_0062E200:;
    s0 = (s64) ((u64) 0 + (u64) (s64) 14);
L_0062E204:;
    v0 = (s32) 0x20000000U;
    v0 = v1 & v0;
    { s32 c_ = v0 == 0; s1 = s0 & 0xff; if (c_) goto L_0062E274; }
    v0 = (*(volatile u8 *) (u32) (s5 + 38));
    if (v0 != 0) { a0 = (*(volatile u8 *) (u32) (s5 + 18)); goto L_0062E250; }
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -4240));
    if (v0 == 0) { v1 = (*(volatile u8 *) (u32) (s5 + 31)); goto L_0062E238; }
    s0 = (*(volatile u8 *) (u32) (v0 + 12));
    v1 = (*(volatile u8 *) (u32) (s5 + 31));
L_0062E238:;
    v0 = 1;
    if (v1 != v0) { s3 = 0; goto L_0062E248; }
    s3 = (s64) ((u64) 0 + (u64) (s64) 3);
L_0062E248:;
    a2 = 0; goto L_0062E26C;
L_0062E250:;
    a1 = 0; v0 = func_0063E160(a0, a1);
    if (v0 == 0) { s3 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_0062E268; }
    s1 = (*(volatile u8 *) (u32) (v0 + 12));
    s3 = (s64) ((u64) 0 + (u64) (s64) 1);
L_0062E268:;
    a2 = s3;
L_0062E26C:;
    s6 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_0062E280;
L_0062E274:;
    s3 = (s64) ((u64) 0 + (u64) (s64) 2);
    a2 = 0;
    s6 = 0;
L_0062E280:;
    a1 = (s32) 0x650000U;
    a0 = s1 & 0xff;
    a1 = (s32) ((u32) a1 + 0x79b0U);
    v1 = s0 & 0xff;
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (s32) ((u32) a1 + (u32) v1);
    a0 = (*(volatile s8 *) (u32) a0);
    v1 = (*(volatile s8 *) (u32) v1);
    v0 = (*(volatile u8 *) (u32) (s5 + 38));
    (*(volatile u16 *) (u32) (sp + 136)) = (u16) a0;
    { s32 c_ = v0 != 0; (*(volatile u16 *) (u32) (sp + 138)) = (u16) v1; if (c_) goto L_0062E2B8; }
    (*(volatile u16 *) (u32) (sp + 140)) = (u16) v1; goto L_0062E2BC;
L_0062E2B8:;
    (*(volatile u16 *) (u32) (sp + 140)) = (u16) a0;
L_0062E2BC:;
    v1 = a2 & 0xff;
    s2 = 0;
    v0 = (s32) ((u32) v1 << 1);
    s1 = (s32) ((u32) sp + 0x88U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0x650000U;
    v0 = (s32) ((u32) v0 + 0x79c8U);
    s0 = (s32) ((u32) v0 + (u32) v1);
L_0062E2DC:;
    a2 = (*(volatile u8 *) (u32) (s4 + 596));
    v1 = (s32) 0x650000U;
    v1 = (s32) ((u32) v1 + 0x79c0U);
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    a0 = (s32) ((u32) a2 << 1);
    a0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) s2 + (u32) v1);
    v1 = (*(volatile s8 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s16 *) (u32) s1); func_001D7D80(a0, a1, a2, a3);
    a2 = (*(volatile u8 *) (u32) (s4 + 596));
    v1 = (s32) 0x650000U;
    v1 = (s32) ((u32) v1 + 0x79c0U);
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    a0 = (s32) ((u32) a2 << 1);
    a0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) s2 + (u32) v1);
    v1 = (*(volatile s8 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile u8 *) (u32) s0); func_001D7D60(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x2U);
    v0 = s2 < 3;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x1U); if (c_) goto L_0062E2DC; }
    v1 = s3 & 0xff;
    s0 = 0;
    v0 = (s32) ((u32) v1 << 1);
    s2 = s4;
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0x650000U;
    v0 = (s32) ((u32) v0 + 0x79d0U);
    s1 = (s32) ((u32) v0 + (u32) v1);
L_0062E380:;
    v0 = (*(volatile s32 *) (u32) (s2 + 544));
    if (v0 != 0) goto L_0062E408;
    a2 = (*(volatile u8 *) (u32) (s4 + 596));
    a0 = (s32) 0x650000U;
    v1 = (s32) ((u32) gp + 0xffff8368U);
    a0 = (s32) ((u32) a0 + 0x7888U);
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = (s32) ((u32) a2 << 1);
    v1 = (s32) ((u32) v1 + (u32) a2);
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = (*(volatile u8 *) (u32) v1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) s0 + (u32) a0);
    s3 = (*(volatile u8 *) (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s3; v0 = func_001D6D30(a0, a1);
    a0 = v0; v0 = func_001F08B0(a0);
    a3 = (*(volatile u8 *) (u32) (s4 + 596));
    a0 = (s32) ((u32) gp + 0xffff8368U);
    a2 = v0;
    v1 = (*(volatile s32 *) (u32) (s4 + 4));
    v0 = (s32) ((u32) a0 + (u32) a3);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s3; v0 = func_001D6E70(a0, a1, a2);
    (*(volatile u32 *) (u32) (s2 + 544)) = (u32) v0;
L_0062E408:;
    v0 = (*(volatile s32 *) (u32) (s2 + 544));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (*(volatile u8 *) (u32) s1); func_001DF4F0(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x4U);
    v0 = s0 < 3;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_0062E380; }
    v0 = (s32) 0x350000U;
    a0 = v0 | 0x22; v0 = func_001F08B0(a0);
    a1 = v0;
    a0 = (s32) 0x650000U;
    v0 = (*(volatile u8 *) (u32) (s5 + 18));
    a0 = (s32) ((u32) a0 + 0x79e0U);
    a2 = (s32) ((u32) v0 + 0x1U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s4 + 552));
    a1 = (s32) 0x650000U;
    a1 = (s32) ((u32) a1 + 0x79e0U); func_0063AD20(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s5 + 18));
    v0 = v0 < 36;
    if (v0 != 0) { a0 = (*(volatile u8 *) (u32) (s4 + 596)); goto L_0062E484; }
    v0 = (*(volatile s32 *) (u32) (s4 + 552));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_001DF4F0(a0, a1);
    a0 = (*(volatile u8 *) (u32) (s4 + 596));
L_0062E484:;
    v1 = (s32) ((u32) gp + 0xffff8368U);
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_001D7D60(a0, a1);
    a0 = (*(volatile u8 *) (u32) (s4 + 596));
    v1 = (s32) ((u32) gp + 0xffff836cU);
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s6; func_001D7D60(a0, a1);
    return;
}
