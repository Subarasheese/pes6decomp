/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s32, s32);
void func_001DF420(s32, s32);
void func_001ED8F0(s32, s32);
s32 func_001EDC80(s32, s32);
s32 func_002F9630(s32);
s32 func_002F96F0(s32, s32);
void func_0035F400(s32, s32, s32);

void func_003604D0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) ((u32) gp + 0xffffac5cU);
    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (gp + -21416));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile u8 *) (u32) (a0 + 32));
    v1 = v1 & 0x1;
    if (v1 == 0) goto L_00360690;
    a0 = (*(volatile s32 *) (u32) a0); v0 = func_002F9630(a0);
    s1 = v0;
    { s32 c_ = s1 <= 0; s2 = 0; if (c_) goto L_00360560; }
    v1 = (*(volatile s32 *) (u32) (gp + -21416));
L_00360528:;
    v0 = (s32) ((u32) gp + 0xffffac5cU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s2; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = s0 & 0xff; func_001D76B0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < s1;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -21416)); goto L_00360528; }
L_00360560:;
    v1 = (*(volatile s32 *) (u32) (gp + -21416));
    v0 = (s32) ((u32) gp + 0xffffac5cU);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s1; goto L_00360594; }
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s1;
L_00360594:;
    a1 = s0 & 0xff; func_001ED8F0(a0, a1);
    s1 = (s32) 0x3e0000U;
    s3 = 0;
    s1 = (s32) ((u32) s1 + 0x6d20U);
L_003605A8:;
    v1 = (s32) ((u32) sp + 0x50U);
    { s32 c_ = v1 == 0; v0 = 16; if (c_) goto L_003605D0; }
L_003605B4:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_003605B4;
L_003605D0:;
    v1 = (*(volatile s32 *) (u32) (gp + -21416));
    v0 = (s32) ((u32) gp + 0xffffac5cU);
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) s0;
    a1 = 0;
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) s0;
    v1 = (s32) ((u32) v1 << 2);
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) s0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) s0;
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_00360610;
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
L_00360610:;
    a1 = (*(volatile s32 *) (u32) s1);
    a0 = s2; v0 = func_001EDC80(a0, a1);
    a0 = v0;
    a1 = s3;
    a2 = (s32) ((u32) sp + 0x50U); func_0035F400(a0, a1, a2);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = (u64) s3 < (u64) (s64) 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_003605A8; }
    s2 = 1;
    v1 = (*(volatile s32 *) (u32) (gp + -21416));
L_00360644:;
    v0 = (s32) ((u32) gp + 0xffffac5cU);
    a1 = s2;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_00360670;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_00360670:;
    a0 = s1;
    a1 = s0 & 0xff; func_001DF420(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 5;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -21416)); goto L_00360644; }
L_00360690:;
    return;
}
