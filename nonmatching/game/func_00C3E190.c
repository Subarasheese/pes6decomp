/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_009B3500(s64, s64, s64, s64);

s64 func_00C3E190(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[24];
    s64 sp = (s32) (u32) frame;

    a3 = (s32) 0xcb0000U;
    a3 = (s32) ((u32) a3 + 0xffff8098U);
    s6 = a1;
    a1 = (s32) ((u32) sp + 0xb0U);
    s4 = a0;
    a0 = 3;
L_00C3E1D8:;
    v1 = (*(volatile s16 *) (u32) a3);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s16 *) (u32) (a3 + 2));
    (*(volatile u16 *) (u32) a1) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 2)) = (u16) v0;
    a3 = (s32) ((u32) a3 + 0x4U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_00C3E1D8; }
    f0.f = (*(volatile f32 *) (u32) (s4 + 152));
    s2 = 0;
    { s32 c_ = a2 == 0; f20.f = (f32) f0.i; if (c_) goto L_00C3E20C; }
    s2 = 3;
L_00C3E20C:;
    v0 = (s32) ((u32) s2 + 0x3U);
    s3 = s2;
    at = s2 < v0;
    { s32 c_ = at == 0; s1 = 255; if (c_) goto L_00C3E29C; }
    f0.i = (s32) f20.f;
    v0 = (s32) ((u32) s2 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    s0 = (s32) ((u32) v0 + 0xb0U);
    fp = f0.i;
L_00C3E234:;
    s5 = (*(volatile u16 *) (u32) s0);
    a0 = s4;
    a2 = 12;
    a1 = s5; func_009B3500(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7792));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v1 = (s32) ((u32) v0 - (u32) fp);
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_00C3E268; }
L_00C3E268:;
    v0 = 255;
    if (s1 == v0) goto L_00C3E280;
    at = v1 < s7;
    if (at == 0) goto L_00C3E288;
L_00C3E280:;
    s7 = v1;
    s1 = s5;
L_00C3E288:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = (s32) ((u32) s2 + 0x3U);
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x2U); if (c_) goto L_00C3E234; }
L_00C3E29C:;
    v0 = 979;
    if (s1 == v0) { a3 = (*(volatile u8 *) (u32) (s4 + 18)); goto L_00C3E2B0; }
    (*(volatile u32 *) (u32) (s4 + 164)) = (u32) s1; goto L_00C3E364;
L_00C3E2B0:;
    a2 = (s32) 0x590000U;
    v0 = (s32) 0xb30f0000U;
    a1 = (*(volatile u8 *) (u32) (s4 + 17));
    a2 = (s32) ((u32) a2 + 0x2980U);
    v1 = -688;
    v0 = v0 | 0x6353;
    a0 = (s32) ((u32) a3 << 4);
    a3 = (s32) ((u32) a0 - (u32) a3);
    a0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a3 << 3);
    a3 = (s32) ((u32) a0 - (u32) a3);
    a0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a1 = (s32) ((u32) a3 << 8);
    a0 = (s32) ((u32) a0 << 3);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (a0 + 140));
    a0 = (s64) ((u64) a0 << 56);
    a0 = (s64) ((u64) a0 >> 58);
    a0 = (s32) ((u32) a0 + 0x94U);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) v0 >> 7;
    v0 = (s32) ((u32) v0 + (u32) v1);
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    fcc = f20.f < f0.f;
    if (fcc) { v0 = 0; goto L_00C3E368; }
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) ((u32) s6 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) (v0 + 252));
    at = v0 < 22528;
    if (at == 0) goto L_00C3E360;
    s1 = 284;
L_00C3E360:;
    (*(volatile u32 *) (u32) (s4 + 164)) = (u32) s1;
L_00C3E364:;
    v0 = 1;
L_00C3E368:;
    return v0;
}
