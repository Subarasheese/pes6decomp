/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00284AB0(s32, s32, s32, s32, s32);

s32 func_00284E60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    { s32 c_ = a2 >= 0; v1 = (s32) a2 >> 2; if (c_) goto L_00284E70; }
    v0 = (s32) ((u32) a2 + 0x3U);
    v1 = (s32) v0 >> 2;
L_00284E70:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile u32 *) (u32) (v0 + 116)) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    { s32 c_ = a2 <= 0; (*(volatile u16 *) (u32) (v0 + 106)) = (u16) 0; if (c_) goto L_00284E8C; }
    a4 = 1; goto L_00284E94;
L_00284E8C:;
    a2 = (s32) ((u32) 0 - (u32) a2);
    a4 = 1;
L_00284E94:;
    v0 = func_00284AB0(a0, a1, a2, a3, a4); return v0;
}
