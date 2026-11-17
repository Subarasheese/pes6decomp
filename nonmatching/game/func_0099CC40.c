/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0028C590(s64, s64);
void func_0028C5D0(s64, s64);
s64 func_0028C830(s64, s64);
s64 func_00292F00(s64);
s64 func_002CA7A0(s64);
s64 func_00AFBAB0(s64);
s64 func_00B29E20(void);

s64 func_0099CC40(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[52];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0x590000U;
    v0 = (s32) 0xca0000U;
    v1 = (s32) ((u32) v1 + 0x1a97U);
    s5 = a0;
    s3 = 0;
    s2 = 1;
    s1 = (*(volatile u8 *) (u32) (a0 + 18));
    s0 = (s32) 0xca0000U;
    a1 = (*(volatile u8 *) (u32) (v0 + -23648));
    a0 = 139;
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v0 = 255;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) a1 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) v1);
    { s32 c_ = a1 == v0; s0 = (s32) ((u32) s0 + 0xffffa3a0U); if (c_) goto L_0099CD6C; }
    v1 = (s32) ((u32) a0 << 4);
    v0 = (s32) ((u32) s1 << 4);
    a1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v0 - (u32) s1);
    a0 = (s32) ((u32) a1 << 3);
    v0 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a0 - (u32) a1);
    v0 = (s32) ((u32) v0 - (u32) v1);
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v0 << 8);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x2a54U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) goto L_0099CD6C;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x2994U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_0099CD6C;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x2a78U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_0099CD6C;
    v1 = (*(volatile u8 *) (u32) (s5 + 22));
    v0 = 70;
    if (v1 != v0) goto L_0099CD50;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) s5);
    v0 = (*(volatile u8 *) (u32) (v0 + 10185));
    if (v1 == v0) goto L_0099CD6C;
L_0099CD50:;
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBAB0(a0);
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = v0 & 0xff; goto L_0099D288;
L_0099CD6C:;
    a0 = (s32) ((u32) sp + 0xa0U);
    a1 = s1; func_0028C5D0(a0, a1);
    v0 = (s32) 0x590000U;
    v1 = 4;
    v0 = (*(volatile u8 *) (u32) (v0 + 7972));
    if (v0 == v1) { v0 = v1 & 0xff; goto L_0099CE40; }
    a0 = 3;
    if (v0 == a0) { v1 = (*(volatile s16 *) (u32) (s5 + 20)); goto L_0099CDA0; }
    a0 = (*(volatile s16 *) (u32) (s5 + 20)); goto L_0099CDD0;
L_0099CDA0:;
    v0 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f0.i = (s32) 0;
    f2.i = (s32) v1;
    f2.f = (f32) f2.i;
    f1.f = f2.f * f1.f;
    fcc = f1.f <= f0.f;
    if (fcc) { v0 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_0099CE40; }
    v0 = a0 & 0xff; goto L_0099CE40;
L_0099CDD0:;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    v1 = (s32) 0x590000U;
    f3.i = (s32) v0;
    f2.f = (*(volatile f32 *) (u32) (v1 + 7768));
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f4.i = (s32) a0;
    f1.i = (s32) 0;
    f4.f = (f32) f4.i;
    f0.f = f0.f - f1.f;
    acc = f1.f + f2.f;
    f2.f = acc - f3.f * f4.f;
    f1.i = (s32) f2.f;
    f0.i = (s32) f0.f;
    v0 = f1.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x4000000U;
    v0 = (u64) v1 < (u64) v0;
    if (v0 != 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_0099CE40; }
    at = (s32) 0x6400000U;
    at = (u64) v1 < (u64) at;
    if (at == 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 5); goto L_0099CE40; }
    v0 = 0;
L_0099CE40:;
    s0 = v0 & 0xff;
    v1 = 5;
    if (s0 == v1) { a0 = (*(volatile u8 *) (u32) s5); goto L_0099CF0C; }
    v0 = 4;
    if (s0 == v0) goto L_0099CE64;
    goto L_0099CEF8;
L_0099CE64:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) goto L_0099CEF8;
    v0 = func_00B29E20();
    if (v0 == 0) goto L_0099CEF8;
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_0099CEB4; }
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_0099CEB4:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s2 = 0;
    s3 = (s32) ((u32) v0 + (u32) v1);
L_0099CED0:;
    v1 = (*(volatile s32 *) (u32) (s3 + 4));
    v0 = 1;
    v1 = (*(volatile u8 *) (u32) (v1 + 44));
    if (v1 == v0) { a0 = s3; goto L_0099D16C; }
L_0099CEE8:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 11;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x240U); if (c_) goto L_0099CED0; }
L_0099CEF8:;
    a0 = (s32) ((u32) sp + 0xa0U);
    a1 = s0; v0 = func_0028C830(a0, a1);
    s2 = v0 & 0xff; goto L_0099D0E0;
L_0099CF0C:;
    v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_0099CF3C; }
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_0099CF3C:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 << 6);
    f2.f = (*(volatile f32 *) (u32) (v0 + 7768));
    f0.i = (s32) f2.f;
    v0 = f0.i;
    { s32 c_ = v0 <= 0; v1 = (s32) ((u32) v1 + (u32) a0); if (c_) goto L_0099CF74; }
    goto L_0099CF78;
L_0099CF74:;
    v0 = (s32) ((u32) 0 - (u32) v0);
L_0099CF78:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46100000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0099CFEC;
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_0099CFBC; }
L_0099CFBC:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x45a10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_0099CFEC;
    v0 = (*(volatile u8 *) (u32) v1); goto L_0099D288;
L_0099CFEC:;
    v0 = (*(volatile s16 *) (u32) (v1 + 20));
    f0.i = (s32) 0;
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f1.f = f1.f * f2.f;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_0099D014;
    s3 = 1;
L_0099D014:;
    s7 = (*(volatile u8 *) (u32) (v1 + 576));
    a0 = (s32) 0x7fff0000U;
    s0 = (s32) ((u32) v1 + 0x240U);
    v0 = (s32) ((u32) s1 << 4);
    s4 = a0 | 0xffff;
    v1 = (s32) ((u32) v0 - (u32) s1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    fp = (s32) ((u32) v0 << 8);
L_0099D038:;
    v0 = (s32) 0x590000U;
    s1 = 0;
    v0 = (s32) ((u32) v0 + 0x2980U);
    s6 = (s32) ((u32) v0 + (u32) fp);
L_0099D048:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 44));
    if (v0 != 0) goto L_0099D190;
L_0099D058:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 10;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x240U); if (c_) goto L_0099D048; }
    if (s3 == 0) goto L_0099D278;
L_0099D070:;
    if (s3 != 0) goto L_0099D07C;
    s2 = 0;
L_0099D07C:;
    a0 = (*(volatile u8 *) (u32) s5);
    s3 = 0; v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_0099D0B0; }
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_0099D0B0:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    v0 = (s32) 0x7fff0000U;
    a0 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = v0 | 0xffff;
    { s32 c_ = s4 == v0; s0 = (s32) ((u32) v1 + 0x240U); if (c_) goto L_0099D038; }
L_0099D0D8:;
    v0 = s7; goto L_0099D288;
L_0099D0E0:;
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_0099D110; }
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_0099D110:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    a0 = (s32) ((u32) v1 << 6);
    a1 = 0;
    v1 = s2 & 0xff;
    s3 = (s32) ((u32) v0 + (u32) a0);
L_0099D130:;
    v0 = (*(volatile u8 *) (u32) (s3 + 17));
    if (v0 != v1) { a1 = (s32) ((u32) a1 + 0x1U); goto L_0099D158; }
    v0 = (s32) ((u32) s0 + (u32) sp);
    a1 = s1;
    (*(volatile u8 *) (u32) (v0 + 352)) = (u8) s2;
    a0 = (s32) ((u32) sp + 0xa0U); func_0028C590(a0, a1);
    v0 = (*(volatile u8 *) (u32) s3); goto L_0099D288;
L_0099D158:;
    v0 = a1 < 11;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x240U); if (c_) goto L_0099D130; }
    v0 = 255; goto L_0099D288;
L_0099D16C:;
    v0 = func_002CA7A0(a0);
    if (v0 != 0) goto L_0099CEE8;
    v0 = (*(volatile u8 *) (u32) (s3 + 17));
    v0 = (s32) ((u32) v0 + (u32) sp);
    (*(volatile u8 *) (u32) (v0 + 320)) = (u8) 0; goto L_0099CEE8;
L_0099D190:;
    a0 = (*(volatile u8 *) (u32) (s0 + 16)); v0 = func_00292F00(a0);
    { s32 c_ = s2 == 0; a0 = v0 & 0xff; if (c_) goto L_0099D1B0; }
    v1 = a0 & 0xff;
    v0 = 3;
    if (v1 == v0) goto L_0099D058;
L_0099D1B0:;
    if (s3 == 0) goto L_0099D1C8;
    v1 = a0 & 0xff;
    v0 = 1;
    if (v1 != v0) goto L_0099D058;
L_0099D1C8:;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) s6 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 248));
    if (v0 != 0) goto L_0099D058;
    v0 = (*(volatile u8 *) (u32) (v1 + 212));
    if (v0 == 0) goto L_0099D058;
    v1 = (*(volatile u8 *) (u32) (s0 + 22));
    v0 = 70;
    if (v1 != v0) goto L_0099D220;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 10185));
    if (v1 == v0) goto L_0099D058;
L_0099D220:;
    v0 = (s32) 0x590000U;
    f3.f = (*(volatile f32 *) (u32) (v0 + 7768));
    f2.f = (*(volatile f32 *) (u32) (s0 + 224));
    f1.f = (*(volatile f32 *) (u32) (s0 + 232));
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f2.f = f3.f - f2.f;
    f0.f = f0.f - f1.f;
    f0.i = (s32) f0.f;
    f1.i = (s32) f2.f;
    v0 = f0.i;
    a0 = f1.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) a0 * (s64) (u64) (u32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = (u64) v0 < (u64) s4;
    if (at == 0) goto L_0099D058;
    s7 = (*(volatile u8 *) (u32) s0);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    s4 = (s32) ((u32) v0 + (u32) v1); goto L_0099D058;
L_0099D278:;
    if (s2 == 0) goto L_0099D0D8;
    goto L_0099D070;
L_0099D288:;
    return v0;
}
