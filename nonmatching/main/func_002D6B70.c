/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_002D6B70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (s32) 0x5e0000U;
    a1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x5e20U);
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0x26f0U);
    a2 = (*(volatile u8 *) (u32) a0);
    a1 = (*(volatile u8 *) (u32) (a0 + 2));
    a2 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) v1 + (u32) a2);
    { s32 c_ = a1 <= 0; v1 = (*(volatile s32 *) (u32) v1); if (c_) goto L_002D6BB0; }
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) a1;
L_002D6BB0:;
    a1 = (*(volatile u8 *) (u32) (a0 + 2));
    if (a1 != 0) { a2 = (*(volatile u8 *) (u32) (a0 + 3)); goto L_002D6C08; }
    a2 = (*(volatile u8 *) (u32) (a0 + 3));
    a1 = (s32) 0x51eb0000U;
    a1 = a1 | 0x851f;
    a2 = (s32) ((u32) a2 + 0x1U);
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) a2;
    a2 = (*(volatile u8 *) (u32) (a0 + 3));
    a2 = (s32) ((u32) a2 << 1);
    a2 = (s32) ((u32) a2 + (u32) v1);
    a3 = (*(volatile u8 *) (u32) (a2 + 1));
    a2 = (s32) ((u32) a3 << 4);
    a2 = (s32) ((u32) a2 - (u32) a3);
    a2 = (s32) ((u32) a2 << 2);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = hi;
    a2 = (s32) ((u32) a2 >> 31);
    a1 = (s32) a1 >> 4;
    a1 = (s32) ((u32) a1 + (u32) a2);
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) a1;
    a2 = (*(volatile u8 *) (u32) (a0 + 3));
L_002D6C08:;
    a1 = 255;
    a2 = (s32) ((u32) a2 << 1);
    a2 = (s32) ((u32) v1 + (u32) a2);
    a2 = (*(volatile u8 *) (u32) a2);
    (*(volatile u8 *) (u32) (a0 + 5)) = (u8) a2;
    a2 = (*(volatile u8 *) (u32) (a0 + 5));
    if (a2 != a1) goto L_002D6E44;
    a1 = (*(volatile u8 *) (u32) (a0 + 4));
    if (a1 <= 0) { a1 = (*(volatile u8 *) (u32) a0); goto L_002D6C80; }
    a2 = (s32) ((u32) a1 + 0xffffffffU);
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) a2;
    a1 = (s32) 0x51eb0000U;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) 0;
    a1 = a1 | 0x851f;
    a2 = (*(volatile u8 *) (u32) v1);
    (*(volatile u8 *) (u32) (a0 + 5)) = (u8) a2;
    a2 = (*(volatile u8 *) (u32) (v1 + 1));
    v1 = (s32) ((u32) a2 << 4);
    v1 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) v1 << 2);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) v1 >> 31);
    v1 = hi;
    v1 = (s32) v1 >> 4;
    v1 = (s32) ((u32) v1 + (u32) a1);
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1; goto L_002D6E44;
L_002D6C80:;
    at = (u64) a1 < (u64) (s64) 14;
    { s32 c_ = at == 0; v1 = (*(volatile u8 *) (u32) (a0 + 1)); if (c_) goto L_002D6D9C; }
    a2 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 << 2);
    a2 = (s32) ((u32) a2 + 0xffffac30U);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile s32 *) (u32) a1);
    { u32 t_ = (u32) a1; ; if (t_ == 0x2d6ca8U) goto L_002D6CA8; if (t_ == 0x2d6cc4U) goto L_002D6CC4; if (t_ == 0x2d6cccU) goto L_002D6CCC; if (t_ == 0x2d6ce0U) goto L_002D6CE0; if (t_ == 0x2d6ce8U) goto L_002D6CE8; if (t_ == 0x2d6cf0U) goto L_002D6CF0; if (t_ == 0x2d6d3cU) goto L_002D6D3C; if (t_ == 0x2d6d44U) goto L_002D6D44; if (t_ == 0x2d6d4cU) goto L_002D6D4C; if (t_ == 0x2d6d60U) goto L_002D6D60; if (t_ == 0x2d6d68U) goto L_002D6D68; if (t_ == 0x2d6d70U) goto L_002D6D70; if (t_ == 0x2d6d84U) goto L_002D6D84; if (t_ == 0x2d6d8cU) goto L_002D6D8C; }
L_002D6CA8:;
    if (v1 == 0) goto L_002D6D9C;
    a1 = 2;
    if (v1 == a1) { v1 = 1; goto L_002D6D9C; }
    v1 = 4; goto L_002D6D9C;
L_002D6CC4:;
    v1 = 2; goto L_002D6D9C;
L_002D6CCC:;
    a1 = 2;
    if (v1 == a1) goto L_002D6D9C;
    v1 = 3; goto L_002D6D9C;
L_002D6CE0:;
    v1 = 0; goto L_002D6D9C;
L_002D6CE8:;
    v1 = 5; goto L_002D6D9C;
L_002D6CF0:;
    a1 = 13;
    if (v1 == a1) { v1 = 12; goto L_002D6D9C; }
    a1 = 11;
    if (v1 == a1) { v1 = 10; goto L_002D6D9C; }
    a1 = 8;
    if (v1 == a1) { v1 = 7; goto L_002D6D9C; }
    a1 = 2;
    if (v1 == a1) { v1 = 6; goto L_002D6D9C; }
    if (v1 == 0) goto L_002D6D30;
    goto L_002D6D9C;
L_002D6D30:;
    v1 = 6;
    goto L_002D6D9C;
L_002D6D3C:;
    v1 = 0; goto L_002D6D9C;
L_002D6D44:;
    v1 = 8; goto L_002D6D9C;
L_002D6D4C:;
    a1 = 8;
    if (v1 == a1) goto L_002D6D9C;
    v1 = 9; goto L_002D6D9C;
L_002D6D60:;
    v1 = 5; goto L_002D6D9C;
L_002D6D68:;
    v1 = 11; goto L_002D6D9C;
L_002D6D70:;
    a1 = 11;
    if (v1 == a1) goto L_002D6D9C;
    v1 = 5; goto L_002D6D9C;
L_002D6D84:;
    v1 = 13; goto L_002D6D9C;
L_002D6D8C:;
    a1 = 13;
    if (v1 == a1) goto L_002D6D9C;
    v1 = 0;
L_002D6D9C:;
    a1 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    a2 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 + 0x26f0U);
    a2 = (s32) ((u32) a1 + (u32) a2);
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) 0;
    a4 = (*(volatile s32 *) (u32) a2);
    a1 = (s32) 0x51eb0000U;
    a3 = (*(volatile u8 *) (u32) a4);
    a2 = a1 | 0x851f;
    a1 = 11;
    (*(volatile u8 *) (u32) (a0 + 5)) = (u8) a3;
    a4 = (*(volatile u8 *) (u32) (a4 + 1));
    a3 = (s32) ((u32) a4 << 4);
    a3 = (s32) ((u32) a3 - (u32) a4);
    a3 = (s32) ((u32) a3 << 2);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = hi;
    a3 = (s32) ((u32) a3 >> 31);
    a2 = (s32) a2 >> 4;
    a2 = (s32) ((u32) a2 + (u32) a3);
    { s32 c_ = v1 == a1; (*(volatile u8 *) (u32) (a0 + 2)) = (u8) a2; if (c_) goto L_002D6E2C; }
    a1 = 8;
    if (v1 == a1) { v1 = (*(volatile u8 *) (u32) (a0 + 7)); goto L_002D6E30; }
    a1 = 5;
    if (v1 == a1) goto L_002D6E2C;
    a1 = 2;
    if (v1 == a1) goto L_002D6E2C;
    if (v1 == 0) goto L_002D6E2C;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) 0; goto L_002D6E40;
L_002D6E2C:;
    v1 = (*(volatile u8 *) (u32) (a0 + 7));
L_002D6E30:;
    v1 = v1 & 0x3;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) v1;
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) 0; goto L_002D6E44;
L_002D6E40:;
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) 0;
L_002D6E44:;
    return v0;
}
