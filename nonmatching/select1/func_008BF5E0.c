/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0023EC10(s32, s32);
s32 func_008BFB90(s32, s32, s32, s32);

s32 func_008BF5E0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    a0 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) a0 + 0x49b0U);
    s0 = (s32) 0x540000U;
    s0 = (s32) ((u32) s0 + 0xffffc300U); v0 = func_008BFB90(a0, a1, a2, a3);
    at = (u64) v0 < (u64) (s64) 11;
    if (at == 0) { v0 = 0; goto L_008BF6A0; }
    v1 = (s32) 0x8e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffa8d0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8bf628U) goto L_008BF628; if (t_ == 0x8bf63cU) goto L_008BF63C; if (t_ == 0x8bf650U) goto L_008BF650; if (t_ == 0x8bf664U) goto L_008BF664; if (t_ == 0x8bf678U) goto L_008BF678; if (t_ == 0x8bf68cU) goto L_008BF68C; if (t_ == 0x8bf694U) goto L_008BF694; if (t_ == 0x8bf69cU) goto L_008BF69C; }
L_008BF628:;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 2; func_0023EC10(a0, a1);
    goto L_008BF69C;
L_008BF63C:;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 2; func_0023EC10(a0, a1);
    goto L_008BF69C;
L_008BF650:;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 4; func_0023EC10(a0, a1);
    goto L_008BF69C;
L_008BF664:;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 4; func_0023EC10(a0, a1);
    goto L_008BF69C;
L_008BF678:;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 4; func_0023EC10(a0, a1);
    goto L_008BF69C;
L_008BF68C:;
    v0 = 2; goto L_008BF6A0;
L_008BF694:;
    v0 = 1; goto L_008BF6A0;
L_008BF69C:;
    v0 = 0;
L_008BF6A0:;
    return v0;
}
