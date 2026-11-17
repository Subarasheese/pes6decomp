/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Texture_GetCacheKey(s32);
s32 func_00145750(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001515E0(s32, s32, s32, s32, s32, s32, s32);
s32 func_00153FD0(s32, s32, s32, s32);
s32 func_001540C0(void);
s32 func_001E0DF0(s32, s32, s32, s32);

s32 func_001E0BD0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 hi = 0, lo = 0;

    s5 = a3;
    s2 = a0;
    s1 = a1;
    v1 = (*(volatile u8 *) (u32) (a1 + 10));
    s0 = a2;
    v0 = (*(volatile u8 *) (u32) (a1 + 11));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); s3 = lo; } v0 = func_001540C0();
    v1 = (s32) ((u32) s3 << 6);
    a0 = v0;
    a2 = (s32) ((u32) v1 + 0x30U);
    a1 = 1; v0 = func_00153FD0(a0, a1, a2, a3);
    s4 = v0;
    v1 = (s32) ((u32) s4 + 0x30U);
    (*(volatile u32 *) (u32) (v0 + 12)) = (u32) v1;
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) s1;
    { s32 c_ = s3 == 0; v0 = (*(volatile s32 *) (u32) (v0 + 12)); if (c_) goto L_001E0C58; }
L_001E0C3C:;
    (*(volatile u32 *) (u32) v0) = (u32) s4;
    s3 = (s32) ((u32) s3 + 0xffffffffU);
    v0 = (s32) ((u32) v0 + 0x40U);
    if (s3 != 0) goto L_001E0C3C;
L_001E0C58:;
    a3 = (*(volatile u8 *) (u32) s5);
    a2 = (*(volatile u8 *) (u32) (s5 + 1));
    v1 = s0 & 0xff;
    a1 = (*(volatile u8 *) (u32) (s5 + 2));
    v0 = (s32) ((u32) v1 << 2);
    a0 = (*(volatile u8 *) (u32) (s5 + 3));
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) v0 << 1);
    (*(volatile u8 *) (u32) (s4 + 32)) = (u8) a3;
    (*(volatile u8 *) (u32) (s4 + 33)) = (u8) a2;
    (*(volatile u8 *) (u32) (s4 + 34)) = (u8) a1;
    (*(volatile u8 *) (u32) (s4 + 35)) = (u8) a0;
    a2 = (*(volatile u8 *) (u32) (s5 + 4));
    a1 = (*(volatile u8 *) (u32) (s5 + 5));
    a0 = (*(volatile u8 *) (u32) (s5 + 6));
    v1 = (*(volatile u8 *) (u32) (s5 + 7));
    (*(volatile u8 *) (u32) (s4 + 36)) = (u8) a2;
    (*(volatile u8 *) (u32) (s4 + 37)) = (u8) a1;
    (*(volatile u8 *) (u32) (s4 + 38)) = (u8) a0;
    (*(volatile u8 *) (u32) (s4 + 39)) = (u8) v1;
    v1 = (*(volatile s32 *) (u32) s2);
    s3 = (*(volatile s32 *) (u32) s1);
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    a0 = (s32) ((u32) v1 + 0xffffffffU);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + 0x55f0U);
    { s32 c_ = s3 == 0; s5 = (s32) ((u32) v0 + (u32) v1); if (c_) goto L_001E0D00; }
L_001E0CE0:;
    a0 = (*(volatile s32 *) (u32) (s3 + 16)); v0 = Pes6Texture_GetCacheKey(a0);
    if (s5 != v0) goto L_001E0D00;
    s3 = (*(volatile s32 *) (u32) (s3 + 4));
    s5 = (s32) ((u32) s5 + 0x1U);
    if (s3 != 0) goto L_001E0CE0;
L_001E0D00:;
    a2 = (*(volatile s32 *) (u32) (s2 + 40));
    a3 = (*(volatile u8 *) (u32) (s2 + 44));
    a1 = s5;
    a4 = (*(volatile u8 *) (u32) (s2 + 45));
    a0 = 0; v0 = func_001515E0(a0, a1, a2, a3, a4, a5, a6);
    s3 = v0;
    a0 = s2;
    a3 = s0;
    a1 = s4;
    a2 = s3; v0 = func_001E0DF0(a0, a1, a2, a3);
    a0 = s3;
    (*(volatile u32 *) (u32) (s4 + 16)) = (u32) s3; v0 = func_00145750(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s4 + 16)); v0 = Pes6Texture_GetCacheKey(a0);
    s2 = (*(volatile s32 *) (u32) s1);
    { s32 c_ = s2 == 0; s0 = v0; if (c_) goto L_001E0D9C; }
L_001E0D50:;
    a0 = (*(volatile s32 *) (u32) (s2 + 16)); v0 = Pes6Texture_GetCacheKey(a0);
    at = s0 < v0;
    if (at != 0) goto L_001E0D70;
    s2 = (*(volatile s32 *) (u32) (s2 + 4));
    if (s2 != 0) goto L_001E0D50;
L_001E0D70:;
    if (s2 == 0) { v0 = (*(volatile s32 *) (u32) (s1 + 4)); goto L_001E0DB0; }
    v0 = (*(volatile s32 *) (u32) s2);
    if (v0 == 0) { (*(volatile u32 *) (u32) s1) = (u32) s4; goto L_001E0D88; }
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) s4;
L_001E0D88:;
    (*(volatile u32 *) (u32) s4) = (u32) v0;
    (*(volatile u32 *) (u32) (s4 + 4)) = (u32) s2;
    (*(volatile u32 *) (u32) s2) = (u32) s4;
L_001E0D94:;
    v0 = s4; goto L_001E0DC8;
L_001E0D9C:;
    (*(volatile u32 *) (u32) s1) = (u32) s4;
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) s4;
    (*(volatile u32 *) (u32) s4) = (u32) 0;
    (*(volatile u32 *) (u32) (s4 + 4)) = (u32) 0; goto L_001E0D94;
L_001E0DB0:;
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) s4;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u32 *) (u32) s4) = (u32) v0;
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) s4;
    (*(volatile u32 *) (u32) (s4 + 4)) = (u32) 0; goto L_001E0D94;
L_001E0DC8:;
    return v0;
}
