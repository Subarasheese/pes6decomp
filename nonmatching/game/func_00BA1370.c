/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BA1370(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    v1 = (s32) 0xcc0000U;
    a0 = (*(volatile s32 *) (u32) (v1 + -12800));
    a0 = (s32) ((u32) a0 + 0x1U);
    v1 = (s32) 0xcc0000U;
    at = (u64) a0 < (u64) (s64) 10000;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (v1 + -12800)) = (u32) a0; if (c_) goto L_00BA1404; }
L_00BA138C:;
    a5 = (s32) 0xca0000U;
    a4 = (s32) 0xcc0000U;
    a6 = 0;
    a5 = (s32) ((u32) a5 + 0xffffe590U);
    a4 = (s32) ((u32) a4 + 0xffffce00U);
    a1 = (s32) 0xcc0000U;
    a0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
L_00BA13AC:;
    a3 = (*(volatile s32 *) (u32) (a1 + -12800));
    a2 = (*(volatile s32 *) (u32) a5);
    if ((u32) a2 != 0) { s64 q_ = (s32) ((u32) a3 / (u32) a2); hi = (s32) ((u32) a3 % (u32) a2); lo = q_; }
    a2 = hi;
    a3 = (*(volatile s32 *) (u32) (a5 + 4));
    (*(volatile u32 *) (u32) (a4 + 4)) = (u32) a2;
    a2 = (*(volatile s32 *) (u32) (a0 + -12800));
    if ((u32) a3 != 0) { s64 q_ = (s32) ((u32) a2 / (u32) a3); hi = (s32) ((u32) a2 % (u32) a3); lo = q_; }
    a2 = hi;
    a3 = (*(volatile s32 *) (u32) (a5 + 8));
    (*(volatile u32 *) (u32) (a4 + 8)) = (u32) a2;
    a2 = (*(volatile s32 *) (u32) (v1 + -12800));
    if ((u32) a3 != 0) { s64 q_ = (s32) ((u32) a2 / (u32) a3); hi = (s32) ((u32) a2 % (u32) a3); lo = q_; }
    a3 = hi;
    a6 = (s32) ((u32) a6 + 0x3U);
    a2 = (u64) a6 < (u64) (s64) 9;
    a5 = (s32) ((u32) a5 + 0xcU);
    (*(volatile u32 *) (u32) (a4 + 12)) = (u32) a3;
    { s32 c_ = a2 != 0; a4 = (s32) ((u32) a4 + 0xcU); if (c_) goto L_00BA13AC; }
    goto L_00BA1410;
L_00BA1404:;
    v1 = (s32) 0xcc0000U;
    (*(volatile u32 *) (u32) (v1 + -12800)) = (u32) 0; goto L_00BA138C;
L_00BA1410:;
    return;
}
