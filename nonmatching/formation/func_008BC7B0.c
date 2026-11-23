/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002B8C00(s64);
s64 func_002B8CB0(s64);
s64 func_002B8D60(s64);
s64 func_002B8DB0(s64);
void func_008BC540(s64, s64, s64);
void func_008BDAB0(s64, s64, s64, s64, s64, s64);

void func_008BC7B0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    s0 = a1;
    a0 = s0; v0 = func_002B8DB0(a0);
    if (v0 == 0) { a4 = 1; goto L_008BC980; }
    a0 = s0; v0 = func_002B8C00(a0);
    v1 = 2;
    if (v0 == v1) { a0 = s0; goto L_008BC828; }
    if (v0 == 0) { a0 = s0; goto L_008BC7FC; }
    a0 = s0; goto L_008BC84C;
L_008BC7FC:;
    v0 = func_002B8CB0(a0);
    v1 = 2;
    if (v0 != v1) goto L_008BC848;
    a0 = s1;
    a1 = 0;
    a2 = 1; func_008BC540(a0, a1, a2);
    goto L_008BC848;
L_008BC828:;
    v0 = func_002B8CB0(a0);
    if (v0 != 0) goto L_008BC848;
    a1 = 1;
    a0 = s1;
    a2 = a1; func_008BC540(a0, a1, a2);
L_008BC848:;
    a0 = s0;
L_008BC84C:;
    v0 = func_002B8D60(a0);
    a0 = 2;
    if (v0 == a0) { v1 = (*(volatile u8 *) (u32) (s1 + 1854)); goto L_008BC8F4; }
    if (v0 == 0) { v1 = (*(volatile u8 *) (u32) (s1 + 1854)); goto L_008BC870; }
    goto L_008BC97C;
L_008BC870:;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v1 = (s32) ((u32) v0 + 0x822U);
    v0 = (*(volatile s8 *) (u32) (v0 + 2082));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    if (v0 >= 0) { (*(volatile u8 *) (u32) v1) = (u8) v0; goto L_008BC8AC; }
    v0 = 0;
    (*(volatile u8 *) (u32) v1) = (u8) v0;
L_008BC8AC:;
    v1 = (*(volatile u8 *) (u32) (s1 + 1854));
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v1 = (s32) ((u32) v0 + 0x824U);
    v0 = (*(volatile s8 *) (u32) (v0 + 2084));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    if (v0 >= 0) { (*(volatile u8 *) (u32) v1) = (u8) v0; goto L_008BC97C; }
    v0 = 0;
    (*(volatile u8 *) (u32) v1) = (u8) v0;
    goto L_008BC97C;
L_008BC8F4:;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v1 = (s32) ((u32) v0 + 0x822U);
    v0 = (*(volatile s8 *) (u32) (v0 + 2082));
    v0 = (s32) ((u32) v0 + 0x1U);
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    at = v0 < 3;
    if (at != 0) { (*(volatile u8 *) (u32) v1) = (u8) v0; goto L_008BC938; }
    v0 = (s64) ((u64) a0 << 56);
    v0 = v0 >> 56;
    (*(volatile u8 *) (u32) v1) = (u8) v0;
L_008BC938:;
    v1 = (*(volatile u8 *) (u32) (s1 + 1854));
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v1 = (s32) ((u32) v0 + 0x824U);
    v0 = (*(volatile s8 *) (u32) (v0 + 2084));
    v0 = (s32) ((u32) v0 + 0x1U);
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    at = v0 < 3;
    if (at != 0) { (*(volatile u8 *) (u32) v1) = (u8) v0; goto L_008BC97C; }
    v0 = 2;
    (*(volatile u8 *) (u32) v1) = (u8) v0;
L_008BC97C:;
    a4 = 1;
L_008BC980:;
    a0 = s1;
    a2 = s0;
    a1 = 0;
    a3 = 0;
    a5 = a4; func_008BDAB0(a0, a1, a2, a3, a4, a5);
    return;
}
