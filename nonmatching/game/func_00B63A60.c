/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001A58E0(s32, s32);
void func_001AB650(s32, s32, s32, s32, f32, f32);
void func_001AC470(s32, s32, s32, s32, s32, s32);
void func_001AC550(s32);
void func_001AFD70(s32);
void func_00207360(s32);
void func_00209A00(s32, s32, s32);
void func_002727C0(s32, s32, s32, s32);
void func_0027A600(s32, s32);
void func_0027A770(void);
void func_0027B200(s32, s32, s32);
void func_009832C0(s32, s32, s32, s32);
s32 func_009B34C0(s32, s32, s32, s32, f32, f32, f32, f32);
void func_009E1CB0(s32, s32, s32, s32);
void func_00B25C50(s32);
void func_00B27010(s32);

void func_00B63A60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -6732));
    s0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) v0);
    s0 = (s32) ((u32) s0 + 0xffffe5b0U); func_001AB650(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -6732));
    a0 = (*(volatile s32 *) (u32) v0); func_001AC550(a0);
    func_001AC470(a0, a1, a2, a3, a4, a5);
    v0 = (s32) 0x590000U;
    a1 = 1;
    v1 = (*(volatile s32 *) (u32) (v0 + -6732));
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 44)) = (u8) a1;
    v0 = (*(volatile s32 *) (u32) (v0 + -6732));
    a0 = (*(volatile s32 *) (u32) v0); func_001A58E0(a0, a1);
    v0 = (s32) 0x590000U;
    a1 = (s32) 0x460c0000U;
    a2 = (*(volatile s32 *) (u32) (v0 + -6732));
    a0 = (s32) 0xcc0000U;
    f0.i = (s32) 0;
    v1 = (s32) 0x590000U;
    a1 = a1 | 0x6400;
    (*(volatile u8 *) (u32) (a2 + 45)) = (u8) 0;
    v0 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (a0 + -11668));
    (*(volatile u32 *) (u32) (v0 + -6504)) = (u32) a1;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) (v1 + -6512)) = f1.f; if (c_) goto L_00B63BBC; }
L_00B63AF4:;
    f13.f = (*(volatile f32 *) (u32) (s0 + 232));
    f12.f = (*(volatile f32 *) (u32) (s0 + 224));
    f15.i = f13.i ^ (s32) 0x80000000U;
    f14.i = f12.i; v0 = func_009B34C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = 1;
    (*(volatile u16 *) (u32) (s0 + 40)) = (u16) v0;
    a1 = 1434;
    (*(volatile u16 *) (u32) (s0 + 38)) = (u16) v0;
    a2 = 0;
    (*(volatile u8 *) (u32) (s0 + 78)) = (u8) v1; func_00209A00(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 4)); func_00207360(a0);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) v0); func_001AFD70(a0);
    func_0027A770();
    a0 = s0;
    a1 = 0; func_0027A600(a0, a1);
    a0 = s0;
    a1 = 55; func_009832C0(a0, a1, a2, a3);
    v0 = 13;
    v1 = 71;
    (*(volatile u16 *) (u32) (s0 + 24)) = (u16) v0;
    a1 = 5;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) v1;
    a0 = (*(volatile s32 *) (u32) v0);
    a2 = 1; func_0027B200(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = 0;
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 16));
    v0 = (*(volatile s32 *) (u32) (v0 + 24));
    (*(volatile u32 *) (u32) (v0 + 56)) = (u32) 0; func_00B27010(a0);
    a0 = 0; func_00B25C50(a0);
    a0 = 29; func_002727C0(a0, a1, a2, a3);
    a0 = 3; func_009E1CB0(a0, a1, a2, a3);
    goto L_00B63BD8;
L_00B63BBC:;
    f0.f = (*(volatile f32 *) (u32) (s0 + 232));
    v0 = (s32) 0xbf800000U;
    f1.i = (s32) v0;
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) (s0 + 232)) = f0.f; goto L_00B63AF4;
L_00B63BD8:;
    return;
}
