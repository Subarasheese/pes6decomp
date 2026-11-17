/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001FC920(s32);
s32 func_002D4970(s32);
s32 func_00305E50(s32);
s32 func_0090F4A0(s32, s32, s32, s32);
s32 func_0090F550(s32, s32, s32, s32);

s32 func_002FDEB0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s0 = a0;
    a0 = 5; v0 = func_001FC920(a0);
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    v1 = 7;
    if (a0 != v1) goto L_002FDF04;
    v1 = (*(volatile u8 *) (u32) (v0 + 12));
    v0 = 2;
    if (v1 != v0) goto L_002FDF04;
    v0 = func_0090F4A0(a0, a1, a2, a3);
    if (v0 == 0) goto L_002FDF04;
    a0 = s0; v0 = func_00305E50(a0);
L_002FDF04:;
    v0 = func_0090F550(a0, a1, a2, a3);
    at = (u64) v0 < (u64) (s64) 9;
    if (at == 0) { s1 = 2; goto L_002FDF74; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd3e0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x2fdf34U) goto L_002FDF34; if (t_ == 0x2fdf3cU) goto L_002FDF3C; if (t_ == 0x2fdf44U) goto L_002FDF44; if (t_ == 0x2fdf4cU) goto L_002FDF4C; if (t_ == 0x2fdf54U) goto L_002FDF54; if (t_ == 0x2fdf70U) goto L_002FDF70; }
L_002FDF34:;
    s1 = 1; goto L_002FDF74;
L_002FDF3C:;
    s1 = 2; goto L_002FDF74;
L_002FDF44:;
    s1 = 3; goto L_002FDF74;
L_002FDF4C:;
    s1 = 5; goto L_002FDF74;
L_002FDF54:;
    s1 = 4;
    a0 = s1; v0 = func_002D4970(a0);
    a0 = s0; v0 = func_00305E50(a0);
    a0 = s1; goto L_002FDF78;
L_002FDF70:;
    s1 = 2;
L_002FDF74:;
    a0 = s1;
L_002FDF78:;
    v0 = func_002D4970(a0);
    v0 = 1;
    return v0;
}
