/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_001D77B0(s64 a0, s64 a1) {
    s64 v0 = 0, v1 = 0;
    u64 qh_v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    if (a0 == 0) goto L_001D780C;
    if (a1 == 0) goto L_001D780C;
    f1.f = (*(volatile f32 *) (u32) (a0 + 128));
    f0.f = (*(volatile f32 *) (u32) a1);
    fcc = f1.f == f0.f;
    if (fcc) goto L_001D77F0;
    { u32 a_ = (u32) (a1 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
L_001D77D8:;
    { u32 a_ = (u32) (a0 + 128) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile u8 *) (u32) (a0 + 166));
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) (a0 + 166)) = (u8) v1;
    goto L_001D780C;
L_001D77F0:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 132));
    f0.f = (*(volatile f32 *) (u32) (a1 + 4));
    fcc = f1.f == f0.f;
    if (fcc) goto L_001D780C;
    { u32 a_ = (u32) (a1 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); } goto L_001D77D8;
L_001D780C:;
    return;
}
