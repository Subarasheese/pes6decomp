/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_009B3070(s64, s64);
s64 func_00A1FE80(s64, s64);
s64 func_00AA3540(s64);
s64 func_00BBB780(s64);

void func_00A64850(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 hi = 0, lo = 0;

    s5 = a4;
    s3 = a0;
    s2 = a1;
    s1 = a2;
    s0 = a3;
    a2 = (s32) 0x590000U;
    a3 = (*(volatile u8 *) (u32) (a0 + 18));
    a2 = (s32) ((u32) a2 + 0x2980U);
    v1 = (*(volatile u8 *) (u32) (a0 + 17));
    a1 = 50;
    v0 = (s32) ((u32) a3 << 4);
    a0 = (s32) ((u32) v0 - (u32) a3);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a0 << 3);
    a0 = (s32) ((u32) v0 - (u32) a0);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a0 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a2 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 126));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (s32) ((u32) v0 << 2);
    at = (u64) s5 < (u64) (s64) 2;
    v1 = (s32) ((u32) v1 + (u32) v0);
    { s32 c_ = at != 0; s4 = (s32) ((u32) v1 << 1); if (c_) goto L_00A64ADC; }
L_00A648E8:;
    v1 = 1;
    if (s5 == v1) goto L_00A64AC8;
    if (s0 >= 0) goto L_00A64AC8;
    a0 = s3; v0 = func_00AA3540(a0);
    at = 0xc400;
    at = v0 < at;
    if (at == 0) goto L_00A649F8;
    a2 = (*(volatile u8 *) (u32) (s3 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s3 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 50;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 108));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s3 + 95));
    v1 = (s32) ((u32) v1 + (u32) v0);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_00A6497C; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_00A6497C:;
    v0 = (s32) ((u32) v0 + 0xffffffc4U);
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48; v0 = func_00BBB780(a0);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_00A649F8;
    a2 = (*(volatile u8 *) (u32) (s3 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s3 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 50;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 126));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (s32) ((u32) 0 - (u32) v0);
    v0 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v0 + (u32) v1); goto L_00A64A54;
L_00A649F8:;
    a2 = (*(volatile u8 *) (u32) (s3 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s3 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 50;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 126));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (s32) ((u32) 0 - (u32) v0);
    v0 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v0 + (u32) v1);
L_00A64A54:;
    v0 = (*(volatile s32 *) (u32) (s3 + 28));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    a0 = (*(volatile u16 *) (u32) (s3 + 38));
    v0 = (*(volatile s32 *) (u32) (s3 + 88));
    v0 = (s32) ((u32) v0 + 0xfffffe00U);
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    s4 = lo;
    a1 = s2; v0 = func_009B3070(a0, a1);
    a0 = (*(volatile u16 *) (u32) (s3 + 40));
    s5 = v0 & 0xffff;
    a1 = s2; v0 = func_009B3070(a0, a1);
    v1 = v0 & 0xffff;
    v1 = s5 < v1;
    if (v1 != 0) { a0 = (*(volatile u16 *) (u32) (s3 + 40)); goto L_00A64BB0; }
L_00A64A98:;
    at = s4 < s0;
    if (at == 0) goto L_00A64AA8;
    s0 = s4;
L_00A64AA8:;
    v1 = s5 & 0xffff;
    a0 = 0x8000;
    v1 = (s32) ((u32) a0 - (u32) v1);
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s32 c_ = v1 >= 0; s0 = (s32) v1 >> 15; if (c_) goto L_00A64AC8; }
    v1 = (s32) ((u32) v1 + 0x7fffU);
    s0 = (s32) v1 >> 15;
L_00A64AC8:;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (a0 + 8800)) = (u32) s1;
    (*(volatile u32 *) (u32) (v1 + 8808)) = (u32) s0; goto L_00A64BC0;
L_00A64ADC:;
    a0 = (*(volatile u16 *) (u32) (s3 + 40));
    a1 = s2; v0 = func_009B3070(a0, a1);
    v1 = v0 & 0xffff;
    at = v1 < 10241;
    if (at != 0) { a0 = (*(volatile s32 *) (u32) (s3 + 28)); goto L_00A64B78; }
    a0 = (s32) ((u32) v1 + 0xffffe000U);
    a1 = a0 & 0xffff;
    v1 = (s32) 0x51eb0000U;
    a0 = (s32) ((u32) a1 << 4);
    v1 = v1 | 0x851f;
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) a0 >> 31);
    a1 = hi;
    v1 = (*(volatile s32 *) (u32) (s3 + 28));
    a0 = 0x8000;
    a1 = (s32) a1 >> 5;
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = a1 & 0xffff;
    a0 = (s32) ((u32) a0 - (u32) a1);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s32 c_ = v1 >= 0; a0 = (s32) v1 >> 15; if (c_) goto L_00A64B50; }
    v1 = (s32) ((u32) v1 + 0x7fffU);
    a0 = (s32) v1 >> 15;
L_00A64B50:;
    v1 = (s32) ((u32) s4 + 0x600U);
    at = a0 < v1;
    if (at == 0) goto L_00A64B64;
    a0 = v1;
L_00A64B64:;
    at = a0 < s1;
    if (at == 0) goto L_00A648E8;
    s1 = a0; goto L_00A648E8;
L_00A64B78:;
    v0 = (s32) 0x66660000U;
    v0 = v0 | 0x6667;
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    a1 = 3584;
    v0 = (s32) v0 >> 2;
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00A1FE80(a0, a1);
    a0 = v0; goto L_00A64B50;
L_00A64BB0:;
    a1 = s2; v0 = func_009B3070(a0, a1);
    s5 = v0 & 0xffff; goto L_00A64A98;
L_00A64BC0:;
    return;
}
