/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002AE670(s64);
s64 func_00A98F80(s64);

void func_009973F0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a0;
    s0 = (*(volatile u8 *) (u32) (a0 + 18));
    s2 = a1; v0 = func_00A98F80(a0);
    v1 = 3;
    { s32 c_ = s2 == v1; s1 = v0; if (c_) goto L_0099758C; }
    a3 = 2;
    if (s2 == a3) { v1 = (s32) ((u32) s0 << 2); goto L_00997550; }
    v0 = 1;
    if (s2 == v0) { v0 = (s32) ((u32) s0 << 2); goto L_009974C8; }
    v0 = (s32) ((u32) s0 << 2);
    a0 = 20;
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) ((u32) v0 << 1);
    s0 = (s32) ((u32) v0 + (u32) s0); v0 = func_002AE670(a0);
    v1 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x2943U);
    a2 = 0;
    v1 = (s32) ((u32) v1 + (u32) s0);
    a1 = (s32) ((u32) a1 + 0x2800U);
    v1 = (s32) ((u32) s1 + (u32) v1);
    (*(volatile u8 *) (u32) v1) = (u8) v0;
    a0 = (*(volatile u8 *) (u32) s3);
L_00997478:;
    v1 = (*(volatile u8 *) (u32) (a1 + 16));
    if (a0 != v1) goto L_0099749C;
    v1 = (*(volatile u8 *) (u32) a1);
    at = v1 < 8;
    if (at == 0) goto L_0099749C;
    a0 = a2 & 0xff; goto L_009974B0;
L_0099749C:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 8;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x28U); if (c_) goto L_00997478; }
    a0 = (s64) ((u64) 0 + (u64) (s64) 255);
L_009974B0:;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x295dU);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (s32) ((u32) s1 + (u32) v1);
    (*(volatile u8 *) (u32) v1) = (u8) a0; goto L_009975B8;
L_009974C8:;
    a0 = 20;
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) ((u32) v0 << 1);
    s0 = (s32) ((u32) v0 + (u32) s0); v0 = func_002AE670(a0);
    v1 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x2943U);
    a2 = 0;
    v1 = (s32) ((u32) v1 + (u32) s0);
    a1 = (s32) ((u32) a1 + 0x2800U);
    v1 = (s32) ((u32) s1 + (u32) v1);
    (*(volatile u8 *) (u32) v1) = (u8) v0;
    a0 = (*(volatile u8 *) (u32) s3);
L_00997500:;
    v1 = (*(volatile u8 *) (u32) (a1 + 16));
    if (a0 != v1) goto L_00997524;
    v1 = (*(volatile u8 *) (u32) a1);
    at = v1 < 8;
    if (at == 0) goto L_00997524;
    a0 = a2 & 0xff; goto L_00997538;
L_00997524:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 8;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x28U); if (c_) goto L_00997500; }
    a0 = (s64) ((u64) 0 + (u64) (s64) 255);
L_00997538:;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x295dU);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (s32) ((u32) s1 + (u32) v1);
    (*(volatile u8 *) (u32) v1) = (u8) a0; goto L_009975B8;
L_00997550:;
    a1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) s0);
    a1 = (s32) ((u32) a1 + 0x2943U);
    a2 = (s32) ((u32) v1 << 1);
    a0 = 255;
    v1 = (s32) 0x590000U;
    a2 = (s32) ((u32) a2 + (u32) s0);
    v1 = (s32) ((u32) v1 + 0x295dU);
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = (s32) ((u32) v1 + (u32) a2);
    a1 = (s32) ((u32) s1 + (u32) a1);
    v1 = (s32) ((u32) s1 + (u32) v1);
    (*(volatile u8 *) (u32) a1) = (u8) a3;
    (*(volatile u8 *) (u32) v1) = (u8) a0; goto L_009975B8;
L_0099758C:;
    a0 = 16; v0 = func_002AE670(a0);
    a0 = (s32) ((u32) s0 << 2);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) s0);
    v1 = (s32) ((u32) v1 + 0x2943U);
    a0 = (s32) ((u32) a0 << 1);
    a0 = (s32) ((u32) a0 + (u32) s0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) s1 + (u32) v1);
    (*(volatile u8 *) (u32) v1) = (u8) v0;
L_009975B8:;
    return;
}
