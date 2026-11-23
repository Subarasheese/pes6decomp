/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0017F880(s32);
s32 func_001A6D40(void);
void func_001B4D20(s32, s32, s32, s32);
void func_001B9C60(s32, s32, s32, s32);
void func_001EDBA0(s32, s32, s32, s32);
void func_001EDD90(s32, s32, s32, s32);
void func_0023D660(s32, s32, s32, s32);
void func_0023F510(s32, s32, s32, s32);
void func_002405A0(s32, s32, s32, s32);
void func_002DF960(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002E33D0(s32, s32, s32, s32);
void func_002E4570(s32, s32, s32, s32);
void func_002F4E10(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008B3040(s32, s32, s32, s32);
s32 func_008B32E0(s32, s32, s32, s32);
s32 func_008CBCA0(s32, s32, s32, s32);
s32 func_0093D180(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_0093D040(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    s0 = (s32) 0x540000U;
    s0 = (s32) ((u32) s0 + 0xffffc300U); v0 = func_001A6D40();
    a0 = v0; func_0017F880(a0);
    v0 = func_008CBCA0(a0, a1, a2, a3);
    if (v0 != 0) { a0 = 15; goto L_0093D080; }
    v0 = 0; goto L_0093D15C;
L_0093D080:;
    v0 = func_0093D180(a0, a1, a2, a3, a4, a5, a6, a7);
    s2 = 0;
    s1 = 0;
L_0093D090:;
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B32E0(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 14;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0093D090; }
    a0 = (s32) ((u32) gp + 0xffffb864U); func_002405A0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x14U); func_002405A0(a0, a1, a2, a3);
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32240)); func_001B4D20(a0, a1, a2, a3);
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32244)); func_001B4D20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18352)); func_002E33D0(a0, a1, a2, a3);
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32316)); func_002F4E10(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (gp + -18340)); func_002E4570(a0, a1, a2, a3);
    func_0023D660(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18324)); func_001B9C60(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18336)); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 2; func_0023F510(a0, a1, a2, a3);
    s1 = (s32) 0x960000U;
    s0 = 0;
    s1 = (s32) ((u32) s1 + 0x7e00U);
L_0093D120:;
    a1 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (gp + -18344)); func_001EDBA0(a0, a1, a2, a3);
    s0 = (s32) ((u32) s0 + 0x1U);
    at = s0 < 14;
    { s32 c_ = at != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0093D120; }
    a1 = (*(volatile s32 *) (u32) (gp + -18348));
    a0 = (*(volatile s32 *) (u32) (gp + -18344)); func_001EDBA0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18344)); func_001EDD90(a0, a1, a2, a3);
    func_008B3040(a0, a1, a2, a3);
    v0 = 1;
L_0093D15C:;
    return v0;
}
