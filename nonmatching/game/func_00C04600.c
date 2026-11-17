/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00299FE0(s32);

void func_00C04600(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s32 hi = 0, lo = 0;

    a2 = (s32) 0xca0000U;
    v1 = (s32) 0xca0000U;
    a2 = (s32) ((u32) a2 + 0xffffefc0U);
    a1 = 1;
    a4 = (*(volatile u8 *) (u32) (v1 + -3960));
    v1 = (*(volatile s32 *) (u32) a0);
    a3 = (s32) ((u32) a4 << 2);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (s32) ((u32) a3 << 3);
    s0 = (s32) ((u32) a2 + (u32) a3);
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    { s32 c_ = v1 == a1; s1 = a0; if (c_) goto L_00C046A0; }
    if (v1 == 0) { a0 = (*(volatile u8 *) (u32) (s1 + 12)); goto L_00C04668; }
    a7 = (*(volatile s32 *) (u32) s1); goto L_00C046B0;
L_00C04668:;
    v1 = 255;
    if (a0 == v1) goto L_00C04680;
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    a1 = hi;
L_00C04680:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v1; goto L_00C046AC;
L_00C046A0:;
    a0 = (*(volatile u8 *) (u32) (s1 + 12)); v0 = func_00299FE0(a0);
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v0;
L_00C046AC:;
    a7 = (*(volatile s32 *) (u32) s1);
L_00C046B0:;
    a6 = (s32) 0xcb0000U;
    a5 = (s32) 0xcb0000U;
    a4 = (s32) 0xcb0000U;
    a2 = (s32) 0xcb0000U;
    a1 = (s32) 0xcb0000U;
    a6 = (s32) ((u32) a6 + 0x3010U);
    a5 = (s32) ((u32) a5 + 0x3014U);
    a4 = (s32) ((u32) a4 + 0x3018U);
    a3 = 0xffff;
    a2 = (s32) ((u32) a2 + 0x301aU);
    a1 = (s32) ((u32) a1 + 0x301cU);
    a7 = (s32) ((u32) a7 << 4);
    a0 = (s32) 0xca0000U;
    a6 = (s32) ((u32) a6 + (u32) a7);
    v1 = (s32) 0xca0000U;
    f0.f = (*(volatile f32 *) (u32) a6);
    (*(volatile f32 *) (u32) (s0 + 16)) = f0.f;
    a6 = (*(volatile s32 *) (u32) s1);
    a6 = (s32) ((u32) a6 << 4);
    a5 = (s32) ((u32) a5 + (u32) a6);
    f0.f = (*(volatile f32 *) (u32) a5);
    (*(volatile f32 *) (u32) (s0 + 20)) = f0.f;
    a5 = (*(volatile s32 *) (u32) s1);
    a5 = (s32) ((u32) a5 << 4);
    a4 = (s32) ((u32) a4 + (u32) a5);
    a4 = (*(volatile u16 *) (u32) a4);
    (*(volatile u16 *) (u32) (s0 + 24)) = (u16) a4;
    (*(volatile u8 *) (u32) (s0 + 26)) = (u8) 0;
    (*(volatile u16 *) (u32) (s0 + 28)) = (u16) a3;
    a3 = (*(volatile s32 *) (u32) s1);
    a3 = (s32) ((u32) a3 << 4);
    a2 = (s32) ((u32) a2 + (u32) a3);
    a2 = (*(volatile u16 *) (u32) a2);
    (*(volatile u16 *) (u32) (s0 + 30)) = (u16) a2;
    a2 = (*(volatile s32 *) (u32) s1);
    a2 = (s32) ((u32) a2 << 4);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile u16 *) (u32) a1);
    (*(volatile u16 *) (u32) (s0 + 32)) = (u16) a1;
    a1 = (*(volatile s32 *) (u32) (s1 + 16));
    (*(volatile u16 *) (u32) (s0 + 28)) = (u16) a1;
    a0 = (*(volatile u8 *) (u32) (a0 + -3960));
    a0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u8 *) (u32) (v1 + -3960)) = (u8) a0;
    return;
}
