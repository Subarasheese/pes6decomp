/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002AE670(s32);
s32 func_009B3070(s32, s32);
s32 func_009B33A0(s32, s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
s32 func_00B95380(s32, s32, s32, s32, s32, s32, f32, f32);

s32 func_00B956F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0xcc0000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + -12829));
    { s32 c_ = a0 == v1; s5 = 0; if (c_) goto L_00B95744; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00B95748;
L_00B95744:;
    a0 = 1;
L_00B95748:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = (s32) 0x590000U;
    s1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    v1 = (*(volatile u8 *) (u32) (s1 + 19));
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    at = 0 < v0;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_00B95CD4; }
    at = v0 < 23;
    if (at == 0) goto L_00B95CD4;
    a1 = 1; goto L_00B95CD4;
L_00B95798:;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00B957B0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00B957B0:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00B95380(a0, a1, a2, a3, a4, a5, f12.f, f13.f);
    s2 = v0; goto L_00B957D8;
L_00B957D4:;
    s2 = v0 | 0xffff;
L_00B957D8:;
    v1 = (*(volatile u8 *) (u32) (s1 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e50U);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    at = 0 < v0;
    { s32 c_ = at == 0; a0 = 0; if (c_) goto L_00B95CE4; }
    at = v0 < 23;
    if (at == 0) goto L_00B95CE4;
    a0 = 1; goto L_00B95CE4;
L_00B95810:;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00B95828; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00B95828:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00B95380(a0, a1, a2, a3, a4, a5, f12.f, f13.f);
    s3 = v0; goto L_00B95850;
L_00B9584C:;
    s3 = v0 | 0xffff;
L_00B95850:;
    v1 = (*(volatile u8 *) (u32) (s1 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    v1 = v1 ^ 0x1;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    at = 0 < v0;
    { s32 c_ = at == 0; a0 = 0; if (c_) goto L_00B95CF4; }
    at = v0 < 23;
    if (at == 0) goto L_00B95CF4;
    a0 = 1; goto L_00B95CF4;
L_00B9588C:;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00B958A4; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00B958A4:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00B95380(a0, a1, a2, a3, a4, a5, f12.f, f13.f);
    s4 = v0; goto L_00B958CC;
L_00B958C8:;
    s4 = v0 | 0xffff;
L_00B958CC:;
    v1 = (*(volatile u8 *) (u32) (s1 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e50U);
    v1 = v1 ^ 0x1;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    at = 0 < v0;
    { s32 c_ = at == 0; a0 = 0; if (c_) goto L_00B95D04; }
    at = v0 < 23;
    if (at == 0) goto L_00B95D04;
    a0 = 1; goto L_00B95D04;
L_00B95908:;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00B95920; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00B95920:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00B95380(a0, a1, a2, a3, a4, a5, f12.f, f13.f);
    at = s2 < s3; goto L_00B9594C;
L_00B95944:;
    v0 = v0 | 0xffff;
    at = s2 < s3;
L_00B9594C:;
    if (at == 0) { s0 = s3; goto L_00B95958; }
    s0 = s2;
L_00B95958:;
    at = s4 < v0;
    if (at == 0) { s6 = v0; goto L_00B95968; }
    s6 = s4;
L_00B95968:;
    at = s2 < s3;
    if (at == 0) { v1 = (*(volatile u8 *) (u32) (s1 + 19)); goto L_00B95990; }
    v1 = (*(volatile u8 *) (u32) (s1 + 19));
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x1e4fU);
    a2 = (s32) ((u32) v1 << 1);
    a0 = (s32) ((u32) a0 + (u32) a2);
    a0 = (*(volatile u8 *) (u32) a0); goto L_00B959A4;
L_00B95990:;
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x1e50U);
    a2 = (s32) ((u32) v1 << 1);
    a0 = (s32) ((u32) a0 + (u32) a2);
    a0 = (*(volatile u8 *) (u32) a0);
L_00B959A4:;
    a1 = a0 & 0xff;
    a0 = 255;
    if (a1 == a0) { a2 = 1; goto L_00B959F4; }
    at = s2 < s3;
    if (at == 0) goto L_00B959D4;
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x1e4fU);
    a0 = (s32) ((u32) a0 + (u32) a2);
    a0 = (*(volatile u8 *) (u32) a0); goto L_00B959E4;
L_00B959D4:;
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x1e50U);
    a0 = (s32) ((u32) a0 + (u32) a2);
    a0 = (*(volatile u8 *) (u32) a0);
L_00B959E4:;
    a1 = a0 & 0xff;
    a0 = 23;
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) a0); hi = (s32) ((s32) a1 % (s32) a0); lo = q_; }
    a2 = hi;
L_00B959F4:;
    a1 = (s32) ((u32) a2 << 3);
    a0 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    a1 = (s32) ((u32) a1 << 6);
    at = s4 < v0;
    { s32 c_ = at == 0; s2 = (s32) ((u32) a0 + (u32) a1); if (c_) goto L_00B95A34; }
    a0 = v1 & 0xff;
    v1 = (s32) 0x590000U;
    a0 = a0 ^ 0x1;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    a1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile u8 *) (u32) v1); goto L_00B95A50;
L_00B95A34:;
    a0 = v1 & 0xff;
    v1 = (s32) 0x590000U;
    a0 = a0 ^ 0x1;
    v1 = (s32) ((u32) v1 + 0x1e50U);
    a1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile u8 *) (u32) v1);
L_00B95A50:;
    a0 = v1 & 0xff;
    v1 = 255;
    if (a0 == v1) { s3 = 1; goto L_00B95AA0; }
    at = s4 < v0;
    if (at == 0) goto L_00B95A80;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (*(volatile u8 *) (u32) v0); goto L_00B95A90;
L_00B95A80:;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e50U);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (*(volatile u8 *) (u32) v0);
L_00B95A90:;
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    s3 = hi;
L_00B95AA0:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (*(volatile f32 *) (u32) (v0 + 16));
    f0.f = (*(volatile f32 *) (u32) (v0 + 24));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s2; v0 = func_009B33A0(a0, a1, a2);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00B95AD8; }
    f0.i = (s32) v0;
    f21.f = (f32) f0.i; goto L_00B95AF0;
L_00B95AD8:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f21.f = (f32) f0.i;
    f21.f = f21.f + f21.f;
L_00B95AF0:;
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) ((u32) s3 << 3);
    v1 = (s32) ((u32) v0 + (u32) s3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    f1.f = (*(volatile f32 *) (u32) (a1 + 16));
    f0.f = (*(volatile f32 *) (u32) (a1 + 24));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_009B33A0(a0, a1, a2);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00B95B3C; }
    f0.i = (s32) v0;
    f20.f = (f32) f0.i; goto L_00B95B54;
L_00B95B3C:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f20.f = (f32) f0.i;
    f20.f = f20.f + f20.f;
L_00B95B54:;
    v1 = (*(volatile u8 *) (u32) (s1 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1efdU);
    v1 = v1 ^ 0x1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v1 << 1);
    a0 = (s32) ((u32) v0 + (u32) v1);
    at = a0 < 33;
    if (at == 0) goto L_00B95B94;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x26dcU);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0); goto L_00B95B9C;
L_00B95B94:;
    v0 = func_002AE670(a0);
L_00B95B9C:;
    v0 = (s32) ((u32) s6 + (u32) v0);
    v0 = s0 < v0;
    if (v0 != 0) { s5 = 1; goto L_00B95CCC; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    at = 0 < v0;
    { s32 c_ = at == 0; v1 = 0; if (c_) goto L_00B95BD0; }
    at = v0 < 23;
    if (at == 0) goto L_00B95BD0;
    v1 = 1;
L_00B95BD0:;
    if (v1 == 0) goto L_00B95C2C;
    v1 = v0 & 0xff;
    v0 = 255;
    { s32 c_ = v1 == v0; a1 = (*(volatile u8 *) (u32) (s1 + 19)); if (c_) goto L_00B95BFC; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00B95C00;
L_00B95BFC:;
    a0 = 1;
L_00B95C00:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5c3U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a1 != v0) goto L_00B95C2C;
    s5 = 1; goto L_00B95CCC;
L_00B95C2C:;
    v1 = (*(volatile u8 *) (u32) (s2 + 22));
    v0 = 20;
    if (v1 == v0) goto L_00B95CCC;
    v0 = 17;
    if (v1 == v0) goto L_00B95CCC;
    v0 = (s32) 0x45e10000U;
    v0 = v0 | 0xc800;
    f0.i = (s32) v0;
    fcc = f0.f < f21.f;
    if (!fcc) goto L_00B95CCC;
    v0 = (s32) 0x48800000U;
    f0.i = (s32) v0;
    fcc = f21.f < f0.f;
    if (!fcc) goto L_00B95CCC;
    v0 = (s32) 0x40000000U;
    f0.i = (s32) v0;
    f0.f = f0.f * f21.f;
    fcc = f0.f < f20.f;
    if (!fcc) goto L_00B95CCC;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f12.f = (*(volatile f32 *) (u32) (v0 + 16));
    f13.f = (*(volatile f32 *) (u32) (v0 + 24));
    a0 = s2; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a1 = (*(volatile u16 *) (u32) (s1 + 40));
    a0 = v0; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 8192;
    if (at == 0) goto L_00B95CCC;
    s5 = 1;
L_00B95CCC:;
    v0 = s5; goto L_00B95D14;
L_00B95CD4:;
    if (a1 == 0) { v0 = (s32) 0x3fff0000U; goto L_00B957D4; }
    v1 = v0 & 0xff; goto L_00B95798;
L_00B95CE4:;
    if (a0 == 0) { v0 = (s32) 0x3fff0000U; goto L_00B9584C; }
    v1 = v0 & 0xff; goto L_00B95810;
L_00B95CF4:;
    if (a0 == 0) { v0 = (s32) 0x3fff0000U; goto L_00B958C8; }
    v1 = v0 & 0xff; goto L_00B9588C;
L_00B95D04:;
    if (a0 == 0) { v0 = (s32) 0x3fff0000U; goto L_00B95944; }
    v1 = v0 & 0xff; goto L_00B95908;
L_00B95D14:;
    return v0;
}
