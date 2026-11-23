/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void memset(s32, s32, s32);

void Pes6Scene_Advance(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;

    a3 = (s32) 0x510000U;
    v1 = (s32) 0x510000U;
    a1 = (s32) ((u32) a0 << 3);
    a3 = (s32) ((u32) a3 + 0xfd0U);
    v1 = (s32) ((u32) v1 + 0xfd4U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a2 = (s32) ((u32) a3 + (u32) a1);
    at = a0 < 101;
    a1 = (*(volatile s32 *) (u32) a2);
    a1 = (s32) ((u32) a1 + 0x1U);
    (*(volatile u32 *) (u32) a2) = (u32) a1;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) v1) = (u32) 0; if (c_) goto L_0017A6EC; }
    v1 = (s32) ((u32) a0 + 0x1U);
    v0 = 3;
    v0 = (s32) ((u32) v0 - (u32) v1);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 3);
    a2 = (s32) ((u32) v0 << 3);
    a0 = (s32) ((u32) a3 + (u32) v1); memset(a0, a1, a2);
L_0017A6EC:;
    return;
}
