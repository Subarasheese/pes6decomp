/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001A54F0(s32);
void func_001A5550(s32);
void func_001A55C0(s32);
void func_001A5620(s32);
f32 func_001A5660(void);
void func_001A5670(f32);
void func_00297390(s32, s32, s32, s32);
void func_002A96D0(s32, s32, s32, s32, f32);
void memset(s32, s32, s32);

void func_00BBC700(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s0 = a2;
    f5.f = (*(volatile f32 *) (u32) a0);
    f4.f = (*(volatile f32 *) (u32) (a0 + 4));
    f3.f = (*(volatile f32 *) (u32) (a0 + 8));
    f2.f = (*(volatile f32 *) (u32) a1);
    f1.f = (*(volatile f32 *) (u32) (a1 + 4));
    f0.f = (*(volatile f32 *) (u32) (a1 + 8));
    f20.i = f12.i;
    (*(volatile f32 *) (u32) (sp + 96)) = f5.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f4.f;
    a0 = (s32) ((u32) sp + 0x40U);
    (*(volatile f32 *) (u32) (sp + 104)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 80)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 88)) = f0.f; func_001A55C0(a0);
    a0 = (s32) ((u32) sp + 0x30U); func_001A54F0(a0);
    f0.f = func_001A5660();
    v0 = (s32) 0x5e0000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 9392));
    v0 = 5;
    { s32 c_ = v1 == v0; f21.i = f0.i; if (c_) goto L_00BBC7B0; }
    v0 = 4;
    if (v1 == v0) goto L_00BBC7B8;
    v0 = 3;
    if (v1 == v0) goto L_00BBC7B8;
    v0 = 2;
    if (v1 == v0) goto L_00BBC7B8;
    v0 = 1;
    if (v1 == v0) goto L_00BBC7B8;
    goto L_00BBC7B8;
L_00BBC7B0:;
    func_00297390(a0, a1, a2, a3);
L_00BBC7B8:;
    a0 = (s32) 0x5e0000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0x24b0U);
    a2 = 108; memset(a0, a1, a2);
    v0 = (s32) 0x5e0000U;
    v1 = 23;
    (*(volatile u32 *) (u32) (v0 + 9404)) = (u32) 0;
    v0 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v0 + 9394)) = (u8) v1;
    v0 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v0 + 9393)) = (u8) v1;
    v1 = 43;
    v0 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v0 + 9395)) = (u8) v1; func_002A96D0(a0, a1, a2, a3, f12.f);
    a0 = (s32) ((u32) sp + 0x40U); func_001A5620(a0);
    a0 = (s32) ((u32) sp + 0x30U); func_001A5550(a0);
    f12.i = f21.i; func_001A5670(f12.f);
    f0.i = (s32) s0;
    a0 = 1;
    f6.f = (*(volatile f32 *) (u32) (sp + 96));
    v1 = (s32) 0x5e0000U;
    f5.f = (*(volatile f32 *) (u32) (sp + 100));
    (*(volatile u8 *) (u32) (v1 + 9392)) = (u8) a0;
    f4.f = (*(volatile f32 *) (u32) (sp + 104));
    a1 = (s32) 0x5e0000U;
    f0.f = (f32) f0.i;
    a0 = (s32) 0x5e0000U;
    v1 = (s32) 0x5e0000U;
    a3 = (s32) 0x5e0000U;
    a2 = (s32) 0x5e0000U;
    f3.f = (*(volatile f32 *) (u32) (sp + 80));
    f2.f = (*(volatile f32 *) (u32) (sp + 84));
    (*(volatile f32 *) (u32) (a1 + 9408)) = f6.f;
    (*(volatile f32 *) (u32) (a0 + 9412)) = f5.f;
    a1 = (s32) 0x5e0000U;
    f1.f = (*(volatile f32 *) (u32) (sp + 88));
    a0 = (s32) 0x5e0000U;
    (*(volatile f32 *) (u32) (v1 + 9416)) = f4.f;
    v1 = (s32) 0x5e0000U;
    (*(volatile f32 *) (u32) (a3 + 9420)) = f3.f;
    (*(volatile f32 *) (u32) (a2 + 9424)) = f2.f;
    (*(volatile f32 *) (u32) (a0 + 9432)) = f20.f;
    (*(volatile f32 *) (u32) (a1 + 9428)) = f1.f;
    (*(volatile f32 *) (u32) (v1 + 9400)) = f0.f;
    return;
}
