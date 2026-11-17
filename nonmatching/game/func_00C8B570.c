/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DC980(s32, s32, s32, s32, s32, s32, s32, s32);
void func_001F0A40(s32, s32);
void func_001F1EA0(s32, s32, s32, s32);
void func_00C89450(s32, s32);
void func_00C897C0(s32, s32);
void func_00C89800(s32, s32, s32, s32);
void func_00C89850(s32, s32, s32, s32);
void func_00C8B8A0(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);

void func_00C8B570(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;

    v1 = (s32) 0xcd0000U;
    s2 = (*(volatile s32 *) (u32) (v1 + -11024));
    at = (u64) s2 < (u64) (s64) 6;
    if (at == 0) goto L_00C8B87C;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) s2 << 2);
    a0 = (s32) ((u32) a0 + 0x4f70U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xc8b5b8U) goto L_00C8B5B8; if (t_ == 0xc8b5f0U) goto L_00C8B5F0; if (t_ == 0xc8b69cU) goto L_00C8B69C; if (t_ == 0xc8b710U) goto L_00C8B710; if (t_ == 0xc8b7b0U) goto L_00C8B7B0; if (t_ == 0xc8b87cU) goto L_00C8B87C; }
L_00C8B5B8:;
    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v1 + -11044));
    a1 = (*(volatile s32 *) (u32) (v0 + -11040));
    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    a3 = (*(volatile s32 *) (u32) (v0 + -11032));
    a2 = (*(volatile s32 *) (u32) (v1 + -11036)); func_00C8B8A0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v1 + -11016)) = (u32) 0;
    s2 = (s32) ((u32) s2 + 0x1U);
    (*(volatile u32 *) (u32) (v0 + -11020)) = (u32) 0;
L_00C8B5F0:;
    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -11016));
    v1 = (s32) ((u32) v1 + 0x20U);
    (*(volatile u32 *) (u32) (v0 + -11016)) = (u32) v1;
    v0 = v1 < 255;
    if (v0 != 0) goto L_00C8B620;
    v1 = 255;
    v0 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v0 + -11016)) = (u32) v1;
    s2 = (s32) ((u32) s2 + 0x1U);
L_00C8B620:;
    v0 = (s32) 0xcd0000U;
    s3 = (s32) 0xcb0000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -11016));
    s1 = 0;
    s3 = (s32) ((u32) s3 + 0xffff88d0U);
L_00C8B634:;
    a0 = (*(volatile s16 *) (u32) (s3 + 18));
    a1 = s0 & 0xff; func_00C89450(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = (u64) s1 < (u64) (s64) 5;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x14U); if (c_) goto L_00C8B634; }
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -11068));
    a1 = s0 & 0xff; func_001F0A40(a0, a1);
    v0 = (s32) ((u32) gp + 0xffffb524U);
    a0 = (s32) 0xcd0000U;
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) a0 + 0xffffd4c0U);
    v0 = (*(volatile u8 *) (u32) (v0 + 3));
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 7; if (c_) goto L_00C8B688; }
    v0 = (s32) ((u32) v1 + 0x7fU);
    v0 = (s32) v0 >> 7;
L_00C8B688:;
    a0 = (*(volatile s32 *) (u32) (a0 + 8));
    a1 = v0 & 0xff; func_00C89450(a0, a1);
    goto L_00C8B87C;
L_00C8B69C:;
    v0 = (s32) 0xcd0000U;
    a1 = (s32) 0xcb0000U;
    a2 = (*(volatile s32 *) (u32) (v0 + -11028));
    a1 = (s32) ((u32) a1 + 0xffff891eU);
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) a2 << 2);
    a0 = (*(volatile s32 *) (u32) (v0 + -11020));
    a2 = (s32) ((u32) v1 + (u32) a2);
    v0 = (s32) 0x66660000U;
    v1 = (s32) ((u32) a0 >> 31);
    v0 = v0 | 0x6667;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) a1 + (u32) v0);
    a0 = (*(volatile s16 *) (u32) v0);
    v0 = hi;
    v0 = (s32) v0 >> 3;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = v0 & 0x1; func_00C897C0(a0, a1);
    a0 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -11020));
    a0 = (s32) ((u32) a0 + 0x1U);
    at = a0 < 193;
    { s32 c_ = at != 0; (*(volatile u32 *) (u32) (v1 + -11020)) = (u32) a0; if (c_) goto L_00C8B87C; }
    s2 = (s32) ((u32) s2 + 0x1U); goto L_00C8B87C;
L_00C8B710:;
    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -11016));
    v1 = (s32) ((u32) v1 + 0xffffffe0U);
    { s32 c_ = v1 > 0; (*(volatile u32 *) (u32) (v0 + -11016)) = (u32) v1; if (c_) goto L_00C8B734; }
    v0 = (s32) 0xcd0000U;
    s2 = (s32) ((u32) s2 + 0x1U);
    (*(volatile u32 *) (u32) (v0 + -11016)) = (u32) 0;
L_00C8B734:;
    v0 = (s32) 0xcd0000U;
    s3 = (s32) 0xcb0000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -11016));
    s1 = 0;
    s3 = (s32) ((u32) s3 + 0xffff88d0U);
L_00C8B748:;
    a0 = (*(volatile s16 *) (u32) (s3 + 18));
    a1 = s0 & 0xff; func_00C89450(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = (u64) s1 < (u64) (s64) 5;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x14U); if (c_) goto L_00C8B748; }
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -11068));
    a1 = s0 & 0xff; func_001F0A40(a0, a1);
    v0 = (s32) ((u32) gp + 0xffffb524U);
    a0 = (s32) 0xcd0000U;
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) a0 + 0xffffd4c0U);
    v0 = (*(volatile u8 *) (u32) (v0 + 3));
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 7; if (c_) goto L_00C8B79C; }
    v0 = (s32) ((u32) v1 + 0x7fU);
    v0 = (s32) v0 >> 7;
L_00C8B79C:;
    a0 = (*(volatile s32 *) (u32) (a0 + 8));
    a1 = v0 & 0xff; func_00C89450(a0, a1);
    goto L_00C8B87C;
L_00C8B7B0:;
    s0 = (s32) 0xcb0000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0xffff88d0U);
L_00C8B7BC:;
    a0 = (*(volatile s16 *) (u32) (s0 + 18)); func_00C89850(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    s0 = (s32) ((u32) s0 + 0x14U);
    v0 = (u64) s1 < (u64) (s64) 5;
    if (v0 != 0) goto L_00C8B7BC;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -11072)); func_001F1EA0(a0, a1, a2, a3);
    s0 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    s0 = (s32) ((u32) s0 + 0xffffd4c0U);
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (s0 + 8));
    (*(volatile u32 *) (u32) (v1 + -11072)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + -11068)) = (u32) 0; func_00C89800(a0, a1, a2, a3);
    s1 = (s32) 0xcb0000U;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) 0;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffff88d0U);
L_00C8B814:;
    a0 = (*(volatile s16 *) (u32) (s1 + 38)); func_00C89850(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 12)); func_001DC980(a0, a1, a2, a3, a4, a5, a6, a7);
    s2 = (s32) ((u32) s2 + 0x1U);
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) 0;
    v0 = s2 < 2;
    s1 = (s32) ((u32) s1 + 0x14U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C8B814; }
    s1 = (s32) 0xcb0000U;
    s0 = (s32) 0xcd0000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffff88d0U);
    s0 = (s32) ((u32) s0 + 0xffffd4c0U);
L_00C8B850:;
    a0 = (*(volatile s16 *) (u32) (s1 + 78)); func_00C89850(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 20)); func_001DC980(a0, a1, a2, a3, a4, a5, a6, a7);
    s2 = (s32) ((u32) s2 + 0x1U);
    (*(volatile u32 *) (u32) (s0 + 20)) = (u32) 0;
    v1 = s2 < 2;
    s1 = (s32) ((u32) s1 + 0x14U);
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C8B850; }
    s2 = 0;
L_00C8B87C:;
    v1 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v1 + -11024)) = (u32) s2;
    return;
}
