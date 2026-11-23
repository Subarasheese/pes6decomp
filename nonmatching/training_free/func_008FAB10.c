/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002DCA30(void);
void func_002DF730(s32, s32, s32, s32);

void func_008FAB10(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    s0 = a0; v0 = func_002DCA30();
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -19632)); goto L_008FAB44; }
    v1 = (s32) 0x3b0000U;
    a0 = 1;
    v1 = (*(volatile s8 *) (u32) (v1 + -5757));
    if (v1 == a0) { ; goto L_008FAB64; }
    a0 = (*(volatile s32 *) (u32) (gp + -19632));
L_008FAB44:;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffdab8U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (a0 + 68)); func_002DF730(a0, a1, a2, a3);
L_008FAB64:;
    return;
}
