/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00623430(void);
void func_0063AD20(s32, s32, s32, s32);
void func_0063AE10(s32, s32, s32, s32);
s32 func_00645820(s32);

void func_00636810(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    s1 = (s32) ((u32) a0 + 0x25cU);
    v0 = (*(volatile s32 *) (u32) (a0 + 604));
    s0 = (s32) 0x660000U;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0xffffc2e0U); if (c_) goto L_00636850; }
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v1 + 72));
    a2 = (*(volatile s32 *) (u32) (v0 + -9852));
    a1 = s1;
    a3 = 0; func_0063AE10(a0, a1, a2, a3);
L_00636850:;
    v0 = (*(volatile u8 *) (u32) (s0 + 12));
    if (v0 == 0) { v0 = (s32) ((u32) gp + 0xffff83acU); goto L_006368CC; }
    s0 = (*(volatile s16 *) (u32) (gp + -21812));
    v1 = -1;
    if (s0 == v1) goto L_00636878;
    v0 = (*(volatile s16 *) (u32) (gp + -21810));
    if (v0 != v1) goto L_00636884;
L_00636878:;
    v0 = (s32) ((u32) gp + 0xffff83acU);
    goto L_006368CC;
L_00636884:;
    if (v0 != 0) { v0 = (*(volatile s16 *) (u32) (gp + -21810)); goto L_006368BC; }
    v0 = func_00623430();
    v1 = 1;
    v1 = (s32) ((u32) v1 << (s0 & 31));
    v0 = v1 & v0;
    if (v0 != 0) goto L_006368B8;
    a0 = (s32) ((u32) s0 + 0x16U); v0 = func_00645820(a0);
    goto L_006368CC;
L_006368B8:;
    v0 = (*(volatile s16 *) (u32) (gp + -21810));
L_006368BC:;
    v1 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + 0x18U);
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00645820(a0);
L_006368CC:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    return;
}
