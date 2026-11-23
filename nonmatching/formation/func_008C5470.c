/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008BA4D0(s32, s32, s32, s32, s32, s32);

s32 func_008C5470(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 frame[36];
    s32 sp = (s32) (u32) frame;

    fp = a6;
    s7 = a1;
    s6 = a5;
    s5 = a0;
    s4 = a2;
    s3 = a3;
    s2 = a4;
    s1 = 0;
    { s32 c_ = s3 <= 0; s0 = s7; if (c_) goto L_008C5580; }
L_008C54C4:;
    v0 = s1 < s6;
    if (v0 != 0) goto L_008C5548;
    a0 = s5;
    a1 = s0;
    a2 = s4;
    a3 = s1;
    a4 = s3;
    a5 = s2; v0 = func_008BA4D0(a0, a1, a2, a3, a4, a5);
    at = v0 < 2;
    if (at != 0) goto L_008C5580;
    at = s1 < fp;
    if (at == 0) goto L_008C5580;
    at = (u64) s7 < (u64) s0;
    if (at == 0) goto L_008C5528;
    v1 = (*(volatile s8 *) (u32) (s0 + -1));
    if (v1 != 0) goto L_008C5528;
    v1 = 10;
    (*(volatile u8 *) (u32) (s0 + -1)) = (u8) v1;
L_008C5528:;
    s0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s8 *) (u32) (s0 + -2));
    v1 = 32;
    if (a0 != v1) goto L_008C5570;
    (*(volatile u8 *) (u32) (s0 + -2)) = (u8) 0;
    s0 = (s32) ((u32) s0 + 0xffffffffU); goto L_008C5570;
L_008C5548:;
    a0 = s5;
    a1 = (s32) ((u32) sp + 0xa0U);
    a2 = s4;
    a3 = s1;
    a4 = s3;
    a5 = s2; v0 = func_008BA4D0(a0, a1, a2, a3, a4, a5);
    at = v0 < 2;
    if (at != 0) goto L_008C5580;
L_008C5570:;
    s3 = (s32) ((u32) s3 - (u32) v0);
    { s32 c_ = s3 > 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_008C54C4; }
L_008C5580:;
    v0 = (s32) ((u32) s1 - (u32) s6);
    v0 = v0 & 0xff;
    return v0;
}
