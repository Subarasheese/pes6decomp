/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Scene_Get(s32);
void func_00C897C0(s32, s32);

void func_00C93700(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    s3 = a0;
    a0 = 0;
    v0 = Pes6Scene_Get(a0);
    v1 = 12;
    if (v0 == v1) { ; goto L_00C93840; }
    s1 = (*(volatile s32 *) (u32) (gp + -19132));
    if (s1 == 0) goto L_00C93828;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    { s32 c_ = v1 <= 0; s2 = 0; if (c_) goto L_00C93828; }
    { s32 c_ = v1 <= 0; s0 = (s32) ((u32) s1 + 0xcU); if (c_) goto L_00C93828; }
L_00C93750:;
    if (s0 == 0) goto L_00C93798;
    a0 = s2 & 0x1f;
    v1 = 1;
    a2 = (s32) ((u32) v1 << (a0 & 31));
    v1 = (s32) ((u32) s2 >> 5);
    a1 = (s32) ((u32) v1 << 2);
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) a0);
    v1 = v1 | a2;
    { s32 c_ = s3 != 0; (*(volatile u32 *) (u32) a0) = (u32) v1; if (c_) goto L_00C93798; }
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) a0);
    v1 = v1 ^ a2;
    (*(volatile u32 *) (u32) a0) = (u32) v1;
L_00C93798:;
    a4 = (*(volatile s32 *) (u32) (gp + -19132));
    if (a4 == 0) goto L_00C93810;
    a0 = (s32) ((u32) s2 >> 5);
    v1 = s2 & 0x1f;
    a2 = (s32) ((u32) a0 << 2);
    a1 = 1;
    a0 = (s32) ((u32) a1 << (v1 & 31));
    a3 = (*(volatile s32 *) (u32) a4);
    v1 = (*(volatile s32 *) (u32) (a4 + 12));
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = a0 & v1;
    { s32 c_ = v1 == 0; v0 = 0; if (c_) goto L_00C937F0; }
    v1 = (*(volatile s32 *) (u32) (a4 + 20));
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = a0 & v1;
    if (v1 == 0) goto L_00C937F0;
    v0 = a1;
L_00C937F0:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u16 *) (u32) (v1 + 7662));
    a0 = (s32) ((u32) a3 + (u32) s2);
    v1 = v1 & 0x20;
    v1 = (s32) v1 >> 5;
    v0 = v0 & v1;
    a1 = v0 & 0xff; func_00C897C0(a0, a1);
L_00C93810:;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < v1;
    if (v1 != 0) goto L_00C93750;
L_00C93828:;
    a1 = -1;
    a0 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (a0 + -9976)) = (u32) a1;
    (*(volatile u32 *) (u32) (v1 + -9972)) = (u32) a1;
L_00C93840:;
    return;
}
