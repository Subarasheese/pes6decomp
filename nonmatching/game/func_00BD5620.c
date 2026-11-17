/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00209540(s64, s64, s64);
s64 func_00B2A420(s64);
s64 func_00B35790(s64, s64);
s64 func_00BBB8C0(s64);
s64 func_00BD45B0(s64, s64, s64);

s64 func_00BD5620(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 hi = 0, lo = 0;

    s3 = a0;
    s2 = a1;
    v0 = (*(volatile s32 *) (u32) a0);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a0 = (*(volatile u16 *) (u32) (v0 + 48));
    s1 = 0; v0 = func_00BD45B0(a0, a1, a2);
    s4 = v0 & 0xff;
    v0 = 7;
    if (s4 != v0) { a0 = s2 & 0xff; goto L_00BD5670; }
L_00BD5668:;
    v0 = s1; goto L_00BD5858;
L_00BD5670:;
    v0 = func_00B2A420(a0);
    v0 = 6;
    { s32 c_ = s4 == v0; s0 = 0; if (c_) goto L_00BD5818; }
    v0 = 5;
    if (s4 == v0) goto L_00BD5800;
    v0 = 4;
    if (s4 == v0) goto L_00BD5800;
    v0 = 3;
    if (s4 == v0) { v1 = s4 & 0xff; goto L_00BD576C; }
    v0 = 2;
    if (s4 == v0) { a0 = s4 & 0xff; goto L_00BD56BC; }
    goto L_00BD581C;
L_00BD56BC:;
    v1 = 1;
    a1 = (s32) ((u32) a0 << 1);
    a0 = (s32) 0xcb0000U;
    a0 = (s32) ((u32) a0 + 0x2418U);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a4 = (*(volatile u16 *) (u32) a0);
    a1 = (*(volatile s32 *) (u32) s3);
    a0 = (s32) 0x66660000U;
    a2 = a0 | 0x6667;
    a3 = (*(volatile s32 *) (u32) (a1 + 28));
    a0 = (s32) ((u32) a4 << 3);
    a0 = (s32) ((u32) a0 + (u32) a4);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) a0 >> 31);
    a0 = hi;
    a0 = (s32) a0 >> 2;
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = a3 < a0;
    if (a0 != 0) { v1 = 0; goto L_00BD5748; }
    a0 = (s32) ((u32) a4 << 2);
    a0 = (s32) ((u32) a0 + (u32) a4);
    a0 = (s32) ((u32) a0 << 1);
    a0 = (s32) ((u32) a0 + (u32) a4);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) a0 >> 31);
    a0 = hi;
    a0 = (s32) a0 >> 2;
    a0 = (s32) ((u32) a0 + (u32) a1);
    at = a0 < a3;
    if (at == 0) goto L_00BD5748;
    v1 = v0;
L_00BD5748:;
    v0 = 1;
    if (v1 != v0) goto L_00BD581C;
    a0 = 2; v0 = func_00BBB8C0(a0);
    if (v0 == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 1205); goto L_00BD581C; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1206); goto L_00BD581C;
L_00BD576C:;
    v0 = 1;
    a0 = (s32) ((u32) v1 << 1);
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x2418U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a3 = (*(volatile u16 *) (u32) v1);
    a0 = (*(volatile s32 *) (u32) s3);
    v1 = (s32) 0x66660000U;
    a1 = v1 | 0x6667;
    a2 = (*(volatile s32 *) (u32) (a0 + 28));
    v1 = (s32) ((u32) a3 << 3);
    v1 = (s32) ((u32) v1 + (u32) a3);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) v1 >> 31);
    v1 = hi;
    v1 = (s32) v1 >> 2;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = a2 < v1;
    if (v1 != 0) { v0 = 0; goto L_00BD57F8; }
    v1 = (s32) ((u32) a3 << 2);
    v1 = (s32) ((u32) v1 + (u32) a3);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a3);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) v1 >> 31);
    v1 = hi;
    v1 = (s32) v1 >> 2;
    v1 = (s32) ((u32) v1 + (u32) a0);
    at = v1 < a2;
    if (at == 0) goto L_00BD57F8;
    v0 = 2;
L_00BD57F8:;
    if (v0 == 0) goto L_00BD581C;
L_00BD5800:;
    a0 = 2; v0 = func_00BBB8C0(a0);
    if (v0 == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 1152); goto L_00BD581C; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1151); goto L_00BD581C;
L_00BD5818:;
    s0 = (s64) ((u64) 0 + (u64) (s64) 1151);
L_00BD581C:;
    if (s0 == 0) goto L_00BD5668;
    a1 = s2;
    a0 = s3; v0 = func_00B35790(a0, a1);
    v1 = (*(volatile s32 *) (u32) s3);
    a1 = s0;
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    (*(volatile u8 *) (u32) (v1 + 45)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) s3);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = 0; func_00209540(a0, a1, a2);
    s1 = 1; goto L_00BD5668;
L_00BD5858:;
    return v0;
}
