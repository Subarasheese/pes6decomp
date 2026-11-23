/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_0011D468(f32);
void func_001EEDA0(s32, s32);

void func_00629720(s32 a0, s32 a1, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (s32) 0x3dc90000U;
    v0 = v0 | 0xfdb;
    f1.f = (*(volatile f32 *) (u32) (gp + -21072));
    f0.i = (s32) v0;
    s1 = a0;
    s0 = a1;
    f12.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (gp + -21072)) = f12.f; f0.f = func_0011D468(f12.f);
    a0 = (s32) 0x42cc0000U;
    v1 = (s32) 0x43190000U;
    a1 = a0 | 0xcccd;
    a0 = v1 | 0x999a;
    f3.i = (s32) a0;
    v1 = (s32) 0x4f000000U;
    f2.i = (s32) 0;
    f4.i = (s32) a1;
    acc = f2.f + f3.f;
    f1.i = (s32) v1;
    f0.f = acc + f4.f * f0.f;
    fcc = f1.f <= f0.f;
    if (fcc) { f0.f = f0.f - f1.f; goto L_006297A0; }
    f0.i = (s32) f0.f;
    a0 = f0.i;
    a0 = a0 & 0xff; goto L_006297B8;
L_006297A0:;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    a0 = a0 | v1;
    a0 = a0 & 0xff;
L_006297B8:;
    v1 = 2;
    { s32 c_ = s0 == v1; a1 = a0 & 0xff; if (c_) goto L_00629818; }
    v1 = 1;
    if (s0 == v1) { a0 = (*(volatile s32 *) (u32) (s1 + 360)); goto L_006297FC; }
    if (s0 == 0) { a0 = (*(volatile s32 *) (u32) (s1 + 356)); goto L_006297E0; }
    goto L_00629834;
L_006297E0:;
    func_001EEDA0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s1 + 360));
    a1 = 128; func_001EEDA0(a0, a1);
    goto L_00629830;
L_006297FC:;
    func_001EEDA0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s1 + 356));
    a1 = 128; func_001EEDA0(a0, a1);
    goto L_00629830;
L_00629818:;
    a0 = (*(volatile s32 *) (u32) (s1 + 360));
    a1 = 128; func_001EEDA0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s1 + 356));
    a1 = 128; func_001EEDA0(a0, a1);
L_00629830:;
L_00629834:;
    return;
}
