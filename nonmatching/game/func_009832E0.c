/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00C2CBD0(s64, s64, s64, s64);

void func_009832E0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[22];
    s64 sp = (s32) (u32) frame;

    a5 = (s32) 0x590000U;
    a2 = (s32) 0x5a0000U;
    v1 = 139;
    a5 = (s32) ((u32) a5 + 0x1a90U);
    a2 = (s32) ((u32) a2 + 0x2020U);
    s5 = a0;
    { s64 m_ = (s64) (s32) s5 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x2980U);
    s4 = 0;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (s32) ((u32) s5 << 4);
    a4 = (s32) ((u32) v1 - (u32) s5);
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a3 = (s32) ((u32) a4 << 2);
    a1 = (s32) ((u32) a4 << 3);
    a3 = (s32) ((u32) a3 - (u32) a4);
    s2 = (s32) ((u32) a5 + (u32) v1);
    v1 = (s32) ((u32) a1 - (u32) a4);
    s3 = s2;
    v1 = (s32) ((u32) v1 << 8);
    a1 = (s32) ((u32) a3 << 3);
    s0 = (s32) ((u32) a0 + (u32) v1);
    s1 = (s32) ((u32) a2 + (u32) a1);
    v1 = (s32) 0x590000U;
    s6 = (s32) ((u32) s1 + 0x1U);
    v1 = (s32) ((u32) v1 + 0x1e00U);
    v1 = (s32) ((u32) v1 + (u32) s5);
    s7 = (s32) ((u32) v1 + 0xf8U);
    fp = (s32) ((u32) v1 + 0xf6U);
L_00983384:;
    a0 = (*(volatile u8 *) (u32) s6);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) s1 + (u32) v1);
    v1 = (s32) ((u32) v1 + (u32) s4);
    v1 = (*(volatile u8 *) (u32) (v1 + 28));
    if (v1 == 0) { a1 = (*(volatile u8 *) (u32) (s3 + 7)); goto L_009833C8; }
L_009833B0:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < 11;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x1U); if (c_) goto L_00983384; }
    goto L_00983518;
L_009833C8:;
    v1 = (s32) ((u32) a1 << 4);
    a0 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) s0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v1 + 212));
    if (v1 != 0) goto L_009834D0;
    a3 = (*(volatile u8 *) (u32) s7);
    v1 = (*(volatile u8 *) (u32) fp);
    a0 = (s32) ((u32) v1 + (u32) a3);
    at = a3 < a0;
    if (at == 0) goto L_00983430;
    v1 = (s32) ((u32) a3 << 3);
    a2 = (s32) ((u32) s2 + (u32) v1);
L_00983410:;
    v1 = (*(volatile u8 *) (u32) (a2 + 83));
    if (v1 == a1) goto L_00983514;
    a3 = (s32) ((u32) a3 + 0x1U);
    v1 = a3 < a0;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_00983410; }
L_00983430:;
    a0 = s5;
    a1 = 0; v0 = func_00C2CBD0(a0, a1, a2, a3);
    if (v0 != s4) { at = v0 < 11; goto L_009834D8; }
L_00983448:;
    v1 = 0;
L_00983450:;
    a0 = (s32) ((u32) s2 + (u32) v1);
    a1 = (*(volatile u8 *) (u32) (a0 + 7));
    a0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 3);
    a0 = (s32) ((u32) s0 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a0 + 212));
    a0 = (u64) 0 < (u64) a0;
    a0 = a0 ^ 0x1;
    if (a0 != 0) { v1 = (s32) ((u32) v1 + 0x1U); goto L_009834BC; }
    { u32 a_ = (u32) (sp + 160) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    a2 = (s32) 0x590000U;
    a2 = (s32) ((u32) a2 + 0x1a97U);
    a1 = 1;
    a3 = (s32) ((u32) a2 + (u32) a0);
    a0 = (s32) 0x590000U;
    a2 = (s32) ((u32) a3 + (u32) v1);
    (*(volatile u8 *) (u32) (a0 + 7932)) = (u8) a1;
    a0 = (s32) ((u32) a3 + (u32) s4);
    a1 = (*(volatile u8 *) (u32) a2);
    v1 = (*(volatile u8 *) (u32) a0);
    (*(volatile u8 *) (u32) a2) = (u8) v1;
    (*(volatile u8 *) (u32) a0) = (u8) a1; goto L_00983514;
L_009834BC:;
    a0 = v1 < 11;
    if (a0 != 0) goto L_00983450;
    goto L_009833B0;
L_009834D0:;
    goto L_00983514;
L_009834D8:;
    if (at == 0) goto L_00983448;
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0x1a97U);
    a0 = 1;
    a1 = (s32) ((u32) a1 + (u32) v1);
    v1 = (s32) 0x590000U;
    a2 = (s32) ((u32) a1 + (u32) v0);
    (*(volatile u8 *) (u32) (v1 + 7932)) = (u8) a0;
    a0 = (s32) ((u32) a1 + (u32) s4);
    v1 = (*(volatile u8 *) (u32) a0);
    a1 = (*(volatile u8 *) (u32) a2);
    (*(volatile u8 *) (u32) a2) = (u8) v1;
    (*(volatile u8 *) (u32) a0) = (u8) a1;
L_00983514:;
L_00983518:;
    return;
}
