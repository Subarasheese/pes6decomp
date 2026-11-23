/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7F10(s32, s32, s32, s32);
void func_001DF460(s32, s32);
void func_001DF820(s32, s32, s32, s32);
s32 func_001F08B0(s32);
void func_002C9E90(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008C59B0(s32, s32, s32, s32);
void func_008E5200(s32, s32, s32, s32, s32, s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008E6350(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    a1 = (*(volatile u8 *) (u32) (a0 + 478));
    s0 = a0; func_008E5200(a0, a1, a2, a3, a4, a5, a6, a7);
    a1 = (*(volatile s32 *) (u32) (s0 + 484));
    if (a1 == 0) { v1 = (*(volatile s32 *) (u32) (s0 + 2532)); goto L_008E63A0; }
    a0 = (*(volatile u16 *) (u32) a1);
    v1 = 0xffff;
    if (a0 == v1) goto L_008E639C;
    a1 = (s32) ((u32) a1 + 0x25U);
    a0 = (s32) ((u32) sp + 0x20U); func_002C9E90(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0x9ecU);
    a1 = (s32) ((u32) sp + 0x20U); func_008C59B0(a0, a1, a2, a3);
L_008E639C:;
    v1 = (*(volatile s32 *) (u32) (s0 + 2532));
L_008E63A0:;
    if (v1 == 0) { v1 = (*(volatile s32 *) (u32) (s0 + 2528)); goto L_008E63E8; }
    v1 = (*(volatile u8 *) (u32) (s0 + 691));
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffc660U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a1 = v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 2532));
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); func_001DF820(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 2532));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) gp + 0xffff85e0U); func_001DF460(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s0 + 2528));
L_008E63E8:;
    if (v1 == 0) { ; goto L_008E6464; }
    v1 = (*(volatile s32 *) (u32) (s0 + 484));
    if (v1 == 0) goto L_008E6460;
    a2 = (*(volatile u8 *) (u32) (v1 + 201));
    v0 = 255;
    if (a2 != v0) { v1 = (*(volatile u8 *) (u32) (v1 + 202)); goto L_008E6420; }
    a0 = (*(volatile s32 *) (u32) (s0 + 2516)); func_001D7F10(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 2516)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 2528)) = (u32) 0; goto L_008E6460;
L_008E6420:;
    a1 = (s32) 0x8f0000U;
    v0 = 10;
    a0 = (s32) ((u32) sp + 0x3cU);
    v1 = (s32) ((u32) a2 - (u32) v1);
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a2 = hi;
    a1 = (s32) ((u32) a1 + 0xffffe040U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (s0 + 2528));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) sp + 0x3cU); func_001DF820(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 2528));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) gp + 0xffff85e0U); func_001DF460(a0, a1);
L_008E6460:;
L_008E6464:;
    return;
}
