/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
void func_00146C70(s32, s32, s32, s32, s32, s32, s32, s32);
void func_001BB080(s32);
s32 func_001BB370(s32);
s32 func_001BB3E0(s32);
s32 func_001BB430(s32);

s32 func_001BBD70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };

    s0 = a0;
    { s32 c_ = s0 == 0; s1 = 0; if (c_) goto L_001BBEA0; }
    a0 = (*(volatile s16 *) (u32) s0);
    v1 = 2;
    { s32 c_ = a0 == v1; v0 = 1; if (c_) goto L_001BBDEC; }
    if (a0 == v0) { v1 = (*(volatile s32 *) (u32) (s0 + 8)); goto L_001BBDD4; }
    if (a0 == 0) { v1 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_001BBDB4; }
    v1 = 1; goto L_001BBE04;
L_001BBDB4:;
    if (v1 == 0) goto L_001BBE00;
    a0 = (*(volatile s32 *) (u32) (s0 + 16));
    a1 = (*(volatile s32 *) (u32) (s0 + 20));
    { u32 t_ = (u32) v1; a2 = s0; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    goto L_001BBE00;
L_001BBDD4:;
    if (v1 == 0) goto L_001BBE00;
    { u32 t_ = (u32) v1; a0 = (*(volatile s32 *) (u32) (s0 + 16)); v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    goto L_001BBE00;
L_001BBDEC:;
    v1 = (*(volatile s32 *) (u32) (s0 + 12));
    if (v1 == 0) goto L_001BBE00;
    { u32 t_ = (u32) v1; a0 = (*(volatile s32 *) (u32) (s0 + 16)); v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
L_001BBE00:;
    v1 = 1;
L_001BBE04:;
    if (v0 != v1) { v0 = 0; goto L_001BBE1C; }
    v0 = (*(volatile s16 *) (u32) s0);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u16 *) (u32) s0) = (u16) v0;
    v0 = 0;
L_001BBE1C:;
    if (s0 == 0) { s1 = v0; goto L_001BBE38; }
    a0 = (s32) ((u32) s0 + 0x18U); v0 = func_001BB3E0(a0);
    a0 = v0; v0 = func_001BB370(a0);
    s1 = v0;
L_001BBE38:;
    v0 = (*(volatile s16 *) (u32) s0);
    v0 = v0 < 3;
    if (v0 != 0) { v0 = s1; goto L_001BBEA4; }
    if (s0 == 0) goto L_001BBE58;
    a0 = (s32) ((u32) s0 + 0x18U); func_001BB080(a0);
L_001BBE58:;
    if (s0 == 0) goto L_001BBEA0;
    a0 = (s32) ((u32) s0 + 0x18U); v0 = func_001BB430(a0);
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s0 + 16)); goto L_001BBE84; }
    a0 = (s32) 0x3d0000U;
    a0 = (s32) ((u32) a0 + 0x16b0U); func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_001BBEA0;
L_001BBE84:;
    if (a0 == 0) { a0 = s0; goto L_001BBE98; }
    Pes6Heap_Free(a0);
    a0 = s0;
L_001BBE98:;
    Pes6Heap_Free(a0);
L_001BBEA0:;
    v0 = s1;
L_001BBEA4:;
    return v0;
}
