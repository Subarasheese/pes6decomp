/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00292F30(s64, s64, s64, s64);
s64 func_00293030(s64, s64, s64, s64);

s64 func_002C6320(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[30];
    s64 sp = (s32) (u32) frame;

    v1 = 169;
    s2 = a0;
    s1 = a1;
    a1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = (s32) ((u32) a1 + 0xffffc3a0U);
L_002C634C:;
    v0 = (*(volatile s8 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u8 *) (u32) a0) = (u8) v0;
    a1 = (s32) ((u32) a1 + 0x1U);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 > 0) goto L_002C634C;
    a0 = s2;
    a1 = s1; v0 = func_00293030(a0, a1, a2, a3);
    s0 = v0 & 0xff;
    at = s0 < 4;
    if (at == 0) goto L_002C6400;
    v0 = s1 & 0xff;
    at = (u64) v0 < (u64) (s64) 13;
    if (at == 0) goto L_002C6400;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffa500U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x2c63b0U) goto L_002C63B0; if (t_ == 0x2c63ccU) goto L_002C63CC; if (t_ == 0x2c63e8U) goto L_002C63E8; if (t_ == 0x2c6400U) goto L_002C6400; }
L_002C63B0:;
    a0 = s2;
    a1 = 2; v0 = func_00292F30(a0, a1, a2, a3);
    if (v0 == 0) { a0 = s2; goto L_002C6470; }
L_002C63C4:;
    s0 = (s64) ((u64) 0 + (u64) (s64) 4); goto L_002C6400;
L_002C63CC:;
    a0 = s2;
    a1 = 5; v0 = func_00292F30(a0, a1, a2, a3);
    if (v0 == 0) { a0 = s2; goto L_002C64B0; }
L_002C63E0:;
    s0 = (s64) ((u64) 0 + (u64) (s64) 4); goto L_002C6400;
L_002C63E8:;
    a0 = s2;
    a1 = 12; v0 = func_00292F30(a0, a1, a2, a3);
    if (v0 == 0) { a0 = s2; goto L_002C6504; }
L_002C63FC:;
    s0 = (s64) ((u64) 0 + (u64) (s64) 4);
L_002C6400:;
    v1 = s0 & 0xff;
    v0 = 9;
    if (v1 != v0) goto L_002C6468;
    a0 = s1 & 0xff;
    at = a0 < 13;
    if (at == 0) goto L_002C6468;
    if (s2 == 0) goto L_002C6468;
    v0 = (*(volatile u8 *) (u32) (s2 + 1));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 60);
    v1 = v0 & 0xff;
    at = v1 < 13;
    if (at == 0) goto L_002C6468;
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 64));
    v0 = (s32) ((u32) s0 + (u32) v0);
    s0 = v0 & 0xff;
L_002C6468:;
    v0 = s0; goto L_002C6530;
L_002C6470:;
    a1 = 1; v0 = func_00292F30(a0, a1, a2, a3);
    if (v0 != 0) goto L_002C63C4;
    a0 = s2;
    a1 = 3; v0 = func_00292F30(a0, a1, a2, a3);
    if (v0 != 0) goto L_002C63C4;
    a0 = s2;
    a1 = 4; v0 = func_00292F30(a0, a1, a2, a3);
    if (v0 == 0) goto L_002C6400;
    goto L_002C63C4;
L_002C64B0:;
    a1 = 6; v0 = func_00292F30(a0, a1, a2, a3);
    if (v0 != 0) goto L_002C63E0;
    a0 = s2;
    a1 = 8; v0 = func_00292F30(a0, a1, a2, a3);
    if (v0 != 0) goto L_002C63E0;
    a0 = s2;
    a1 = 7; v0 = func_00292F30(a0, a1, a2, a3);
    if (v0 != 0) goto L_002C63E0;
    a0 = s2;
    a1 = 9; v0 = func_00292F30(a0, a1, a2, a3);
    if (v0 == 0) goto L_002C6400;
    goto L_002C63E0;
L_002C6504:;
    a1 = 11; v0 = func_00292F30(a0, a1, a2, a3);
    if (v0 != 0) goto L_002C63FC;
    a0 = s2;
    a1 = 10; v0 = func_00292F30(a0, a1, a2, a3);
    if (v0 == 0) goto L_002C6400;
    s0 = (s64) ((u64) 0 + (u64) (s64) 4); goto L_002C6400;
L_002C6530:;
    return v0;
}
