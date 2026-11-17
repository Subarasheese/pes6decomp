/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00153FD0(s32, s32, s32, s32);
s32 func_001D5350(s32);
s32 func_001D6050(s32, s32, s32, s32);
s32 func_001DD420(s32, s32);

s32 func_001D51F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    s2 = a0;
    s0 = a1;
    { s32 c_ = s0 == 0; s1 = a2; if (c_) goto L_001D5254; }
    v1 = (*(volatile s32 *) (u32) (gp + -23084));
    if (v1 == 0) { v1 = 0; goto L_001D5244; }
L_001D5224:;
    v0 = (*(volatile s32 *) (u32) (v1 + 8));
    if (v0 != s2) { v1 = (*(volatile s32 *) (u32) (v1 + 4)); goto L_001D5238; }
    goto L_001D5244;
L_001D5238:;
    if (v1 != 0) goto L_001D5224;
    v1 = 0;
L_001D5244:;
    if (v1 == 0) { a0 = s0; goto L_001D525C; }
    v0 = 0; goto L_001D5334;
L_001D5254:;
    v0 = 0; goto L_001D5334;
L_001D525C:;
    v0 = func_001D5350(a0);
    a0 = s1;
    a1 = 1;
    a2 = 44; v0 = func_00153FD0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) s2;
    a1 = s1;
    (*(volatile u32 *) (u32) (v0 + 12)) = (u32) s0;
    s2 = v0;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = s2;
    (*(volatile u32 *) (u32) (v0 + 16)) = (u32) v1; v0 = func_001D6050(a0, a1, a2, a3);
    s0 = (*(volatile s32 *) (u32) (s0 + 12));
    a1 = (*(volatile s32 *) (u32) s0);
    if (a1 != 0) { a0 = s1; goto L_001D52D4; }
    (*(volatile u32 *) (u32) (s2 + 24)) = (u32) 0;
L_001D52A8:;
    v0 = (*(volatile s32 *) (u32) (gp + -23084));
L_001D52AC:;
    if (v0 == 0) { (*(volatile u32 *) (u32) (gp + -23084)) = (u32) s2; goto L_001D532C; }
    v0 = (*(volatile s32 *) (u32) (gp + -23080));
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) s2;
    v0 = (*(volatile s32 *) (u32) (gp + -23080));
    (*(volatile u32 *) (u32) s2) = (u32) v0;
L_001D52C4:;
    (*(volatile u32 *) (u32) (gp + -23080)) = (u32) s2;
    v0 = s2;
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) 0; goto L_001D5334;
L_001D52D4:;
    a2 = 4; v0 = func_00153FD0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s2 + 24)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) s0);
    at = (u64) 0 < (u64) v0;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_001D52A8; }
    s1 = 0;
L_001D52F4:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001DD420(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s2 + 24));
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = (s32) ((u32) v1 + (u32) s1);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = (u64) s3 < (u64) v0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_001D52F4; }
    v0 = (*(volatile s32 *) (u32) (gp + -23084)); goto L_001D52AC;
L_001D532C:;
    (*(volatile u32 *) (u32) s2) = (u32) 0; goto L_001D52C4;
L_001D5334:;
    return v0;
}
