/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00C0ED20(s64, s64, f32, f32);
void func_00C13870(s64);
s64 func_00C18C50(f32, f32);

void func_00C0FC60(s64 a0, s64 a1, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    s3 = a0;
    at = (u64) s3 < (u64) (s64) 12;
    s2 = a1;
    s1 = 0;
    f21.i = (s32) 0;
    { s32 c_ = at == 0; f20.i = f21.i; if (c_) goto L_00C0FEB8; }
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) s3 << 2);
    v1 = (s32) ((u32) v1 + 0x32d0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xc0fcbcU) goto L_00C0FCBC; if (t_ == 0xc0fce4U) goto L_00C0FCE4; if (t_ == 0xc0fd20U) goto L_00C0FD20; if (t_ == 0xc0fdb8U) goto L_00C0FDB8; if (t_ == 0xc0fe84U) goto L_00C0FE84; if (t_ == 0xc0fea0U) goto L_00C0FEA0; if (t_ == 0xc0feb8U) goto L_00C0FEB8; }
L_00C0FCBC:;
    v0 = (*(volatile u8 *) (u32) s2);
    (*(volatile u8 *) (u32) (sp + 97)) = (u8) v0;
    f13.f = (*(volatile f32 *) (u32) (s2 + 8));
    f12.f = (*(volatile f32 *) (u32) (s2 + 4)); v0 = func_00C18C50(f12.f, f13.f);
    (*(volatile u16 *) (u32) (sp + 98)) = (u16) v0;
    f21.f = (*(volatile f32 *) (u32) (s2 + 4));
    f20.f = (*(volatile f32 *) (u32) (s2 + 8));
    s1 = (s64) ((u64) 0 + (u64) (s64) 6); goto L_00C0FEB8;
L_00C0FCE4:;
    v0 = (*(volatile u8 *) (u32) (s2 + 1));
    (*(volatile u8 *) (u32) (sp + 97)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s2 + 2));
    (*(volatile u8 *) (u32) (sp + 100)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s2 + 3));
    (*(volatile u8 *) (u32) (sp + 101)) = (u8) v0;
    f13.f = (*(volatile f32 *) (u32) (s2 + 8));
    f12.f = (*(volatile f32 *) (u32) (s2 + 4)); v0 = func_00C18C50(f12.f, f13.f);
    (*(volatile u16 *) (u32) (sp + 98)) = (u16) v0;
    v0 = 2;
    if (s3 != v0) { s1 = (s64) ((u64) 0 + (u64) (s64) 8); goto L_00C0FEB8; }
    s1 = (s64) ((u64) 0 + (u64) (s64) 7); goto L_00C0FEB8;
L_00C0FD20:;
    f12.f = (*(volatile f32 *) (u32) s2);
    f13.f = (*(volatile f32 *) (u32) (s2 + 8));
    s0 = (s32) ((u32) sp + 0x60U); v0 = func_00C18C50(f12.f, f13.f);
    (*(volatile u16 *) (u32) (sp + 98)) = (u16) v0;
    f0.i = f21.i;
    f1.f = (*(volatile f32 *) (u32) (s2 + 4));
    f1.i = f1.i ^ (s32) 0x80000000U;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = (s32) 0x45200000U; goto L_00C0FD54; }
    f0.i = (s32) f0.f; goto L_00C0FD74;
L_00C0FD54:;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { f0.i = f1.i; goto L_00C0FD70; }
    goto L_00C0FD70;
L_00C0FD70:;
    f0.i = (s32) f0.f;
L_00C0FD74:;
    v0 = (s32) 0x66660000U;
    v0 = v0 | 0x6667;
    a0 = f0.i;
    v1 = (s32) ((u32) a0 << 8);
    v1 = (s32) ((u32) v1 - (u32) a0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 10;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v0;
    f21.f = (*(volatile f32 *) (u32) s2);
    f20.f = (*(volatile f32 *) (u32) (s2 + 8));
    s1 = (s64) ((u64) 0 + (u64) (s64) 9); goto L_00C0FEB8;
L_00C0FDB8:;
    v0 = (*(volatile u8 *) (u32) s2);
    (*(volatile u8 *) (u32) (sp + 97)) = (u8) v0;
    f0.f = (*(volatile f32 *) (u32) (s2 + 8));
    f0.i = f0.i ^ (s32) 0x80000000U;
    fcc = f0.f < f21.f;
    { s32 c_ = !fcc; s0 = (s32) ((u32) sp + 0x60U); if (c_) goto L_00C0FDDC; }
    f0.i = (s32) f21.f; goto L_00C0FE00;
L_00C0FDDC:;
    v0 = (s32) 0x45200000U;
    f21.i = (s32) v0;
    fcc = f0.f <= f21.f;
    if (fcc) { f21.i = f0.i; goto L_00C0FDFC; }
    goto L_00C0FDFC;
L_00C0FDFC:;
    f0.i = (s32) f21.f;
L_00C0FE00:;
    v0 = (s32) 0x66660000U;
    v0 = v0 | 0x6667;
    a0 = f0.i;
    v1 = (s32) ((u32) a0 << 8);
    v1 = (s32) ((u32) v1 - (u32) a0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 10;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) v0;
    f13.f = (*(volatile f32 *) (u32) (s2 + 12));
    f12.f = (*(volatile f32 *) (u32) (s2 + 4)); v0 = func_00C18C50(f12.f, f13.f);
    (*(volatile u16 *) (u32) (s0 + 2)) = (u16) v0;
    v1 = (*(volatile u8 *) (u32) (s2 + 1));
    v0 = 7;
    { s32 c_ = s3 == v0; (*(volatile u8 *) (u32) (s0 + 5)) = (u8) v1; if (c_) goto L_00C0FE74; }
    v0 = 6;
    if (s3 == v0) { s1 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_00C0FE78; }
    v0 = 5;
    if (s3 == v0) { s1 = (s64) ((u64) 0 + (u64) (s64) 4); goto L_00C0FE78; }
    f21.f = (*(volatile f32 *) (u32) (s2 + 4)); goto L_00C0FE7C;
L_00C0FE74:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 5);
L_00C0FE78:;
    f21.f = (*(volatile f32 *) (u32) (s2 + 4));
L_00C0FE7C:;
    f20.f = (*(volatile f32 *) (u32) (s2 + 12)); goto L_00C0FEB8;
L_00C0FE84:;
    (*(volatile u8 *) (u32) (sp + 97)) = (u8) 0;
    f13.f = (*(volatile f32 *) (u32) (s2 + 8));
    f12.f = (*(volatile f32 *) (u32) s2); v0 = func_00C18C50(f12.f, f13.f);
    (*(volatile u16 *) (u32) (sp + 98)) = (u16) v0;
    s1 = (s64) ((u64) 0 + (u64) (s64) 34); goto L_00C0FEB8;
L_00C0FEA0:;
    v0 = (*(volatile u8 *) (u32) s2);
    (*(volatile u8 *) (u32) (sp + 97)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s2 + 2));
    (*(volatile u8 *) (u32) (sp + 98)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s2 + 3));
    (*(volatile u8 *) (u32) (sp + 99)) = (u8) v0;
L_00C0FEB8:;
    f12.i = f21.i;
    a0 = s1;
    f13.i = f20.i;
    a1 = 255; func_00C0ED20(a0, a1, f12.f, f13.f);
    v1 = s1 & 0xff;
    if (v1 != 0) { a0 = (s32) ((u32) sp + 0x60U); goto L_00C0FEE0; }
L_00C0FED8:;
    goto L_00C0FEF0;
L_00C0FEE0:;
    (*(volatile u8 *) (u32) (sp + 96)) = (u8) s1; func_00C13870(a0);
    goto L_00C0FED8;
L_00C0FEF0:;
    return;
}
