/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00288670(s32, s32);
s32 func_0090B8B0(s32, s32);
s32 func_009B3070(s32, s32, s32, s32);
s32 func_009B3480(s32, s32, s32, s32);

s32 func_00907D30(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    volatile union { f32 f; s32 i; } f13 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    v1 = 139;
    v0 = (s32) ((u32) v0 + 0x1a96U);
    s2 = a0;
    s1 = a1;
    a1 = (*(volatile u8 *) (u32) (a0 + 18));
    a2 = (*(volatile s16 *) (u32) (a0 + 20));
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    f0.i = (s32) a2;
    a0 = (*(volatile u8 *) (u32) (a0 + 17));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    { s32 c_ = a0 != v0; f20.f = (f32) f0.i; if (c_) goto L_00907D88; }
    s0 = 10; goto L_00907D8C;
L_00907D88:;
    s0 = 0;
L_00907D8C:;
    v0 = (s32) ((u32) a1 << 4);
    v1 = a0 & 0xff;
    a2 = (s32) ((u32) v0 - (u32) a1);
    a0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v1 << 4);
    a1 = (s32) ((u32) a2 << 3);
    v1 = (s32) ((u32) v0 - (u32) v1);
    a1 = (s32) ((u32) a1 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 - (u32) v1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a1 = 60;
    v0 = (*(volatile u8 *) (u32) (v0 + 130));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v0 = (s32) ((u32) s0 + (u32) v0);
    at = v0 < 100;
    if (at != 0) { a1 = (*(volatile u8 *) (u32) (s2 + 18)); goto L_00907DF0; }
    v1 = 99; goto L_00907E68;
L_00907DF0:;
    v1 = 139;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (s2 + 17));
    v0 = (s32) ((u32) v0 + 0x1a96U);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a0 != v0) { s0 = 0; goto L_00907E18; }
    s0 = 10;
L_00907E18:;
    v0 = (s32) ((u32) a1 << 4);
    v1 = a0 & 0xff;
    a2 = (s32) ((u32) v0 - (u32) a1);
    a0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v1 << 4);
    a1 = (s32) ((u32) a2 << 3);
    v1 = (s32) ((u32) v0 - (u32) v1);
    a1 = (s32) ((u32) a1 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 - (u32) v1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a1 = 60;
    v0 = (*(volatile u8 *) (u32) (v0 + 130));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (s32) ((u32) s0 + (u32) v0);
L_00907E68:;
    v0 = (s32) 0x66660000U;
    v0 = v0 | 0x6667;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) v1 >> 31);
    v1 = hi;
    v0 = (*(volatile u8 *) (u32) (s2 + 469));
    v1 = (s32) v1 >> 2;
    v1 = (s32) ((u32) v1 + (u32) a0);
    { s32 c_ = v0 == 0; a1 = (s32) ((u32) v1 + 0x10U); if (c_) goto L_00907EDC; }
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00907EB0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00907EB0:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = 3;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 468));
    if (v1 != v0) goto L_00907EDC;
    a1 = (s32) ((u32) a1 + 0x5U);
L_00907EDC:;
    v0 = (*(volatile u8 *) (u32) (s2 + 92));
    at = (u64) v0 < (u64) a1;
    if (at == 0) { v0 = 0; goto L_0090811C; }
    v0 = (*(volatile u8 *) (u32) (s2 + 513));
    at = v0 < 5;
    if (at != 0) { v0 = 0; goto L_0090811C; }
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21192));
    v0 = (*(volatile u8 *) (u32) (v0 + 9964));
    at = v1 < v0;
    if (at == 0) { f12.f = (*(volatile f32 *) (u32) (s2 + 108)); goto L_00907F20; }
    v0 = 0; goto L_0090811C;
L_00907F20:;
    f13.f = (*(volatile f32 *) (u32) (s2 + 112));
    a0 = s2; v0 = func_009B3480(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (s2 + 92));
    a1 = v0 & 0xffff;
    a2 = (*(volatile s32 *) (u32) (s2 + 28));
    v0 = 6400;
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 - (u32) v1);
    at = v0 < a2;
    if (at != 0) { a0 = (*(volatile u16 *) (u32) (s2 + 38)); goto L_00907F98; }
L_00907F58:;
    v1 = (*(volatile u8 *) (u32) (s2 + 18));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e67U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) { a0 = s2; goto L_009080A8; }
    f1.f = (*(volatile f32 *) (u32) (s2 + 224));
    f0.f = (*(volatile f32 *) (u32) (s2 + 108));
    f1.f = f20.f * f1.f;
    f0.f = f20.f * f0.f;
    fcc = f1.f <= f0.f;
    if (fcc) { a0 = s2; goto L_00907FB8; }
    v0 = 0; goto L_0090811C;
L_00907F98:;
    v0 = func_009B3070(a0, a1, a2, a3);
    v0 = v0 & 0xffff;
    at = v0 < 16385;
    if (at != 0) goto L_00907F58;
    v0 = 0; goto L_0090811C;
L_00907FB8:;
    a1 = 0; v0 = func_0090B8B0(a0, a1);
    v1 = v0 & 0xff;
    v0 = 2;
    if (v1 == v0) { v0 = 2048; goto L_00907FDC; }
    if (v1 == 0) { v0 = 4096; goto L_00907FDC; }
    v0 = 3072;
L_00907FDC:;
    a0 = (*(volatile u8 *) (u32) (s2 + 513));
    v1 = 6;
    if (a0 == v1) goto L_00908004;
    v1 = 5;
    if (a0 == v1) goto L_00908004;
    v0 = 4;
    v0 = 0; goto L_0090811C;
L_00908004:;
    a0 = (*(volatile u8 *) (u32) (s2 + 458));
    v1 = (s32) 0x66660000U;
    v1 = v1 | 0x6667;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) a0 >> 31);
    a0 = hi;
    v1 = 1;
    a0 = (s32) a0 >> 2;
    a0 = (s32) ((u32) a0 + (u32) a1);
    if (a0 == v1) goto L_00908118;
    if (a0 == 0) goto L_00908118;
    a1 = (*(volatile u8 *) (u32) (s2 + 92));
    v1 = 6400;
    a2 = (*(volatile s32 *) (u32) (s2 + 28));
    a0 = (s32) ((u32) a1 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    at = v1 < a2;
    if (at == 0) goto L_00908090;
    v1 = (s32) ((u32) v0 << 1);
    v0 = (s32) 0xaaaa0000U;
    v0 = v0 | 0xaaab;
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    at = (s32) 0x400000U;
    at = (u64) s1 < (u64) at;
    { s32 c_ = at == 0; v0 = (s32) ((u32) v0 >> 1); if (c_) goto L_00908090; }
    v0 = 0; goto L_0090811C;
L_00908090:;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = (u64) v0 < (u64) s1;
    if (at == 0) { v0 = 0; goto L_0090811C; }
    v0 = 1; goto L_0090811C;
L_009080A8:;
    a1 = 1; v0 = func_0090B8B0(a0, a1);
    v1 = v0 & 0xff;
    v0 = 2;
    if (v1 == v0) { v0 = 4096; goto L_009080CC; }
    if (v1 == 0) { v0 = 2048; goto L_009080CC; }
    v0 = 3072;
L_009080CC:;
    a0 = (*(volatile u8 *) (u32) (s2 + 513));
    v1 = 6;
    if (a0 == v1) { v0 = 512; goto L_009080F4; }
    v1 = 5;
    if (a0 == v1) goto L_009080F4;
    v0 = 4;
    v0 = 0; goto L_0090811C;
L_009080F4:;
    f1.f = (*(volatile f32 *) (u32) (s2 + 224));
    f0.f = (*(volatile f32 *) (u32) (s2 + 108));
    f1.f = f20.f * f1.f;
    f0.f = f20.f * f0.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00908004;
    v0 = 0; goto L_0090811C;
L_00908118:;
    v0 = 0;
L_0090811C:;
    return v0;
}
