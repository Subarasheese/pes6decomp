/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s32 func_00288670(s32, s32);
s32 func_009B30B0(s32, s32);
s32 func_009B3350(s32, s32, s32);
s32 func_00BBB7F0(s32);

void func_00BF21C0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    s1 = a0;
    v1 = (*(volatile s16 *) (u32) (a0 + 20));
    f1.i = (s32) v1;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (f32) f1.i;
    f0.f = f0.f * f1.f;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a2 = 0; v0 = func_009B3350(a0, a1, a2);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00BF2218; }
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; goto L_00BF2230;
L_00BF2218:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f12.f = (f32) f0.i;
    f12.f = f12.f + f12.f;
L_00BF2230:;
    f0.f = func_001CD9E0();
    v0 = (s32) 0xcc0000U;
    f0.i = (s32) f0.f;
    (*(volatile u8 *) (u32) (v0 + -16845)) = (u8) 0;
    v0 = (*(volatile u8 *) (u32) (s1 + 36));
    s0 = f0.i;
    if (v0 != 0) goto L_00BF252C;
    v0 = (*(volatile u8 *) (u32) (s1 + 257));
    if (v0 != 0) { a1 = (*(volatile u16 *) (u32) (s1 + 254)); goto L_00BF22B0; }
L_00BF2260:;
    v0 = (*(volatile u8 *) (u32) (s1 + 257));
    if (v0 != 0) { a1 = (*(volatile u16 *) (u32) (s1 + 254)); goto L_00BF2300; }
L_00BF226C:;
    v1 = (*(volatile s32 *) (u32) (s1 + 176));
    v0 = v1 & 0x40;
    if (v0 != 0) { v1 = 204; goto L_00BF2358; }
    v0 = v1 & 0x10;
    if (v0 == 0) { v1 = 238; goto L_00BF22A4; }
    v1 = 1;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -16845)) = (u8) v1;
    v1 = 252;
    v0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v0 + 8876)) = (u16) v1; goto L_00BF252C;
L_00BF22A4:;
    v0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v0 + 8876)) = (u16) v1; goto L_00BF252C;
L_00BF22B0:;
    a0 = 0xc000; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 32;
    if (at == 0) goto L_00BF2260;
    v1 = 204;
    v0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v0 + 8876)) = (u16) v1;
    a0 = 8;
    a1 = (*(volatile u8 *) (u32) (s1 + 257));
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u16 *) (u32) (v0 + 8876));
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    v0 = (s32) 0x590000U;
    a0 = a0 & 0xffff;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u16 *) (u32) (v0 + 8876)) = (u16) v1; goto L_00BF252C;
L_00BF2300:;
    a0 = 16384; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 32;
    if (at == 0) goto L_00BF226C;
    v1 = 252;
    v0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v0 + 8876)) = (u16) v1;
    a0 = 1;
    v0 = (s32) 0x590000U;
    a3 = (*(volatile u8 *) (u32) (s1 + 257));
    a1 = (*(volatile u16 *) (u32) (v0 + 8876));
    a2 = 8;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -16845)) = (u8) a0;
    v0 = (s32) ((u32) a2 - (u32) a3);
    v0 = v0 & 0xffff;
    v0 = (s32) ((u32) a1 - (u32) v0);
    (*(volatile u16 *) (u32) (v1 + 8876)) = (u16) v0; goto L_00BF252C;
L_00BF2358:;
    v0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v0 + 8876)) = (u16) v1; goto L_00BF252C;
L_00BF2364:;
    if (v0 != 0) { a0 = 0; goto L_00BF2370; }
    a0 = (s32) ((u32) s0 + 0xffffee00U);
L_00BF2370:;
    v1 = (*(volatile s32 *) (u32) (s1 + 144));
    v0 = 2;
    if (v1 == v0) goto L_00BF23AC;
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -16829));
    if (v0 != 0) goto L_00BF23AC;
    v0 = (s32) 0xaaaa0000U;
    v0 = v0 | 0xaaab;
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v0 = (s32) ((u32) v0 >> 7);
    s0 = (s32) ((u32) v0 + 0xccU); goto L_00BF2440;
L_00BF23AC:;
    v0 = (s32) 0xaaaa0000U;
    v0 = v0 | 0xaaab;
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v0 = (s32) ((u32) v0 >> 7);
    s0 = (s32) ((u32) v0 + 0x100U); goto L_00BF2440;
L_00BF23C8:;
    at = (u64) s0 < (u64) (s64) 6145;
    if (at == 0) { at = (u64) s0 < (u64) (s64) 6657; goto L_00BF23F4; }
    v0 = (s32) 0xcccc0000U;
    v1 = (s32) ((u32) s0 + 0xffffea00U);
    v0 = v0 | 0xcccd;
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v0 = (s32) ((u32) v0 >> 7);
    s0 = (s32) ((u32) v0 + 0xe8U); goto L_00BF2440;
L_00BF23F4:;
    if (at == 0) { at = (u64) s0 < (u64) (s64) 7169; goto L_00BF241C; }
    v0 = (s32) 0xaaaa0000U;
    v1 = (s32) ((u32) s0 + 0xffffe800U);
    v0 = v0 | 0xaaab;
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v0 = (s32) ((u32) v0 >> 7);
    s0 = (s32) ((u32) v0 + 0xf8U); goto L_00BF2440;
L_00BF241C:;
    if (at == 0) { v1 = (*(volatile s32 *) (u32) (s1 + 144)); goto L_00BF25F4; }
    v0 = (s32) 0xcccc0000U;
    v1 = (s32) ((u32) s0 + 0xffffe800U);
    v0 = v0 | 0xcccd;
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v0 = (s32) ((u32) v0 >> 7);
    s0 = (s32) ((u32) v0 + 0x100U);
L_00BF2440:;
    v1 = (*(volatile s32 *) (u32) (s1 + 144));
    v0 = 2;
    if (v1 != v0) goto L_00BF2464;
    at = s0 < 257;
    if (at == 0) goto L_00BF2464;
    s0 = 256; goto L_00BF2464;
L_00BF2464:;
    a2 = (*(volatile u8 *) (u32) (s1 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 50;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 123));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (s32) 0x66660000U;
    v1 = v1 | 0x6667;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v0 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00BBB7F0(a0);
    v1 = (s32) ((u32) s0 + (u32) v0);
    a0 = 980;
    a1 = (s32) ((u32) v1 + 0xfffffffcU);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) 0x10620000U;
    v1 = v1 | 0x4dd3;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) a0 >> 31);
    a0 = hi;
    v1 = (*(volatile u8 *) (u32) (s1 + 36));
    a0 = (s32) a0 >> 6;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + (u32) a1); if (c_) goto L_00BF264C; }
L_00BF2510:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u16 *) (u32) (v1 + 8876));
    at = v1 < 317;
    if (at == 0) { a0 = 316; goto L_00BF2658; }
L_00BF2524:;
    goto L_00BF2664;
L_00BF252C:;
    a2 = (*(volatile u8 *) (u32) (s1 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 50;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 123));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    a0 = 99;
    v1 = (s32) 0x66660000U;
    a0 = (s32) ((u32) a0 - (u32) v0);
    v0 = v1 | 0x6667;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0x2U); v0 = func_00BBB7F0(a0);
    v1 = (s32) ((u32) v0 + 0x64U);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u16 *) (u32) (v0 + 8876));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x51eb0000U;
    v0 = v0 | 0x851f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) v1 >> 31);
    v1 = hi;
    v0 = (s32) 0x590000U;
    at = (u64) s0 < (u64) (s64) 5633;
    v1 = (s32) v1 >> 5;
    v1 = (s32) ((u32) v1 + (u32) a0);
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (v0 + 8876)) = (u16) v1; if (c_) goto L_00BF23C8; }
    v0 = (u64) s0 < (u64) (s64) 4608; goto L_00BF2364;
L_00BF25F4:;
    v0 = 2;
    if (v1 != v0) { v0 = (s32) 0xcccc0000U; goto L_00BF2630; }
    v0 = (s32) 0xcccc0000U;
    v1 = (s32) ((u32) s0 + 0xffffe400U);
    v0 = v0 | 0xcccd;
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = hi;
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -16829));
    v1 = (s32) ((u32) v1 >> 7);
    { s32 c_ = v0 == 0; s0 = (s32) ((u32) v1 + 0x110U); if (c_) goto L_00BF2440; }
    s0 = (s32) ((u32) s0 + 0x10U); goto L_00BF2440;
L_00BF2630:;
    v1 = (s32) ((u32) s0 + 0xffffe400U);
    v0 = v0 | 0xcccd;
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v0 = (s32) ((u32) v0 >> 7);
    s0 = (s32) ((u32) v0 + 0x108U); goto L_00BF2440;
L_00BF264C:;
    v1 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v1 + 8876)) = (u16) a0; goto L_00BF2510;
L_00BF2658:;
    v1 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v1 + 8876)) = (u16) a0; goto L_00BF2524;
L_00BF2664:;
    return;
}
