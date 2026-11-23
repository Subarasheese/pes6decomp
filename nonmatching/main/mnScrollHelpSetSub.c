/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B7920(void);
void func_002F50D0(s32, f32);
s32 func_002F5890(s32);

void mnScrollHelpSetSub(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };

    v0 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 18336));
    if (a0 != 0) goto L_001BA140;
    v0 = 1; goto L_001BA1F0;
L_001BA140:;
    v0 = (s32) 0x520000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 18345));
    if (v0 == 0) goto L_001BA158;
    v0 = 1; goto L_001BA1F0;
L_001BA158:;
    func_002F50D0(a0, f12.f);
    v0 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 18336)); v0 = func_002F5890(a0);
    v1 = 2;
    if (v0 != v1) { v1 = 4; goto L_001BA1BC; }
    v0 = (s32) 0x520000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 18346));
    if (v0 != 0) { v0 = 0; goto L_001BA1F0; }
    v0 = (s32) 0x520000U;
    v1 = (s32) 0x3a0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 18372));
    v1 = (s32) ((u32) v1 + 0xffff8490U);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    v1 = 1;
    v0 = (s32) 0x520000U;
    (*(volatile u8 *) (u32) (v0 + 18346)) = (u8) v1; goto L_001BA1EC;
L_001BA1BC:;
    if (v0 != v1) goto L_001BA1EC;
    v0 = (s32) 0x520000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 18346));
    if (v0 == 0) goto L_001BA1DC;
    func_001B7920();
L_001BA1DC:;
    v1 = (s32) 0x520000U;
    v0 = 1;
    (*(volatile u8 *) (u32) (v1 + 18346)) = (u8) 0; goto L_001BA1F0;
L_001BA1EC:;
    v0 = 0;
L_001BA1F0:;
    return;
}
