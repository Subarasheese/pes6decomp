/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001454C0(s64);
void func_00146C70(s64, s64, s64, s64, s64, s64, s64, s64);
void func_001473A0(s64, s64, s64, s64, s64, s64, s64, s64);
void func_00147610(s64, s64, s64, s64, s64, s64, s64, s64);

void func_00147140(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    s5 = a0;
    s4 = a1;
    v1 = (*(volatile s32 *) (u32) (a1 + 4));
    s2 = (*(volatile s32 *) (u32) (a1 + 8));
    at = (u64) 0 < (u64) v1;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_001471A0; }
L_0014717C:;
    a0 = (*(volatile s32 *) (u32) s2);
    if (a0 != 0) goto L_001471A8;
L_00147188:;
    v1 = (*(volatile s32 *) (u32) (s4 + 4));
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = (u64) s3 < (u64) v1;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_0014717C; }
L_001471A0:;
    goto L_00147370;
L_001471A8:;
    v0 = func_001454C0(a0);
    s1 = v0;
    if (s1 == 0) goto L_001471F8;
    a2 = (*(volatile s32 *) (u32) s5);
    v1 = a2 & 0xc;
    if (v1 == 0) goto L_00147218;
L_001471D0:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x4U);
    v1 = a2 & 0xc;
    if (v1 != 0) goto L_001471D0;
    goto L_00147218;
L_001471F8:;
    a2 = (*(volatile s32 *) (u32) s2);
    a0 = (s32) 0x3c0000U;
    a1 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x6bf0U);
    a1 = (s32) ((u32) a1 + 0x6bd0U); func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00147188;
L_00147218:;
    a1 = (*(volatile s32 *) (u32) (s5 + 8));
    if (a1 == 0) goto L_00147248;
    a0 = (s32) ((u32) a2 - (u32) a1);
    { s32 c_ = a0 >= 0; v1 = (s32) a0 >> 4; if (c_) goto L_00147238; }
    v1 = (s32) ((u32) a0 + 0xfU);
    v1 = (s32) v1 >> 4;
L_00147238:;
    a0 = (s32) ((u32) v1 + 0xffffffffU);
    v1 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) a1) = (u32) v1;
L_00147248:;
    (*(volatile u32 *) (u32) s5) = (u32) a2;
    (*(volatile u32 *) (u32) (s5 + 8)) = (u32) 0;
    v1 = (s32) 0x10000000U;
    s0 = (*(volatile s32 *) (u32) s5);
    a0 = (s32) ((u32) s0 + 0x10U);
    (*(volatile u32 *) (u32) s5) = (u32) a0;
    { u32 a_ = (u32) (s0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    a0 = (*(volatile u16 *) (u32) (s1 + 16));
    v1 = (*(volatile s32 *) (u32) (s1 + 8));
    v1 = (u64) a0 < (u64) v1;
    if (v1 != 0) goto L_001472C8;
L_00147280:;
    a0 = (*(volatile u16 *) (u32) (s1 + 16));
    v1 = (*(volatile u16 *) (u32) (s1 + 18));
    if (a0 != v1) goto L_001472E0;
L_00147290:;
    a2 = (*(volatile s32 *) (u32) s5);
    v1 = a2 & 0xc;
    if (v1 == 0) goto L_001472F8;
L_001472A0:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x4U);
    v1 = a2 & 0xc;
    if (v1 != 0) goto L_001472A0;
    goto L_001472F8;
L_001472C8:;
    a0 = s5;
    a1 = s4;
    a2 = s1; func_00147610(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00147280;
L_001472E0:;
    a2 = s1;
    a0 = s5;
    a1 = s4; func_001473A0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00147290;
L_001472F8:;
    a1 = (*(volatile s32 *) (u32) (s5 + 8));
    if (a1 == 0) goto L_00147328;
    a0 = (s32) ((u32) a2 - (u32) a1);
    { s32 c_ = a0 >= 0; v1 = (s32) a0 >> 4; if (c_) goto L_00147318; }
    v1 = (s32) ((u32) a0 + 0xfU);
    v1 = (s32) v1 >> 4;
L_00147318:;
    a0 = (s32) ((u32) v1 + 0xffffffffU);
    v1 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) a1) = (u32) v1;
L_00147328:;
    (*(volatile u32 *) (u32) s5) = (u32) a2;
    (*(volatile u32 *) (u32) (s5 + 8)) = (u32) 0;
    v1 = (s32) 0x30000000U;
    a4 = (*(volatile s32 *) (u32) s5);
    a2 = v1 | 0x2;
    a1 = (s32) 0x370000U;
    v1 = (s32) 0x50000000U;
    a0 = v1 | 0x2;
    a1 = (s32) ((u32) a1 + 0x68d0U);
    v1 = (s32) 0x13000000U;
    a3 = (s32) ((u32) a4 + 0x10U);
    (*(volatile u32 *) (u32) s5) = (u32) a3;
    (*(volatile u32 *) (u32) a4) = (u32) a2;
    (*(volatile u32 *) (u32) (a4 + 4)) = (u32) a1;
    (*(volatile u32 *) (u32) (a4 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (a4 + 12)) = (u32) a0;
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v1; goto L_00147188;
L_00147370:;
    return;
}
