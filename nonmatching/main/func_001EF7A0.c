/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_001EF7A0(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0;
    u64 qh_v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    if (a0 == 0) goto L_001EF808;
    if (a1 < 0) goto L_001EF808;
    at = a1 < 4;
    if (at == 0) goto L_001EF808;
    if (a2 == 0) goto L_001EF808;
    v1 = 1;
L_001EF7C8:;
    if (v1 == 0) goto L_001EF854;
    v1 = (s32) ((u32) a1 << 4);
    v1 = (s32) ((u32) v1 + (u32) a0);
    f1.f = (*(volatile f32 *) (u32) (v1 + 32));
    f0.f = (*(volatile f32 *) (u32) a2);
    fcc = f1.f == f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) v1 + 0x20U); if (c_) goto L_001EF810; }
L_001EF7EC:;
    { u32 a_ = (u32) (a2 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
L_001EF7F0:;
    { u32 a_ = (u32) (a1 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile u8 *) (u32) (a0 + 286));
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) (a0 + 286)) = (u8) v1;
    goto L_001EF854;
L_001EF808:;
    v1 = 0; goto L_001EF7C8;
L_001EF810:;
    f1.f = (*(volatile f32 *) (u32) (v1 + 36));
    f0.f = (*(volatile f32 *) (u32) (a2 + 4));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EF7EC;
    f1.f = (*(volatile f32 *) (u32) (v1 + 40));
    f0.f = (*(volatile f32 *) (u32) (a2 + 8));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EF7EC;
    f1.f = (*(volatile f32 *) (u32) (v1 + 44));
    f0.f = (*(volatile f32 *) (u32) (a2 + 12));
    fcc = f1.f == f0.f;
    if (fcc) goto L_001EF854;
    { u32 a_ = (u32) (a2 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); } goto L_001EF7F0;
L_001EF854:;
    return;
}
