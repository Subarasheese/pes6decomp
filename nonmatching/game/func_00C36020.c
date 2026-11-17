/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00209A00(s32, s32, s32);
void func_002727C0(s32, s32, s32, s32);
s32 func_00277360(s32);
void func_00278C20(s32);
void func_0027CB60(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002A96D0(s32, s32, s32, s32, f32);
s32 func_00BCC980(void);
s32 func_00BDB8B0(s32);

void func_00C36020(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;

    a0 = 224;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a1 = 447;
    (*(volatile u8 *) (u32) (v0 + -6714)) = (u8) a0;
    a2 = 0;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -6732));
    (*(volatile u16 *) (u32) (v1 + -6712)) = (u16) 0; func_00209A00(a0, a1, a2);
    v0 = (s32) 0x590000U;
    s1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + -6732));
    (*(volatile u8 *) (u32) (v0 + 80)) = (u8) 0;
L_00C36068:;
    v0 = 255;
    if (s1 == v0) { a0 = 1; goto L_00C36080; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s1 / (s32) v0); hi = (s32) ((s32) s1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00C36080:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) v0 + (u32) v1);
    a0 = s0; v0 = func_00BDB8B0(a0);
    if (v0 != 0) { v0 = 253; goto L_00C361F4; }
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
L_00C360AC:;
    (*(volatile u8 *) (u32) (v0 + 80)) = (u8) 0; v0 = func_00BCC980();
    if (v0 != 0) goto L_00C361AC;
    a2 = (*(volatile u8 *) (u32) (s0 + 18));
    a1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (s0 + 17));
    a1 = (s32) ((u32) a1 + 0x2980U);
    v0 = 1;
    v1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) a2 << 8);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (a0 + 248));
    if (v1 != v0) goto L_00C361AC;
    a0 = (s32) ((u32) a0 + 0xf0U); v0 = func_00277360(a0);
    at = v0 < 2;
    if (at == 0) { a1 = (*(volatile u8 *) (u32) (s0 + 18)); goto L_00C3616C; }
    a1 = (*(volatile u8 *) (u32) (s0 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a2 = 1;
    v0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) (v0 + 212)) = (u8) a2; goto L_00C361AC;
L_00C3616C:;
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    v0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) (v0 + 212)) = (u8) 0;
L_00C361AC:;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 23;
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) (v1 + 44)) = (u8) 0; if (c_) goto L_00C36068; }
    a0 = 0; func_00278C20(a0);
    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -18847));
    (*(volatile u8 *) (u32) (v0 + 7118)) = (u8) v1; func_002A96D0(a0, a1, a2, a3, f12.f);
    a0 = 0; func_002727C0(a0, a1, a2, a3);
    a0 = 5; func_0027CB60(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00C36218;
L_00C361F4:;
    a1 = 447;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) v0;
    (*(volatile u16 *) (u32) (s0 + 24)) = (u16) 0;
    (*(volatile u8 *) (u32) (s0 + 102)) = (u8) 0;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a2 = 0; func_00209A00(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00C360AC;
L_00C36218:;
    return;
}
