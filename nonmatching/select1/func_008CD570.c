/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DF460(s32, s32);
s32 func_001F08B0(s32);
void func_0020E310(s32, s32);
void func_008B2F10(s32, s32, s32, s32);
void func_008B2F30(s32, s32, s32, s32);
s32 func_008CC830(void);
void memset(s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008CD570(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[524];
    s32 sp = (s32) (u32) frame;

    v0 = func_008CC830();
    s1 = v0;
    if (s1 == 0) { ; goto L_008CD698; }
    a0 = (s32) ((u32) sp + 0x50U);
    a1 = 0;
    a2 = 4096; memset(a0, a1, a2);
    v0 = (s32) 0xc80000U;
    a0 = v0 | 0x45; v0 = func_001F08B0(a0);
    s0 = v0;
    v0 = (s32) 0xc80000U;
    a0 = v0 | 0x5b; v0 = func_001F08B0(a0);
    a1 = (s32) 0x8e0000U;
    a2 = s0;
    a3 = v0;
    a0 = (s32) ((u32) sp + 0x50U);
    a1 = (s32) ((u32) a1 + 0xffffaac0U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s1 + 12));
    a1 = (s32) ((u32) sp + 0x50U); func_008B2F30(a0, a1, a2, a3);
    s2 = 0;
    s0 = s2 & 0xff;
L_008CD5F0:;
    v0 = (s32) 0xc80000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = v0 | 0x5d;
    v1 = (s32) ((u32) s1 + (u32) v1);
    a1 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v1 + 52));
    s3 = (s32) ((u32) v1 + 0x34U); func_008B2F10(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s1 + 180));
    if (v0 != 0) goto L_008CD638;
    if (s0 != 0) goto L_008CD638;
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x105cU); func_0020E310(a0, a1);
    goto L_008CD670;
L_008CD638:;
    if (v0 != 0) goto L_008CD660;
    if (s0 == 0) goto L_008CD660;
    a0 = 4;
    a1 = (s32) ((u32) sp + 0x105cU); func_0020E310(a0, a1);
    goto L_008CD670;
L_008CD660:;
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x105cU); func_0020E310(a0, a1);
L_008CD670:;
    v0 = (*(volatile s32 *) (u32) s3);
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) sp + 0x105cU); func_001DF460(a0, a1);
    v1 = (s32) ((u32) s2 + 0x1U);
    s2 = v1 & 0xff;
    v1 = s2 < 3;
    if (v1 != 0) { s0 = s2 & 0xff; goto L_008CD5F0; }
L_008CD698:;
    return;
}
