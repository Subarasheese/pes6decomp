/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BC8B90(s32, s32, s32, s32);

s32 func_00368850(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v0 = (s32) 0xcc0000U;
    v0 = (s32) ((u32) v0 + 0xffffd3b7U);
    s3 = a0;
    s2 = a1;
    s0 = a3;
    a0 = s0 & 0xff;
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    { s32 c_ = v0 == 0; s1 = a2; if (c_) goto L_003688B4; }
    a0 = s0; v0 = func_00BC8B90(a0, a1, a2, a3);
    if (v0 == 0) { v0 = 10; goto L_00368958; }
L_003688B4:;
    a0 = s0; v0 = func_00BC8B90(a0, a1, a2, a3);
    if (v0 == 0) goto L_003688D0;
    v0 = s1 & 0xff;
    v0 = v0 ^ 0x1;
    s1 = v0 & 0xff;
L_003688D0:;
    v0 = s1 & 0xff;
    v1 = v0 ^ 0x1;
    v0 = (s32) ((u32) v0 << 1);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) s2 + (u32) v0);
    v1 = (s32) ((u32) s2 + (u32) v1);
    a1 = (*(volatile s16 *) (u32) v0);
    a2 = (*(volatile s16 *) (u32) v1);
    at = a2 < a1;
    if (at == 0) goto L_0036893C;
    a0 = (*(volatile s16 *) (u32) (s2 + 2));
    v1 = 1;
    v0 = (*(volatile s16 *) (u32) s2);
    v0 = (s32) ((u32) a0 + (u32) v0);
    if (v0 != v1) { v0 = (s32) ((u32) a1 - (u32) a2); goto L_00368920; }
    v0 = 5;
    (*(volatile u32 *) (u32) s3) = (u32) v0; goto L_0036895C;
L_00368920:;
    if (v0 != v1) { v0 = 7; goto L_00368934; }
    v0 = 4;
    (*(volatile u32 *) (u32) s3) = (u32) v0; goto L_0036895C;
L_00368934:;
    (*(volatile u32 *) (u32) s3) = (u32) v0; goto L_0036895C;
L_0036893C:;
    if (a1 != a2) { v0 = 1; goto L_00368950; }
    v0 = 2;
    (*(volatile u32 *) (u32) s3) = (u32) v0; goto L_0036895C;
L_00368950:;
    (*(volatile u32 *) (u32) s3) = (u32) v0; goto L_0036895C;
L_00368958:;
    (*(volatile u32 *) (u32) s3) = (u32) v0;
L_0036895C:;
    v0 = 1;
    return v0;
}
