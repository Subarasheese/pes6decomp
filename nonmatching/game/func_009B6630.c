/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00182B20(s64);
void func_0020B360(s64);
void func_0027A710(s64);

void func_009B6630(s64 a0, s64 a1, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    v1 = (s32) 0xcc0000U;
    v0 = (s32) 0xcc0000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + -21996));
    f20.i = f12.i;
    v1 = (s32) 0x41000000U;
    f1.i = (s32) v1;
    f3.f = f1.f * f20.f;
    v1 = (s32) 0x4f000000U;
    f0.i = (s32) v1;
    fcc = f0.f <= f3.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) (v0 + -21992)) = f2.f; if (c_) goto L_009B6688; }
    f0.i = (s32) f3.f;
    a1 = f0.i;
    v0 = 1; goto L_009B66A4;
L_009B6688:;
    f0.f = f3.f - f0.f;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a1 = a1 | v0;
    v0 = 1;
L_009B66A4:;
    if (a0 != v0) goto L_009B66F4;
    v1 = (s32) 0x40000000U;
    v0 = (s32) 0x4f000000U;
    f1.i = (s32) v1;
    f0.i = (s32) v0;
    f1.f = f1.f * f3.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_009B66E0; }
    f0.i = (s32) f1.f;
    a1 = f0.i;
    goto L_009B66F4;
L_009B66E0:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a1 = a1 | v0;
L_009B66F4:;
    if (a1 == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 8); goto L_009B6724; }
    v1 = 8;
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) v1 / (u32) a1); hi = (s32) ((u32) v1 % (u32) a1); lo = q_; }
    v0 = lo;
    s0 = v0 & 0xff;
    if ((u32) a1 != 0) { s64 q_ = (s32) ((u32) v1 / (u32) a1); hi = (s32) ((u32) v1 % (u32) a1); lo = q_; }
    v0 = hi;
    if (v0 == 0) goto L_009B6724;
    v0 = (s32) ((u32) s0 + 0x1U);
    s0 = v0 & 0xff;
L_009B6724:;
    a0 = a1; func_0027A710(a0);
    v0 = s0 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1U);
    a0 = v0 & 0xff; func_0020B360(a0);
    v1 = (s32) 0xcc0000U;
    v0 = (s32) 0xcc0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -21996));
    f2.f = f0.f + f20.f;
    v1 = (s32) 0x43960000U;
    f1.i = (s32) v1;
    fcc = f2.f < f1.f;
    { s32 c_ = !fcc; (*(volatile f32 *) (u32) (v0 + -21996)) = f2.f; if (c_) goto L_009B67F0; }
    f0.i = (s32) 0;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_009B678C;
    v1 = (s32) 0xcc0000U;
    v0 = (s32) 0xcc0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -21996));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (v0 + -21996)) = f0.f;
L_009B678C:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    v1 = (s32) ((u32) v0 << 3);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_009B67A8; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_009B67A8:;
    (*(volatile u8 *) (u32) (gp + -19488)) = (u8) v0;
    f0.i = (s32) 0;
    v0 = (s32) 0xcc0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -21996));
    fcc = f20.f <= f0.f;
    f0.i = (s32) f1.f;
    v0 = (s32) 0xcc0000U;
    v1 = f0.i;
    { s32 c_ = fcc; (*(volatile u16 *) (u32) (v0 + -22016)) = (u16) v1; if (c_) goto L_009B67E0; }
    a0 = 1; func_00182B20(a0);
    goto L_009B67E8;
L_009B67E0:;
    a0 = 0; func_00182B20(a0);
L_009B67E8:;
    goto L_009B6800;
L_009B67F0:;
    f0.f = f2.f - f1.f;
    v0 = (s32) 0xcc0000U;
    (*(volatile f32 *) (u32) (v0 + -21996)) = f0.f; goto L_009B678C;
L_009B6800:;
    return;
}
