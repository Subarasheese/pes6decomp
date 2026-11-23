/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_001CDE40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, t8 = 0, t9 = 0;
    s32 hi1 = 0, lo1 = 0;
    s32 hi = 0, lo = 0;

    v1 = (s32) 0x530000U;
    a7 = (*(volatile s32 *) (u32) (v1 + -21820));
    v1 = (s32) 0x530000U;
    a6 = (*(volatile s32 *) (u32) (v1 + -21824));
    v1 = (s32) 0x530000U;
    a4 = (*(volatile s32 *) (u32) (v1 + -21816));
    v1 = (s32) 0x530000U;
    t8 = (*(volatile s32 *) (u32) (v1 + -21812));
    if (t8 == 0) goto L_001CDF40;
    v1 = (s32) 0x7fff0000U;
    t4 = 0;
    a3 = v1 | 0xffff;
    s0 = (s32) 0x530000U;
    t9 = (s32) 0x530000U;
L_001CDE94:;
    t7 = (*(volatile u8 *) (u32) (s0 + -21804));
    t6 = a3;
    a2 = (*(volatile u8 *) (u32) (t9 + -21803));
    v1 = (s32) ((u32) t7 << 2);
    at = a2 < t7;
    { s32 c_ = at != 0; a5 = (s32) ((u32) a4 + (u32) v1); if (c_) goto L_001CDF28; }
    a1 = (*(volatile u8 *) (u32) a6);
    a0 = (*(volatile u8 *) (u32) (a6 + 1));
    v1 = (*(volatile u8 *) (u32) (a6 + 2));
    s2 = (*(volatile u8 *) (u32) (a6 + 3));
L_001CDEC0:;
    s1 = (*(volatile u8 *) (u32) a5);
    s1 = (s32) ((u32) s1 - (u32) a1);
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) s1; lo = (s32) m_; hi = (s32) (m_ >> 32); s3 = lo; }
    s1 = (*(volatile u8 *) (u32) (a5 + 1));
    s4 = (s32) ((u32) t4 + (u32) s3);
    s1 = (s32) ((u32) s1 - (u32) a0);
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) s1; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); s3 = lo1; }
    s1 = (*(volatile u8 *) (u32) (a5 + 2));
    s4 = (s32) ((u32) s4 + (u32) s3);
    s1 = (s32) ((u32) s1 - (u32) v1);
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) s1; lo = (s32) m_; hi = (s32) (m_ >> 32); s3 = lo; }
    s1 = (*(volatile u8 *) (u32) (a5 + 3));
    s3 = (s32) ((u32) s4 + (u32) s3);
    s1 = (s32) ((u32) s1 - (u32) s2);
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) s1; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); s1 = lo1; }
    s1 = (s32) ((u32) s3 + (u32) s1);
    at = s1 < t6;
    if (at == 0) goto L_001CDF18;
    t6 = s1;
    t5 = t7;
L_001CDF18:;
    t7 = (s32) ((u32) t7 + 0x1U);
    at = a2 < t7;
    { s32 c_ = at == 0; a5 = (s32) ((u32) a5 + 0x4U); if (c_) goto L_001CDEC0; }
L_001CDF28:;
    (*(volatile u8 *) (u32) a7) = (u8) t5;
    t8 = (s32) ((u32) t8 + 0xffffffffU);
    a7 = (s32) ((u32) a7 + 0x1U);
    { s32 c_ = t8 != 0; a6 = (s32) ((u32) a6 + 0x4U); if (c_) goto L_001CDE94; }
L_001CDF40:;
    return;
}
