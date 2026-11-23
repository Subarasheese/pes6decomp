/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0023EC10(s32, s32);
void func_008BDC90(void);
s32 func_008BFB90(s32, s32, s32, s32);

s32 func_008BE900(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    a0 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) a0 + 0x1ce0U);
    s0 = (s32) 0x540000U;
    s0 = (s32) ((u32) s0 + 0xffffc300U); v0 = func_008BFB90(a0, a1, a2, a3);
    at = (u64) v0 < (u64) (s64) 11;
    if (at == 0) { v0 = 0; goto L_008BE9D0; }
    v1 = (s32) 0x8e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffa8a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8be948U) goto L_008BE948; if (t_ == 0x8be964U) goto L_008BE964; if (t_ == 0x8be980U) goto L_008BE980; if (t_ == 0x8be994U) goto L_008BE994; if (t_ == 0x8be9a8U) goto L_008BE9A8; if (t_ == 0x8be9bcU) goto L_008BE9BC; if (t_ == 0x8be9c4U) goto L_008BE9C4; if (t_ == 0x8be9ccU) goto L_008BE9CC; }
L_008BE948:;
    func_008BDC90();
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 2; func_0023EC10(a0, a1);
    goto L_008BE9CC;
L_008BE964:;
    func_008BDC90();
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 2; func_0023EC10(a0, a1);
    goto L_008BE9CC;
L_008BE980:;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 4; func_0023EC10(a0, a1);
    goto L_008BE9CC;
L_008BE994:;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 4; func_0023EC10(a0, a1);
    goto L_008BE9CC;
L_008BE9A8:;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 4; func_0023EC10(a0, a1);
    goto L_008BE9CC;
L_008BE9BC:;
    v0 = 2; goto L_008BE9D0;
L_008BE9C4:;
    v0 = 1; goto L_008BE9D0;
L_008BE9CC:;
    v0 = 0;
L_008BE9D0:;
    return v0;
}
