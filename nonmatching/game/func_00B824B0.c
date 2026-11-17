/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00BF9A50(s32, s32, s32, s32);

void func_00B824B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };

    v0 = (s32) 0xca0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -22768));
    if (v0 == 0) goto L_00B824E8;
L_00B824C8:;
    v0 = (s32) 0xca0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -22768));
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    func_00BF9A50(a0, a1, a2, a3);
    goto L_00B824FC;
L_00B824E8:;
    v1 = (s32) 0xb80000U;
    v0 = (s32) 0xca0000U;
    v1 = (s32) ((u32) v1 + 0x6d0U);
    (*(volatile u32 *) (u32) (v0 + -22768)) = (u32) v1; goto L_00B824C8;
L_00B824FC:;
    return;
}
