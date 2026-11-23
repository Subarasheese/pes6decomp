/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0023EC10(s32, s32);
void func_008BC9D0(void);
s32 func_008BFB90(s32, s32, s32, s32);

s32 func_008BD250(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    a0 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) a0 + 0xfffff000U);
    s0 = (s32) 0x540000U;
    s0 = (s32) ((u32) s0 + 0xffffc300U); v0 = func_008BFB90(a0, a1, a2, a3);
    at = (u64) v0 < (u64) (s64) 11;
    if (at == 0) { v0 = 0; goto L_008BD320; }
    v1 = (s32) 0x8e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffa7e0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8bd298U) goto L_008BD298; if (t_ == 0x8bd2b4U) goto L_008BD2B4; if (t_ == 0x8bd2d0U) goto L_008BD2D0; if (t_ == 0x8bd2e4U) goto L_008BD2E4; if (t_ == 0x8bd2f8U) goto L_008BD2F8; if (t_ == 0x8bd30cU) goto L_008BD30C; if (t_ == 0x8bd314U) goto L_008BD314; if (t_ == 0x8bd31cU) goto L_008BD31C; }
L_008BD298:;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 2; func_0023EC10(a0, a1);
    func_008BC9D0();
    goto L_008BD31C;
L_008BD2B4:;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 2; func_0023EC10(a0, a1);
    func_008BC9D0();
    goto L_008BD31C;
L_008BD2D0:;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 4; func_0023EC10(a0, a1);
    goto L_008BD31C;
L_008BD2E4:;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 4; func_0023EC10(a0, a1);
    goto L_008BD31C;
L_008BD2F8:;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 4; func_0023EC10(a0, a1);
    goto L_008BD31C;
L_008BD30C:;
    v0 = 2; goto L_008BD320;
L_008BD314:;
    v0 = 1; goto L_008BD320;
L_008BD31C:;
    v0 = 0;
L_008BD320:;
    return v0;
}
