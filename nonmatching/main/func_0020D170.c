/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0020C6E0(s32, s32, s32, s32, s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_0020D170(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 frame[112];
    s32 sp = (s32) (u32) frame;

    s6 = (s32) 0x590000U;
    s5 = 0;
    s6 = (s32) ((u32) s6 + 0x2980U);
    s3 = (s32) ((u32) sp + 0x280U);
    s2 = (s32) ((u32) sp + 0x180U);
    s1 = (s32) ((u32) sp + 0x80U);
L_0020D1AC:;
    s4 = 0;
    s0 = s6;
L_0020D1B8:;
    v0 = (*(volatile u8 *) (u32) (s0 + 16));
    a1 = (s32) 0x3d0000U;
    a0 = s3;
    a1 = (s32) ((u32) a1 + 0x4280U);
    a2 = (s32) ((u32) v0 + 0x1U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (s32) 0x3d0000U;
    (*(volatile u32 *) (u32) s2) = (u32) s3;
    v1 = (s32) ((u32) v1 + 0x4288U);
    s4 = (s32) ((u32) s4 + 0x1U);
    (*(volatile u32 *) (u32) s1) = (u32) v1;
    s3 = (s32) ((u32) s3 + 0x4U);
    v1 = s4 < 32;
    s2 = (s32) ((u32) s2 + 0x4U);
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x348U); if (c_) goto L_0020D1B8; }
    s5 = (s32) ((u32) s5 + 0x1U);
    v1 = s5 < 2;
    { s32 c_ = v1 != 0; s6 = (s32) ((u32) s6 + 0x6900U); if (c_) goto L_0020D1AC; }
    v1 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 31484));
    if (v1 != 0) goto L_0020D244;
    a0 = (s32) ((u32) sp + 0x180U);
    a1 = 64;
    a2 = 33;
    a3 = 0;
    a4 = 0;
    a5 = 0;
    a6 = 0; v0 = func_0020C6E0(a0, a1, a2, a3, a4, a5, a6);
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + 31484)) = (u32) v0;
L_0020D244:;
    v1 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 31488));
    if (v1 != 0) { ; goto L_0020D280; }
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = 64;
    a2 = 33;
    a3 = 0;
    a4 = 0;
    a5 = 0;
    a6 = 0; v0 = func_0020C6E0(a0, a1, a2, a3, a4, a5, a6);
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + 31488)) = (u32) v0;
L_0020D280:;
    return;
}
