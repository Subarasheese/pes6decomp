/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0025EC20(s32);
void memcpy(s32, s32, s32);

void func_002619F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };

    v1 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -11356));
    if (v1 == 0) goto L_00261A78;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (a0 + -11332));
    v1 = (*(volatile u8 *) (u32) (v1 + -11331));
    if (a0 == v1) goto L_00261A78;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -11344));
    v0 = (s32) 0x590000U;
    a2 = (*(volatile s32 *) (u32) (v0 + -11336));
    a1 = (*(volatile s32 *) (u32) (v1 + -11352)); memcpy(a0, a1, a2);
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x3b0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -11332));
    v1 = (s32) ((u32) v1 + 0xffffb010U);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    a0 = 1; func_0025EC20(a0);
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (a0 + -11332));
    (*(volatile u8 *) (u32) (v1 + -11331)) = (u8) a0;
L_00261A78:;
    return;
}
