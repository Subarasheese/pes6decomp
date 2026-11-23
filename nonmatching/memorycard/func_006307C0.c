/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D6EF0(s32, s32, s32, s32);
void func_0063ABF0(s32, s32, s32);

void func_006307C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    s2 = a0;
    s1 = 0;
    s0 = s2;
L_006307E0:;
    v0 = (*(volatile s32 *) (u32) (s0 + 404));
    if (v0 != 0) goto L_00630840;
    v0 = (s32) 0x660000U;
    a3 = (*(volatile u8 *) (u32) (s2 + 596));
    a1 = (*(volatile s32 *) (u32) (v0 + -9852));
    a0 = (s32) ((u32) gp + 0xffff8370U);
    a2 = (s32) 0x650000U;
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    a0 = (s32) ((u32) a0 + (u32) a3);
    a2 = (s32) ((u32) a2 + 0x7820U);
    v0 = (*(volatile u8 *) (u32) a0);
    a0 = (s32) ((u32) a3 << 1);
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) a0 + (u32) a3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a2 + (u32) a0);
    v1 = (s32) ((u32) s1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v0);
    a2 = (*(volatile u8 *) (u32) v1); v0 = func_001D6EF0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 404)) = (u32) v0;
L_00630840:;
    a3 = (*(volatile u8 *) (u32) (s2 + 596));
    v1 = (s32) ((u32) gp + 0xffff8370U);
    v0 = (s32) 0x650000U;
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (s32) ((u32) v0 + 0x7820U);
    a1 = (s32) ((u32) v1 + (u32) a3);
    v1 = (s32) ((u32) a3 << 1);
    a1 = (*(volatile u8 *) (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a3);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) s1 + (u32) v0);
    v1 = (s32) ((u32) a0 + (u32) v1);
    a1 = (*(volatile u8 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v1);
    a2 = (*(volatile s32 *) (u32) (s0 + 404)); func_0063ABF0(a0, a1, a2);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 12;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_006307E0; }
    s0 = 0;
    s1 = s2;
L_006308A0:;
    v0 = (*(volatile s32 *) (u32) (s1 + 300));
    if (v0 != 0) goto L_006308F8;
    v0 = (s32) 0x660000U;
    a3 = (*(volatile u8 *) (u32) (s2 + 596));
    a1 = (*(volatile s32 *) (u32) (v0 + -9852));
    a0 = (s32) ((u32) gp + 0xffff8374U);
    a2 = (s32) 0x650000U;
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    a0 = (s32) ((u32) a0 + (u32) a3);
    a2 = (s32) ((u32) a2 + 0x7840U);
    v0 = (*(volatile u8 *) (u32) a0);
    a0 = (s32) ((u32) a3 << 2);
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) a0 + (u32) a3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (s32) ((u32) a2 + (u32) a0);
    a0 = (s32) ((u32) s0 + (u32) a0);
    a2 = (*(volatile u8 *) (u32) a0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001D6EF0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 300)) = (u32) v0;
L_006308F8:;
    a3 = (*(volatile u8 *) (u32) (s2 + 596));
    v1 = (s32) ((u32) gp + 0xffff8374U);
    v0 = (s32) 0x650000U;
    v0 = (s32) ((u32) v0 + 0x7840U);
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    a1 = (s32) ((u32) v1 + (u32) a3);
    v1 = (s32) ((u32) a3 << 2);
    a1 = (*(volatile u8 *) (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) s0 + (u32) v0);
    v1 = (s32) ((u32) a1 << 2);
    a1 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) a0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a2 = (*(volatile s32 *) (u32) (s1 + 300)); func_0063ABF0(a0, a1, a2);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 5;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_006308A0; }
    return;
}
