/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00154530(void);
s32 func_00154540(void);
void func_00249380(s32, s32, s32, s32);
s32 func_00249700(s32, s32);
s32 func_0024E650(void);

s32 func_008C48A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    v0 = func_0024E650();
    s0 = v0; v0 = func_00154540();
    v0 = func_00154530();
    v0 = v0 & 0xff;
    a1 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) gp + 0xffffa78cU);
    (*(volatile u32 *) (u32) (gp + -22608)) = (u32) v0;
    a1 = (s32) ((u32) a1 + 0x76b0U); v0 = func_00249700(a0, a1);
    s1 = v0;
    if (s1 != 0) goto L_008C4918;
    s2 = 0;
L_008C48F0:;
    a2 = (s32) 0x8e0000U;
    a0 = s2;
    a1 = s2;
    a2 = (s32) ((u32) a2 + 0x76b0U); func_00249380(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 2;
    if (at != 0) goto L_008C48F0;
L_008C4918:;
    a0 = (*(volatile s32 *) (u32) (gp + -22608));
    a3 = (s32) 0x3e0000U;
    a2 = (s32) 0x8e0000U;
    a1 = 0;
    a3 = (s32) ((u32) a3 + 0xffff8be0U);
    a2 = (s32) ((u32) a2 + 0x76b0U);
    v0 = 1;
L_008C4934:;
    v1 = (*(volatile s32 *) (u32) a3);
    v1 = a0 & v1;
    if (v1 == 0) goto L_008C4948;
    (*(volatile u8 *) (u32) (a2 + 1)) = (u8) v0;
L_008C4948:;
    a1 = (s32) ((u32) a1 + 0x1U);
    at = a1 < 2;
    a3 = (s32) ((u32) a3 + 0x4U);
    { s32 c_ = at != 0; a2 = (s32) ((u32) a2 + 0x34U); if (c_) goto L_008C4934; }
    (*(volatile u32 *) (u32) (gp + -22628)) = (u32) s0;
    v0 = s1;
    return v0;
}
