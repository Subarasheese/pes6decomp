/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
void func_00285080(s32);

s32 func_00BEF540(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (s32) ((u32) a2 << 1);
    v0 = (s32) ((u32) v0 + (u32) a2);
    v0 = (s32) ((u32) v0 << 4);
    v0 = (s32) ((u32) a2 - (u32) v0);
    s4 = a0;
    s3 = a1;
    s2 = 0;
    s1 = 10240;
    s0 = (s32) ((u32) v0 << 2);
L_00BEF580:;
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.i = (s32) s0;
    v0 = (s32) 0xc1e00000U;
    a0 = -2048;
    f1.f = (f32) f0.i;
    v1 = 1;
    f2.f = (*(volatile f32 *) (u32) (a1 + 16));
    f0.i = (s32) v0;
    (*(volatile f32 *) (u32) (a1 + 5204)) = f2.f;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f2.f = (*(volatile f32 *) (u32) (v0 + 20));
    (*(volatile f32 *) (u32) (v0 + 5208)) = f2.f;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f2.f = (*(volatile f32 *) (u32) (v0 + 24));
    (*(volatile f32 *) (u32) (v0 + 5212)) = f2.f;
    a1 = (*(volatile u16 *) (u32) (s4 + 38));
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile u16 *) (u32) (v0 + 5200)) = (u16) a1;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile u16 *) (u32) (v0 + 5196)) = (u16) 0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile u32 *) (u32) (v0 + 5188)) = (u32) s1;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile f32 *) (u32) (v0 + 5192)) = f1.f;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile u32 *) (u32) (v0 + 5184)) = (u32) a0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile u8 *) (u32) (v0 + 5199)) = (u8) v1;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (*(volatile f32 *) (u32) (v0 + 5208));
    fcc = f0.f == f1.f;
    if (fcc) goto L_00BEF630;
L_00BEF608:;
    a0 = 1; func_00285080(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0xc1e00000U;
    f0.i = (s32) v0;
    f1.f = (*(volatile f32 *) (u32) (v1 + 5208));
    fcc = f0.f == f1.f;
    if (!fcc) goto L_00BEF608;
L_00BEF630:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9948));
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) (v1 + 5212));
    f1.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f2.f = (*(volatile f32 *) (u32) (v1 + 5204));
    f3.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = f1.f - f0.f;
    f2.f = f3.f - f2.f;
    acc = f0.f * f0.f;
    f12.f = acc + f2.f * f2.f; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    v0 = (s32) ((u32) s3 + 0xffffffc0U);
    v1 = f0.i;
    at = v1 < v0;
    if (at == 0) goto L_00BEF6C0;
    if (s2 != 0) goto L_00BEF6B0;
    v0 = (s32) ((u32) s3 - (u32) v1);
    { s32 c_ = v0 >= 0; v1 = (s32) v0 >> 6; if (c_) goto L_00BEF6A0; }
    v0 = (s32) ((u32) v0 + 0x3fU);
    v1 = (s32) v0 >> 6;
L_00BEF6A0:;
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 4);
    s1 = (s32) ((u32) s1 + (u32) v0);
L_00BEF6B0:;
    s1 = (s32) ((u32) s1 + 0x200U);
    v0 = s1 < 20480;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x1U); if (c_) goto L_00BEF580; }
L_00BEF6C0:;
    v0 = s1;
    return v0;
}
