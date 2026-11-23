/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64);
void func_0023EC10(s64, s64);

void func_00940D40(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 hi = 0, lo = 0;

    v0 = (s32) 0x8e0000U;
    v1 = 32;
    a0 = (*(volatile s32 *) (u32) (v0 + -15824));
    s0 = (s32) 0x540000U;
    { s32 c_ = a0 == v1; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_00940DE0; }
    v0 = 16;
    if (a0 == v0) { v0 = (s32) 0x84000000U; goto L_00940D78; }
    a0 = (s32) ((u32) s0 + 0x10U); goto L_00940E48;
L_00940D78:;
    a0 = v0 | 0xf802; SD_call(a0);
    a3 = (s32) 0x960000U;
    a4 = 13;
    v1 = (s32) 0x960000U;
    v0 = (s32) 0x960000U;
    a3 = (s32) ((u32) a3 + 0x7d40U);
    a5 = -1;
    a1 = (s32) 0x960000U;
    a0 = (s32) 0x960000U;
    a2 = (*(volatile s8 *) (u32) (a1 + 31385));
L_00940DA4:;
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    (*(volatile u8 *) (u32) (a0 + 31385)) = (u8) a2;
    a2 = (s64) ((u64) a2 << 56);
    a2 = a2 >> 56;
    if (a2 != a5) goto L_00940DC0;
    (*(volatile u8 *) (u32) (v1 + 31385)) = (u8) a4;
L_00940DC0:;
    a2 = (*(volatile s8 *) (u32) (v0 + 31385));
    a2 = (s32) ((u32) a2 << 2);
    a2 = (s32) ((u32) a3 + (u32) a2);
    a2 = (*(volatile s32 *) (u32) (a2 + 4));
    if (a2 == a5) { a2 = (*(volatile s8 *) (u32) (a1 + 31385)); goto L_00940DA4; }
    goto L_00940E44;
L_00940DE0:;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = (s32) 0x960000U;
    a0 = (s32) 0x960000U;
    a2 = (*(volatile s8 *) (u32) (v0 + 31385));
    a1 = 14;
    a0 = (s32) ((u32) a0 + 0x7d40U);
    v0 = -1;
    v1 = (s64) ((u64) a2 << 56);
L_00940E08:;
    v1 = v1 >> 56;
    v1 = (s32) ((u32) v1 + 0x1U);
    v1 = (s64) ((u64) v1 << 56);
    v1 = v1 >> 56;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a1); hi = (s32) ((s32) v1 % (s32) a1); lo = q_; }
    v1 = hi;
    a2 = (s64) ((u64) v1 << 56);
    a2 = a2 >> 56;
    v1 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    if (v1 == v0) { v1 = (s64) ((u64) a2 << 56); goto L_00940E08; }
    v0 = (s32) 0x960000U;
    (*(volatile u8 *) (u32) (v0 + 31385)) = (u8) a2;
L_00940E44:;
    a0 = (s32) ((u32) s0 + 0x10U);
L_00940E48:;
    a1 = 2; func_0023EC10(a0, a1);
    return;
}
