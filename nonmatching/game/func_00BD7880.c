/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B3070(s32, s32);
s32 func_009B33A0(s32, s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
s32 func_00B2A420(s32);
void func_00B35E10(s32, s32, s32);
s32 func_00BA8740(s32);
s32 func_00BA8B40(s32, s32);
void func_00BBA080(s32, s32, s32, s32);
s32 func_00BBB8C0(s32);
s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);
s32 func_00BC2B50(s32, s32, s32);
void func_00BD8510(s32, s32, s32, f32, f32, f32, f32);
s32 func_00BD92F0(s32);
s32 func_00BD93C0(s32);
s32 func_00BF6270(void);

void func_00BD7880(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };

    s2 = a0;
    v0 = func_00BF6270();
    a0 = v0; v0 = func_00B2A420(a0);
    s0 = v0;
    a0 = s2; v0 = func_00BD92F0(a0);
    if (v0 != 0) { a1 = (*(volatile s32 *) (u32) s2); goto L_00BD7AB0; }
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 1;
    a2 = 0; v0 = func_00BC2B50(a0, a1, a2);
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) s0); goto L_00BD7AD4; }
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
L_00BD78D4:;
    v0 = 9;
    v1 = (*(volatile u16 *) (u32) (v1 + 132));
    if (v1 == v0) goto L_00BD795C;
    v0 = (s32) 0xcc0000U;
    v1 = 21;
    v0 = (*(volatile u8 *) (u32) (v0 + -13615));
    if (v0 == v1) goto L_00BD795C;
    a0 = 42; v0 = func_00BA8740(a0);
    if (v0 > 0) goto L_00BD795C;
    v0 = (*(volatile s32 *) (u32) s2);
    a0 = (*(volatile u16 *) (u32) (v0 + 38));
    a1 = 16384; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 16384;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) s2); goto L_00BD7938; }
    v0 = (*(volatile s32 *) (u32) s2);
    v1 = 16384;
    (*(volatile u16 *) (u32) (v0 + 44)) = (u16) v1; goto L_00BD7940;
L_00BD7938:;
    v1 = 0xc000;
    (*(volatile u16 *) (u32) (v0 + 44)) = (u16) v1;
L_00BD7940:;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    v1 = 42;
    a0 = s2;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; func_00BBA080(a0, a1, a2, a3);
    goto L_00BD7C28;
L_00BD795C:;
    v0 = (*(volatile s32 *) (u32) s2);
    s0 = (s32) ((u32) v0 + 0x70U);
    s1 = (s32) ((u32) v0 + 0x6cU); v0 = func_00BF6270();
    a0 = v0; v0 = func_00B2A420(a0);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9072));
    if (v0 == 0) { a0 = s2; goto L_00BD7AF0; }
    v0 = (s32) 0x46080000U;
    (*(volatile u32 *) (u32) s1) = (u32) 0;
    v0 = v0 | 0x6400;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
L_00BD7994:;
    a0 = (*(volatile s32 *) (u32) s2);
    f13.f = (*(volatile f32 *) (u32) (a0 + 112));
    f12.f = (*(volatile f32 *) (u32) (a0 + 108)); v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) s2);
    a0 = s2;
    (*(volatile u16 *) (u32) (v1 + 44)) = (u16) v0; v0 = func_00BD93C0(a0);
    if (v0 == 0) { a0 = 3; goto L_00BD7A28; }
    a0 = 4; v0 = func_00BBB8C0(a0);
    v1 = 3;
    if (v0 == v1) goto L_00BD7A18;
    v1 = 2;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) (s2 + 4)); goto L_00BD7A0C; }
    v1 = 1;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) (s2 + 4)); goto L_00BD7A04; }
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s2 + 4)); goto L_00BD79F8; }
    v0 = (*(volatile s32 *) (u32) (s2 + 4)); goto L_00BD7A1C;
L_00BD79F8:;
    v1 = 5;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00BD7A7C;
L_00BD7A04:;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) 0; goto L_00BD7A7C;
L_00BD7A0C:;
    v1 = 15;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00BD7A7C;
L_00BD7A18:;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
L_00BD7A1C:;
    v1 = 14;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00BD7A7C;
L_00BD7A28:;
    v0 = func_00BBB8C0(a0);
    v1 = 2;
    if (v0 == v1) goto L_00BD7A70;
    v1 = 1;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) (s2 + 4)); goto L_00BD7A64; }
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s2 + 4)); goto L_00BD7A58; }
    v0 = (*(volatile s32 *) (u32) (s2 + 4)); goto L_00BD7A74;
L_00BD7A58:;
    v1 = 30;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00BD7A7C;
L_00BD7A64:;
    v1 = 31;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00BD7A7C;
L_00BD7A70:;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
L_00BD7A74:;
    v1 = 14;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1;
L_00BD7A7C:;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    a0 = (*(volatile u8 *) (u32) (v0 + 76)); v0 = func_00BA8740(a0);
    at = v0 < 2;
    if (at != 0) { v0 = (*(volatile s32 *) (u32) (s2 + 4)); goto L_00BD7C08; }
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
L_00BD7A98:;
    v1 = 43;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1;
L_00BD7AA0:;
    a0 = s2; func_00BBA080(a0, a1, a2, a3);
    goto L_00BD7C24;
L_00BD7AB0:;
    v1 = 43;
    a0 = s2;
    v0 = (*(volatile u16 *) (u32) (a1 + 38));
    (*(volatile u16 *) (u32) (a1 + 44)) = (u16) v0;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; func_00BBA080(a0, a1, a2, a3);
    goto L_00BD7C24;
L_00BD7AD4:;
    a1 = 1;
    a2 = a1; v0 = func_00BC2B50(a0, a1, a2);
    if (v0 == 0) goto L_00BD795C;
    v1 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00BD78D4;
L_00BD7AF0:;
    a1 = s1;
    a2 = s0; func_00B35E10(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 16));
    if (v0 == 0) goto L_00BD7B1C;
    a1 = s1;
    a2 = s0;
    a0 = s2; func_00BD8510(a0, a1, a2, f12.f, f13.f, f14.f, f15.f);
L_00BD7B1C:;
    a0 = 1; v0 = func_00B2A420(a0);
    s1 = v0;
    s0 = 0;
L_00BD7B2C:;
    if (s2 == s1) goto L_00BD7BF0;
    v0 = (*(volatile s32 *) (u32) s2);
    f1.f = (*(volatile f32 *) (u32) (v0 + 108));
    f0.f = (*(volatile f32 *) (u32) (v0 + 112));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = (*(volatile s32 *) (u32) s1); v0 = func_009B33A0(a0, a1, a2);
    at = (s32) 0x20000U;
    at = at | 0x4001;
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_00BD7BF0;
    v0 = 0;
L_00BD7B70:;
    if (v0 != 0) goto L_00BD7994;
    a0 = (*(volatile s32 *) (u32) s2);
    f13.f = (*(volatile f32 *) (u32) (a0 + 112));
    f12.f = (*(volatile f32 *) (u32) (a0 + 108)); v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    v0 = v0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0x4000U);
    { s32 c_ = v0 >= 0; s0 = v0 & 0xffff; if (c_) goto L_00BD7BA4; }
    if (s0 == 0) goto L_00BD7BA4;
    s0 = (s32) ((u32) s0 + 0x0U);
L_00BD7BA4:;
    a0 = s0 & 0xffff;
    a1 = 1280; v0 = func_00BBB990(a0, a1);
    f0.i = (s32) v0;
    v1 = (*(volatile s32 *) (u32) s2);
    a0 = s0 & 0xffff;
    a1 = 1280;
    f1.f = (f32) f0.i;
    f0.f = (*(volatile f32 *) (u32) (v1 + 108));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (v1 + 108)) = f0.f; v0 = func_00BBB9C0(a0, a1);
    f0.i = (s32) v0;
    v0 = (*(volatile s32 *) (u32) s2);
    f1.f = (f32) f0.i;
    f0.f = (*(volatile f32 *) (u32) (v0 + 112));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (v0 + 112)) = f0.f; goto L_00BD7994;
L_00BD7BF0:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 22;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x8U); if (c_) goto L_00BD7B2C; }
    v0 = 1; goto L_00BD7B70;
L_00BD7C08:;
    a1 = (*(volatile u8 *) (u32) (v0 + 76));
    a0 = s2; v0 = func_00BA8B40(a0, a1);
    if (v0 != 0) goto L_00BD7AA0;
    v0 = (*(volatile s32 *) (u32) (s2 + 4)); goto L_00BD7A98;
L_00BD7C24:;
L_00BD7C28:;
    return;
}
