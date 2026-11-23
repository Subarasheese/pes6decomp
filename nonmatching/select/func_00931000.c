/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0023F510(s32, s32, s32, s32);
void func_0023FC70(void);
void func_0023FCA0(s32);
s32 func_008BD9D0(s32, s32, s32, s32);
void func_00941DC0(s32, s32);
s32 func_009456C0(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);

void func_00931000(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v1 = (*(volatile s8 *) (u32) (gp + -18836));
    a0 = 1;
    s0 = (s32) 0x540000U;
    { s32 c_ = v1 == a0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_00931058; }
    if (v1 == 0) { a0 = (s32) ((u32) gp + 0xffffb670U); goto L_00931030; }
    goto L_009310F8;
L_00931030:;
    a1 = 2; func_00941DC0(a0, a1);
    v0 = 1;
    a0 = 3;
    (*(volatile u8 *) (u32) (gp + -18832)) = (u8) v0; func_0023F510(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (gp + -18836));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18836)) = (u8) v1; goto L_009310F4;
L_00931058:;
    v1 = (*(volatile u8 *) (u32) (gp + -18832));
    if (v1 != a0) { a0 = (*(volatile u8 *) (u32) (gp + -18831)); goto L_009310A0; }
    v0 = func_008BD9D0(a0, a1, a2, a3);
    a0 = 1;
    if (v0 == a0) { (*(volatile u8 *) (u32) (gp + -18836)) = (u8) 0; goto L_00931094; }
    v1 = 2;
    if (v0 == v1) { (*(volatile u8 *) (u32) (gp + -18831)) = (u8) a0; goto L_0093108C; }
    goto L_0093109C;
L_0093108C:;
    (*(volatile u8 *) (u32) (gp + -18832)) = (u8) 0; goto L_0093109C;
L_00931094:;
    func_0023FC70();
L_0093109C:;
    a0 = (*(volatile u8 *) (u32) (gp + -18831));
L_009310A0:;
    v1 = 1;
    if (a0 != v1) goto L_009310F4;
    v0 = func_009456C0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = 1;
    if (v0 == a0) { v1 = -1; goto L_009310EC; }
    v1 = 2;
    if (v0 == v1) { (*(volatile u8 *) (u32) (gp + -18832)) = (u8) a0; goto L_009310D4; }
    goto L_009310F4;
L_009310D4:;
    a0 = 3;
    (*(volatile u8 *) (u32) (gp + -18831)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -18836)) = (u8) 0; func_0023FCA0(a0);
    goto L_009310F4;
L_009310EC:;
    (*(volatile u8 *) (u32) (gp + -18836)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) v1;
L_009310F4:;
L_009310F8:;
    return;
}
