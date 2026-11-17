/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002937A0(s64, s64, s64, s64);
s64 func_00C296B0(s64, s64);
s64 func_00C29A30(s64, s64, s64, s64);
s64 func_00C2A050(s64, s64, s64);
s64 func_00C2A320(s64, s64, s64, s64);

s64 func_00C2A7F0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    v1 = 139;
    v0 = (s32) ((u32) v0 + 0x1a90U);
    s5 = a0;
    s4 = a1;
    a1 = (s32) 0x590000U;
    s3 = a2;
    a1 = (s32) ((u32) a1 + 0x2980U);
    a3 = (*(volatile u8 *) (u32) a0);
    s1 = 0;
    s2 = 0;
    a0 = (s32) 0x590000U;
    a2 = (s32) ((u32) a3 << 4);
    a0 = (s32) ((u32) a0 + 0x1e00U);
    a2 = (s32) ((u32) a2 - (u32) a3);
    a0 = (s32) ((u32) a0 + (u32) a3);
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    s6 = (s32) ((u32) a0 + 0xf8U);
    fp = (s32) ((u32) a0 + 0xf6U);
    a0 = (s32) ((u32) a2 << 3);
    a0 = (s32) ((u32) a0 - (u32) a2);
    a0 = (s32) ((u32) a0 << 8);
    s7 = (s32) ((u32) v0 + (u32) v1);
    s0 = (s32) ((u32) a1 + (u32) a0);
L_00C2A87C:;
    v1 = (s32) ((u32) s5 + (u32) s2);
    a0 = (*(volatile u8 *) (u32) (v1 + 192));
    { s32 c_ = a0 == 0; v0 = (*(volatile u8 *) (u32) (v1 + 140)); if (c_) goto L_00C2A8D0; }
    v1 = (s32) ((u32) v0 << 4);
    a1 = (s32) ((u32) v1 - (u32) v0);
    v1 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) v1 << 3);
    a1 = (s32) ((u32) s0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (a1 + 212));
    if (v1 != 0) goto L_00C2AA48;
    v1 = (*(volatile u8 *) (u32) (a1 + 248));
    if (v1 != 0) goto L_00C2AA48;
    v1 = (*(volatile u8 *) (u32) (a1 + 249));
    if (v1 == 0) goto L_00C2A908;
    goto L_00C2AA48;
L_00C2A8D0:;
    v1 = (s32) ((u32) v0 << 4);
    a1 = (s32) ((u32) v1 - (u32) v0);
    v1 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) v1 << 3);
    a1 = (s32) ((u32) s0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (a1 + 105));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 60);
    if (v1 != 0) goto L_00C2A908;
    v1 = (*(volatile u8 *) (u32) (a1 + 212));
    if (v1 != 0) goto L_00C2AA48;
L_00C2A908:;
    a4 = (*(volatile u8 *) (u32) s6);
    v1 = (*(volatile u8 *) (u32) fp);
    a1 = (s32) ((u32) v1 + (u32) a4);
    at = a4 < a1;
    { s32 c_ = at == 0; a3 = 1; if (c_) goto L_00C2A948; }
    v1 = (s32) ((u32) a4 << 3);
    a2 = (s32) ((u32) s7 + (u32) v1);
L_00C2A928:;
    v1 = (*(volatile u8 *) (u32) (a2 + 83));
    if (v0 != v1) goto L_00C2A938;
    a3 = 0;
L_00C2A938:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = a4 < a1;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_00C2A928; }
L_00C2A948:;
    if (a3 == 0) goto L_00C2AA48;
    v0 = func_002937A0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 11;
    if (v1 == v0) goto L_00C2AA28;
    v0 = 10;
    if (v1 == v0) goto L_00C2AA28;
    v0 = 12;
    if (v1 == v0) goto L_00C2AA28;
    v0 = 4;
    if (v1 == v0) goto L_00C2AA08;
    v0 = 1;
    if (v1 == v0) goto L_00C2A9E8;
    v0 = 2;
    if (v1 == v0) goto L_00C2A9E8;
    v0 = 3;
    if (v1 == v0) goto L_00C2A9E8;
    if (v1 == 0) goto L_00C2A9C0;
    goto L_00C2AA48;
L_00C2A9C0:;
    a0 = s5;
    a1 = s4;
    a2 = s2;
    a3 = s3; v0 = func_00C2A320(a0, a1, a2, a3);
    if (v0 == 0) goto L_00C2AA48;
    s1 = 1; goto L_00C2AA48;
L_00C2A9E8:;
    a0 = s5;
    a1 = s4;
    a2 = s2; v0 = func_00C2A050(a0, a1, a2);
    if (v0 == 0) goto L_00C2AA48;
    s1 = 1; goto L_00C2AA48;
L_00C2AA08:;
    a0 = s5;
    a1 = s4;
    a2 = s2; v0 = func_00C29A30(a0, a1, a2, a3);
    if (v0 == 0) goto L_00C2AA48;
    s1 = 1; goto L_00C2AA48;
L_00C2AA28:;
    a0 = s5;
    a1 = s4;
    a2 = s2; v0 = func_00C296B0(a0, a1);
    if (v0 == 0) goto L_00C2AA48;
    s1 = 1;
L_00C2AA48:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 11;
    if (v0 != 0) goto L_00C2A87C;
    v0 = s1;
    return v0;
}
