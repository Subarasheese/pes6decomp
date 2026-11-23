/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_003624F0(s32, s32);
s32 func_008BC370(s32);
void func_008BF4A0(s32, s32);
void func_008C6690(s32, s32, s32, s32);
void func_008E5110(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008E6650(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008C8240(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[298];
    s32 sp = (s32) (u32) frame;

    v0 = 410;
    s2 = a0;
    s1 = a1;
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); s0 = lo; }
    a1 = 0xffff;
    v0 = (*(volatile s32 *) (u32) (a0 + 104));
    a0 = (s32) ((u32) v0 + (u32) s0); func_003624F0(a0, a1);
    a1 = (s32) ((u32) s2 + 0x208U);
    a0 = (s32) ((u32) sp + 0x40U);
    v1 = 577;
L_008C8280:;
    v0 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    a1 = (s32) ((u32) a1 + 0x4U);
    a0 = (s32) ((u32) a0 + 0x4U);
    if (v1 > 0) goto L_008C8280;
    v0 = (*(volatile s32 *) (u32) (s2 + 104));
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = (s32) ((u32) v0 + (u32) s0); func_008BF4A0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s2 + 104));
    a0 = (s32) ((u32) v0 + (u32) s0); v0 = func_008BC370(a0);
    a3 = v0;
    a1 = s1 & 0xff;
    v0 = (*(volatile s32 *) (u32) (s2 + 104));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a2 = (*(volatile u16 *) (u32) v0);
    a0 = (s32) ((u32) s2 + 0x23b4U); func_008C6690(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x129cU);
    a1 = 0; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s2 + 0x129cU);
    a1 = (s32) ((u32) sp + 0x40U); func_008E6650(a0, a1, a2, a3, a4, a5, a6, a7);
    return;
}
