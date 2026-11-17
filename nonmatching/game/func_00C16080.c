/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C16270(s32);
s32 func_00C162F0(s32, s32);
s32 func_00C17D50(s32);

s32 func_00C16080(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 hi = 0, lo = 0;

    v0 = 0;
    s4 = a0;
    s3 = a1;
    s2 = a2;
    a3 = s4;
    s1 = 0;
    a2 = 0;
    a0 = 8;
    a1 = 3;
L_00C160C0:;
    v1 = (*(volatile s32 *) (u32) a3);
    if (v1 == 0) goto L_00C160F8;
    if (v1 != a1) goto L_00C160E8;
    v1 = (*(volatile s32 *) (u32) (a3 + 32));
    if (v1 != a0) goto L_00C160E8;
    s1 = a3; goto L_00C160F8;
L_00C160E8:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 10;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x40U); if (c_) goto L_00C160C0; }
L_00C160F8:;
    if (s1 == 0) goto L_00C16250;
    v1 = (*(volatile u8 *) (u32) (s1 + 4));
    v0 = 255;
    if (v1 == v0) goto L_00C16124;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00C16128;
L_00C16124:;
    a0 = 1;
L_00C16128:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (s0 + 18));
    v0 = (*(volatile u8 *) (u32) (s0 + 17));
    v1 = (s32) ((u32) v1 << 5);
    v0 = v0 & 0x1f;
    v0 = v1 | v0;
    (*(volatile u8 *) (u32) s2) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 18));
    v0 = v0 ^ 0x1;
    a0 = v0 & 0xff; v0 = func_00C17D50(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) goto L_00C161A0;
    v0 = (*(volatile u8 *) (u32) (s0 + 18));
    v0 = v0 ^ 0x1;
    a0 = v0 & 0xff; v0 = func_00C17D50(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00C161A4;
L_00C161A0:;
    a0 = 1;
L_00C161A4:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = s3 ^ 0x1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (u64) v0 < (u64) (s64) 1;
    a0 = (s32) ((u32) v1 << 6);
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (*(volatile u8 *) (u32) (v1 + 18));
    v1 = (*(volatile u8 *) (u32) (v1 + 17));
    a1 = (s32) ((u32) a1 << 5);
    v1 = v1 & 0x1f;
    v1 = a1 | v1;
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) v1;
    (*(volatile u8 *) (u32) (s2 + 2)) = (u8) v0;
    (*(volatile u8 *) (u32) (s2 + 3)) = (u8) 0;
    a1 = (*(volatile u8 *) (u32) (s2 + 1));
    a0 = s4; v0 = func_00C162F0(a0, a1);
    if (v0 != 0) goto L_00C16230;
L_00C161F8:;
    a0 = s4; v0 = func_00C16270(a0);
    if (v0 != 0) goto L_00C16240;
L_00C16208:;
    v0 = (*(volatile u8 *) (u32) (s1 + 37));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_00C16224;
    v0 = (*(volatile u8 *) (u32) (s2 + 3));
    v0 = v0 | 0x4;
    (*(volatile u8 *) (u32) (s2 + 3)) = (u8) v0;
L_00C16224:;
    v0 = 11;
    goto L_00C16254;
L_00C16230:;
    v0 = (*(volatile u8 *) (u32) (s2 + 3));
    v0 = v0 | 0x1;
    (*(volatile u8 *) (u32) (s2 + 3)) = (u8) v0; goto L_00C161F8;
L_00C16240:;
    v0 = (*(volatile u8 *) (u32) (s2 + 3));
    v0 = v0 | 0x2;
    (*(volatile u8 *) (u32) (s2 + 3)) = (u8) v0; goto L_00C16208;
L_00C16250:;
L_00C16254:;
    return v0;
}
