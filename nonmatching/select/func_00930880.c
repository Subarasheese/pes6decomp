/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6GeneralSettings_Update(s32, s32, s32, s32);
s32 Pes6StripSelect_Update(s32, s32, s32, s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023F510(s32, s32, s32, s32);
void func_0023FC70(void);
void func_0024DFE0(s32, s32, s32, s32);
s32 func_002E9310(void);
void func_0030C2E0(s32);
s32 func_0030C870(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0030CEA0(s32, s32, s32, s32);
void func_0030CEE0(s32, s32, s32, s32);
s32 func_00930080(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00941B40(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00943240(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
s32 func_009432F0(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);

void func_00930880(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v1 = (*(volatile s32 *) (u32) (gp + -18820));
    s0 = (s32) 0x540000U;
    at = (u64) v1 < (u64) (s64) 7;
    { s32 c_ = at == 0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_00930AD4; }
    a0 = (s32) 0x960000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x62d0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x9308bcU) goto L_009308BC; if (t_ == 0x930928U) goto L_00930928; if (t_ == 0x930968U) goto L_00930968; if (t_ == 0x930988U) goto L_00930988; if (t_ == 0x9309ecU) goto L_009309EC; if (t_ == 0x930a4cU) goto L_00930A4C; if (t_ == 0x930a88U) goto L_00930A88; }
L_009308BC:;
    func_0030CEE0(a0, a1, a2, a3);
    v1 = 72;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v0 + -15592)) = (u32) v1;
    a0 = 0; v0 = func_00941B40(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) { ; goto L_00930AD8; }
    v0 = func_002E9310();
    v1 = 5;
    if (v0 != v1) goto L_00930918;
    v0 = 1;
    a0 = 3;
    (*(volatile u32 *) (u32) (gp + -18820)) = (u32) v0; func_0023F510(a0, a1, a2, a3);
    a0 = 1; func_0030C2E0(a0);
    goto L_00930AD4;
L_00930918:;
    func_0023FC70();
    goto L_00930AD4;
L_00930928:;
    v0 = func_0030C870(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) goto L_00930AD4;
    v1 = (s32) 0x540000U;
    a0 = 2;
    v1 = (*(volatile s8 *) (u32) (v1 + -15607));
    if (v1 != a0) goto L_00930958;
    (*(volatile u32 *) (u32) (gp + -18820)) = (u32) a0; goto L_00930AD4;
L_00930958:;
    func_0023FC70();
    (*(volatile u32 *) (u32) (gp + -18820)) = (u32) 0; goto L_00930AD4;
L_00930968:;
    func_0024DFE0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -18820));
    a0 = 2;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) a0;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18820)) = (u32) v1; goto L_00930AD4;
L_00930988:;
    v0 = func_009432F0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    v1 = 1;
    if (v0 == v1) { a0 = 2; goto L_009309D4; }
    v1 = 2;
    if (v0 == v1) goto L_009309B0;
    goto L_00930AD4;
L_009309B0:;
    v1 = (s32) 0x540000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -15592));
    if (v1 != 0) { v1 = 4; goto L_009309CC; }
    v1 = 5;
    (*(volatile u32 *) (u32) (gp + -18820)) = (u32) v1; goto L_00930AD4;
L_009309CC:;
    (*(volatile u32 *) (u32) (gp + -18820)) = (u32) v1; goto L_00930AD4;
L_009309D4:;
    func_0023F510(a0, a1, a2, a3);
    func_0023FC70();
    (*(volatile u32 *) (u32) (gp + -18820)) = (u32) 0; goto L_00930AD4;
L_009309EC:;
    v0 = func_00930080(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 == v1) goto L_00930A34;
    v1 = 2;
    if (v0 == v1) goto L_00930A14;
    goto L_00930AD4;
L_00930A14:;
    func_00943240(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = 30; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile s32 *) (u32) (gp + -18820));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18820)) = (u32) v1; goto L_00930AD4;
L_00930A34:;
    func_00943240(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) (gp + -18820));
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) (gp + -18820)) = (u32) v1; goto L_00930AD4;
L_00930A4C:;
    v0 = Pes6StripSelect_Update(a0, a1, a2, a3);
    v1 = 1;
    if (v0 == v1) { v1 = 3; goto L_00930A80; }
    v1 = 2;
    if (v0 == v1) { v1 = (*(volatile s32 *) (u32) (gp + -18820)); goto L_00930A74; }
    goto L_00930AD4;
L_00930A74:;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18820)) = (u32) v1; goto L_00930AD4;
L_00930A80:;
    (*(volatile u32 *) (u32) (gp + -18820)) = (u32) v1; goto L_00930AD4;
L_00930A88:;
    v0 = Pes6GeneralSettings_Update(a0, a1, a2, a3);
    v1 = 1;
    if (v0 == v1) { v1 = (*(volatile s32 *) (u32) (gp + -18820)); goto L_00930ACC; }
    v1 = 2;
    if (v0 == v1) goto L_00930AB0;
    goto L_00930AD4;
L_00930AB0:;
    func_0030CEA0(a0, a1, a2, a3);
    a0 = 3;
    v1 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (gp + -18820)) = (u32) 0;
    (*(volatile u16 *) (u32) (v1 + -15614)) = (u16) a0; goto L_00930AD4;
L_00930ACC:;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) (gp + -18820)) = (u32) v1;
L_00930AD4:;
L_00930AD8:;
    return;
}
