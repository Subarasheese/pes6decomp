/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001A4800(s32);
void func_00297390(s32, s32, s32, s32);
void func_002A7A30(s32, s32, s32, s32, f32);
void func_002A8830(s32);
void func_002A8940(s32, f32);
void func_002A8C00(f32);
void func_002A91F0(void);
void func_002A9200(void);
void func_002A9210(void);
void func_002A9470(s32);
s32 func_002A96B0(s32);
void func_002A96D0(s32, s32, s32, s32, f32);
void func_002ABF20(s32, s32);
void memset(s32, s32, s32);

void func_00BBC510(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };

    v0 = (s32) 0x5e0000U;
    v1 = 5;
    s2 = a0;
    s1 = a1;
    s0 = a2;
    a0 = (*(volatile u8 *) (u32) (v0 + 9392));
    f21.i = f12.i;
    { s32 c_ = a0 == v1; f20.i = f13.i; if (c_) goto L_00BBC588; }
    v0 = 4;
    if (a0 == v0) goto L_00BBC590;
    v0 = 3;
    if (a0 == v0) goto L_00BBC590;
    v0 = 2;
    if (a0 == v0) goto L_00BBC590;
    v0 = 1;
    if (a0 == v0) goto L_00BBC590;
    goto L_00BBC590;
L_00BBC588:;
    func_00297390(a0, a1, a2, a3);
L_00BBC590:;
    a0 = (s32) 0x5e0000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0x24b0U);
    a2 = 108; memset(a0, a1, a2);
    v0 = (s32) 0x5e0000U;
    v1 = 23;
    (*(volatile u32 *) (u32) (v0 + 9404)) = (u32) 0;
    a0 = 2;
    v0 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v0 + 9394)) = (u8) v1;
    v0 = (s32) 0x5e0000U;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v0 + 9393)) = (u8) s2;
    v0 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 9392)) = (u8) a0;
    (*(volatile f32 *) (u32) (v0 + 9432)) = f21.f;
    v1 = (s32) 0x5e0000U;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    { s32 c_ = v0 < 0; (*(volatile u8 *) (u32) (v1 + 9395)) = (u8) s0; if (c_) goto L_00BBC5F4; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_00BBC610;
L_00BBC5F4:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_00BBC610:;
    f0.f = f20.f * f0.f;
    v0 = (s32) 0x5e0000U;
    (*(volatile f32 *) (u32) (v0 + 9400)) = f0.f; func_002A96D0(a0, a1, a2, a3, f12.f);
    a0 = s2; func_002A9470(a0);
    a0 = s0 & 0xff; func_002A7A30(a0, a1, a2, a3, f12.f);
    f12.i = f21.i; func_002A8940(a0, f12.f);
    a0 = 1; func_002A8830(a0);
    v0 = (s32) 0x5e0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 9395)); v0 = func_002A96B0(a0);
    v0 = (*(volatile s32 *) (u32) (v0 + 12));
    v0 = v0 & 0x20;
    v0 = (u64) 0 < (u64) v0;
    if (v0 != 0) { a0 = 1; goto L_00BBC678; }
    a0 = 0; func_001A4800(a0);
    a0 = 3; func_002A8830(a0);
    v0 = (s32) 0x3f190000U; goto L_00BBC684;
L_00BBC678:;
    func_002A8830(a0);
    v0 = (s32) 0x3f190000U;
L_00BBC684:;
    v0 = v0 | 0x999a;
    f12.i = (s32) v0;
    func_002A8C00(f12.f);
    f12.i = (s32) 0;
    func_002A9210();
    v0 = (s32) 0x3e4c0000U;
    v0 = v0 | 0xcccd;
    f12.i = (s32) v0;
    func_002A9200();
    v0 = (s32) 0xbecc0000U;
    v0 = v0 | 0xcccd;
    f12.i = (s32) v0;
    func_002A91F0();
    a0 = s2;
    a1 = s1; func_002ABF20(a0, a1);
    return;
}
