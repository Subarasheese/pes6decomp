/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_001EF370(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0;
    u64 qh_v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f5 = { 0 };
    s32 fcc = 0;
    s64 frame[2];
    s64 sp = (s32) (u32) frame;

    if (a0 == 0) goto L_001EF4B0;
    if (a1 == 0) goto L_001EF4B0;
    v1 = 1;
L_001EF384:;
    if (v1 == 0) goto L_001EF598;
    f3.f = (*(volatile f32 *) (u32) a1);
    a3 = (s32) ((u32) sp + 0x8U);
    f0.f = (*(volatile f32 *) (u32) (a0 + 32));
    a2 = (s32) ((u32) sp + 0xcU);
    f2.f = (*(volatile f32 *) (u32) (a1 + 4));
    a4 = (s32) ((u32) sp + 0x4U);
    f1.i = (s32) 0;
    (*(volatile u32 *) (u32) a3) = (u32) 0;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    (*(volatile f32 *) (u32) sp) = f3.f;
    fcc = f0.f == f3.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) a4) = f2.f; if (c_) goto L_001EF4B8; }
L_001EF3C0:;
    { u32 a_ = (u32) (sp + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
L_001EF3C4:;
    { u32 a_ = (u32) (a0 + 32) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile u8 *) (u32) (a0 + 286));
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) (a0 + 286)) = (u8) v1;
L_001EF3D4:;
    f4.f = (*(volatile f32 *) (u32) a1);
    (*(volatile u32 *) (u32) a3) = (u32) 0;
    f3.f = (*(volatile f32 *) (u32) (a1 + 8));
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    f2.f = (*(volatile f32 *) (u32) (a1 + 4));
    f0.f = (*(volatile f32 *) (u32) (a0 + 48));
    f1.i = (s32) 0;
    f3.f = f4.f + f3.f;
    fcc = f0.f == f3.f;
    (*(volatile f32 *) (u32) sp) = f3.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) a4) = f2.f; if (c_) goto L_001EF4F0; }
L_001EF404:;
    { u32 a_ = (u32) (sp + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
L_001EF408:;
    { u32 a_ = (u32) (a0 + 48) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile u8 *) (u32) (a0 + 286));
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) (a0 + 286)) = (u8) v1;
L_001EF418:;
    f3.f = (*(volatile f32 *) (u32) (a1 + 4));
    (*(volatile u32 *) (u32) a3) = (u32) 0;
    f2.f = (*(volatile f32 *) (u32) (a1 + 12));
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    f4.f = (*(volatile f32 *) (u32) a1);
    f0.f = (*(volatile f32 *) (u32) (a0 + 64));
    f1.i = (s32) 0;
    f2.f = f3.f + f2.f;
    fcc = f0.f == f4.f;
    (*(volatile f32 *) (u32) sp) = f4.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) a4) = f2.f; if (c_) goto L_001EF528; }
L_001EF448:;
    { u32 a_ = (u32) (sp + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
L_001EF44C:;
    { u32 a_ = (u32) (a0 + 64) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile u8 *) (u32) (a0 + 286));
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) (a0 + 286)) = (u8) v1;
L_001EF45C:;
    f5.f = (*(volatile f32 *) (u32) a1);
    (*(volatile u32 *) (u32) a3) = (u32) 0;
    f4.f = (*(volatile f32 *) (u32) (a1 + 8));
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    f3.f = (*(volatile f32 *) (u32) (a1 + 4));
    f2.f = (*(volatile f32 *) (u32) (a1 + 12));
    f0.f = (*(volatile f32 *) (u32) (a0 + 80));
    f1.i = (s32) 0;
    f4.f = f5.f + f4.f;
    f2.f = f3.f + f2.f;
    fcc = f0.f == f4.f;
    (*(volatile f32 *) (u32) sp) = f4.f;
    { s32 c_ = fcc; (*(volatile f32 *) (u32) a4) = f2.f; if (c_) goto L_001EF560; }
L_001EF494:;
    { u32 a_ = (u32) (sp + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
L_001EF498:;
    { u32 a_ = (u32) (a0 + 80) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile u8 *) (u32) (a0 + 286));
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) (a0 + 286)) = (u8) v1;
    goto L_001EF59C;
L_001EF4B0:;
    v1 = 0; goto L_001EF384;
L_001EF4B8:;
    f0.f = (*(volatile f32 *) (u32) (a0 + 36));
    fcc = f0.f == f2.f;
    if (!fcc) goto L_001EF3C0;
    f0.f = (*(volatile f32 *) (u32) (a0 + 40));
    fcc = f0.f == f1.f;
    if (!fcc) goto L_001EF3C0;
    f0.f = (*(volatile f32 *) (u32) (a0 + 44));
    fcc = f0.f == f1.f;
    if (fcc) goto L_001EF3D4;
    { u32 a_ = (u32) (sp + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); } goto L_001EF3C4;
L_001EF4F0:;
    f0.f = (*(volatile f32 *) (u32) (a0 + 52));
    fcc = f0.f == f2.f;
    if (!fcc) goto L_001EF404;
    f0.f = (*(volatile f32 *) (u32) (a0 + 56));
    fcc = f0.f == f1.f;
    if (!fcc) goto L_001EF404;
    f0.f = (*(volatile f32 *) (u32) (a0 + 60));
    fcc = f0.f == f1.f;
    if (fcc) goto L_001EF418;
    { u32 a_ = (u32) (sp + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); } goto L_001EF408;
L_001EF528:;
    f0.f = (*(volatile f32 *) (u32) (a0 + 68));
    fcc = f0.f == f2.f;
    if (!fcc) goto L_001EF448;
    f0.f = (*(volatile f32 *) (u32) (a0 + 72));
    fcc = f0.f == f1.f;
    if (!fcc) goto L_001EF448;
    f0.f = (*(volatile f32 *) (u32) (a0 + 76));
    fcc = f0.f == f1.f;
    if (fcc) goto L_001EF45C;
    { u32 a_ = (u32) (sp + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); } goto L_001EF44C;
L_001EF560:;
    f0.f = (*(volatile f32 *) (u32) (a0 + 84));
    fcc = f0.f == f2.f;
    if (!fcc) goto L_001EF494;
    f0.f = (*(volatile f32 *) (u32) (a0 + 88));
    fcc = f0.f == f1.f;
    if (!fcc) goto L_001EF494;
    f0.f = (*(volatile f32 *) (u32) (a0 + 92));
    fcc = f0.f == f1.f;
    if (fcc) goto L_001EF598;
    { u32 a_ = (u32) (sp + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); } goto L_001EF498;
L_001EF598:;
L_001EF59C:;
    return v0;
}
