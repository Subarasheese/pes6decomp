/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF900(s32, s32);
s32 func_0020CA10(s32, s32);
s32 func_002F96F0(s32, s32);
void func_002FA170(s32, s32, s32, s32, s32, s32);

void func_0091C5A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x66660000U;
    v1 = (s32) ((u32) gp + 0xffffb1e4U);
    v0 = v0 | 0x6667;
    s4 = a0;
    s3 = a1;
    s2 = a2;
    a0 = (*(volatile s32 *) (u32) (gp + -20000));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (*(volatile s32 *) (u32) v1);
    a0 = (*(volatile s32 *) (u32) (a1 + 56));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = v0 != 0; s1 = a3; if (c_) goto L_0091C624; }
    v1 = (*(volatile s32 *) (u32) (a1 + 28));
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xffffa0c0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    s2 = (*(volatile s32 *) (u32) (v0 + 4));
L_0091C624:;
    v0 = 10;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
    at = a0 < 10;
    if (at != 0) goto L_0091C640;
    a0 = 9;
L_0091C640:;
    a1 = 1; v0 = func_0020CA10(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
    s0 = v0;
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; v0 = func_002F96F0(a0, a1);
    a1 = s0;
    a2 = v0;
    a3 = s2;
    a4 = s1;
    a0 = s4;
    a5 = 1; func_002FA170(a0, a1, a2, a3, a4, a5);
    a0 = s4;
    a1 = 1; func_001EF900(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -20000));
    v1 = (s32) ((u32) gp + 0xffffb1e4U);
    a1 = 1;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) s3 + (u32) v1);
    (*(volatile u8 *) (u32) (v1 + 16)) = (u8) a1;
    return;
}
