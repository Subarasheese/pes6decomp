/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00AFBAB0(s32);

void func_00A15300(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };

    s1 = a0;
    s0 = a2;
    a0 = (*(volatile u8 *) (u32) a0);
    f22.i = f12.i;
    f21.i = f13.i;
    { s32 c_ = a0 == 0; f20.i = f14.i; if (c_) goto L_00A15434; }
    v0 = func_00AFBAB0(a0);
    v1 = (*(volatile u8 *) (u32) s1);
    a6 = v0 & 0xff;
    a4 = (s32) 0x590000U;
    a3 = (s32) 0x590000U;
    a5 = (*(volatile u8 *) (u32) (s1 + 18));
    a2 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    a4 = (s32) ((u32) a4 + 0x1f44U);
    a3 = (s32) ((u32) a3 + 0x1f54U);
    a2 = (s32) ((u32) a2 + 0x1f58U);
    a1 = (s32) ((u32) a1 + 0x1f5cU);
    a7 = (s32) ((u32) v1 - (u32) a6);
    a0 = (s32) ((u32) a0 + 0x1f62U);
    a6 = (s32) ((u32) a7 << 3);
    v1 = (s32) ((u32) a5 << 5);
    a7 = (s32) ((u32) a6 + (u32) a7);
    a6 = (s32) ((u32) v1 + (u32) a5);
    a5 = (s32) ((u32) a6 << 2);
    v1 = (s32) ((u32) a7 << 2);
    a5 = (s32) ((u32) a5 - (u32) a6);
    a5 = (s32) ((u32) a5 << 2);
    a4 = (s32) ((u32) a4 + (u32) a5);
    a4 = (s32) ((u32) v1 + (u32) a4);
    (*(volatile u8 *) (u32) a4) = (u8) 0;
    a5 = (*(volatile u8 *) (u32) (s1 + 18));
    a4 = (s32) ((u32) a5 << 5);
    a5 = (s32) ((u32) a4 + (u32) a5);
    a4 = (s32) ((u32) a5 << 2);
    a4 = (s32) ((u32) a4 - (u32) a5);
    a4 = (s32) ((u32) a4 << 2);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (s32) ((u32) v1 + (u32) a3);
    (*(volatile f32 *) (u32) a3) = f22.f;
    a4 = (*(volatile u8 *) (u32) (s1 + 18));
    a3 = (s32) ((u32) a4 << 5);
    a4 = (s32) ((u32) a3 + (u32) a4);
    a3 = (s32) ((u32) a4 << 2);
    a3 = (s32) ((u32) a3 - (u32) a4);
    a3 = (s32) ((u32) a3 << 2);
    a2 = (s32) ((u32) a2 + (u32) a3);
    a2 = (s32) ((u32) v1 + (u32) a2);
    (*(volatile f32 *) (u32) a2) = f21.f;
    a3 = (*(volatile u8 *) (u32) (s1 + 18));
    a2 = (s32) ((u32) a3 << 5);
    a3 = (s32) ((u32) a2 + (u32) a3);
    a2 = (s32) ((u32) a3 << 2);
    a2 = (s32) ((u32) a2 - (u32) a3);
    a2 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (s32) ((u32) v1 + (u32) a1);
    (*(volatile f32 *) (u32) a1) = f20.f;
    a2 = (*(volatile u8 *) (u32) (s1 + 18));
    a1 = (s32) ((u32) a2 << 5);
    a2 = (s32) ((u32) a1 + (u32) a2);
    a1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u16 *) (u32) v1) = (u16) s0;
L_00A15434:;
    return;
}
