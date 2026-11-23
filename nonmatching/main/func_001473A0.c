/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6GsPacket_AppendImageUpload(s64, s64, s64, s64, s64, s64);
void func_00146C70(s64, s64, s64, s64, s64, s64, s64, s64);
void func_00147BF0(s64, s64, s64, s64, s64, s64, s64, s64);

void func_001473A0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[22];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0x510000U;
    v1 = (s32) ((u32) v1 + 0xffffada8U);
    s4 = a0;
    s3 = a2;
    v0 = (*(volatile u8 *) (u32) (a2 + 30));
    a0 = (*(volatile u8 *) (u32) (a1 + 20));
    fp = (*(volatile u8 *) (u32) (a2 + 28));
    s7 = (*(volatile u8 *) (u32) (a2 + 29));
    s1 = (*(volatile u8 *) (u32) (a2 + 31));
    s6 = (*(volatile s32 *) (u32) (a2 + 36));
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) a0 << 4);
    a1 = (*(volatile u16 *) (u32) (a2 + 18));
    v0 = (s32) ((u32) v0 + (u32) a0);
    s5 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + (u32) s5);
    v0 = (s64) ((u64) 0 + (u64) (s64) 32);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (*(volatile s32 *) (u32) v0);
    s2 = (s32) ((u32) s3 + (u32) a1);
L_0014741C:;
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    if (v0 != 0) goto L_00147478;
    v0 = (*(volatile u8 *) (u32) (s0 + 105));
    if (v0 == 0) goto L_00147478;
    a1 = 1;
    a2 = s0;
    a3 = a1; func_00147BF0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x510000U;
    v0 = (s32) ((u32) v0 + 0xffffadb0U);
    v1 = (s32) ((u32) v0 + (u32) s5);
    v0 = (s64) ((u64) 0 + (u64) (s64) 32);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) v1) = (u32) s0;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) 0;
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v0; if (c_) goto L_00147488; }
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) s0;
    goto L_00147488;
L_00147478:;
    s0 = (*(volatile s32 *) (u32) (s0 + 4));
    if (s0 != 0) goto L_0014741C;
    s0 = 0;
L_00147488:;
    if (s0 == 0) goto L_0014759C;
    v0 = 1;
    a0 = (*(volatile u8 *) (u32) (s0 + 104));
    v1 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) 0x370000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0x68b0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a1 = (s32) 0x3c0000U;
    a2 = (*(volatile s32 *) (u32) (s3 + 12));
    a1 = (s32) ((u32) a1 + 0x6bb0U);
    v0 = (s32) 0x510000U;
    a0 = (s32) 0x3c0000U;
    v0 = (s32) ((u32) v0 + 0xffffadbcU);
    a0 = (s32) ((u32) a0 + 0x6c10U);
    v1 = (s32) ((u32) v0 + (u32) s5);
    v0 = (s64) ((u64) 0 + (u64) (s64) 32);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) a3);
    s5 = (s32) ((u32) v0 >> 6);
    a3 = (s32) ((u32) s5 << 6); func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
    a1 = (s32) ((u32) s0 + 0x10U);
    a0 = 8;
L_001474FC:;
    v1 = (*(volatile s32 *) (u32) s3);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s32 *) (u32) (s3 + 4));
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    s3 = (s32) ((u32) s3 + 0x8U);
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) v0;
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x8U); if (c_) goto L_001474FC; }
    v0 = (s64) ((u64) fp << 32);
    a3 = s2;
    v0 = v0 >> 32;
    s2 = (s64) ((u64) s5 << 32);
    a2 = (s64) ((u64) v0 << 48);
    s3 = (s64) ((u64) s7 << 32);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s3 = s3 >> 32;
    s2 = s2 >> 32;
    a1 = (s64) ((u64) s3 << 56);
    a0 = s4;
    a4 = s6;
    a5 = s1;
    v1 = (s64) ((u64) v0 << 32);
    v0 = (s64) ((u64) s2 << 32);
    v1 = v1 >> 32;
    a2 = v0 | a2;
    v0 = (s64) ((u64) s1 << 32);
    a1 = a1 | a2;
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 32);
    a2 = v1 | v0; Pes6GsPacket_AppendImageUpload(a0, a1, a2, a3, a4, a5);
    a0 = (s64) ((u64) s2 << 37);
    v1 = (s64) ((u64) s3 << 51);
    a0 = a0 | v1;
    v1 = (s32) 0x20000000U;
    v1 = (s64) ((u64) v1 << 32);
    v1 = a0 | v1;
    (*(volatile u64 *) (u32) (s0 + 80)) = (u64) v1;
    (*(volatile u32 *) (u32) (s0 + 108)) = (u32) s5; goto L_001475E0;
L_0014759C:;
    a0 = (s32) 0x3c0000U;
    a1 = (s32) 0x3c0000U;
    a3 = (s32) 0x3c0000U;
    a4 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x6c30U);
    a1 = (s32) ((u32) a1 + 0x6bb0U);
    a2 = 1422;
    a3 = (s32) ((u32) a3 + 0x6c50U);
    a4 = (s32) ((u32) a4 + 0x6c70U); func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
L_001475C4:;
    goto L_001475C4;
L_001475E0:;
    return;
}
