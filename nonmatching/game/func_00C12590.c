/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C12590(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };

    a1 = 0;
    s1 = a0;
    s0 = (s32) 0xcc0000U;
    { s32 c_ = s1 == 0; s0 = (s32) ((u32) s0 + 0xffffded0U); if (c_) goto L_00C12610; }
    a0 = (*(volatile s32 *) (u32) s1);
    if (a0 == 0) goto L_00C125D8;
    v1 = 1;
    if (a0 == v1) goto L_00C125D8;
    v1 = 4;
    if (a0 != v1) goto L_00C12610;
L_00C125D8:;
    v1 = (*(volatile u8 *) (u32) (s1 + 4));
    a1 = (u64) v1 < (u64) (s64) 8;
    if (a1 == 0) goto L_00C125F0;
    v1 = (*(volatile u8 *) (u32) (s1 + 16));
    a1 = v1 < 2;
L_00C125F0:;
    if (a1 == 0) goto L_00C12600;
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
    a1 = v1 < 32;
L_00C12600:;
    if (a1 == 0) goto L_00C12610;
    v1 = (*(volatile u8 *) (u32) (s1 + 18));
    a1 = v1 < 18;
L_00C12610:;
    if (a1 != 0) goto L_00C12620;
L_00C12618:;
    goto L_00C12720;
L_00C12620:;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x3330U);
    a1 = (*(volatile u8 *) (u32) (s1 + 16));
    a2 = (*(volatile u8 *) (u32) (s1 + 17));
    a3 = (*(volatile u8 *) (u32) (s1 + 4));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    a1 = (*(volatile s8 *) (u32) (s1 + 19));
    a0 = v0;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0xcb0000U;
    f1.f = (*(volatile f32 *) (u32) (s1 + 8));
    v0 = (s32) ((u32) v0 + 0x3350U);
    f0.f = (*(volatile f32 *) (u32) (s1 + 12));
    f2.i = (s32) a1;
    v1 = (s32) ((u32) v1 << 2);
    f2.f = (f32) f2.i;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    f12.f = f2.f * f1.f;
    { u32 t_ = (u32) v0; f13.f = f2.f * f0.f; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    a0 = (*(volatile s32 *) (u32) s1);
    v1 = 1;
    if (a0 == v1) goto L_00C126EC;
    v1 = 4;
    if (a0 == v1) goto L_00C126AC;
    goto L_00C12618;
L_00C126AC:;
    v1 = (*(volatile u8 *) (u32) (s1 + 16));
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) s0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) a0);
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) a0) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s1 + 20));
    if (v1 == 0) goto L_00C1271C;
    v1 = (*(volatile u8 *) (u32) (s1 + 16));
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) v1 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) (a0 + 7100));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 7100)) = (u32) v1; goto L_00C12618;
L_00C126EC:;
    a1 = (*(volatile u8 *) (u32) (s1 + 16));
    v1 = (*(volatile u8 *) (u32) (s1 + 18));
    a0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 << 3);
    a0 = (s32) ((u32) a0 + (u32) s0);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) v1; goto L_00C12618;
L_00C1271C:;
L_00C12720:;
    return;
}
