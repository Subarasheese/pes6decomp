/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_001EF2C0(s64 a0, s64 a1) {
    s64 v0 = 0, v1 = 0;
    u64 qh_a1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    if (a0 == 0) goto L_001EF32C;
    if (a1 == 0) goto L_001EF32C;
    v1 = 1;
L_001EF2D4:;
    if (v1 == 0) goto L_001EF368;
    f1.f = (*(volatile f32 *) (u32) (a0 + 256));
    f0.f = (*(volatile f32 *) (u32) a1);
    fcc = f1.f == f0.f;
    if (fcc) goto L_001EF334;
    { u32 a_ = (u32) (a1 + 0) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
L_001EF2F4:;
    v1 = (s32) 0x3f800000U;
    f1.i = (s32) v1;
    { u32 a_ = (u32) (a0 + 256) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; }
    f0.f = (*(volatile f32 *) (u32) (a0 + 256));
    fcc = f1.f == f0.f;
    if (fcc) goto L_001EF350;
L_001EF310:;
    v1 = 1;
    (*(volatile u8 *) (u32) (a0 + 287)) = (u8) v1;
L_001EF318:;
    v1 = (*(volatile u8 *) (u32) (a0 + 286));
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) (a0 + 286)) = (u8) v1;
    goto L_001EF368;
L_001EF32C:;
    v1 = 0; goto L_001EF2D4;
L_001EF334:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 260));
    f0.f = (*(volatile f32 *) (u32) (a1 + 4));
    fcc = f1.f == f0.f;
    if (fcc) goto L_001EF368;
    { u32 a_ = (u32) (a1 + 0) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); } goto L_001EF2F4;
L_001EF350:;
    f0.f = (*(volatile f32 *) (u32) (a0 + 260));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EF310;
    (*(volatile u8 *) (u32) (a0 + 287)) = (u8) 0; goto L_001EF318;
L_001EF368:;
    return v0;
}
