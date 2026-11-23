/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00138F00(s64, s64, s64, s64, s64, s64);

s64 Pes6TexCache_Bind(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 hi = 0, lo = 0;

    s3 = a2;
    { s32 c_ = a1 == 0; (*(volatile u32 *) (u32) a2) = (u32) 0; if (c_) goto L_001460F4; }
    a4 = (*(volatile s32 *) (u32) (a1 + 36));
    if (a4 == 0) { v0 = 0; goto L_00146258; }
    a3 = (*(volatile u16 *) (u32) (a1 + 62));
    { s32 c_ = a3 == 0; v0 = (*(volatile s32 *) (u32) (a1 + 12)); if (c_) goto L_001460FC; }
    a2 = (s32) ((u32) a3 << 1);
    v1 = (s32) 0x500000U;
    a2 = (s32) ((u32) a2 + (u32) a3);
    v1 = (s32) ((u32) v1 + 0x7a98U);
    a2 = (s32) ((u32) a2 << 3);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v0 != v1) goto L_001460FC;
    a6 = (s32) 0x500000U;
    a6 = (s32) ((u32) a6 + 0x7a90U);
    a7 = (s32) ((u32) a6 + (u32) a2);
    a5 = (*(volatile s32 *) (u32) a7);
    if (a5 == a6) goto L_001460E4;
    a3 = (*(volatile s32 *) (u32) (a7 + 4));
    a2 = (s32) 0x500000U;
    v1 = (s32) 0x500000U;
    (*(volatile u32 *) (u32) (a5 + 4)) = (u32) a3;
    (*(volatile u32 *) (u32) a3) = (u32) a5;
    a2 = (*(volatile s32 *) (u32) (a2 + 31380));
    (*(volatile u32 *) (u32) (a7 + 4)) = (u32) a2;
    a2 = (*(volatile s32 *) (u32) (a7 + 4));
    (*(volatile u32 *) (u32) a2) = (u32) a7;
    (*(volatile u32 *) (u32) a7) = (u32) a6;
    (*(volatile u32 *) (u32) (v1 + 31380)) = (u32) a7;
L_001460E4:;
    if (a7 == 0) goto L_00146108;
    v0 = (*(volatile s64 *) (u32) (a7 + 16)); goto L_00146258;
L_001460F4:;
    v0 = 0; goto L_00146258;
L_001460FC:;
    (*(volatile u16 *) (u32) (a1 + 62)) = (u16) 0;
    a7 = 0; goto L_001460E4;
L_00146108:;
    v1 = (s32) 0x500000U;
    s2 = (*(volatile s32 *) (u32) (v1 + 31376));
    v1 = (*(volatile u16 *) (u32) (s2 + 14));
    if (v1 == 0) goto L_00146138;
L_0014611C:;
    s2 = (*(volatile s32 *) (u32) s2);
    v1 = (*(volatile u16 *) (u32) (s2 + 14));
    if (v1 != 0) goto L_0014611C;
L_00146138:;
    a6 = (s32) 0x500000U;
    a6 = (s32) ((u32) a6 + 0x7a90U);
    if (s2 == a6) { s2 = 0; goto L_00146180; }
    a5 = (*(volatile s32 *) (u32) s2);
    if (a5 == a6) goto L_00146180;
    a3 = (*(volatile s32 *) (u32) (s2 + 4));
    a2 = (s32) 0x500000U;
    v1 = (s32) 0x500000U;
    (*(volatile u32 *) (u32) (a5 + 4)) = (u32) a3;
    (*(volatile u32 *) (u32) a3) = (u32) a5;
    a2 = (*(volatile s32 *) (u32) (a2 + 31380));
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) a2;
    a2 = (*(volatile s32 *) (u32) (s2 + 4));
    (*(volatile u32 *) (u32) a2) = (u32) s2;
    (*(volatile u32 *) (u32) s2) = (u32) a6;
    (*(volatile u32 *) (u32) (v1 + 31380)) = (u32) s2;
L_00146180:;
    if (s2 == 0) { v0 = 0; goto L_00146258; }
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) v0;
    v0 = (s32) 0x500000U;
    v0 = (s32) ((u32) v0 + 0x7a90U);
    v1 = (s32) ((u32) s2 - (u32) v0);
    v0 = (s32) 0x2aaa0000U;
    v0 = v0 | 0xaaab;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u16 *) (u32) (a1 + 62)) = (u16) v0;
    v0 = (*(volatile u16 *) (u32) (a1 + 18));
    if (v0 != 0) { a7 = (*(volatile u16 *) (u32) (s2 + 12)); goto L_001461D8; }
L_001461C8:;
    v0 = 1;
    (*(volatile u32 *) (u32) s3) = (u32) v0;
    v0 = (*(volatile s64 *) (u32) (s2 + 16)); goto L_00146258;
L_001461D8:;
    v0 = v0 & 0xffff;
    a6 = (*(volatile u8 *) (u32) (a1 + 28));
    a3 = (s32) ((u32) a1 + (u32) v0);
    a5 = (*(volatile u8 *) (u32) (a1 + 31));
    a2 = (*(volatile u8 *) (u32) (a1 + 29));
    v1 = (*(volatile u8 *) (u32) (a1 + 30));
    s1 = (s64) ((u64) a7 << 32);
    a6 = (s64) ((u64) a6 << 32);
    s1 = s1 >> 32;
    v0 = (s64) ((u64) a5 << 32);
    a6 = a6 >> 32;
    s0 = (s64) ((u64) a2 << 32);
    v0 = v0 >> 32;
    s0 = s0 >> 32;
    v1 = (s64) ((u64) v1 << 32);
    a2 = (s64) ((u64) s1 << 32);
    a6 = (s64) ((u64) a6 << 48);
    v0 = (s64) ((u64) v0 << 32);
    a1 = (s64) ((u64) s0 << 56);
    a6 = a2 | a6;
    v1 = v1 >> 32;
    a2 = v1 | v0;
    a1 = a1 | a6; v0 = func_00138F00(a0, a1, a2, a3, a4, a5);
    v1 = (s64) ((u64) s1 << 37);
    v0 = (s64) ((u64) s0 << 51);
    v1 = v1 | v0;
    v0 = (s32) 0x20000000U;
    v0 = (s64) ((u64) v0 << 32);
    v0 = v1 | v0;
    (*(volatile u64 *) (u32) (s2 + 16)) = (u64) v0; goto L_001461C8;
L_00146258:;
    return v0;
}
