/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00209A00(s32, s32, s32);
s32 func_009B33A0(s32, s32, s32);
s32 func_00B2A420(s32);
void func_00BD3BE0(s32, s32);
void func_00BD3CF0(s32, s32, s32, s32, f32, f32);
void func_00BD4040(s32, s32);
s32 func_00C354C0(void);
void func_00C354D0(s32);

void func_00C33750(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    s2 = a0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (*(volatile f32 *) (u32) (v0 + 16));
    f0.f = (*(volatile f32 *) (u32) (v0 + 24));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = (*(volatile s32 *) (u32) a0); v0 = func_009B33A0(a0, a1, a2);
    s0 = v0; v0 = func_00C354C0();
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) s2);
    f0.f = (*(volatile f32 *) (u32) (v1 + 16));
    (*(volatile f32 *) (u32) (v0 + 108)) = f0.f;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) s2);
    f0.f = (*(volatile f32 *) (u32) (v1 + 24));
    (*(volatile f32 *) (u32) (v0 + 112)) = f0.f;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v1 + 16));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00C33898;
    f0.f = (*(volatile f32 *) (u32) (v1 + 24));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00C33898;
    if (a0 != 0) { a0 = a0 & 0xff; goto L_00C338AC; }
    at = (s32) 0x40000U;
    at = (u64) s0 < (u64) at;
    if (at == 0) goto L_00C33868;
    f0.f = (*(volatile f32 *) (u32) (v1 + 20));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x42600000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00C33868;
    v1 = (*(volatile s32 *) (u32) s2);
    v0 = (*(volatile s32 *) (u32) (v1 + 4));
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 3));
    if (v0 == 0) { v0 = 241; goto L_00C33864; }
    v0 = 242;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) v0; goto L_00C33868;
L_00C33864:;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) v0;
L_00C33868:;
    s0 = 1;
L_00C3386C:;
    a0 = (*(volatile s32 *) (u32) s2);
    v0 = 242;
    v1 = (*(volatile u16 *) (u32) (a0 + 24));
    if (v1 != v0) { a1 = s0 & 0xff; goto L_00C33994; }
    a0 = (*(volatile s32 *) (u32) (a0 + 4));
    a1 = 1105;
    a2 = 0; func_00209A00(a0, a1, a2);
L_00C33890:;
    goto L_00C339B8;
L_00C33898:;
    v0 = (*(volatile s32 *) (u32) s2);
    v1 = 241;
    s0 = 1;
    (*(volatile u16 *) (u32) (v0 + 24)) = (u16) v1; goto L_00C3386C;
L_00C338AC:;
    v0 = func_00B2A420(a0);
    at = (s32) 0x90000U;
    at = (u64) s0 < (u64) at;
    { s32 c_ = at == 0; s1 = v0; if (c_) goto L_00C338E0; }
    a0 = (*(volatile s32 *) (u32) s1);
    v0 = 19;
    v1 = (*(volatile u16 *) (u32) (a0 + 24));
    if (v1 == v0) { f0.f = (*(volatile f32 *) (u32) (a0 + 108)); goto L_00C338E8; }
    s0 = 0; goto L_00C3386C;
L_00C338E0:;
    s0 = 1; goto L_00C3386C;
L_00C338E8:;
    v0 = (*(volatile s32 *) (u32) s2);
    (*(volatile f32 *) (u32) (v0 + 108)) = f0.f;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) s2);
    f0.f = (*(volatile f32 *) (u32) (v1 + 112));
    (*(volatile f32 *) (u32) (v0 + 112)) = f0.f;
    v1 = (*(volatile s32 *) (u32) s2);
    v0 = (*(volatile s32 *) (u32) (v1 + 4));
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 3));
    { s32 c_ = v0 == 0; s0 = 1; if (c_) goto L_00C3386C; }
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 3));
    if (v0 == 0) goto L_00C3386C;
    v0 = 242;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) v0;
    v0 = (*(volatile s32 *) (u32) s1);
    s3 = (*(volatile u8 *) (u32) v0); v0 = func_00C354C0();
    v0 = v0 & 0xff;
    if (s3 != v0) goto L_00C33958;
    a0 = 0; func_00C354D0(a0);
L_00C33958:;
    a0 = s1;
    a1 = 1; func_00BD4040(a0, a1);
    v0 = (*(volatile s32 *) (u32) s1);
    v1 = 1;
    a1 = 1166;
    (*(volatile u16 *) (u32) (v0 + 24)) = (u16) v1;
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = 0; func_00209A00(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s1);
    v1 = 1664;
    (*(volatile u32 *) (u32) (v0 + 28)) = (u32) v1; goto L_00C3386C;
L_00C33994:;
    a0 = s2; func_00BD3BE0(a0, a1);
    v0 = (*(volatile s32 *) (u32) s2);
    f12.f = (*(volatile f32 *) (u32) (v0 + 108));
    f13.f = (*(volatile f32 *) (u32) (v0 + 112));
    a0 = s2; func_00BD3CF0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00C33890;
L_00C339B8:;
    return;
}
