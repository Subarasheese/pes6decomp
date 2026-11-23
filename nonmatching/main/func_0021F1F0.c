/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00223960(s32);
s32 func_00223AE0(void);

s32 func_0021F1F0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0 & 0xffff;
    v1 = s1 < 64;
    { s32 c_ = v1 != 0; s0 = a1; if (c_) goto L_0021F244; }
    at = s1 < 204;
    if (at == 0) { v1 = (s32) ((u32) s1 + 0xfffffedaU); goto L_0021F248; }
    v0 = func_00223AE0();
    a0 = (s32) ((u32) s1 + 0xffffffc0U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v0 + (u32) v1); goto L_0021F260;
L_0021F244:;
    v1 = (s32) ((u32) s1 + 0xfffffedaU);
L_0021F248:;
    at = (u64) v1 < (u64) (s64) 2;
    if (at == 0) { v1 = 0; goto L_0021F260; }
    v0 = func_00223960(a0);
    v1 = (*(volatile s32 *) (u32) v0);
L_0021F260:;
    if (v1 == 0) { ; goto L_0021F270; }
    (*(volatile u8 *) (u32) (v1 + 56)) = (u8) s0;
L_0021F270:;
    return v0;
}
