/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008E1B90(s32, s32);
void func_008E1C30(s32, s32, s32);

void func_008E0A30(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s2 = a0;
    s1 = a1;
    s0 = 0;
    v0 = (s32) ((u32) s1 + (u32) s0);
L_008E0A58:;
    v1 = (s32) ((u32) s2 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) v0);
    s3 = (s32) ((u32) v1 + 0x9U);
    a1 = s0 & 0xff;
    a0 = (s32) ((u32) s2 + 0x18U);
    (*(volatile u8 *) (u32) (v1 + 9)) = (u8) v0; v0 = func_008E1B90(a0, a1);
    if (v0 != 0) goto L_008E0A80;
    (*(volatile u8 *) (u32) s3) = (u8) 0;
L_008E0A80:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 14;
    if (v0 != 0) { v0 = (s32) ((u32) s1 + (u32) s0); goto L_008E0A58; }
    s0 = 0;
    v0 = (s32) ((u32) s2 + (u32) s0);
L_008E0A98:;
    a1 = s0 & 0xff;
    a2 = (*(volatile u8 *) (u32) (v0 + 9));
    a0 = (s32) ((u32) s2 + 0x18U); func_008E1C30(a0, a1, a2);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 14;
    if (v1 != 0) { v0 = (s32) ((u32) s2 + (u32) s0); goto L_008E0A98; }
    return;
}
