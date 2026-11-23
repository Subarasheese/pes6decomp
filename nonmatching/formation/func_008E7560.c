/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008E7350(s32, s32, s32, s32, f32);
void memset(s32, s32, s32);

s32 func_008E7560(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    { s32 c_ = s1 != 0; s0 = a1; if (c_) goto L_008E7584; }
    v0 = 0; goto L_008E760C;
L_008E7584:;
    (*(volatile u8 *) (u32) (s1 + 4)) = (u8) s0;
    v0 = (*(volatile s32 *) (u32) (s1 + 60));
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0x30U); goto L_008E759C; }
    v0 = 0; goto L_008E760C;
L_008E759C:;
    a1 = 0;
    a2 = 108; memset(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s1 + 64));
    a1 = s0;
    v0 = (*(volatile s32 *) (u32) (s1 + 60));
    { u32 t_ = (u32) v0; a2 = (s32) ((u32) sp + 0x30U); v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    v0 = (*(volatile u8 *) (u32) (sp + 137));
    if (v0 != 0) goto L_008E75F8;
    a1 = 0;
    a0 = (s32) ((u32) sp + 0x30U);
    v1 = 1;
L_008E75D4:;
    (*(volatile u8 *) (u32) (a0 + 90)) = (u8) v1;
    a1 = (s32) ((u32) a1 + 0x5U);
    (*(volatile u8 *) (u32) (a0 + 91)) = (u8) v1;
    v0 = a1 < 10;
    (*(volatile u8 *) (u32) (a0 + 92)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 93)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 94)) = (u8) v1;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x5U); if (c_) goto L_008E75D4; }
L_008E75F8:;
    a2 = s0 & 0xff;
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x30U); func_008E7350(a0, a1, a2, a3, f12.f);
    v0 = 1;
L_008E760C:;
    return v0;
}
