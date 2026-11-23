/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0010E560(s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);
s32 strcmp(s32, s32);

void func_001206C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 gp = 0x3ef370;

    s5 = (s32) 0x3f0000U;
    s4 = (s32) 0x370000U;
    s5 = (s32) ((u32) s5 + 0x77b0U);
    s4 = (s32) ((u32) s4 + 0x4850U);
    s3 = 0;
L_001206F4:;
    v1 = (*(volatile s32 *) (u32) s4);
    a0 = (s32) 0x3f0000U;
    a1 = (s32) 0x3c0000U;
    v0 = (s32) ((u32) gp + 0xffff8090U);
    a3 = (*(volatile s32 *) (u32) (s4 + 4));
    a0 = (s32) ((u32) a0 + 0x77b0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) a1 + 0x5620U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s4 + 8));
    a1 = (s32) 0x3c0000U;
    a1 = (s32) ((u32) a1 + 0x54e8U); v0 = strcmp(a0, a1);
    if (v0 == 0) goto L_00120750;
    v0 = (*(volatile s32 *) (u32) (s4 + 12));
    if (v0 != 0) goto L_00120750;
    v0 = 4;
    (*(volatile u32 *) (u32) (s4 + 12)) = (u32) v0;
L_00120750:;
    v0 = (s32) 0x370000U;
    v0 = (s32) ((u32) v0 + 0x4850U);
    v0 = (s32) ((u32) v0 + (u32) s3);
    s2 = (s32) ((u32) v0 + 0x8U);
    s1 = (s32) ((u32) v0 + 0xcU);
    s0 = (s32) ((u32) v0 + 0x10U);
L_00120768:;
    a1 = (*(volatile s32 *) (u32) s1);
    a2 = (*(volatile s32 *) (u32) s2);
    a0 = s5; v0 = func_0010E560(a0, a1, a2);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    if (v0 < 0) goto L_00120768;
    s4 = (s32) ((u32) s4 + 0x14U);
    v1 = (*(volatile s32 *) (u32) (s4 + 4));
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x14U); if (c_) goto L_001206F4; }
    return;
}
