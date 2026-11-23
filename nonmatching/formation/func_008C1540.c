/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002C9BE0(s64);
s64 func_002C9C40(s64);
s64 func_002C9C70(s64);
void func_008C3130(s64, s64, s64, s64);
void func_008C3630(s64);
void func_008C3690(s64, s64);
void func_008C3760(s64, s64);
void func_008C3830(s64, s64, s64, s64);

void func_008C1540(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 hi = 0, lo = 0;

    s2 = a0;
    { s32 c_ = s2 == 0; s1 = a1; if (c_) goto L_008C16EC; }
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_002C9C70(a0);
    (*(volatile u8 *) (u32) s2) = (u8) v0;
    a0 = (*(volatile u8 *) (u32) s2);
    at = a0 < 9;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_008C15C0; }
    v0 = func_002C9C40(a0);
    v1 = (*(volatile u8 *) (u32) v0);
    at = v1 < 23;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_008C15C0; }
    a0 = (*(volatile u8 *) (u32) s1);
L_008C1598:;
    v1 = (*(volatile u8 *) (u32) v0);
    if (a0 != v1) goto L_008C15A8;
    s0 = a1 & 0xff;
L_008C15A8:;
    v0 = (s32) ((u32) v0 + 0x3U);
    v1 = (*(volatile u8 *) (u32) v0);
    v1 = v1 < 23;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x1U); if (c_) goto L_008C1598; }
L_008C15C0:;
    v1 = (*(volatile u8 *) (u32) (s1 + 2));
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_008C15D8; }
    if (v0 == 0) { (*(volatile u8 *) (u32) (s2 + 2)) = (u8) v0; goto L_008C15DC; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_008C15D8:;
    (*(volatile u8 *) (u32) (s2 + 2)) = (u8) v0;
L_008C15DC:;
    v1 = (*(volatile u8 *) (u32) (s1 + 2));
    v0 = 6;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    (*(volatile u8 *) (u32) (s2 + 3)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (s1 + 3));
    { s32 c_ = v1 >= 0; v0 = v1 & 0x3; if (c_) goto L_008C1608; }
    if (v0 == 0) { (*(volatile u8 *) (u32) (s2 + 4)) = (u8) v0; goto L_008C160C; }
    v0 = (s32) ((u32) v0 + 0xfffffffcU);
L_008C1608:;
    (*(volatile u8 *) (u32) (s2 + 4)) = (u8) v0;
L_008C160C:;
    v0 = (*(volatile u8 *) (u32) s1);
    v0 = (s32) ((u32) v0 + 0xffffffeaU);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { s1 = (*(volatile u8 *) (u32) s2); goto L_008C167C; }
    s1 = (*(volatile u8 *) (u32) s2);
    a0 = (s32) ((u32) s2 + 0x8U); func_008C3630(a0);
    a0 = 0; v0 = func_002C9BE0(a0);
    a1 = (s64) ((u64) v0 << 56);
    a0 = (s32) ((u32) s2 + 0x8U);
    a1 = a1 >> 56; func_008C3690(a0, a1);
    a2 = (*(volatile u8 *) (u32) (s2 + 2));
    a0 = (s32) ((u32) s2 + 0x8U);
    a3 = (*(volatile u8 *) (u32) (s2 + 4));
    a1 = 0; func_008C3130(a0, a1, a2, a3);
    a1 = s1;
    a0 = (s32) ((u32) s2 + 0x8U);
    a2 = 1; func_008C3830(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x8U);
    a1 = 0; func_008C3760(a0, a1);
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) s0; goto L_008C16EC;
L_008C167C:;
    if (s1 == 0) { a0 = (s32) ((u32) s2 + 0x8U); goto L_008C1694; }
    v0 = 9;
    if (s1 != v0) { a0 = s1; goto L_008C16A0; }
    a0 = (s32) ((u32) s2 + 0x8U);
L_008C1694:;
    func_008C3630(a0);
    a0 = s1;
L_008C16A0:;
    v0 = func_002C9BE0(a0);
    a1 = (s64) ((u64) v0 << 56);
    a0 = (s32) ((u32) s2 + 0x8U);
    a1 = a1 >> 56; func_008C3690(a0, a1);
    a2 = (*(volatile u8 *) (u32) (s2 + 2));
    a1 = s1;
    a3 = (*(volatile u8 *) (u32) (s2 + 4));
    a0 = (s32) ((u32) s2 + 0x8U); func_008C3130(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x8U);
    a1 = s0;
    a2 = 1; func_008C3830(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x8U);
    a1 = 0; func_008C3760(a0, a1);
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) s0;
L_008C16EC:;
    return;
}
