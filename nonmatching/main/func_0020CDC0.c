/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0020C6E0(s32, s32, s32, s32, s32, s32, s32);
void func_0020D170(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0020D2B0(void);
void func_002CB4D0(s32, s32, s32, s32);

void func_0020CDC0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    a0 = 20;
    func_002CB4D0(a0, a1, a2, a3);
    func_0020D2B0();
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 31468));
    if (v0 != 0) goto L_0020CE7C;
    v1 = (s32) 0x540000U;
    v0 = (s32) 0x540000U;
    v1 = (s32) ((u32) v1 + 0xffffc9d0U);
    v0 = (s32) ((u32) v0 + 0xffffc9feU);
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) v1;
    a0 = (s32) ((u32) sp + 0x40U);
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) v0;
    v1 = (s32) 0x540000U;
    v0 = (s32) 0x540000U;
    v1 = (s32) ((u32) v1 + 0xffffca2cU);
    v0 = (s32) ((u32) v0 + 0xffffca5aU);
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v0;
    v1 = (s32) 0x540000U;
    v0 = (s32) 0x540000U;
    v1 = (s32) ((u32) v1 + 0xffffca88U);
    v0 = (s32) ((u32) v0 + 0xffffcab6U);
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) v0;
    v1 = (s32) 0x540000U;
    v0 = (s32) 0x540000U;
    v1 = (s32) ((u32) v1 + 0xffffcae4U);
    v0 = (s32) ((u32) v0 + 0xffffcb12U);
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) v0;
    a1 = 8;
    a2 = 23;
    a3 = 0;
    a4 = 0;
    a5 = 0;
    a6 = 0; v0 = func_0020C6E0(a0, a1, a2, a3, a4, a5, a6);
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + 31468)) = (u32) v0;
L_0020CE7C:;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 31476));
    if (v0 != 0) goto L_0020CF34;
    s1 = (s32) 0x3d0000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0x4260U);
    s0 = (s32) ((u32) sp + 0x60U);
L_0020CE9C:;
    a0 = (*(volatile s32 *) (u32) (s1 + 4));
    v0 = (s32) 0xb0000U;
    v1 = v0 | 0x3f;
    if (a0 != v1) goto L_0020CEE8;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7114));
    if (v0 < 0) goto L_0020CEE0;
    at = v0 < 18;
    if (at == 0) goto L_0020CEE0;
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xffff8ee0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
L_0020CEE0:;
    a0 = v1;
L_0020CEE8:;
    v0 = (*(volatile s32 *) (u32) s1);
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 3;
    s1 = (s32) ((u32) s1 + 0x8U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_0020CE9C; }
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = 3;
    a2 = 23;
    a3 = 0;
    a4 = 0;
    a5 = 0;
    a6 = 0; v0 = func_0020C6E0(a0, a1, a2, a3, a4, a5, a6);
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + 31476)) = (u32) v0;
L_0020CF34:;
    func_0020D170(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 31472));
    if (v1 != 0) { ; goto L_0020CF90; }
    v0 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) v0 + 0x4278U);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; s0 = (s32) ((u32) sp + 0x6cU); v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    a0 = s0;
    a1 = 1;
    a2 = 23;
    a3 = 0;
    a4 = 0;
    a5 = 0;
    a6 = 0; v0 = func_0020C6E0(a0, a1, a2, a3, a4, a5, a6);
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + 31472)) = (u32) v0;
L_0020CF90:;
    return;
}
