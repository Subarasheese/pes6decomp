/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64);
void func_008D7AE0(s64, s64, s64, s64);
s64 func_008D90A0(s64, s64, s64, s64);
void func_008E1420(s64, s64, s64, s64);

s64 func_008E0710(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 hi = 0, lo = 0;

    s0 = a0;
    if (s0 != 0) { a0 = a1; goto L_008E0730; }
    v0 = 0; goto L_008E0854;
L_008E0730:;
    v0 = func_008D90A0(a0, a1, a2, a3);
    v1 = v0 & 0x1660;
    v0 = 4096;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_008E07F4; }
    v0 = 512;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_008E07B4; }
    v0 = 1024;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_008E0780; }
    v0 = 32;
    if (v1 == v0) { v0 = 2; goto L_008E0854; }
    v0 = 64;
    if (v1 == v0) { v0 = 1; goto L_008E0854; }
    v0 = 0; goto L_008E0854;
L_008E0780:;
    a0 = v0 | 0xf803; SD_call(a0);
    v0 = (*(volatile u8 *) (u32) (s0 + 3));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 3));
    v0 = v0 & 0x3;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v0;
    a1 = (*(volatile u8 *) (u32) (s0 + 3));
    a0 = (s32) ((u32) s0 + 0x13cU); func_008D7AE0(a0, a1, a2, a3);
    v0 = 4; goto L_008E0854;
L_008E07B4:;
    a0 = v0 | 0xf803; SD_call(a0);
    v0 = (*(volatile u8 *) (u32) (s0 + 3));
    v0 = (s32) ((u32) v0 + 0x4U);
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 3));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 3));
    v0 = v0 & 0x3;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v0;
    a1 = (*(volatile u8 *) (u32) (s0 + 3));
    a0 = (s32) ((u32) s0 + 0x13cU); func_008D7AE0(a0, a1, a2, a3);
    v0 = 4; goto L_008E0854;
L_008E07F4:;
    a0 = v0 | 0xf803; SD_call(a0);
    a0 = (*(volatile s8 *) (u32) (s0 + 8));
    v1 = 3;
    v0 = 2;
    a0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u8 *) (u32) (s0 + 8)) = (u8) a0;
    a0 = (s64) ((u64) a0 << 56);
    a0 = a0 >> 56;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    v1 = hi;
    (*(volatile u8 *) (u32) (s0 + 8)) = (u8) v1;
    v1 = (s64) ((u64) v1 << 56);
    v1 = v1 >> 56;
    if (v1 != v0) { a0 = (s32) ((u32) s0 + 0xd4U); goto L_008E0848; }
    a0 = (s32) ((u32) s0 + 0xd4U);
    a1 = 1; func_008E1420(a0, a1, a2, a3);
    v0 = 6; goto L_008E0854;
L_008E0848:;
    a1 = 0; func_008E1420(a0, a1, a2, a3);
    v0 = 6;
L_008E0854:;
    return v0;
}
