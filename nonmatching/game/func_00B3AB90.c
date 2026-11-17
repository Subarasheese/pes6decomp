/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009B3070(s64, s64);
s64 func_00B2A420(s64);
s64 func_00B3B3B0(s64, s64, s64, s64);
s64 func_00B3C060(s64);
s64 func_00BF6270(void);

s64 func_00B3AB90(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;

    s3 = a0;
    v0 = func_00BF6270();
    a0 = v0; v0 = func_00B2A420(a0);
    s0 = v0;
    v0 = (s32) 0xcc0000U;
    a1 = (*(volatile u8 *) (u32) (v0 + -12917));
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -12927));
    { s32 c_ = v0 != 0; a2 = (s64) ((u64) 0 + (u64) (s64) 1); if (c_) goto L_00B3ACA0; }
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 80));
    if (v0 != 0) { v0 = 0; goto L_00B3AE2C; }
    at = 0 < a1;
    { s32 c_ = at == 0; s2 = 0; if (c_) goto L_00B3AC98; }
    v0 = (s32) 0xcc0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -13534));
L_00B3ABF8:;
    v0 = a2 & 0xff;
    v0 = a0 & v0;
    if (v0 == 0) goto L_00B3AC18;
    v0 = (s32) ((u32) a2 << 1);
    a2 = v0 & 0xff; goto L_00B3AC84;
L_00B3AC18:;
    v0 = (s32) ((u32) a2 << 1);
    a2 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) (s3 + 4));
    v0 = (s32) ((u32) v0 + (u32) s2);
    v1 = (*(volatile s8 *) (u32) (v0 + 68));
    v0 = v1 & 0x10;
    if (v0 == 0) goto L_00B3AC84;
    v0 = v1 & 0x6;
    if (v0 == 0) goto L_00B3AC84;
    v0 = v1 & 0x80;
    if (v0 != 0) goto L_00B3ACA8;
    v0 = v1 & 0x40;
    if (v0 != 0) goto L_00B3ACD0;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    a1 = (*(volatile u8 *) (u32) (v0 + -12915));
    a0 = 125;
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v0 = 0;
    (*(volatile u8 *) (u32) (v1 + -12915)) = (u8) a1;
    v1 = (*(volatile s32 *) (u32) s3);
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0; goto L_00B3AE2C;
L_00B3AC84:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < a1;
    if (v0 != 0) goto L_00B3ABF8;
L_00B3AC98:;
    v0 = 0; goto L_00B3AE2C;
L_00B3ACA0:;
    v0 = 0; goto L_00B3AE2C;
L_00B3ACA8:;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    a1 = (*(volatile u8 *) (u32) (v0 + -12915));
    a0 = 125;
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v0 = 0;
    (*(volatile u8 *) (u32) (v1 + -12915)) = (u8) a1;
    v1 = (*(volatile s32 *) (u32) s3);
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0; goto L_00B3AE2C;
L_00B3ACD0:;
    v0 = func_00BF6270();
    a0 = v0; v0 = func_00B2A420(a0);
    s1 = v0;
    a0 = s1; v0 = func_00B3C060(a0);
    a0 = v0 & 0xff;
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v0 + -13615));
    v0 = 1;
    if (v1 == v0) goto L_00B3AD18;
    v0 = 3;
    if (v1 == v0) goto L_00B3AD18;
    a0 = s3; goto L_00B3AE14;
L_00B3AD18:;
    v0 = a0 & 0x18;
    if (v0 == 0) goto L_00B3AE10;
    v0 = (*(volatile s32 *) (u32) s1);
    a1 = (*(volatile u16 *) (u32) (v0 + 42));
    a0 = (*(volatile u16 *) (u32) (v0 + 40)); v0 = func_009B3070(a0, a1);
    a0 = v0 & 0xffff;
    v0 = (*(volatile s32 *) (u32) s3);
    f0.f = (*(volatile f32 *) (u32) (v0 + 224));
    f2.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46520000U;
    v1 = v0 | 0x6400;
    f1.i = (s32) v1;
    v0 = (s32) 0x44400000U;
    f0.i = (s32) v0;
    f1.f = f1.f - f2.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00B3AD74;
    v0 = 1; goto L_00B3ADC0;
L_00B3AD74:;
    if (a0 < 0) { v1 = (s32) ((u32) a0 >> 1); goto L_00B3AD88; }
    f0.i = (s32) a0;
    f1.f = (f32) f0.i; goto L_00B3ADA0;
L_00B3AD88:;
    v0 = a0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00B3ADA0:;
    v0 = (s32) 0x46630000U;
    v0 = v0 | 0x8e39;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00B3AE10;
    v0 = 1;
L_00B3ADC0:;
    if (v0 == 0) { a1 = (*(volatile s32 *) (u32) s0); goto L_00B3ADF0; }
    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    a1 = (*(volatile u8 *) (u32) (v0 + -12915));
    a0 = 125;
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v0 = 0;
    (*(volatile u8 *) (u32) (v1 + -12915)) = (u8) a1;
    v1 = (*(volatile s32 *) (u32) s3);
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0; goto L_00B3AE2C;
L_00B3ADF0:;
    a0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    v0 = 1;
    a1 = (*(volatile s32 *) (u32) (a1 + 4));
    a1 = (*(volatile u8 *) (u32) (a1 + 45));
    (*(volatile u8 *) (u32) (a0 + -12914)) = (u8) a1;
    (*(volatile u8 *) (u32) (v1 + -12916)) = (u8) s2; goto L_00B3AE2C;
L_00B3AE10:;
    a0 = s3;
L_00B3AE14:;
    v0 = func_00B3B3B0(a0, a1, a2, a3);
    if (v0 == 0) { v0 = 0; goto L_00B3ADC0; }
    v0 = 1; goto L_00B3ADC0;
L_00B3AE2C:;
    return v0;
}
