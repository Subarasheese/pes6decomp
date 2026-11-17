/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00295C90(s32, s32, s32, s32, s32);
void func_00295DE0(void);
void func_00297390(s32, s32, s32, s32);
void func_002A11B0(s32, s32);
void func_002A6B20(s32, s32, s32, s32, s32, f32, f32, f32);
void func_002A7A30(s32, s32, s32, s32, f32);
void func_002A8830(s32);
void func_002A8940(s32, f32);
void func_002A9470(s32);
void func_002A96D0(s32, s32, s32, s32, f32);
void memset(s32, s32, s32);

void func_00BBBD40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13, f32 fa14) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    a0 = (s32) ((u32) sp + 0x40U);
    f20.i = f12.i;
    a1 = s1; func_002A11B0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (sp + 72));
    f1.i = (s32) 0;
    fcc = f0.f < f1.f;
    if (!fcc) { s0 = 26; goto L_00BBBD94; }
    f0.f = (*(volatile f32 *) (u32) (sp + 64));
    fcc = f0.f < f1.f;
    if (!fcc) { s0 = 3; goto L_00BBBD94; }
    s0 = 2;
L_00BBBD94:;
    v0 = (s32) 0x5e0000U;
    v1 = 5;
    a0 = (*(volatile u8 *) (u32) (v0 + 9392));
    if (a0 == v1) goto L_00BBBDE0;
    v0 = 4;
    if (a0 == v0) goto L_00BBBDE8;
    v0 = 3;
    if (a0 == v0) goto L_00BBBDE8;
    v0 = 2;
    if (a0 == v0) goto L_00BBBDE8;
    v0 = 1;
    if (a0 == v0) goto L_00BBBDE8;
    goto L_00BBBDE8;
L_00BBBDE0:;
    func_00297390(a0, a1, a2, a3);
L_00BBBDE8:;
    a0 = (s32) 0x5e0000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0x24b0U);
    a2 = 108; memset(a0, a1, a2);
    v0 = (s32) 0x5e0000U;
    v1 = 23;
    (*(volatile u32 *) (u32) (v0 + 9404)) = (u32) 0;
    a0 = 5;
    v0 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v0 + 9394)) = (u8) v1;
    v0 = (s32) 0x5e0000U;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v0 + 9392)) = (u8) a0;
    v0 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 9393)) = (u8) s1;
    (*(volatile u8 *) (u32) (v0 + 9395)) = (u8) s0;
    v1 = (s32) 0x468c0000U;
    v0 = (s32) 0x590000U;
    a0 = v1 | 0xa000;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    v1 = (s32) 0x5e0000U;
    { s32 c_ = v0 < 0; (*(volatile u32 *) (u32) (v1 + 9432)) = (u32) a0; if (c_) goto L_00BBBE54; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_00BBBE70;
L_00BBBE54:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_00BBBE70:;
    f0.f = f0.f * f20.f;
    v0 = (s32) 0x5e0000U;
    (*(volatile f32 *) (u32) (v0 + 9400)) = f0.f; func_002A96D0(a0, a1, a2, a3, f12.f);
    a0 = s1; func_002A9470(a0);
    a0 = s0 & 0xff; func_002A7A30(a0, a1, a2, a3, f12.f);
    v0 = (s32) 0x468c0000U;
    v0 = v0 | 0xa000;
    f12.i = (s32) v0;
    func_002A8940(a0, f12.f);
    a0 = 1; func_002A8830(a0);
    func_002A6B20(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f);
    func_00295C90(a0, a1, a2, a3, a4);
    func_00295DE0();
    return;
}
