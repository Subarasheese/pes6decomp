/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0027A510(s32);
s32 func_0027A530(s32);
s32 func_0027A540(s32);
s32 func_0027A5A0(s32);
s32 func_0027A5F0(s32);

void func_009B3E00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };

    v0 = (s32) 0x590000U;
    a2 = (s32) 0xcc0000U;
    a1 = (s32) 0xcc0000U;
    a0 = (s32) 0xcc0000U;
    s1 = (s32) 0x590000U;
    a4 = (*(volatile s32 *) (u32) (v0 + 7992));
    v1 = (s32) 0xcc0000U;
    a3 = (*(volatile s32 *) (u32) (gp + -32252));
    s1 = (s32) ((u32) s1 + 0xffffe5b0U);
    s2 = 0;
    (*(volatile u32 *) (u32) (a2 + -22000)) = (u32) a4;
    v0 = (s32) 0xcc0000U;
    a2 = (*(volatile s32 *) (u32) a3);
    f3.f = (*(volatile f32 *) (u32) (a2 + 64));
    f2.f = (*(volatile f32 *) (u32) (a2 + 68));
    f1.f = (*(volatile f32 *) (u32) (a2 + 72));
    f0.f = (*(volatile f32 *) (u32) (a2 + 76));
    (*(volatile f32 *) (u32) (a1 + -21968)) = f3.f;
    (*(volatile f32 *) (u32) (a0 + -21964)) = f2.f;
    (*(volatile f32 *) (u32) (v1 + -21960)) = f1.f;
    (*(volatile f32 *) (u32) (v0 + -21956)) = f0.f;
L_009B3E68:;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    a1 = s2 & 0xffff;
    a0 = (s32) ((u32) a1 << 1);
    v0 = (s32) 0xcc0000U;
    a1 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) ((u32) v0 + 0xffffaa00U);
    a1 = (s32) ((u32) a1 << 4);
    a0 = s1;
    a1 = (s32) ((u32) v0 + (u32) a1);
    s0 = (s32) ((u32) a1 + 0x40U);
    v0 = (*(volatile u16 *) (u32) (v1 + 48));
    (*(volatile u16 *) (u32) (a1 + 84)) = (u16) v0;
    v0 = (*(volatile u8 *) (u32) (v1 + 44));
    (*(volatile u8 *) (u32) (a1 + 86)) = (u8) v0;
    f0.f = (*(volatile f32 *) (u32) (v1 + 56));
    (*(volatile f32 *) (u32) (a1 + 92)) = f0.f;
    v0 = (*(volatile u8 *) (u32) (v1 + 45));
    (*(volatile u8 *) (u32) (a1 + 87)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (v1 + 77));
    (*(volatile u8 *) (u32) (a1 + 89)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (v1 + 91));
    (*(volatile u8 *) (u32) (a1 + 88)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    (*(volatile u8 *) (u32) (a1 + 104)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 32));
    (*(volatile u8 *) (u32) (a1 + 105)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 33));
    (*(volatile u8 *) (u32) (a1 + 106)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 34));
    (*(volatile u8 *) (u32) (a1 + 107)) = (u8) v0; v0 = func_0027A5F0(a0);
    (*(volatile u8 *) (u32) (s0 + 32)) = (u8) v0;
    a0 = s1; v0 = func_0027A5A0(a0);
    (*(volatile u8 *) (u32) (s0 + 33)) = (u8) v0;
    a0 = s1; v0 = func_0027A510(a0);
    (*(volatile u8 *) (u32) (s0 + 34)) = (u8) v0;
    a0 = s1; v0 = func_0027A540(a0);
    (*(volatile u16 *) (u32) (s0 + 36)) = (u16) v0;
    a0 = s1; v0 = func_0027A530(a0);
    v1 = (s32) ((u32) s2 + 0x1U);
    (*(volatile u16 *) (u32) (s0 + 38)) = (u16) v0;
    s2 = v1 & 0xffff;
    v1 = s2 < 23;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_009B3E68; }
    return;
}
