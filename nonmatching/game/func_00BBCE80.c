/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001A54F0(s32);
void func_001A5550(s32);
void func_001A55C0(s32);
void func_001A5620(s32);
f32 func_001A5660(void);
void func_001A5670(f32);
f32 func_001CD9E0(void);
void func_002A6B20(s32, s32, s32, s32, s32, f32, f32, f32);
void func_002A7D00(s32, s32, s32, s32, s32);
void func_002A9470(s32);
void func_002A9530(s32);
void func_002A9570(s32);
s32 func_009B33A0(s32, s32, s32);

s32 func_00BBCE80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13, f32 fa14) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    v0 = 255;
    s3 = a0;
    v1 = s3 & 0xff;
    s2 = a1;
    { s32 c_ = v1 == v0; s1 = a2; if (c_) goto L_00BBCECC; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    s4 = hi; goto L_00BBCED0;
L_00BBCECC:;
    s4 = 1;
L_00BBCED0:;
    a0 = (s32) ((u32) sp + 0x90U);
    s0 = 1; func_001A55C0(a0);
    a0 = (s32) ((u32) sp + 0x80U); func_001A54F0(a0);
    f0.f = func_001A5660();
    f20.i = f0.i;
    a0 = s3; func_002A9470(a0);
    a1 = s2 & 0xff;
    a0 = s0; func_002A7D00(a0, a1, a2, a3, a4);
    a0 = s1 & 0xff; func_002A9570(a0);
    func_002A6B20(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f);
    a0 = (s32) ((u32) sp + 0x70U); func_002A9530(a0);
    f1.f = (*(volatile f32 *) (u32) (sp + 112));
    v0 = (s32) ((u32) s4 << 3);
    f0.f = (*(volatile f32 *) (u32) (sp + 120));
    v0 = (s32) ((u32) v0 + (u32) s4);
    v1 = (s32) ((u32) v0 << 6);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_009B33A0(a0, a1, a2);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00BBCF64; }
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; goto L_00BBCF7C;
L_00BBCF64:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f12.f = (f32) f0.i;
    f12.f = f12.f + f12.f;
L_00BBCF7C:;
    f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    v0 = (s32) 0x44fa0000U;
    f1.f = (f32) f0.i;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00BBCFA8;
    s0 = 0;
L_00BBCFA8:;
    a0 = (s32) ((u32) sp + 0x90U); func_001A5620(a0);
    a0 = (s32) ((u32) sp + 0x80U); func_001A5550(a0);
    f12.i = f20.i; func_001A5670(f12.f);
    v0 = s0;
    return v0;
}
