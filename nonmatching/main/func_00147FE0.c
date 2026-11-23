/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001299A0(s32);
void func_001480E0(s32, s32, s32, s32, s32, s32, s32, s32);

void func_00147FE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };

    v1 = (s32) 0x510000U;
    s2 = (*(volatile s32 *) (u32) (v1 + -21092));
    if (s2 == 0) goto L_00148050;
L_00148008:;
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    s1 = (*(volatile s32 *) (u32) s2);
    at = (u64) 0 < (u64) a0;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_00148058; }
    s0 = 0;
L_00148020:;
    v0 = (*(volatile s32 *) (u32) (s2 + 8));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0); func_001480E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = (u64) s3 < (u64) a0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00148020; }
    a1 = (*(volatile s32 *) (u32) (s2 + 8)); goto L_0014805C;
L_00148050:;
    goto L_001480BC;
L_00148058:;
    a1 = (*(volatile s32 *) (u32) (s2 + 8));
L_0014805C:;
    v0 = (*(volatile s32 *) (u32) (s2 + 12));
    { u32 t_ = (u32) v0; a2 = (*(volatile s32 *) (u32) (s2 + 16)); v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    a0 = (*(volatile s32 *) (u32) (s2 + 8)); func_001299A0(a0);
    a0 = (*(volatile s32 *) (u32) (s2 + 16));
    if (a0 == 0) goto L_00148088;
    func_001299A0(a0);
L_00148088:;
    a0 = s2; func_001299A0(a0);
    { s32 c_ = s1 != 0; s2 = s1; if (c_) goto L_00148008; }
    a0 = (s32) 0x510000U;
    v1 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (a0 + -21092)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + -21088)) = (u32) 0;
    a0 = (s32) 0x510000U;
    v1 = (s32) 0x510000U;
    (*(volatile u8 *) (u32) (a0 + -21084)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + -21083)) = (u8) 0;
L_001480BC:;
    return;
}
