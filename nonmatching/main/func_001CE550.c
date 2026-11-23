/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void memset(s64, s64, s64);

void func_001CE550(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v0 = (s32) 0x530000U;
    a2 = 2048;
    s3 = a0;
    s2 = a1;
    a0 = (s32) 0x530000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -21824));
    a0 = (s32) ((u32) a0 + 0xffff9ac0U);
    a1 = 0;
    s0 = (s32) ((u32) s3 + 0x4U); memset(a0, a1, a2);
    v1 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -21812));
    if (v1 == 0) goto L_001CE668;
    a2 = (s32) 0x530000U;
    a2 = (s32) ((u32) a2 + 0xffff9ac0U);
L_001CE5A8:;
    a1 = (*(volatile u8 *) (u32) s1);
    a0 = (*(volatile u8 *) (u32) s3);
    a0 = a1 < a0;
    if (a0 != 0) goto L_001CE658;
    a0 = (*(volatile u8 *) (u32) s0);
    at = a0 < a1;
    if (at != 0) goto L_001CE658;
    a1 = (*(volatile u8 *) (u32) (s1 + 1));
    a0 = (*(volatile u8 *) (u32) (s3 + 1));
    a0 = a1 < a0;
    if (a0 != 0) goto L_001CE658;
    a0 = (*(volatile u8 *) (u32) (s0 + 1));
    at = a0 < a1;
    if (at != 0) goto L_001CE658;
    a1 = (*(volatile u8 *) (u32) (s1 + 2));
    a0 = (*(volatile u8 *) (u32) (s3 + 2));
    a0 = a1 < a0;
    if (a0 != 0) goto L_001CE658;
    a0 = (*(volatile u8 *) (u32) (s0 + 2));
    at = a0 < a1;
    if (at != 0) goto L_001CE658;
    a1 = (*(volatile u8 *) (u32) (s1 + 3));
    a0 = (*(volatile u8 *) (u32) (s3 + 3));
    a0 = a1 < a0;
    if (a0 != 0) goto L_001CE658;
    a0 = (*(volatile u8 *) (u32) (s0 + 3));
    at = a0 < a1;
    if (at != 0) goto L_001CE658;
    a0 = (s32) ((u32) s2 + (u32) s1);
    a0 = (*(volatile u8 *) (u32) a0);
    a0 = (s32) ((u32) a0 << 3);
    a1 = (s32) ((u32) a2 + (u32) a0);
    a0 = (*(volatile s64 *) (u32) a1);
    a0 = (s64) ((u64) a0 + (u64) (s64) 1);
    (*(volatile u64 *) (u32) a1) = (u64) a0;
L_001CE658:;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_001CE5A8; }
L_001CE668:;
    return;
}
