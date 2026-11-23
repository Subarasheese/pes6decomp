/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008B2E50(s32, s32);
void func_008B2F10(s32, s32, s32, s32);
void func_008B2F30(s32, s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008C2EB0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[140];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    s2 = 0;
    s1 = 0;
    s0 = (s32) 0x540000U;
    s0 = (s32) ((u32) s0 + 0xffffc300U);
L_008C2EE4:;
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_008B2E50(a0, a1);
    a0 = (*(volatile s8 *) (u32) (s3 + 8));
    v0 = 424;
    a1 = 1;
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) s2 + (u32) v1);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s32) ((u32) s3 + (u32) v0);
    v0 = (*(volatile s8 *) (u32) (v0 + 453));
    if (v0 != a1) goto L_008C2F70;
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); func_008B2E50(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    v1 = (*(volatile s8 *) (u32) (s3 + 8));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) s2 + (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s4 + (u32) v0);
    a1 = (*(volatile s32 *) (u32) v0); func_008B2F10(a0, a1, a2, a3);
L_008C2F70:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 13;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_008C2EE4; }
    v1 = (*(volatile s8 *) (u32) (s3 + 8));
    a1 = (s32) 0x8e0000U;
    v0 = (*(volatile s8 *) (u32) (s3 + 9));
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = (s32) ((u32) a1 + 0xffffa900U);
    a2 = (s32) ((u32) v1 + 0x1U);
    a3 = (s32) ((u32) v0 + 0x1U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    a0 = (*(volatile s32 *) (u32) (v0 + 132));
    a1 = (s32) ((u32) sp + 0x60U); func_008B2F30(a0, a1, a2, a3);
    return;
}
