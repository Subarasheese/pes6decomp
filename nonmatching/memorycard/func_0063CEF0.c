/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0063CAD0(s32, s32, s32, s32);
void strcpy(s32, s32);

void func_0063CEF0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    { s32 c_ = a1 != 0; s0 = a0; if (c_) goto L_0063CF2C; }
    v0 = (s32) 0x660000U;
    a0 = (s32) 0x660000U;
    v1 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + 0xffff8b80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) a0 + 0xffff9058U); strcpy(a0, a1);
    goto L_0063CF4C;
L_0063CF2C:;
    v0 = (s32) 0x660000U;
    a0 = (s32) 0x660000U;
    v1 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + 0xffff8b80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) a0 + 0xffff9064U); strcpy(a0, a1);
L_0063CF4C:;
    a0 = (s32) 0x660000U;
    a2 = (s32) ((u32) s0 + 0x1U);
    a0 = (s32) ((u32) a0 + 0xffff9060U);
    a1 = 2;
    a3 = 1; func_0063CAD0(a0, a1, a2, a3);
    return;
}
