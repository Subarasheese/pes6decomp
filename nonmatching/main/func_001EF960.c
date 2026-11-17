/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
s64 func_001EEF60(s64, s64);

s64 func_001EF960(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    u64 qh_v0 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[6];
    s64 sp = (s32) (u32) frame;

    a0 = 1;
    a1 = 304;
    v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    a2 = (s32) 0x3a0000U;
    s0 = v0;
    a2 = (s32) ((u32) a2 + 0xffff93e0U);
    a1 = (s32) ((u32) sp + 0x20U);
    a0 = 8;
L_001EF98C:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    a2 = (s32) ((u32) a2 + 0x2U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_001EF98C; }
    if (s0 == 0) goto L_001EF9B8;
    (*(volatile u32 *) (u32) (s0 + 248)) = (u32) 0;
L_001EF9B8:;
    if (s0 == 0) goto L_001EFAA0;
    v0 = (s32) 0x530000U;
    v0 = (s32) ((u32) v0 + 0xffffb210U);
    if (v0 == 0) goto L_001EFAA0;
    v0 = 1;
L_001EF9D4:;
    if (v0 == 0) goto L_001EFA0C;
    v0 = (s32) 0x530000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 16));
    f0.f = (*(volatile f32 *) (u32) (v0 + -19952));
    fcc = f1.f == f0.f;
    if (fcc) goto L_001EFAA8;
L_001EF9F4:;
    v0 = (s32) 0x530000U;
    { u32 a_ = (u32) (v0 + -19952) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s0 + 16) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile u8 *) (u32) (s0 + 286));
    v0 = v0 | 0x1;
    (*(volatile u8 *) (u32) (s0 + 286)) = (u8) v0;
L_001EFA0C:;
    if (s0 == 0) goto L_001EFA1C;
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 284)) = (u8) v0;
L_001EFA1C:;
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x20U); v0 = func_001EEF60(a0, a1);
    if (s0 == 0) goto L_001EFAF8;
    v0 = (s32) 0x3a0000U;
    v0 = (s32) ((u32) v0 + 0xffff93f0U);
    if (v0 == 0) goto L_001EFAF8;
    v0 = 1;
L_001EFA44:;
    if (v0 == 0) goto L_001EFB18;
    v0 = (s32) 0x3a0000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 256));
    f0.f = (*(volatile f32 *) (u32) (v0 + -27664));
    fcc = f1.f == f0.f;
    if (fcc) goto L_001EFB00;
L_001EFA64:;
    v0 = (s32) 0x3a0000U;
    v1 = (s32) 0x3f800000U;
    { u32 a_ = (u32) (v0 + -27664) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    f1.i = (s32) v1;
    { u32 a_ = (u32) (s0 + 256) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    f0.f = (*(volatile f32 *) (u32) (s0 + 256));
    fcc = f1.f == f0.f;
    if (fcc) { f0.f = (*(volatile f32 *) (u32) (s0 + 260)); goto L_001EFB28; }
L_001EFA88:;
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 287)) = (u8) v0;
L_001EFA90:;
    v0 = (*(volatile u8 *) (u32) (s0 + 286));
    v0 = v0 | 0x1;
    (*(volatile u8 *) (u32) (s0 + 286)) = (u8) v0; goto L_001EFB18;
L_001EFAA0:;
    v0 = 0; goto L_001EF9D4;
L_001EFAA8:;
    v0 = (s32) 0x530000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 20));
    f0.f = (*(volatile f32 *) (u32) (v0 + -19948));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EF9F4;
    v0 = (s32) 0x530000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 24));
    f0.f = (*(volatile f32 *) (u32) (v0 + -19944));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EF9F4;
    v0 = (s32) 0x530000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 28));
    f0.f = (*(volatile f32 *) (u32) (v0 + -19940));
    fcc = f1.f == f0.f;
    if (fcc) goto L_001EFA0C;
    goto L_001EF9F4;
L_001EFAF8:;
    v0 = 0; goto L_001EFA44;
L_001EFB00:;
    v0 = (s32) 0x3a0000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 260));
    f0.f = (*(volatile f32 *) (u32) (v0 + -27660));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EFA64;
L_001EFB18:;
    v1 = 255;
    v0 = s0;
    (*(volatile u8 *) (u32) (s0 + 286)) = (u8) v1; goto L_001EFB3C;
L_001EFB28:;
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EFA88;
    (*(volatile u8 *) (u32) (s0 + 287)) = (u8) 0; goto L_001EFA90;
L_001EFB3C:;
    return v0;
}
