/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00130370(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    s32 fcc = 0;

    f0.i = (s32) 0;
    fcc = f12.f < f0.f;
    if (fcc) goto L_001304C4;
    f0.f = (*(volatile f32 *) (u32) (a1 + 8));
    fcc = f12.f <= f0.f;
    if (fcc) goto L_0013039C;
    f12.i = f0.i;
L_0013039C:;
    v0 = (*(volatile s32 *) (u32) (a1 + 16));
    v1 = (s32) ((u32) a1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v1);
    at = (u64) v0 < (u64) (s64) 2;
    { s32 c_ = at != 0; a2 = (s32) ((u32) v1 + 0x4U); if (c_) goto L_00130494; }
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) goto L_001303F8;
    v1 = (s32) ((u32) v0 + 0xfffffffeU);
    at = 0 < v1;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_001303F0; }
L_001303D0:;
    f0.f = (*(volatile f32 *) (u32) a2);
    fcc = f0.f < f12.f;
    if (!fcc) goto L_001303F0;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < v1;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_001303D0; }
L_001303F0:;
    v1 = (*(volatile s32 *) (u32) (a1 + 4)); goto L_00130498;
L_001303F8:;
    a3 = (s32) ((u32) v0 + 0xffffffffU);
    if (a3 <= 0) goto L_00130460;
L_00130404:;
    { s32 c_ = a3 >= 0; v1 = (s32) a3 >> 1; if (c_) goto L_00130414; }
    v0 = (s32) ((u32) a3 + 0x1U);
    v1 = (s32) v0 >> 1;
L_00130414:;
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) a2 + (u32) v0);
    f0.f = (*(volatile f32 *) (u32) v0);
    fcc = f12.f == f0.f;
    if (!fcc) goto L_00130434;
    a2 = v0; goto L_00130494;
L_00130434:;
    fcc = f12.f < f0.f;
    if (!fcc) goto L_00130448;
    a3 = v1; goto L_00130458;
L_00130448:;
    v0 = (s32) ((u32) v1 + 0x1U);
    a3 = (s32) ((u32) a3 - (u32) v0);
    v0 = (s32) ((u32) v0 << 3);
    a2 = (s32) ((u32) a2 + (u32) v0);
L_00130458:;
    if (a3 > 0) goto L_00130404;
L_00130460:;
    f1.f = (*(volatile f32 *) (u32) a2);
    f0.i = (s32) 0;
    fcc = f0.f == f1.f;
    if (fcc) goto L_001304CC;
    fcc = f1.f < f12.f;
    if (!fcc) goto L_0013048C;
    v0 = (s32) ((u32) a2 + 0x8U); goto L_00130490;
L_0013048C:;
    v0 = a2;
L_00130490:;
    a2 = v0;
L_00130494:;
    v1 = (*(volatile s32 *) (u32) (a1 + 4));
L_00130498:;
    v0 = (s32) 0x370000U;
    v0 = (s32) ((u32) v0 + 0x5c20U);
    v1 = (s32) ((u32) v1 >> 28);
    v1 = v1 & 0xf;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    goto L_001304D8;
L_001304C4:;
    f12.i = f0.i; goto L_0013039C;
L_001304CC:;
    v0 = (s32) ((u32) a2 + 0xfffffff8U); goto L_00130490;
L_001304D8:;
    return;
}
