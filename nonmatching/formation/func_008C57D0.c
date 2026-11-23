/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D7A20(s64, s64, s64);
void func_001D7D60(s64, s64);
void func_001D7D80(s64, s64, s64, s64);
s64 func_008C13D0(s64, s64, s64);
s64 func_008C1490(s64, s64, s64, s64, f32);

void func_008C57D0(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u64 qh_v0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    s1 = a2;
    v1 = (*(volatile s32 *) (u32) (a0 + 28));
    { s32 c_ = v1 != 0; s0 = a3; if (c_) goto L_008C58B4; }
    v1 = (*(volatile s8 *) (u32) s3);
    v0 = 9;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) (s3 + 16)); goto L_008C5834; }
    v0 = 6;
    if (v1 == v0) goto L_008C5830;
    v0 = 12;
    if (v1 == v0) goto L_008C5830;
    { u32 a_ = (u32) (s2 + 0) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_008C585C;
L_008C5830:;
    a0 = (*(volatile s32 *) (u32) (s3 + 16));
L_008C5834:;
    a1 = (s32) ((u32) sp + 0x50U);
    a2 = 110; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 80));
    f0.f = (*(volatile f32 *) (u32) (sp + 84));
    (*(volatile f32 *) (u32) (sp + 96)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s2 + 8));
    (*(volatile f32 *) (u32) (sp + 104)) = f0.f; goto L_008C5860;
L_008C585C:;
    { u32 a_ = (u32) (sp + 96) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_008C5860:;
    a0 = 53;
    a1 = (s32) ((u32) sp + 0x60U); v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    s2 = v0;
    (*(volatile u32 *) (u32) (s3 + 28)) = (u32) s2;
    v0 = 11;
    v1 = (*(volatile s8 *) (u32) s3);
    if (v1 == v0) { a0 = s2; goto L_008C588C; }
    a2 = s1; goto L_008C5898;
L_008C588C:;
    a1 = 1; func_001D7D80(a0, a1, a2, a3);
    a2 = s1;
L_008C5898:;
    a0 = s2;
    a1 = 135; v0 = func_008C13D0(a0, a1, a2);
    (*(volatile u32 *) (u32) (s3 + 12)) = (u32) v0;
    a0 = s2;
    a1 = s0; func_001D7D60(a0, a1);
L_008C58B4:;
    return;
}
