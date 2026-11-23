/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0017F8A0(s32);
void func_001C6158(s32, s32, s32, s32);
s32 func_001FC770(s32);
void func_002C7600(s32, s32);
void func_002C7840(s32, s32, s32);
void func_002CA0F0(s32);
void func_0036D060(s32, s32, s32);
s32 func_008E0A20(s32, s32, s32, s32);
s32 func_00C2E7B0(s32, s32);
s32 func_00C30290(s32, s32, s32, s32, s32, s32);
void func_00C32430(s32);

void func_0036C9B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[138];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    a0 = 17;
    (*(volatile u8 *) (u32) (sp + 1103)) = (u8) 0;
    (*(volatile u32 *) (u32) (sp + 1096)) = (u32) 0;
    s0 = 0; v0 = func_001FC770(a0);
    a0 = v0; v0 = func_0017F8A0(a0);
    if (v0 == 0) { ; goto L_0036CC2C; }
    a0 = (s32) ((u32) s2 + 0x26dcU); v0 = func_008E0A20(a0, a1, a2, a3);
    a3 = 0;
L_0036C9FC:;
    a2 = (s32) ((u32) v0 + (u32) a3);
    a1 = (s32) ((u32) s1 + (u32) a3);
    a0 = (*(volatile u8 *) (u32) a2);
    a3 = (s32) ((u32) a3 + 0x7U);
    v1 = a3 < 14;
    (*(volatile u8 *) (u32) a1) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 2));
    (*(volatile u8 *) (u32) (a1 + 2)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 3));
    (*(volatile u8 *) (u32) (a1 + 3)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 4));
    (*(volatile u8 *) (u32) (a1 + 4)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 5));
    (*(volatile u8 *) (u32) (a1 + 5)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 6));
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (a1 + 6)) = (u8) a0; if (c_) goto L_0036C9FC; }
    a0 = (s32) ((u32) s2 + 0x208U);
    a1 = 11;
    a2 = (s32) ((u32) sp + 0x40U);
    a3 = (s32) ((u32) sp + 0x44fU); func_0036D060(a0, a1, a2);
    a3 = (s32) 0x370000U;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 11;
    a2 = 24;
    a3 = (s32) ((u32) a3 + 0xffffdf90U); func_001C6158(a0, a1, a2, a3);
    a4 = 0;
    a2 = 0;
    a3 = (s32) ((u32) sp + 0x40U);
    v1 = 9;
    a0 = 11;
    a1 = 12;
L_0036CA8C:;
    v0 = (*(volatile u8 *) (u32) (a3 + 16));
    if (v0 == a1) goto L_0036CAB0;
    if (v0 == a0) goto L_0036CAB0;
    if (v0 == v1) goto L_0036CAB0;
    goto L_0036CAD0;
L_0036CAB0:;
    at = a4 < 3;
    if (at == 0) goto L_0036CAC8;
    v0 = (*(volatile s32 *) (u32) (a3 + 8));
    s0 = (s32) ((u32) s0 + (u32) v0);
L_0036CAC8:;
    a4 = (s32) ((u32) a4 + 0x1U);
L_0036CAD0:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < 11;
    { s32 c_ = v0 != 0; a3 = (s32) ((u32) a3 + 0x18U); if (c_) goto L_0036CA8C; }
    v0 = (s32) 0x55550000U;
    (*(volatile u8 *) (u32) (s1 + 5)) = (u8) 0;
    v0 = v0 | 0x5556;
    (*(volatile u8 *) (u32) (s1 + 4)) = (u8) 0;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    (*(volatile u8 *) (u32) s1) = (u8) 0;
    (*(volatile u8 *) (u32) (s1 + 1)) = (u8) 0;
    v1 = (s32) ((u32) s0 >> 31);
    (*(volatile u8 *) (u32) (s1 + 10)) = (u8) 0;
    (*(volatile u8 *) (u32) (s1 + 11)) = (u8) 0;
    v0 = hi;
    v0 = (s32) ((u32) v0 + (u32) v1);
    at = v0 < 71;
    { s32 c_ = at != 0; (*(volatile u8 *) (u32) (s1 + 12)) = (u8) 0; if (c_) goto L_0036CB24; }
    v0 = 1;
    (*(volatile u8 *) (u32) (s1 + 4)) = (u8) v0;
L_0036CB24:;
    v0 = (*(volatile u8 *) (u32) (sp + 1103));
    if (v0 <= 0) { a0 = (s32) ((u32) sp + 0x430U); goto L_0036CB3C; }
    v0 = 1;
    (*(volatile u8 *) (u32) (s1 + 5)) = (u8) v0;
    a0 = (s32) ((u32) sp + 0x430U);
L_0036CB3C:;
    func_002CA0F0(a0);
    a1 = (*(volatile u8 *) (u32) s2);
    a0 = (s32) ((u32) sp + 0x340U); func_002C7600(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s2 + 2374));
    a0 = (s32) ((u32) sp + 0x340U);
    a1 = (s32) ((u32) s2 + 0x96eU);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s2 + (u32) v0);
    a2 = (s32) ((u32) v0 + 0x9deU); func_002C7840(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x340U);
    a1 = (s32) ((u32) sp + 0x430U); v0 = func_00C2E7B0(a0, a1);
    v1 = 4;
    if (v0 == v1) { (*(volatile u8 *) (u32) (s1 + 10)) = (u8) 0; goto L_0036CBE0; }
    v1 = 3;
    if (v0 == v1) { v1 = 1; goto L_0036CBD4; }
    v1 = 2;
    if (v0 == v1) { (*(volatile u8 *) (u32) s1) = (u8) 0; goto L_0036CBC8; }
    v1 = 1;
    if (v0 == v1) { (*(volatile u8 *) (u32) s1) = (u8) v1; goto L_0036CBC0; }
    v1 = (*(volatile u8 *) (u32) (s2 + 2368)); goto L_0036CBEC;
L_0036CBC0:;
    (*(volatile u8 *) (u32) (s1 + 1)) = (u8) 0; goto L_0036CBE8;
L_0036CBC8:;
    v1 = 1;
    (*(volatile u8 *) (u32) (s1 + 1)) = (u8) v1; goto L_0036CBE8;
L_0036CBD4:;
    (*(volatile u8 *) (u32) (s1 + 10)) = (u8) v1;
    (*(volatile u8 *) (u32) (s1 + 11)) = (u8) 0; goto L_0036CBE8;
L_0036CBE0:;
    v1 = 1;
    (*(volatile u8 *) (u32) (s1 + 11)) = (u8) v1;
L_0036CBE8:;
    v1 = (*(volatile u8 *) (u32) (s2 + 2368));
L_0036CBEC:;
    if (v1 == 0) goto L_0036CC28;
    a0 = (s32) ((u32) sp + 0x340U);
    a1 = (s32) ((u32) sp + 0x430U);
    a2 = 0;
    a3 = 0;
    a4 = 1;
    a5 = (s32) ((u32) sp + 0x448U); v0 = func_00C30290(a0, a1, a2, a3, a4, a5);
    if (v0 == 0) goto L_0036CC28;
    a0 = (s32) ((u32) sp + 0x340U); func_00C32430(a0);
    v1 = 1;
    (*(volatile u8 *) (u32) (s1 + 12)) = (u8) v1;
L_0036CC28:;
L_0036CC2C:;
    return;
}
