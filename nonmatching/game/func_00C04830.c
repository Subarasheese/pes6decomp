/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C04830(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s32 hi = 0, lo = 0;

    a3 = (*(volatile u8 *) (u32) a0);
    a4 = (s32) 0xcb0000U;
    a5 = 0;
    a4 = (s32) ((u32) a4 + 0x52a0U);
    v1 = 2;
L_00C04844:;
    v0 = (*(volatile u8 *) (u32) (a4 + 1092));
    if (v0 != a3) goto L_00C04870;
    v0 = (*(volatile s32 *) (u32) (a4 + 1084));
    if (v0 != v1) goto L_00C04870;
    v0 = (*(volatile s32 *) (u32) (a4 + 1120));
    if (v0 != a1) goto L_00C04870;
    v0 = 1; goto L_00C04884;
L_00C04870:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v0 = a5 < 10;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x40U); if (c_) goto L_00C04844; }
    v0 = 0;
L_00C04884:;
    if (v0 != 0) { v0 = 0; goto L_00C04988; }
    v1 = (s32) 0xcb0000U;
    a3 = 0;
    v1 = (s32) ((u32) v1 + 0x52a0U);
L_00C04898:;
    v0 = (*(volatile s32 *) (u32) (v1 + 1084));
    if (v0 != 0) { a3 = (s32) ((u32) a3 + 0x1U); goto L_00C048BC; }
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a3 << 6);
    v0 = (s32) ((u32) v0 + 0x52a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) ((u32) v0 + 0x43cU); goto L_00C048CC;
L_00C048BC:;
    v0 = a3 < 10;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x40U); if (c_) goto L_00C04898; }
    v1 = 0;
L_00C048CC:;
    if (v1 == 0) { v0 = 0; goto L_00C04988; }
    v0 = (s32) 0x590000U;
    a4 = 2;
    a6 = (*(volatile u8 *) (u32) (v0 + 7140));
    a2 = a2 & 0xff;
    a3 = 1;
    a5 = (s32) ((u32) a6 << 1);
    v0 = 255;
    a5 = (s32) ((u32) a5 + (u32) a6);
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) a5;
    a5 = (*(volatile u8 *) (u32) a0);
    (*(volatile u8 *) (u32) (v1 + 8)) = (u8) a5;
    (*(volatile u32 *) (u32) v1) = (u32) a4;
    f0.f = (*(volatile f32 *) (u32) (a0 + 224));
    f0.i = (s32) f0.f;
    a4 = f0.i;
    (*(volatile u16 *) (u32) (v1 + 4)) = (u16) a4;
    f0.f = (*(volatile f32 *) (u32) (a0 + 232));
    f0.i = (s32) f0.f;
    a4 = f0.i;
    (*(volatile u16 *) (u32) (v1 + 6)) = (u16) a4;
    (*(volatile u32 *) (u32) (v1 + 36)) = (u32) a1;
    (*(volatile u16 *) (u32) (v1 + 40)) = (u16) a2;
    { s32 c_ = a2 == v0; (*(volatile u8 *) (u32) (v1 + 43)) = (u8) a3; if (c_) goto L_00C04948; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) v0); hi = (s32) ((s32) a2 % (s32) v0); lo = q_; }
    a3 = hi;
L_00C04948:;
    v0 = (s32) ((u32) a3 << 3);
    a2 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) a3);
    a2 = (s32) ((u32) a2 + 0xffffe7b2U);
    a3 = (s32) ((u32) v0 << 6);
    a1 = 0xffff;
    a2 = (s32) ((u32) a2 + (u32) a3);
    v0 = 1;
    a2 = (*(volatile u8 *) (u32) a2);
    (*(volatile u8 *) (u32) (v1 + 42)) = (u8) a2;
    (*(volatile u16 *) (u32) (v1 + 44)) = (u16) a1;
    a1 = (*(volatile u8 *) (u32) (a0 + 19));
    a0 = (*(volatile s32 *) (u32) (gp + -31080));
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) a0);
    (*(volatile u16 *) (u32) (v1 + 46)) = (u16) a0;
L_00C04988:;
    return;
}
