/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00121430(s32, s32);
void strcpy(s32, s32);

void func_002C9E10(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    at = a1 < 10;
    s1 = a2;
    { s32 c_ = at == 0; s0 = a0; if (c_) goto L_002C9E78; }
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffc6c0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0); strcpy(a0, a1);
    a0 = s1 & 0xff;
    v1 = 1;
    if (a0 == v1) goto L_002C9E60;
L_002C9E58:;
    goto L_002C9E7C;
L_002C9E60:;
    a1 = (s32) 0x3e0000U;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0xffffa740U); func_00121430(a0, a1);
    goto L_002C9E58;
L_002C9E78:;
L_002C9E7C:;
    return;
}
