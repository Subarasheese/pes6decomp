/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002DCA40(void);
s64 func_008472D0(s64, s64, s64, s64);
void func_008523E0(s64, s64, s64, s64);
s64 func_00858C20(s64, s64, s64, s64);
void func_00C8FBC0(s64, s64, s64, s64, s64, s64, s64, s64);

s64 func_00C8C6C0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 hi = 0, lo = 0;

    { s32 c_ = a1 != 0; s1 = a0; if (c_) goto L_00C8C6E0; }
    v0 = 0; goto L_00C8C954;
L_00C8C6E0:;
    v0 = func_002DCA40();
    if (v0 == 0) goto L_00C8C7B4;
    a5 = (*(volatile u8 *) (u32) s1);
    a0 = 139;
    a1 = (s32) 0xcd0000U;
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0xffffd570U);
    v1 = (s32) ((u32) v1 + 0x1a90U);
    { s64 m_ = (s64) (s32) a5 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    v0 = 0;
    a0 = (s32) ((u32) a5 << 5);
    a4 = (s32) ((u32) a0 + (u32) a5);
    a0 = (s32) ((u32) a5 << 2);
    a3 = (s32) ((u32) a4 << 2);
    a0 = (s32) ((u32) a0 + (u32) a5);
    a4 = (s32) ((u32) a3 - (u32) a4);
    a0 = (s32) ((u32) a0 << 1);
    a3 = (s32) ((u32) a0 + (u32) a5);
    a0 = (s32) ((u32) a4 << 2);
    a5 = (s32) ((u32) s1 + (u32) a3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a4 = (s32) ((u32) v1 + (u32) a2);
L_00C8C740:;
    a1 = (*(volatile u8 *) (u32) (a5 + 1));
    v0 = (s32) ((u32) v0 + 0x5U);
    v1 = v0 < 6;
    (*(volatile u8 *) (u32) (a4 + 39)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) (a5 + 2));
    (*(volatile u8 *) (u32) (a4 + 40)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) (a5 + 3));
    (*(volatile u8 *) (u32) (a4 + 41)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) (a5 + 4));
    (*(volatile u8 *) (u32) (a4 + 42)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) (a5 + 5));
    (*(volatile u8 *) (u32) (a4 + 43)) = (u8) a1;
    a5 = (s32) ((u32) a5 + 0x5U);
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0x5U); if (c_) goto L_00C8C740; }
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a3 + (u32) s1);
    v1 = (s32) ((u32) v1 + 0x1ab7U);
    a1 = (s32) ((u32) v0 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (a1 + 1));
    (*(volatile u8 *) (u32) v0) = (u8) v1; func_00C8FBC0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = -3;
    a1 = 0; func_008523E0(a0, a1, a2, a3);
    goto L_00C8C950;
L_00C8C7B4:;
    v0 = (s32) 0x8b0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + 5198));
    a0 = v0 & 0x1; v0 = func_00858C20(a0, a1, a2, a3);
    s0 = (s64) ((u64) v0 << 48);
    s0 = s0 >> 48; v0 = func_008472D0(a0, a1, a2, a3);
    v0 = (*(volatile s16 *) (u32) v0);
    if (s0 != v0) { s0 = 0; goto L_00C8C894; }
    a5 = (*(volatile u8 *) (u32) s1);
    a0 = 139;
    a1 = (s32) 0xcd0000U;
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0xffffd570U);
    v1 = (s32) ((u32) v1 + 0x1a90U);
    { s64 m_ = (s64) (s32) a5 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    v0 = 0;
    a0 = (s32) ((u32) a5 << 5);
    a4 = (s32) ((u32) a0 + (u32) a5);
    a0 = (s32) ((u32) a5 << 2);
    a3 = (s32) ((u32) a4 << 2);
    a0 = (s32) ((u32) a0 + (u32) a5);
    a4 = (s32) ((u32) a3 - (u32) a4);
    a0 = (s32) ((u32) a0 << 1);
    a3 = (s32) ((u32) a0 + (u32) a5);
    a0 = (s32) ((u32) a4 << 2);
    a5 = (s32) ((u32) s1 + (u32) a3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a4 = (s32) ((u32) v1 + (u32) a2);
L_00C8C82C:;
    a1 = (*(volatile u8 *) (u32) (a5 + 1));
    v0 = (s32) ((u32) v0 + 0x5U);
    v1 = v0 < 6;
    (*(volatile u8 *) (u32) (a4 + 39)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) (a5 + 2));
    (*(volatile u8 *) (u32) (a4 + 40)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) (a5 + 3));
    (*(volatile u8 *) (u32) (a4 + 41)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) (a5 + 4));
    (*(volatile u8 *) (u32) (a4 + 42)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) (a5 + 5));
    (*(volatile u8 *) (u32) (a4 + 43)) = (u8) a1;
    a5 = (s32) ((u32) a5 + 0x5U);
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0x5U); if (c_) goto L_00C8C82C; }
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a3 + (u32) s1);
    v1 = (s32) ((u32) v1 + 0x1ab7U);
    a1 = (s32) ((u32) v0 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) (a1 + 1));
    (*(volatile u8 *) (u32) v0) = (u8) v1; func_00C8FBC0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00C8C950;
L_00C8C894:;
    a4 = s0 & 0xff;
L_00C8C898:;
    a0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) a4 << 5);
    a0 = (s32) ((u32) a0 + 0xffffd570U);
    a2 = (s32) ((u32) v1 + (u32) a4);
    v0 = 0;
    v1 = (s32) ((u32) a4 << 2);
    a1 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) v1 + (u32) a4);
    a1 = (s32) ((u32) a1 - (u32) a2);
    v1 = (s32) ((u32) v1 << 1);
    a1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a4);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a3 = (s32) ((u32) s1 + (u32) v1);
    v1 = 139;
    a5 = a3;
    { s64 m_ = (s64) (s32) a4 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1a90U);
    a2 = (s32) ((u32) v1 + (u32) a1);
    a4 = a2;
L_00C8C8F0:;
    a1 = (*(volatile u8 *) (u32) (a5 + 1));
    v0 = (s32) ((u32) v0 + 0x5U);
    v1 = v0 < 6;
    (*(volatile u8 *) (u32) (a4 + 39)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) (a5 + 2));
    (*(volatile u8 *) (u32) (a4 + 40)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) (a5 + 3));
    (*(volatile u8 *) (u32) (a4 + 41)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) (a5 + 4));
    (*(volatile u8 *) (u32) (a4 + 42)) = (u8) a1;
    a1 = (*(volatile u8 *) (u32) (a5 + 5));
    (*(volatile u8 *) (u32) (a4 + 43)) = (u8) a1;
    a5 = (s32) ((u32) a5 + 0x5U);
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0x5U); if (c_) goto L_00C8C8F0; }
    v1 = (s32) ((u32) a3 + (u32) v0);
    v1 = (*(volatile u8 *) (u32) (v1 + 1));
    v0 = (s32) ((u32) a2 + (u32) v0);
    (*(volatile u8 *) (u32) (v0 + 39)) = (u8) v1; func_00C8FBC0(a0, a1, a2, a3, a4, a5, a6, a7);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 2;
    if (v0 != 0) { a4 = s0 & 0xff; goto L_00C8C898; }
L_00C8C950:;
    v0 = 0;
L_00C8C954:;
    return v0;
}
