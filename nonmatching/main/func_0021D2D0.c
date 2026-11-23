/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
s32 func_00115ED8(s32, s32, s32);

void func_0021D2D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x540000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -32248));
L_0021D2E4:;
    v0 = (s32) 0x3b0000U;
    a0 = (s32) 0x540000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0xffff91c0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; a0 = (s32) ((u32) a0 + 0xffff8200U); v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    v1 = -128;
    { s32 c_ = v0 == v1; a0 = 0; if (c_) goto L_0021D350; }
    v1 = -126;
    if (v0 == v1) goto L_0021D340;
    v1 = -127;
    if (v0 == v1) goto L_0021D338;
    if (v0 == 0) goto L_0021D380;
    s0 = (s32) ((u32) s0 + (u32) v0); goto L_0021D378;
L_0021D338:;
    s0 = (s32) ((u32) s0 + 0x1U); goto L_0021D380;
L_0021D340:;
    s0 = (s32) ((u32) s0 + 0x1U);
    a0 = 1; goto L_0021D380;
L_0021D350:;
    a1 = (s32) ((u32) sp + 0x2cU);
    a2 = (s32) ((u32) sp + 0x28U); v0 = func_00115ED8(a0, a1, a2);
    v0 = (s32) 0x540000U;
    v1 = (s32) 0x540000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -32256));
    (*(volatile u32 *) (u32) (v1 + -32252)) = (u32) 0; Pes6Heap_Free(a0);
    goto L_0021D394;
L_0021D378:;
    a0 = 1;
L_0021D380:;
    if (a0 != 0) goto L_0021D2E4;
    v1 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v1 + -32248)) = (u32) s0;
L_0021D394:;
    return;
}
