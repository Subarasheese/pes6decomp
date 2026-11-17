/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002DCA30(void);
void func_00855120(s32, s32, s32, s32);
void memset(s32, s32, s32);

void func_009E1BE0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s0 = 0;
    at = s0 < 10;
    { s32 c_ = at == 0; s1 = a0; if (c_) goto L_009E1C58; }
L_009E1C00:;
    v0 = (s32) ((u32) s1 + (u32) s0);
    v1 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) v0);
    v1 = (s32) ((u32) v1 + 0xffffbde0U);
    v1 = (s32) ((u32) v1 + (u32) s0);
    at = s0 < 9;
    { s32 c_ = at == 0; (*(volatile u8 *) (u32) v1) = (u8) v0; if (c_) goto L_009E1C38; }
    a0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) ((u32) s0 + 0x1U);
    v1 = 10;
    a1 = 0;
    a2 = (s32) ((u32) v1 - (u32) v0); memset(a0, a1, a2);
L_009E1C38:;
    v0 = func_002DCA30();
    if (v0 != 0) goto L_009E1C60;
L_009E1C48:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 10;
    if (v1 != 0) goto L_009E1C00;
L_009E1C58:;
    goto L_009E1C78;
L_009E1C60:;
    a0 = (s32) 0xcc0000U;
    a0 = (s32) ((u32) a0 + 0xffffbde0U); func_00855120(a0, a1, a2, a3);
    goto L_009E1C48;
L_009E1C78:;
    return;
}
