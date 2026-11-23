/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002D5870(s32);
s32 func_002D58A0(s32);
void func_003604D0(s32);

s32 func_0035FA60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };

    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) gp + 0xffffac5cU);
    v0 = (s32) ((u32) v0 + 0x7f50U);
    a0 = (*(volatile s32 *) (u32) (gp + -21416));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    s0 = (*(volatile s32 *) (u32) (v1 + 16));
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; s1 = 0; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    v1 = 1;
    if (v0 != v1) { v0 = (u64) s0 < (u64) (s64) 7; goto L_0035FAB8; }
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = (u64) s0 < (u64) (s64) 7;
L_0035FAB8:;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -21416)); goto L_0035FAC8; }
    s1 = 1;
    v0 = (*(volatile s32 *) (u32) (gp + -21416));
L_0035FAC8:;
    v1 = (s32) ((u32) gp + 0xffffac5cU);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 16)) = (u32) s0;
    v0 = (*(volatile s32 *) (u32) (gp + -21416));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x8U); v0 = func_002D5870(a0);
    if (v0 == 0) { v0 = s1; goto L_0035FB24; }
    v1 = (*(volatile s32 *) (u32) (gp + -21416));
    v0 = (s32) ((u32) gp + 0xffffac5cU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x8U); v0 = func_002D58A0(a0);
    a0 = v0; func_003604D0(a0);
    v0 = s1;
L_0035FB24:;
    return v0;
}
