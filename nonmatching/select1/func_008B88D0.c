/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_GetUnavailableFlag(void);
void func_001B9C60(s32, s32, s32, s32);
void func_0023B040(s32, s32, s32, s32);
void func_0023D660(s32, s32, s32, s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023EA10(s32, s32, s32, s32);
void func_002405A0(s32, s32, s32, s32);
void func_002DF960(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002E4570(s32, s32, s32, s32);
s32 func_008223F0(s32, s32, s32, s32);
s32 func_008B32E0(s32, s32, s32, s32);

void func_008B88D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    s2 = 0;
    s1 = 0;
    s0 = (s32) 0x540000U;
    s0 = (s32) ((u32) s0 + 0xffffc300U);
L_008B88F4:;
    v0 = (*(volatile s32 *) (u32) (gp + -22684));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B32E0(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 19;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_008B88F4; }
    a0 = (s32) ((u32) gp + 0xffffa764U); func_002405A0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x14U); func_002405A0(a0, a1, a2, a3);
    a0 = 0; func_0023EA10(a0, a1, a2, a3);
    v0 = Pes6SaveData_GetUnavailableFlag();
    v1 = 1;
    if (v0 != v1) goto L_008B8960;
    v0 = func_008223F0(a0, a1, a2, a3);
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (gp + -20276)); goto L_008B8990; }
    a0 = 31; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008B898C;
L_008B8960:;
    v0 = (s32) 0x510000U;
    v1 = 4;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) { a0 = 31; goto L_008B8984; }
    a0 = 30; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008B898C;
L_008B8984:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
L_008B898C:;
    a0 = (*(volatile s32 *) (u32) (gp + -20276));
L_008B8990:;
    func_001B9C60(a0, a1, a2, a3);
    func_0023D660(a0, a1, a2, a3);
    func_0023B040(a0, a1, a2, a3);
    v0 = (s32) 0x8e0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -4120)); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x8e0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -4116)); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (gp + -20280)); func_002E4570(a0, a1, a2, a3);
    return;
}
