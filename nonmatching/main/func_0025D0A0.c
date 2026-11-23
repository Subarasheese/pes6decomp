/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001ED2B0(s32, s32);
void memset(s32, s32, s32);

void func_0025D0A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xffffcfe0U);
    a1 = 0;
    s2 = (s32) ((u32) sp + 0x4dU);
    s1 = (s32) ((u32) sp + 0x4eU);
    a4 = (*(volatile u8 *) (u32) (gp + -32336));
    s0 = (s32) ((u32) sp + 0x4fU);
    a3 = (*(volatile u8 *) (u32) (gp + -32335));
    a2 = 364;
    v1 = (*(volatile u8 *) (u32) (gp + -32334));
    v0 = (*(volatile u8 *) (u32) (gp + -32333));
    (*(volatile u8 *) (u32) (sp + 76)) = (u8) a4;
    (*(volatile u8 *) (u32) s2) = (u8) a3;
    (*(volatile u8 *) (u32) s1) = (u8) v1;
    (*(volatile u8 *) (u32) s0) = (u8) v0; memset(a0, a1, a2);
    a0 = (s32) 0x3f800000U;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + -12252)) = (u32) a0;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + -12192)) = (u32) a0;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + -12132)) = (u32) a0;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + -12072)) = (u32) a0;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + -12012)) = (u32) a0;
    v1 = (s32) ((u32) sp + 0x4cU);
    if (v1 == 0) goto L_0025D1D8;
    a5 = (*(volatile u8 *) (u32) s2);
    a0 = (s32) 0x590000U;
    a4 = (*(volatile u8 *) (u32) s1);
    v1 = (s32) 0x590000U;
    a3 = (*(volatile u8 *) (u32) s0);
    a1 = (s32) 0x590000U;
    a6 = (*(volatile u8 *) (u32) (sp + 76));
    a2 = 255;
    (*(volatile u8 *) (u32) (a0 + -11979)) = (u8) a5;
    (*(volatile u8 *) (u32) (v1 + -11978)) = (u8) a4;
    { s32 c_ = a3 != a2; (*(volatile u8 *) (u32) (a1 + -11980)) = (u8) a6; if (c_) goto L_0025D164; }
    a1 = 128; goto L_0025D168;
L_0025D164:;
    a1 = (s32) a3 >> 1;
L_0025D168:;
    v1 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -11960));
    { s32 c_ = v1 == 0; (*(volatile u8 *) (u32) (a0 + -11977)) = (u8) a1; if (c_) goto L_0025D1D8; }
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -11992));
    v1 = 0 < v1;
    { s32 c_ = v1 != 0; s1 = 0; if (c_) goto L_0025D1E0; }
L_0025D190:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -11990));
    at = 0 < v1;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_0025D1D8; }
    s1 = 0;
L_0025D1A8:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -11984));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x4cU); func_001ED2B0(a0, a1);
    v1 = (s32) 0x590000U;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = (*(volatile s16 *) (u32) (v1 + -11990));
    v1 = s0 < v1;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0025D1A8; }
L_0025D1D8:;
    goto L_0025D21C;
L_0025D1E0:;
    s0 = 0;
L_0025D1E4:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -11988));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x4cU); func_001ED2B0(a0, a1);
    v1 = (s32) 0x590000U;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = (*(volatile s16 *) (u32) (v1 + -11992));
    v1 = s1 < v1;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_0025D1E4; }
    goto L_0025D190;
L_0025D21C:;
    return;
}
