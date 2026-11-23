/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008B31A0(s32, s32, s32, s32);

void func_0024AE40(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffa201U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s8 *) (u32) v0);
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_0024AE74; }
L_0024AE74:;
    v0 = 4;
    if (v1 == v0) { v1 = (*(volatile s32 *) (u32) (gp + -22616)); goto L_0024AEB8; }
    v0 = 3;
    if (v1 == v0) goto L_0024AEB4;
    v0 = 2;
    if (v1 == v0) goto L_0024AEB4;
    v0 = 1;
    if (v1 == v0) goto L_0024AEB4;
    if (v1 == 0) goto L_0024AEB4;
    v1 = (*(volatile s32 *) (u32) (gp + -22616)); goto L_0024AED4;
L_0024AEB4:;
    v1 = (*(volatile s32 *) (u32) (gp + -22616));
L_0024AEB8:;
    v0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) (v0 + 152));
    a1 = 1; func_008B31A0(a0, a1, a2, a3);
    goto L_0024AEEC;
L_0024AED4:;
    v0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) (v0 + 152));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
L_0024AEEC:;
    return;
}
