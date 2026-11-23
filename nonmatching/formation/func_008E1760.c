/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001DF250(s32, s32);
s32 func_001F08B0(s32);
s32 func_008C13D0(s32, s32, s32);
s32 func_008C5010(void);
void func_008C57D0(s32, s32, s32, s32, f32);
void func_008C5D40(s32);
void func_008C5DF0(s32, s32, s32, s32, f32, f32);
void func_008E1340(s32, s32, s32, s32, f32);

void func_008E1760(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    s1 = a2;
    s0 = a3;
    a0 = 0;
    v1 = s3;
L_008E1790:;
    (*(volatile u32 *) (u32) (v1 + 36)) = (u32) 0;
    a0 = (s32) ((u32) a0 + 0x7U);
    (*(volatile u32 *) (u32) (v1 + 40)) = (u32) 0;
    v0 = a0 < 14;
    (*(volatile u32 *) (u32) (v1 + 44)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 48)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 52)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 56)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 60)) = (u32) 0;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x1cU); if (c_) goto L_008E1790; }
    v1 = 1;
    v0 = 11;
    (*(volatile u8 *) (u32) (s3 + 34)) = (u8) v1;
    a0 = s3;
    (*(volatile u8 *) (u32) (s3 + 32)) = (u8) v1;
    (*(volatile u8 *) (u32) (s3 + 33)) = (u8) v0;
    (*(volatile u32 *) (u32) (s3 + 92)) = (u32) 0;
    (*(volatile u32 *) (u32) (s3 + 96)) = (u32) 0;
    (*(volatile u32 *) (u32) (s3 + 100)) = (u32) 0; func_008C5D40(a0);
    v0 = 1;
    if (s2 == v0) { a0 = s3; goto L_008E1818; }
    if (s2 == 0) { a0 = s3; goto L_008E1800; }
    a1 = s2; goto L_008E184C;
L_008E1800:;
    a1 = 7;
    a2 = s0;
    a3 = s1; func_008C5DF0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_008E1848;
L_008E1818:;
    a1 = 12;
    a2 = s0;
    a3 = s1; func_008C5DF0(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (s32) 0x420000U;
    a0 = v0 | 0x1c; v0 = func_001F08B0(a0);
    a2 = v0;
    a0 = s3;
    a1 = s1;
    a3 = 0; func_008C57D0(a0, a1, a2, a3, f12.f);
L_008E1848:;
    a1 = s2;
L_008E184C:;
    a2 = s1;
    a3 = s0;
    a0 = s3; func_008E1340(a0, a1, a2, a3, f12.f);
    a0 = (*(volatile s32 *) (u32) (s3 + 96));
    if (a0 == 0) { ; goto L_008E1998; }
    v1 = (*(volatile s32 *) (u32) (s3 + 100));
    if (v1 != 0) goto L_008E1994;
    a1 = 107;
    a2 = 0; v0 = func_008C13D0(a0, a1, a2);
    (*(volatile u32 *) (u32) (s3 + 100)) = (u32) v0; v0 = func_008C5010();
    s0 = v0;
    v0 = (*(volatile s32 *) (u32) (s3 + 100));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = s0; func_001DF250(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 96));
    a1 = (s32) ((u32) sp + 0x50U);
    a2 = 185; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 92));
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_008E18D8; }
    f0.i = (s32) f1.f;
    v1 = f0.i;
    v1 = v1 & 0xff; goto L_008E18F0;
L_008E18D8:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xff;
L_008E18F0:;
    (*(volatile u8 *) (u32) (s3 + 33)) = (u8) v1;
    a1 = (s32) ((u32) sp + 0x50U);
    a0 = (*(volatile s32 *) (u32) (s3 + 96));
    a2 = 186; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
    v1 = (s32) 0x41500000U;
    f0.i = (s32) v1;
    v1 = (*(volatile u8 *) (u32) (s3 + 33));
    { s32 c_ = v1 < 0; f1.f = f0.f + f1.f; if (c_) goto L_008E1928; }
    f0.i = (s32) v1;
    f0.f = (f32) f0.i; goto L_008E1944;
L_008E1928:;
    a0 = (s32) ((u32) v1 >> 1);
    v1 = v1 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_008E1944:;
    f1.f = f0.f / f1.f;
    v1 = (s32) 0x4f000000U;
    f0.i = (s32) v1;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_008E1978; }
    f0.i = (s32) f1.f;
    a0 = f0.i;
    a0 = a0 & 0xff; goto L_008E1990;
L_008E1978:;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    a0 = a0 | v1;
    a0 = a0 & 0xff;
L_008E1990:;
    (*(volatile u8 *) (u32) (s3 + 33)) = (u8) a0;
L_008E1994:;
L_008E1998:;
    return;
}
