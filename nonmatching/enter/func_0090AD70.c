/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001BE450(void);
void func_00295930(void);
s64 func_0090A8A0(s64);

s64 func_0090AD70(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };

    v0 = (s32) 0x930000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -3852));
    if (v0 != 0) goto L_0090ADA8;
    v0 = func_001BE450();
    v1 = 1;
    if (v0 == v1) goto L_0090ADA8;
    v0 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -3852)) = (u8) v1;
L_0090ADA8:;
    v0 = (s32) 0x930000U;
    v1 = -1;
    v0 = (*(volatile s8 *) (u32) (v0 + -3860));
    if (v0 != v1) goto L_0090AE08;
    s0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_0090ADC0:;
    a0 = s0; v0 = func_0090A8A0(a0);
    if (v0 == 0) goto L_0090ADF0;
    v1 = s0 & 0xff;
    v0 = 1;
    a0 = (s32) ((u32) v0 << (v1 & 31));
    v0 = (s32) 0x930000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -3856));
    v0 = (s32) 0x930000U;
    v1 = v1 | a0;
    (*(volatile u32 *) (u32) (v0 + -3856)) = (u32) v1;
L_0090ADF0:;
    v0 = (s32) ((u32) s0 + 0x1U);
    s0 = v0 & 0xff;
    v0 = s0 < 23;
    if (v0 != 0) goto L_0090ADC0;
L_0090AE08:;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -4056));
    if (v1 == 0) goto L_0090AE2C;
    v0 = 30;
    if (v1 != v0) goto L_0090AE2C;
    func_00295930();
L_0090AE2C:;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile u16 *) (u32) (v0 + -3676));
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffff9060U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; a0 = 1; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 != v0) { ; goto L_0090AE7C; }
    v1 = (s32) 0x910000U;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + 0xffffabd0U);
    (*(volatile u32 *) (u32) (v0 + -3936)) = (u32) v1;
    v0 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -3932)) = (u8) 0;
L_0090AE7C:;
    v0 = 0;
    return v0;
}
