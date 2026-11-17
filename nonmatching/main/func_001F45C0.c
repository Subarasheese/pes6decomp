/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001F45C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;

    a3 = (s32) 0x3a0000U;
    a2 = a1;
    v1 = (*(volatile u8 *) (u32) (a1 + 12));
    a4 = 0;
    a3 = (s32) ((u32) a3 + 0xffff94a0U);
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (a1 + 12)) = (u8) v1;
    a1 = (*(volatile u8 *) (u32) a0);
L_001F45E8:;
    v1 = (*(volatile s8 *) (u32) a3);
    if (a1 != v1) { a4 = (s32) ((u32) a4 + 0x1U); goto L_001F461C; }
    v0 = (s32) 0x3a0000U;
    a1 = (s32) ((u32) a0 + 0x1U);
    v1 = (s32) ((u32) a4 << 3);
    v0 = (s32) ((u32) v0 + 0xffff94a4U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; a0 = a4; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_001F462C;
L_001F461C:;
    v1 = a4 < 10;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x8U); if (c_) goto L_001F45E8; }
L_001F462C:;
    return v0;
}
