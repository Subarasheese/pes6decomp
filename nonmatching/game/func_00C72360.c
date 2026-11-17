/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00C72360(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    a3 = (s32) 0xcd0000U;
    a4 = 0;
    a3 = (s32) ((u32) a3 + 0xffffbd30U);
    a1 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
L_00C72374:;
    a2 = (u64) 0 < (u64) a0;
    { s32 c_ = a2 == 0; (*(volatile u8 *) (u32) (a3 + 30)) = (u8) a0; if (c_) goto L_00C72390; }
    a2 = (*(volatile u8 *) (u32) (a1 + -17076));
    a2 = a2 & 0x1;
    a2 = (u64) 0 < (u64) a2;
    a2 = a2 ^ 0x1;
L_00C72390:;
    (*(volatile u8 *) (u32) (a3 + 33)) = (u8) a2;
    a2 = (u64) 0 < (u64) a0;
    if (a2 == 0) { (*(volatile u8 *) (u32) (a3 + 39)) = (u8) a2; goto L_00C723B4; }
    a2 = (*(volatile u8 *) (u32) (v1 + -17076));
    a2 = a2 & 0x1;
    a2 = (u64) 0 < (u64) a2;
    a2 = a2 ^ 0x1;
    (*(volatile u8 *) (u32) (a3 + 39)) = (u8) a2;
L_00C723B4:;
    a4 = (s32) ((u32) a4 + 0x1U);
    (*(volatile u8 *) (u32) (a3 + 36)) = (u8) a0;
    a2 = a4 < 2;
    { s32 c_ = a2 != 0; a3 = (s32) ((u32) a3 + 0x50U); if (c_) goto L_00C72374; }
    v1 = (s32) ((u32) a4 + 0xffffffffU);
    (*(volatile u32 *) (u32) (gp + -19280)) = (u32) v1; return v0;
}
