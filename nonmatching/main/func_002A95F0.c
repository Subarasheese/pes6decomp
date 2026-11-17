/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_002A95F0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u64 qh_v1 = 0;
    union { f32 f; s32 i; } f12 = { 0 };

    v1 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) v1 + 0x1970U);
    s2 = a1;
    s1 = a2;
    s0 = (s32) ((u32) v1 + (u32) s2);
    v1 = (*(volatile u8 *) (u32) s0);
    { s32 c_ = v1 == s1; s3 = a0; if (c_) goto L_002A967C; }
    a0 = (s32) ((u32) s2 << 2);
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 + (u32) s2);
    v1 = (s32) ((u32) v1 + 0xffffbdc0U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a5 = (*(volatile s32 *) (u32) v1);
    if (a5 == 0) goto L_002A9678;
    v0 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) s2 << 4);
    v0 = (s32) ((u32) v0 + 0x16c0U);
    a1 = 0;
    a0 = (s32) ((u32) v0 + (u32) v1);
    a2 = 0;
    v0 = (s32) 0xc0000000U;
    a3 = s2;
    f12.i = (s32) v0;
    { u32 t_ = (u32) a5; a4 = s1; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
L_002A9678:;
    (*(volatile u8 *) (u32) s0) = (u8) s1;
L_002A967C:;
    v1 = (s32) 0x5e0000U;
    a0 = (s32) ((u32) s2 << 4);
    v1 = (s32) ((u32) v1 + 0x16c0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    { u32 a_ = (u32) (v1 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s3 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    return v0;
}
