/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002405A0(s32, s32, s32, s32);
void func_002E33D0(s32, s32, s32, s32);
void func_002ED130(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008B3040(s32, s32, s32, s32);
s32 func_008B32E0(s32, s32, s32, s32);
void func_008CA7A0(s32, s32, s32, s32);

void func_009435B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    s2 = 0;
    s1 = 0;
    s0 = (s32) 0x540000U;
    s0 = (s32) ((u32) s0 + 0xffffc300U);
L_009435D4:;
    v0 = (*(volatile s32 *) (u32) (gp + -18296));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B32E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18296));
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 7;
    a0 = (s32) ((u32) a0 + (u32) s1);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_009435D4; }
    a0 = (s32) ((u32) gp + 0xffffb888U); func_002405A0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x14U); func_002405A0(a0, a1, a2, a3);
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32320)); func_002ED130(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32324)); func_002ED130(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (gp + -18288)); func_002E33D0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -20172)); func_008CA7A0(a0, a1, a2, a3);
    func_008B3040(a0, a1, a2, a3);
    return;
}
