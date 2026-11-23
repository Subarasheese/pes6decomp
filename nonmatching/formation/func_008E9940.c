/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7580(s64, s64);
s64 func_0020A550(s64, s64, s64, s64);
s64 func_0021E4B0(s64, s64, s64);
s64 func_008B6E40(s64);
s64 func_008B99F0(s64, s64, s64, s64);
s64 func_008C13D0(s64, s64, s64);
s64 func_008C1490(s64, s64, s64, s64, f32);

void func_008E9940(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u64 qh_v0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[12];
    s64 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a2;
    s1 = a3;
    { s32 c_ = s3 == 0; s0 = a1; if (c_) goto L_008E99FC; }
    (*(volatile u32 *) (u32) s3) = (u32) 0;
    a0 = 1;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) 0;
    (*(volatile u32 *) (u32) (s3 + 8)) = (u32) 0; v0 = func_0020A550(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s3) = (u32) v0;
    a1 = (s32) ((u32) sp + 0x50U);
    { u32 a_ = (u32) (s0 + 0) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = 13;
    { u32 a_ = (u32) (sp + 80) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    s0 = v0;
    a0 = 14;
    a1 = (s32) ((u32) sp + 0x50U);
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) s0; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    a0 = s2;
    (*(volatile u32 *) (u32) (s3 + 8)) = (u32) v0; v0 = func_008B6E40(a0);
    a0 = (*(volatile s32 *) (u32) (s3 + 8));
    a1 = v0; func_001D7580(a0, a1);
    a2 = (*(volatile s32 *) (u32) s3);
    a0 = s0;
    a3 = (*(volatile u16 *) (u32) s1);
    a1 = 86; v0 = func_008B99F0(a0, a1, a2, a3);
    a0 = (*(volatile u16 *) (u32) s1);
    a1 = 0;
    a3 = (*(volatile u16 *) (u32) (s1 + 2));
    a2 = 0; v0 = func_0021E4B0(a0, a1, a2);
    a0 = s0;
    a1 = 48;
    a2 = v0; v0 = func_008C13D0(a0, a1, a2);
L_008E99FC:;
    return;
}
