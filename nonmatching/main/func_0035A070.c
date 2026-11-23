/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_0035A070(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };

    v1 = (s32) 0x620000U;
    s4 = a0;
    a0 = 1;
    s1 = (s32) ((u32) a0 << (s4 & 31));
    v1 = (*(volatile s32 *) (u32) (v1 + -14540));
    v1 = v1 & s1;
    if (a1 == v1) { ; goto L_0035A208; }
    if (a1 != a0) goto L_0035A1B0;
    s2 = (s32) 0x3e0000U;
    s3 = 0;
    s2 = (s32) ((u32) s2 + 0x6560U);
L_0035A0C0:;
    a0 = (*(volatile s32 *) (u32) s2);
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    { s32 c_ = a0 != s4; a1 = 0; if (c_) goto L_0035A0D8; }
    a1 = v1; goto L_0035A0E8;
L_0035A0D8:;
    if (v1 != s4) goto L_0035A0E8;
    a1 = a0;
L_0035A0E8:;
    if (a1 == 0) goto L_0035A150;
    v1 = (s32) 0x620000U;
    a0 = 1;
    v1 = (*(volatile s32 *) (u32) (v1 + -14540));
    s0 = (s32) ((u32) a0 << (a1 & 31));
    v1 = v1 & s0;
    if (v1 == 0) goto L_0035A150;
    a0 = (s32) ((u32) a1 << 1);
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0x64a0U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (v1 + 8));
    if (v1 == 0) goto L_0035A138;
    { u32 t_ = (u32) v1; ; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
L_0035A138:;
    v1 = (s32) 0x620000U;
    a0 = (*(volatile s32 *) (u32) (v1 + -14540));
    a0 = a0 | s0;
    v1 = (s32) 0x620000U;
    a0 = a0 ^ s0;
    (*(volatile u32 *) (u32) (v1 + -14540)) = (u32) a0;
L_0035A150:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = (u64) s3 < (u64) (s64) 2;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x8U); if (c_) goto L_0035A0C0; }
    if (s4 == 0) goto L_0035A1FC;
    a0 = (s32) ((u32) s4 << 1);
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) a0 + (u32) s4);
    v1 = (s32) ((u32) v1 + 0x64a0U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == 0) goto L_0035A1FC;
    v0 = (s32) 0x620000U;
    { u32 t_ = (u32) v1; a0 = (*(volatile s32 *) (u32) (v0 + -14536)); v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    a0 = (s32) 0x620000U;
    v1 = (s32) 0x620000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -14540));
    a0 = a0 | s1;
    (*(volatile u32 *) (u32) (v1 + -14540)) = (u32) a0; goto L_0035A1FC;
L_0035A1B0:;
    if (v1 == 0) goto L_0035A1FC;
    a0 = (s32) ((u32) s4 << 1);
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) a0 + (u32) s4);
    v1 = (s32) ((u32) v1 + 0x64a8U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == 0) goto L_0035A1E4;
    { u32 t_ = (u32) v1; ; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
L_0035A1E4:;
    a0 = (s32) 0x620000U;
    v1 = (s32) 0x620000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -14540));
    a0 = a0 | s1;
    a0 = a0 ^ s1;
    (*(volatile u32 *) (u32) (v1 + -14540)) = (u32) a0;
L_0035A1FC:;
    v1 = (s32) 0x620000U;
    (*(volatile u32 *) (u32) (v1 + -14536)) = (u32) 0;
L_0035A208:;
    return;
}
