/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F18D0(s32, s32);
void func_0020E310(s32, s32);
void func_002E5A90(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002E5D40(s32, s32, s32, s32);

void func_002E57D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    if (s3 == 0) goto L_002E58B4;
    at = a1 < 2;
    if (at != 0) goto L_002E5804;
    a1 = 1; goto L_002E5814;
L_002E5804:;
    if (a1 >= 0) goto L_002E5814;
    a1 = 0; goto L_002E5814;
L_002E5814:;
    v1 = (*(volatile s32 *) (u32) (s3 + 16));
    if (a1 == v1) { ; goto L_002E58B8; }
    { s32 c_ = a1 != 0; (*(volatile u32 *) (u32) (s3 + 16)) = (u32) a1; if (c_) goto L_002E583C; }
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x5cU); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 32)); goto L_002E584C;
L_002E583C:;
    a0 = 3;
    a1 = (s32) ((u32) sp + 0x5cU); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 32));
L_002E584C:;
    a1 = (s32) ((u32) sp + 0x5cU); func_001F18D0(a0, a1);
    s2 = 0;
    s1 = s3;
    s0 = s3;
L_002E5860:;
    { s32 c_ = s3 == 0; a0 = (*(volatile s32 *) (u32) (s1 + 48)); if (c_) goto L_002E5898; }
    v1 = (*(volatile s32 *) (u32) s3);
    v0 = 2;
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 != v0) goto L_002E5888;
    v0 = 1;
    if (s2 == v0) goto L_002E5898;
L_002E5888:;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) a0;
    a0 = s3;
    a1 = s2; func_002E5A90(a0, a1, a2, a3, a4, a5, a6, a7);
L_002E5898:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    s1 = (s32) ((u32) s1 + 0x10U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x10U); if (c_) goto L_002E5860; }
    a0 = s3; func_002E5D40(a0, a1, a2, a3);
L_002E58B4:;
L_002E58B8:;
    return;
}
