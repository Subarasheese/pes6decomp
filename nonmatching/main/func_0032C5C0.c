/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Job_CopyPayloadOut(s32, s32, s32);
s32 Pes6Job_Create(s32, s32, s32);
s32 Pes6Job_SetArg(s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 func_00311390(s32);
s32 func_00338720(s32, s32);
s32 func_00341910(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_0032C5C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 hi = 0, lo = 0;

    s1 = (*(volatile s32 *) (u32) (a0 + 60));
    v0 = (*(volatile u8 *) (u32) (s1 + 8));
    { s32 c_ = v0 != 0; s2 = a0; if (c_) goto L_0032C5F0; }
    v0 = 0; goto L_0032C808;
L_0032C5F0:;
    v1 = (*(volatile u8 *) (u32) (s1 + 120));
    v0 = 255;
    { s32 c_ = v1 == v0; s0 = (s32) ((u32) s1 + 0x74U); if (c_) goto L_0032C7F8; }
    v0 = (s32) 0x2e8b0000U;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a2 = v0 | 0xa2e9;
    a1 = (s32) ((u32) v1 >> 31);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = (*(volatile u8 *) (u32) (s1 + 184));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    a0 = hi;
    v1 = (s32) ((u32) v0 >> 31);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = (s32) a0 >> 1;
    a0 = (s32) ((u32) v0 + (u32) a1);
    v0 = hi;
    v0 = (s32) v0 >> 1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    if (a0 != v0) { v1 = (*(volatile s32 *) (u32) s0); goto L_0032C77C; }
    v1 = (*(volatile u8 *) (u32) (s1 + 213));
    v0 = 14;
    if (v1 == v0) { a0 = s2; goto L_0032C7FC; }
    v0 = 9;
    if (v1 == v0) goto L_0032C7F8;
    v0 = 12;
    if (v1 == v0) goto L_0032C7F8;
    a0 = 1;
    a1 = 5;
    a2 = 10;
    v0 = func_00341910(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) { a2 = (*(volatile s32 *) (u32) (s2 + 8)); goto L_0032C714; }
    v0 = (s32) 0x80000000U;
    a1 = (s32) 0x330000U;
    a3 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0xffffb430U);
    a0 = v0 | 0xc;
    a2 = 11;
    a3 = (s32) ((u32) a3 + 0x17b0U); v0 = Pes6Job_Create(a0, a1, a2);
    a0 = v0;
    a1 = s2; v0 = Pes6Job_CopyPayloadOut(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (s0 + 4)); v0 = func_00311390(a0);
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s1 + 14)); goto L_0032C764; }
    a2 = (*(volatile s32 *) (u32) (s2 + 8));
    a1 = (s32) 0x330000U;
    a3 = (s32) 0x3e0000U;
    a0 = 61;
    a1 = (s32) ((u32) a1 + 0xffffc400U);
    a3 = (s32) ((u32) a3 + 0x17b0U); v0 = Pes6Job_Create(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (s0 + 4));
    s3 = v0;
    a0 = s3;
    a1 = 0; v0 = Pes6Job_SetArg(a0, a1, a2);
    a0 = s3;
    a1 = s2; v0 = Pes6Job_CopyPayloadOut(a0, a1, a2);
    a0 = s3;
    a1 = 5; v0 = func_00338720(a0, a1);
    goto L_0032C760;
L_0032C714:;
    v0 = (s32) 0x80000000U;
    a1 = (s32) 0x330000U;
    a3 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0xffffb0e0U);
    a0 = v0 | 0xc;
    a3 = (s32) ((u32) a3 + 0x17b0U); v0 = Pes6Job_Create(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (s0 + 4));
    s3 = v0;
    a0 = s3;
    a1 = 0; v0 = Pes6Job_SetArg(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (s1 + 184));
    a0 = s3;
    a1 = 1; v0 = Pes6Job_SetArg(a0, a1, a2);
    a0 = s3;
    a1 = s2; v0 = Pes6Job_CopyPayloadOut(a0, a1, a2);
L_0032C760:;
    v0 = (*(volatile u8 *) (u32) (s1 + 14));
L_0032C764:;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v1 + 788));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 788)) = (u32) v0; goto L_0032C7F8;
L_0032C77C:;
    v0 = 10;
    if (v1 != v0) goto L_0032C7F8;
    v0 = (*(volatile u8 *) (u32) (s1 + 213));
    v0 = (s32) ((u32) v0 + 0xfffffff7U);
    at = (u64) v0 < (u64) (s64) 7;
    if (at == 0) { v0 = (s32) 0x80000000U; goto L_0032C7BC; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x17c0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x32c7b8U) goto L_0032C7B8; if (t_ == 0x32c7f8U) goto L_0032C7F8; }
L_0032C7B8:;
    v0 = (s32) 0x80000000U;
L_0032C7BC:;
    a1 = (s32) 0x330000U;
    a3 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0xffffc330U);
    a0 = v0 | 0xa;
    a2 = 11;
    a3 = (s32) ((u32) a3 + 0x17b0U); v0 = Pes6Job_Create(a0, a1, a2);
    s1 = v0;
    a1 = s2;
    a0 = s1; v0 = Pes6Job_CopyPayloadOut(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (s0 + 4));
    a0 = s1;
    a1 = 0; v0 = Pes6Job_SetArg(a0, a1, a2);
L_0032C7F8:;
    a0 = s2;
L_0032C7FC:;
    v0 = Pes6Job_SetDone(a0);
    v0 = 1;
L_0032C808:;
    return v0;
}
