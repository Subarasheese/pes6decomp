/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_GetUnavailableFlag(void);
void func_001B9DD0(s32);
void func_001B9E30(s32, s32, s32, s32);
void func_002685F0(s32);

void func_0024BA00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0, s0 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    a1 = (s32) 0x3b0000U;
    a4 = (*(volatile s32 *) (u32) (v0 + -23640));
    s0 = a0;
    a3 = (*(volatile s32 *) (u32) (v1 + -23636));
    a0 = (s32) 0x3b0000U;
    a1 = (*(volatile s32 *) (u32) (a1 + -23624));
    a5 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    a7 = (*(volatile s32 *) (u32) (a5 + -23604));
    a2 = (*(volatile s32 *) (u32) (v0 + -23632));
    v1 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -23620));
    v1 = (*(volatile s32 *) (u32) (v1 + -23616));
    a5 = (s32) ((u32) sp + 0x20U);
    v0 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (sp + 128)) = (u32) a4;
    t4 = (*(volatile s32 *) (u32) (v0 + -23608));
    a4 = (s32) 0x3b0000U;
    a6 = (*(volatile s32 *) (u32) (a4 + -23600));
    (*(volatile u32 *) (u32) (sp + 132)) = (u32) a3;
    (*(volatile u32 *) (u32) (sp + 136)) = (u32) a2;
    a3 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) a1;
    a2 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) a0;
    a1 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) v1;
    a0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    a3 = (*(volatile s32 *) (u32) (a3 + -23592));
    a4 = 16;
    a2 = (*(volatile s32 *) (u32) (a2 + -23588));
    a1 = (*(volatile s32 *) (u32) (a1 + -23584));
    a0 = (*(volatile s32 *) (u32) (a0 + -23576));
    v1 = (*(volatile s32 *) (u32) (v1 + -23572));
    v0 = (*(volatile s32 *) (u32) (v0 + -23568));
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) t4;
    (*(volatile u32 *) (u32) (sp + 100)) = (u32) a7;
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) a6;
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) a3;
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) a2;
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) a1;
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) v1;
    { s32 c_ = a5 == 0; (*(volatile u32 *) (u32) (sp + 72)) = (u32) v0; if (c_) goto L_0024BAEC; }
L_0024BAD0:;
    (*(volatile u8 *) (u32) a5) = (u8) 0;
    a4 = (s32) ((u32) a4 + 0xffffffffU);
    a5 = (s32) ((u32) a5 + 0x1U);
    if (a4 != 0) goto L_0024BAD0;
L_0024BAEC:;
    v1 = (s32) ((u32) sp + 0x80U);
    v0 = (s32) ((u32) sp + 0x70U);
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) v1;
    v1 = (s32) ((u32) sp + 0x60U);
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) v0;
    v0 = (s32) ((u32) sp + 0x50U);
    (*(volatile u32 *) (u32) (sp + 40)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) v0;
    v1 = (s32) ((u32) sp + 0x38U);
    { s32 c_ = v1 == 0; v0 = 8; if (c_) goto L_0024BB34; }
L_0024BB18:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0024BB18;
L_0024BB34:;
    v1 = (s32) ((u32) sp + 0x40U);
    v0 = (s32) ((u32) sp + 0x60U);
    (*(volatile u32 *) (u32) (sp + 56)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0; v0 = Pes6SaveData_GetUnavailableFlag();
    v1 = 1;
    if (v0 != v1) { v1 = (s32) ((u32) sp + 0x20U); goto L_0024BB70; }
    v1 = (s32) ((u32) sp + 0x38U);
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v0 + -13440)) = (u32) v1;
    v1 = 2;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v0 + -13436)) = (u32) v1; goto L_0024BB84;
L_0024BB70:;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v0 + -13440)) = (u32) v1;
    v1 = 4;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v0 + -13436)) = (u32) v1;
L_0024BB84:;
    a0 = s0 & 0xffff; func_002685F0(a0);
    a0 = s0 & 0xff; func_001B9DD0(a0);
    a0 = (s32) 0x540000U;
    a0 = (s32) ((u32) a0 + 0xffffcb80U); func_001B9E30(a0, a1, a2, a3);
    return;
}
