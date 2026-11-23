/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F2770(s32, f32);
void func_001F3D30(s32, s32);
void func_001F3D80(s32, s32, s32);
f32 func_002EF2A0(s32);
f32 func_002EF2C0(s32);
void func_002EF440(s32, s32, s32);
void func_002F1820(s32, f32, f32);

void func_002F6780(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (a0 + 12));
    f1.f = (*(volatile f32 *) (u32) (a0 + 8));
    f3.f = f2.f - f1.f;
    fcc = f0.f == f3.f;
    { s32 c_ = fcc; s2 = a0; if (c_) goto L_002F68D8; }
    v0 = (s32) 0xc0800000U;
    f0.i = (s32) v0;
    fcc = f0.f < f3.f;
    if (!fcc) { v0 = (s32) 0x40800000U; goto L_002F67F0; }
    v0 = (s32) 0x40800000U;
    f0.i = (s32) v0;
    fcc = f3.f < f0.f;
    if (!fcc) goto L_002F67EC;
    (*(volatile f32 *) (u32) (s2 + 8)) = f2.f; goto L_002F6808;
L_002F67EC:;
    v0 = (s32) 0x40800000U;
L_002F67F0:;
    f0.i = (s32) v0;
    f0.f = f3.f / f0.f;
    f1.f = (*(volatile f32 *) (u32) (s2 + 8));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (s2 + 8)) = f0.f;
L_002F6808:;
    a0 = (s32) ((u32) s2 + 0x10U);
    a1 = 1;
    a2 = (s32) ((u32) sp + 0x60U); func_002EF440(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s2 + 168));
    a1 = (s32) ((u32) sp + 0x50U); func_001F3D30(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (s2 + 8));
    a1 = (s32) ((u32) sp + 0x50U);
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s2 + 168));
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = (s32) ((u32) s2 + 0x10U); f0.f = func_002EF2A0(a0);
    f20.i = f0.i;
    a0 = (s32) ((u32) s2 + 0x10U); f0.f = func_002EF2C0(a0);
    f1.f = f20.f - f0.f;
    a0 = (*(volatile s32 *) (u32) (s2 + 180));
    f0.f = (*(volatile f32 *) (u32) (s2 + 8));
    f12.f = f0.f / f1.f;
    func_001F2770(a0, f12.f);
    a0 = (s32) ((u32) s2 + 0x10U); f0.f = func_002EF2C0(a0);
    v1 = (*(volatile s8 *) (u32) (s2 + 5));
    f20.i = f0.i;
    a0 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) a0 + (u32) s2);
    v1 = (*(volatile s32 *) (u32) (v1 + 188));
    { s32 c_ = v1 <= 0; s1 = 0; if (c_) goto L_002F68D8; }
    s0 = 0;
L_002F68A0:;
    f12.f = (*(volatile f32 *) (u32) (s2 + 8));
    v0 = (s32) ((u32) s2 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) (v0 + 184));
    f13.f = f12.f + f20.f;
    a0 = (s32) ((u32) v0 + (u32) s0); func_002F1820(a0, f12.f, f13.f);
    v1 = (*(volatile s8 *) (u32) (s2 + 5));
    s1 = (s32) ((u32) s1 + 0x1U);
    a0 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) s2 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (v1 + 188));
    v1 = s1 < v1;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x24U); if (c_) goto L_002F68A0; }
L_002F68D8:;
    return;
}
