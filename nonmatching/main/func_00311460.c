/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6OptionData_GetBlock2F5(void);

s32 func_00311460(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    v0 = s1 & 0xff;
    at = v0 < 2;
    { s32 c_ = at == 0; s0 = a1; if (c_) goto L_00311494; }
    v0 = s0 & 0xff;
    v0 = v0 < 32;
    if (v0 != 0) goto L_0031149C;
L_00311494:;
    v0 = 0; goto L_00311500;
L_0031149C:;
    v0 = Pes6OptionData_GetBlock2F5();
    v1 = (*(volatile u8 *) (u32) (v0 + 6));
    v0 = 1;
    if (v1 == v0) { v0 = 0; goto L_00311500; }
    a1 = s1 & 0xff;
    a0 = (s32) 0x590000U;
    v0 = (s32) ((u32) a1 << 4);
    v1 = s0 & 0xff;
    a1 = (s32) ((u32) v0 - (u32) a1);
    a0 = (s32) ((u32) a0 + 0x2980U);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = ~(v0 | 0);
    v0 = (u64) 0 < (u64) v0;
L_00311500:;
    return v0;
}
