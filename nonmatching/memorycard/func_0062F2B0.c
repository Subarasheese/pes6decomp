/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s32, s32);
s32 func_001F08B0(s32);
void func_0063AC30(s32, s32, s32, s32, f32);
void func_0063AD20(s32, s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_0062F2B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;

    v0 = 1;
    s1 = a0;
    v1 = (*(volatile u8 *) (u32) (a0 + 44));
    { s32 c_ = v1 != v0; s0 = a1; if (c_) goto L_0062F2EC; }
    v0 = (s32) 0x6d0000U;
    a0 = v0 | 0x26; v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 436)); goto L_0062F2FC;
L_0062F2EC:;
    v0 = (s32) 0x6d0000U;
    a0 = v0 | 0x27; v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 436));
L_0062F2FC:;
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a2 = (*(volatile u8 *) (u32) (s1 + 102));
    a4 = 100;
    a0 = (s32) 0x650000U;
    a1 = (s32) 0x660000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 103));
    a0 = (s32) ((u32) a0 + 0x7950U);
    if ((s32) a4 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) a4); hi = (s32) ((s32) a2 % (s32) a4); lo = q_; }
    v0 = (*(volatile u8 *) (u32) (s1 + 104));
    a2 = hi;
    if ((s32) a4 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a4); hi = (s32) ((s32) v1 % (s32) a4); lo = q_; }
    a3 = hi;
    if ((s32) a4 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a4); hi = (s32) ((s32) v0 % (s32) a4); lo = q_; }
    a4 = hi;
    a1 = (s32) ((u32) a1 + 0xffffac80U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s0 + 408));
    a1 = (s32) 0x650000U;
    a1 = (s32) ((u32) a1 + 0x7950U); func_0063AD20(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s1 + 44));
    v0 = 1;
    if (v1 != v0) goto L_0062F3B0;
    a2 = (*(volatile u8 *) (u32) (s1 + 96));
    a4 = 100;
    a0 = (s32) 0x650000U;
    a1 = (s32) 0x660000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 97));
    a0 = (s32) ((u32) a0 + 0x7960U);
    if ((s32) a4 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) a4); hi = (s32) ((s32) a2 % (s32) a4); lo = q_; }
    v0 = (*(volatile u8 *) (u32) (s1 + 98));
    a2 = hi;
    if ((s32) a4 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a4); hi = (s32) ((s32) v1 % (s32) a4); lo = q_; }
    a3 = hi;
    if ((s32) a4 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a4); hi = (s32) ((s32) v0 % (s32) a4); lo = q_; }
    a4 = hi;
    a1 = (s32) ((u32) a1 + 0xffffac80U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a1 = (s32) 0x650000U;
    a1 = (s32) ((u32) a1 + 0x7960U); goto L_0062F3B8;
L_0062F3B0:;
    a1 = (s32) 0x650000U;
    a1 = (s32) ((u32) a1 + 0x7898U);
L_0062F3B8:;
    a0 = (*(volatile s32 *) (u32) (s0 + 440)); func_0063AD20(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s1 + 44));
    v0 = 1;
    if (v1 != v0) goto L_0062F3D8;
    s2 = (s32) ((u32) s1 + 0x2dU); goto L_0062F3E0;
L_0062F3D8:;
    s2 = (s32) 0x650000U;
    s2 = (s32) ((u32) s2 + 0x7898U);
L_0062F3E0:;
    a0 = (*(volatile s32 *) (u32) (s0 + 444));
    a1 = s2; func_0063AD20(a0, a1, a2, a3);
    a4 = (*(volatile u8 *) (u32) (s0 + 596));
    v1 = (s32) 0x650000U;
    v0 = (s32) 0x650000U;
    v1 = (s32) ((u32) v1 + 0x7818U);
    v0 = (s32) ((u32) v0 + 0x782aU);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (s32) ((u32) a4 << 1);
    a2 = (*(volatile s32 *) (u32) (s0 + 444));
    a4 = (s32) ((u32) a1 + (u32) a4);
    a1 = (s32) ((u32) v1 + (u32) a4);
    v1 = (s32) ((u32) a4 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) a1);
    a1 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a3 = s2; func_0063AC30(a0, a1, a2, a3, f12.f);
    v1 = (*(volatile u8 *) (u32) (s1 + 44));
    v0 = 1;
    if (v1 != v0) goto L_0062F478;
    v1 = (*(volatile u16 *) (u32) (s1 + 100));
    v0 = 10000;
    a0 = (s32) 0x650000U;
    a1 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0x7970U);
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a2 = hi;
    a1 = (s32) ((u32) a1 + 0xffffac90U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a1 = (s32) 0x650000U;
    a1 = (s32) ((u32) a1 + 0x7970U); goto L_0062F480;
L_0062F478:;
    a1 = (s32) 0x650000U;
    a1 = (s32) ((u32) a1 + 0x7898U);
L_0062F480:;
    a0 = (*(volatile s32 *) (u32) (s0 + 448)); func_0063AD20(a0, a1, a2, a3);
    a2 = (*(volatile u8 *) (u32) (s0 + 596));
    v1 = (s32) 0x650000U;
    v1 = (s32) ((u32) v1 + 0x7818U);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (s32) ((u32) a2 << 1);
    a0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_001D7D60(a0, a1);
    return;
}
