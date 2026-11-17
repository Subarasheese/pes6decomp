/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002DCA30(void);
s32 func_009B30B0(s32, s32);
void func_00B67B80(s32, s32, s32, s32, f32, f32);
s32 func_00B68390(s32, s32);
void func_00B7BB60(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00BA8B40(s32, s32);
s32 func_00BBB8C0(s32);

s32 func_00B6B720(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9084));
    { s32 c_ = v0 == 0; s1 = a0; if (c_) goto L_00B6B748; }
    v0 = 0; goto L_00B6BD04;
L_00B6B748:;
    v0 = func_002DCA30();
    if (v0 != 0) goto L_00B6B794;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = 9;
    v1 = (*(volatile u16 *) (u32) (v1 + 132));
    if (v1 != v0) goto L_00B6B794;
    a0 = 10; v0 = func_00BBB8C0(a0);
    at = v0 < 6;
    if (at == 0) goto L_00B6B794;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    a0 = 32;
    v0 = 1;
    (*(volatile u8 *) (u32) (v1 + 76)) = (u8) a0; goto L_00B6BD04;
L_00B6B794:;
    a0 = s1; func_00B67B80(a0, a1, a2, a3, f12.f, f13.f);
    a0 = s1;
    a1 = 1; v0 = func_00B68390(a0, a1);
    v1 = 2;
    if (v0 == v1) { a1 = (*(volatile s32 *) (u32) s1); goto L_00B6B9A0; }
    v1 = 1;
    if (v0 == v1) { a1 = (*(volatile s32 *) (u32) s1); goto L_00B6B888; }
    if (v0 == 0) { a1 = (*(volatile s32 *) (u32) s1); goto L_00B6B7D0; }
    v0 = 1; goto L_00B6BAA4;
L_00B6B7D0:;
    v0 = 670;
    v1 = (*(volatile s32 *) (u32) (a1 + 4));
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 == v0) goto L_00B6BAAC;
    v0 = 901;
    if (v1 == v0) goto L_00B6BAAC;
    v0 = 672;
    if (v1 == v0) goto L_00B6BAAC;
    v0 = (*(volatile s32 *) (u32) (a1 + 28));
    at = v0 < 2049;
    if (at != 0) goto L_00B6BADC;
    a0 = (*(volatile u16 *) (u32) (a1 + 40));
    a1 = (*(volatile u16 *) (u32) (a1 + 38)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 17;
    if (at == 0) goto L_00B6BADC;
    a0 = 4; v0 = func_00BBB8C0(a0);
    v1 = 3;
    if (v0 == v1) goto L_00B6B85C;
    v1 = 2;
    if (v0 == v1) { s0 = 49; goto L_00B6B860; }
    v1 = 1;
    if (v0 == v1) { s0 = 37; goto L_00B6B860; }
    if (v0 == 0) { s0 = 25; goto L_00B6B860; }
L_00B6B85C:;
    s0 = 50;
L_00B6B860:;
    a0 = s1;
    a1 = s0; v0 = func_00BA8B40(a0, a1);
    if (v0 == 0) { a0 = 15; goto L_00B6BABC; }
    v0 = (*(volatile s32 *) (u32) s1);
    (*(volatile u8 *) (u32) (v0 + 78)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) s0; goto L_00B6BAA0;
L_00B6B888:;
    v0 = 670;
    v1 = (*(volatile s32 *) (u32) (a1 + 4));
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 == v0) goto L_00B6BB70;
    v0 = 901;
    if (v1 == v0) goto L_00B6BB70;
    v0 = 672;
    if (v1 == v0) goto L_00B6BB70;
    v0 = (*(volatile s32 *) (u32) (a1 + 28));
    at = v0 < 2049;
    if (at != 0) goto L_00B6BBB8;
    a0 = (*(volatile u16 *) (u32) (a1 + 40));
    a1 = (*(volatile u16 *) (u32) (a1 + 38)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 17;
    if (at == 0) goto L_00B6BBB8;
    a0 = 6; v0 = func_00BBB8C0(a0);
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) goto L_00B6B958;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd340U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xb6b910U) goto L_00B6B910; if (t_ == 0xb6b918U) goto L_00B6B918; if (t_ == 0xb6b920U) goto L_00B6B920; if (t_ == 0xb6b928U) goto L_00B6B928; if (t_ == 0xb6b930U) goto L_00B6B930; if (t_ == 0xb6b958U) goto L_00B6B958; }
L_00B6B910:;
    s0 = 17; goto L_00B6B978;
L_00B6B918:;
    s0 = 56; goto L_00B6B978;
L_00B6B920:;
    s0 = 49; goto L_00B6B978;
L_00B6B928:;
    s0 = 50; goto L_00B6B978;
L_00B6B930:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7801));
    v0 = 8;
    { s32 c_ = v1 == v0; s0 = 35; if (c_) goto L_00B6BB84; }
    v0 = 15;
    if (v1 != v0) goto L_00B6B978;
    s0 = 49; goto L_00B6BB88;
L_00B6B958:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7801));
    v0 = 8;
    { s32 c_ = v1 == v0; s0 = 47; if (c_) goto L_00B6BB90; }
    v0 = 15;
    if (v1 == v0) goto L_00B6BB90;
L_00B6B978:;
    a0 = s1;
L_00B6B97C:;
    a1 = s0; v0 = func_00BA8B40(a0, a1);
    if (v0 == 0) { a0 = 15; goto L_00B6BB98; }
    v0 = (*(volatile s32 *) (u32) s1);
    (*(volatile u8 *) (u32) (v0 + 78)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) s0; goto L_00B6BAA0;
L_00B6B9A0:;
    v0 = 670;
    v1 = (*(volatile s32 *) (u32) (a1 + 4));
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 == v0) goto L_00B6BC10;
    v0 = 901;
    if (v1 == v0) goto L_00B6BC10;
    v0 = 672;
    if (v1 == v0) goto L_00B6BC10;
    v0 = (*(volatile s32 *) (u32) (a1 + 28));
    at = v0 < 2049;
    if (at != 0) goto L_00B6BC5C;
    a0 = (*(volatile u16 *) (u32) (a1 + 40));
    a1 = (*(volatile u16 *) (u32) (a1 + 38)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 17;
    if (at == 0) goto L_00B6BC5C;
    a0 = 4; v0 = func_00BBB8C0(a0);
    v1 = 3;
    if (v0 == v1) goto L_00B6BA2C;
    v1 = 2;
    if (v0 == v1) { s0 = 27; goto L_00B6BA30; }
    v1 = 1;
    if (v0 == v1) { s0 = 4; goto L_00B6BA30; }
    if (v0 == 0) { s0 = 8; goto L_00B6BA30; }
L_00B6BA2C:;
    s0 = 24;
L_00B6BA30:;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x448e0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 7772));
    f0.i = (s32) v1;
    f1.i = f1.i ^ (s32) 0x80000000U;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00B6BC24;
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45320000U;
    v0 = v0 | 0x8000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00B6BC24;
L_00B6BA7C:;
    a0 = s1;
    a1 = s0; v0 = func_00BA8B40(a0, a1);
    if (v0 == 0) { a0 = 15; goto L_00B6BC3C; }
    v0 = (*(volatile s32 *) (u32) s1);
    (*(volatile u8 *) (u32) (v0 + 78)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) s0;
L_00B6BAA0:;
    v0 = 1;
L_00B6BAA4:;
    goto L_00B6BD08;
L_00B6BAAC:;
    a0 = a1; func_00B7BB60(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_00B6BAA0;
L_00B6BABC:;
    v0 = func_00BBB8C0(a0);
    a0 = (*(volatile s32 *) (u32) s1);
    v1 = 51;
    (*(volatile u8 *) (u32) (a0 + 78)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B6BAA0;
L_00B6BADC:;
    a0 = 2; v0 = func_00BBB8C0(a0);
    v1 = 1;
    if (v0 == v1) goto L_00B6BAF8;
    if (v0 == 0) { s0 = 30; goto L_00B6BAFC; }
L_00B6BAF8:;
    s0 = 7;
L_00B6BAFC:;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = 709;
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 != v0) goto L_00B6BB18;
    s0 = 31;
L_00B6BB18:;
    a0 = s1;
    a1 = s0; v0 = func_00BA8B40(a0, a1);
    if (v0 == 0) { a0 = 15; goto L_00B6BB50; }
    v0 = (*(volatile s32 *) (u32) s1);
    (*(volatile u8 *) (u32) (v0 + 78)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) s0;
L_00B6BB3C:;
    v0 = (*(volatile s32 *) (u32) s1);
    (*(volatile u8 *) (u32) (v0 + 78)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) s0; goto L_00B6BAA0;
L_00B6BB50:;
    v0 = func_00BBB8C0(a0);
    a0 = (*(volatile s32 *) (u32) s1);
    v1 = 53;
    (*(volatile u8 *) (u32) (a0 + 78)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B6BB3C;
L_00B6BB70:;
    (*(volatile u8 *) (u32) (a1 + 78)) = (u8) 0;
    v1 = 29;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B6BAA0;
L_00B6BB84:;
    s0 = 49;
L_00B6BB88:;
    a0 = s1; goto L_00B6B97C;
L_00B6BB90:;
    s0 = 50; goto L_00B6B978;
L_00B6BB98:;
    v0 = func_00BBB8C0(a0);
    a0 = (*(volatile s32 *) (u32) s1);
    v1 = 51;
    (*(volatile u8 *) (u32) (a0 + 78)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B6BAA0;
L_00B6BBB8:;
    a0 = 3; v0 = func_00BBB8C0(a0);
    v1 = 2;
    if (v0 == v1) goto L_00B6BBE0;
    v1 = 1;
    if (v0 == v1) { a1 = 20; goto L_00B6BBE4; }
    if (v0 == 0) { a1 = 18; goto L_00B6BBE4; }
L_00B6BBE0:;
    a1 = 11;
L_00B6BBE4:;
    a0 = (*(volatile s32 *) (u32) s1);
    v0 = 709;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 != v0) goto L_00B6BC00;
    a1 = 19;
L_00B6BC00:;
    (*(volatile u8 *) (u32) (a0 + 78)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) a1; goto L_00B6BAA0;
L_00B6BC10:;
    (*(volatile u8 *) (u32) (a1 + 78)) = (u8) 0;
    v1 = 29;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B6BAA0;
L_00B6BC24:;
    a0 = 15; v0 = func_00BBB8C0(a0);
    v1 = (*(volatile s32 *) (u32) s1);
    s0 = 51;
    (*(volatile u8 *) (u32) (v1 + 78)) = (u8) v0; goto L_00B6BA7C;
L_00B6BC3C:;
    v0 = func_00BBB8C0(a0);
    a0 = (*(volatile s32 *) (u32) s1);
    v1 = 51;
    (*(volatile u8 *) (u32) (a0 + 78)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B6BAA0;
L_00B6BC5C:;
    a0 = 5; v0 = func_00BBB8C0(a0);
    v1 = 4;
    if (v0 == v1) goto L_00B6BC9C;
    v1 = 3;
    if (v0 == v1) { a0 = 6; goto L_00B6BCA0; }
    v1 = 2;
    if (v0 == v1) { a0 = 23; goto L_00B6BCA0; }
    v1 = 1;
    if (v0 == v1) { a0 = 5; goto L_00B6BCA0; }
    if (v0 == 0) { a0 = 9; goto L_00B6BCA0; }
L_00B6BC9C:;
    a0 = 28;
L_00B6BCA0:;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x448e0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 7772));
    f0.i = (s32) v1;
    f1.i = f1.i ^ (s32) 0x80000000U;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00B6BCEC;
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45320000U;
    v0 = v0 | 0x8000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00B6BCF0;
L_00B6BCEC:;
    a0 = 18;
L_00B6BCF0:;
    v0 = (*(volatile s32 *) (u32) s1);
    (*(volatile u8 *) (u32) (v0 + 78)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) a0; goto L_00B6BAA0;
L_00B6BD04:;
L_00B6BD08:;
    return v0;
}
