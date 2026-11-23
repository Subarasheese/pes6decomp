/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B68B0(s32, s32, s32, s32);
s32 func_001B6A30(s32, s32, s32, s32);
s32 func_001BE550(s32, s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0023F330(void);
s32 func_008BC880(s32, s32, s32, s32);
s32 func_00934440(s32);
void func_009483F0(s32, s32, s32, s32);
void func_009488E0(s32, s32, s32, s32);
void func_00949760(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0094ACC0(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_0094BAF0(s32, s32, s32, s32);
void func_0094BC30(s32, s32, s32, s32);
void func_0094E330(s32, s32, s32, s32);
s32 func_00952C00(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_009456C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v1 = (*(volatile s32 *) (u32) (gp + -18284));
    v0 = 4;
    s0 = (s32) 0x540000U;
    { s32 c_ = v1 == v0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_0094591C; }
    v0 = 3;
    if (v1 == v0) goto L_0094585C;
    v0 = 2;
    if (v1 == v0) goto L_009457E4;
    v0 = 1;
    if (v1 == v0) goto L_0094578C;
    if (v1 == 0) { a0 = 6; goto L_00945714; }
    v0 = 0; goto L_0094592C;
L_00945714:;
    v0 = func_008BC880(a0, a1, a2, a3);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0x174cU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_00934440(a0);
    v1 = 1;
    if (v0 != v1) goto L_00945928;
    func_0094E330(a0, a1, a2, a3);
    func_0094ACC0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    v0 = (s32) 0x540000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -15600));
    v0 = 1;
    v1 = v1 & 0x1;
    if (v1 != v0) goto L_00945770;
    func_00949760(a0, a1, a2, a3, a4, a5, a6, a7);
L_00945770:;
    func_009488E0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18284));
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) 0;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18284)) = (u32) v0; goto L_00945928;
L_0094578C:;
    v0 = func_001B68B0(a0, a1, a2, a3);
    v0 = v0 ^ 0x1;
    v0 = (u64) v0 < (u64) (s64) 1;
    if (v0 == 0) goto L_009457B0;
    v0 = (*(volatile s32 *) (u32) (gp + -18284));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18284)) = (u32) v0;
L_009457B0:;
    v0 = (s32) 0x540000U;
    s0 = (s32) 0x540000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -15600));
    v0 = 1;
    v1 = v1 & 0x1;
    { s32 c_ = v1 != v0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_009457D4; }
    func_00949760(a0, a1, a2, a3, a4, a5, a6, a7);
L_009457D4:;
    func_009488E0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) 0; goto L_00945928;
L_009457E4:;
    v0 = func_00952C00(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) (gp + -18284)); goto L_0094581C; }
    v1 = 2;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) (gp + -18284)); goto L_0094580C; }
    goto L_00945828;
L_0094580C:;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) v1;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18284)) = (u32) v0; goto L_00945828;
L_0094581C:;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) v1;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18284)) = (u32) v0;
L_00945828:;
    v0 = (s32) 0x540000U;
    s0 = (s32) 0x540000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -15600));
    v0 = 1;
    v1 = v1 & 0x1;
    { s32 c_ = v1 != v0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_0094584C; }
    func_00949760(a0, a1, a2, a3, a4, a5, a6, a7);
L_0094584C:;
    func_009488E0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) 0; goto L_00945928;
L_0094585C:;
    v0 = (s32) 0x540000U;
    v1 = 1;
    v0 = (*(volatile s8 *) (u32) (v0 + -15607));
    if (v0 != v1) goto L_00945890;
    v0 = func_0023F330();
    a0 = v0; v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 != 0) goto L_009458F8;
    v0 = 0; goto L_00945904;
L_00945890:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) goto L_009458B0;
    func_0094BAF0(a0, a1, a2, a3);
    goto L_009458B8;
L_009458B0:;
    func_0094BC30(a0, a1, a2, a3);
L_009458B8:;
    v0 = (s32) 0x510000U;
    v1 = 4;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) goto L_009458F8;
    a0 = 31; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = func_0023F330();
    a0 = 0;
    a1 = v0; v0 = func_001BE550(a0, a1);
    if (v0 != 0) goto L_009458F8;
    v0 = 0; goto L_00945904;
L_009458F8:;
    func_009483F0(a0, a1, a2, a3);
    v0 = 1;
L_00945904:;
    if (v0 == 0) goto L_00945928;
    v0 = (*(volatile s32 *) (u32) (gp + -18284));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18284)) = (u32) v0; goto L_00945928;
L_0094591C:;
    v0 = (*(volatile s8 *) (u32) (s0 + 9));
    (*(volatile u32 *) (u32) (gp + -18284)) = (u32) 0; goto L_0094592C;
L_00945928:;
    v0 = 0;
L_0094592C:;
    return v0;
}
