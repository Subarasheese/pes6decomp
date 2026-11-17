/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_001EF5B0(s64 a0, s64 a1) {
    s64 v0 = 0, v1 = 0;
    u64 qh_v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    if (a0 == 0) goto L_001EF674;
    if (a1 == 0) goto L_001EF674;
    v1 = 1;
L_001EF5C4:;
    if (v1 == 0) goto L_001EF78C;
    f1.f = (*(volatile f32 *) (u32) (a0 + 32));
    f0.f = (*(volatile f32 *) (u32) a1);
    fcc = f1.f == f0.f;
    if (fcc) goto L_001EF67C;
L_001EF5E0:;
    { u32 a_ = (u32) (a1 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
L_001EF5E4:;
    { u32 a_ = (u32) (a0 + 32) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile u8 *) (u32) (a0 + 286));
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) (a0 + 286)) = (u8) v1;
L_001EF5F4:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 48));
    f0.f = (*(volatile f32 *) (u32) (a1 + 16));
    fcc = f1.f == f0.f;
    { s32 c_ = fcc; v1 = (s32) ((u32) a1 + 0x10U); if (c_) goto L_001EF6C0; }
L_001EF608:;
    { u32 a_ = (u32) (v1 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
L_001EF60C:;
    { u32 a_ = (u32) (a0 + 48) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile u8 *) (u32) (a0 + 286));
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) (a0 + 286)) = (u8) v1;
L_001EF61C:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 64));
    f0.f = (*(volatile f32 *) (u32) (a1 + 32));
    fcc = f1.f == f0.f;
    { s32 c_ = fcc; v1 = (s32) ((u32) a1 + 0x20U); if (c_) goto L_001EF704; }
L_001EF630:;
    { u32 a_ = (u32) (v1 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
L_001EF634:;
    { u32 a_ = (u32) (a0 + 64) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile u8 *) (u32) (a0 + 286));
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) (a0 + 286)) = (u8) v1;
L_001EF644:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 80));
    f0.f = (*(volatile f32 *) (u32) (a1 + 48));
    fcc = f1.f == f0.f;
    if (fcc) goto L_001EF748;
L_001EF658:;
    { u32 a_ = (u32) (a1 + 48) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
L_001EF65C:;
    { u32 a_ = (u32) (a0 + 80) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile u8 *) (u32) (a0 + 286));
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) (a0 + 286)) = (u8) v1;
    goto L_001EF78C;
L_001EF674:;
    v1 = 0; goto L_001EF5C4;
L_001EF67C:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 36));
    f0.f = (*(volatile f32 *) (u32) (a1 + 4));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EF5E0;
    f1.f = (*(volatile f32 *) (u32) (a0 + 40));
    f0.f = (*(volatile f32 *) (u32) (a1 + 8));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EF5E0;
    f1.f = (*(volatile f32 *) (u32) (a0 + 44));
    f0.f = (*(volatile f32 *) (u32) (a1 + 12));
    fcc = f1.f == f0.f;
    if (fcc) goto L_001EF5F4;
    { u32 a_ = (u32) (a1 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); } goto L_001EF5E4;
L_001EF6C0:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 52));
    f0.f = (*(volatile f32 *) (u32) (v1 + 4));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EF608;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    f0.f = (*(volatile f32 *) (u32) (v1 + 8));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EF608;
    f1.f = (*(volatile f32 *) (u32) (a0 + 60));
    f0.f = (*(volatile f32 *) (u32) (v1 + 12));
    fcc = f1.f == f0.f;
    if (fcc) goto L_001EF61C;
    { u32 a_ = (u32) (v1 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); } goto L_001EF60C;
L_001EF704:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 68));
    f0.f = (*(volatile f32 *) (u32) (v1 + 4));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EF630;
    f1.f = (*(volatile f32 *) (u32) (a0 + 72));
    f0.f = (*(volatile f32 *) (u32) (v1 + 8));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EF630;
    f1.f = (*(volatile f32 *) (u32) (a0 + 76));
    f0.f = (*(volatile f32 *) (u32) (v1 + 12));
    fcc = f1.f == f0.f;
    if (fcc) goto L_001EF644;
    { u32 a_ = (u32) (v1 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); } goto L_001EF634;
L_001EF748:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 84));
    f0.f = (*(volatile f32 *) (u32) (a1 + 52));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EF658;
    f1.f = (*(volatile f32 *) (u32) (a0 + 88));
    f0.f = (*(volatile f32 *) (u32) (a1 + 56));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EF658;
    f1.f = (*(volatile f32 *) (u32) (a0 + 92));
    f0.f = (*(volatile f32 *) (u32) (a1 + 60));
    fcc = f1.f == f0.f;
    if (fcc) goto L_001EF78C;
    { u32 a_ = (u32) (a1 + 48) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); } goto L_001EF65C;
L_001EF78C:;
    return v0;
}
