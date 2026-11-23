/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001FA5E0(s64);
s64 func_001FA6B0(s64);
s64 func_001FA780(s64);
s64 func_001FA850(s64);
s64 func_001FA920(s64, s64);
s64 func_001FAA00(s64);
s64 func_001FAA60(s64, s64);
s64 func_001FAAF0(s64, s64, s64, s64);
s64 func_001FAB30(s64, s64, s64, s64);
s64 func_001FAB60(s64, s64, s64, s64);
s64 func_001FABB0(s64, s64, s64, s64);
s64 func_001FAC00(s64, s64, s64, s64);

void func_00362160(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v1 = 0;
    s64 frame[24];
    s64 sp = (s32) (u32) frame;

    v1 = 2;
    a3 = 0;
    fp = a1;
    (*(volatile u8 *) (u32) (a1 + 102)) = (u8) v1;
    a2 = (s32) ((u32) fp + (u32) a3);
L_003621A0:;
    v1 = (s32) ((u32) a3 + 0x1U);
    (*(volatile u8 *) (u32) a2) = (u8) a3;
    a1 = (s32) ((u32) a3 + 0x2U);
    (*(volatile u8 *) (u32) (a2 + 1)) = (u8) v1;
    (*(volatile u8 *) (u32) (a2 + 2)) = (u8) a1;
    v1 = (s32) ((u32) a3 + 0x3U);
    (*(volatile u8 *) (u32) (a2 + 3)) = (u8) v1;
    a1 = (s32) ((u32) a3 + 0x4U);
    (*(volatile u8 *) (u32) (a2 + 4)) = (u8) a1;
    v1 = (s32) ((u32) a3 + 0x5U);
    (*(volatile u8 *) (u32) (a2 + 5)) = (u8) v1;
    a1 = (s32) ((u32) a3 + 0x6U);
    v1 = (s32) ((u32) a3 + 0x7U);
    (*(volatile u8 *) (u32) (a2 + 6)) = (u8) a1;
    a3 = (s32) ((u32) a3 + 0x8U);
    (*(volatile u8 *) (u32) (a2 + 7)) = (u8) v1;
    v1 = a3 < 32;
    if (v1 != 0) { a2 = (s32) ((u32) fp + (u32) a3); goto L_003621A0; }
    s4 = a0 & 0xffff;
    s5 = 0;
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) fp;
    v1 = (*(volatile s32 *) (u32) (sp + 176));
L_003621FC:;
    s6 = (s32) 0x3e0000U;
    s3 = (s32) 0x3e0000U;
    a0 = 1;
    s1 = 0;
    s6 = (s32) ((u32) s6 + 0x6eb8U);
    v1 = (s32) ((u32) v1 + 0x6fU);
    s3 = (s32) ((u32) s3 + 0x6ea0U);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile s32 *) (u32) (sp + 176));
    (*(volatile u8 *) (u32) (v1 + 111)) = (u8) a0;
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    s7 = (s32) ((u32) v1 + 0x1U);
    s2 = s7;
L_00362230:;
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a1 = 1;
    a0 = 255;
    a2 = (s32) ((u32) v1 + (u32) s1);
    (*(volatile u8 *) (u32) (a2 + 54)) = (u8) a1;
    v1 = 0xffff;
    { s32 c_ = s4 != v1; (*(volatile u8 *) (u32) (a2 + 65)) = (u8) a0; if (c_) goto L_00362280; }
    a0 = (s32) ((u32) s7 + (u32) s1);
    v1 = (*(volatile u8 *) (u32) s6);
    (*(volatile u8 *) (u32) (a0 + 31)) = (u8) 0;
    at = s1 < 10;
    (*(volatile u8 *) (u32) (a0 + 42)) = (u8) a1;
    { s32 c_ = at == 0; (*(volatile u8 *) (u32) (a0 + 20)) = (u8) v1; if (c_) goto L_003622F0; }
    a0 = (*(volatile u8 *) (u32) s3);
    v1 = (*(volatile u8 *) (u32) (s3 + 1));
    (*(volatile u8 *) (u32) s2) = (u8) a0;
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) v1; goto L_003622F0;
L_00362280:;
    a0 = s4;
    a1 = s1;
    a2 = s5;
    s0 = (s32) ((u32) s7 + (u32) s1); v0 = func_001FAB30(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (s0 + 31)) = (u8) v0;
    a0 = s4;
    a1 = s1;
    a2 = s5; v0 = func_001FAAF0(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (s0 + 42)) = (u8) v0;
    a0 = s4;
    a1 = s1;
    a2 = s5; v0 = func_001FAC00(a0, a1, a2, a3);
    at = s1 < 10;
    { s32 c_ = at == 0; (*(volatile u8 *) (u32) (s0 + 20)) = (u8) v0; if (c_) goto L_003622F0; }
    a1 = (s32) ((u32) s1 + 0x1U);
    a0 = s4;
    a2 = s5; v0 = func_001FABB0(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) s2) = (u8) v0;
    a1 = (s32) ((u32) s1 + 0x1U);
    a0 = s4;
    a2 = s5; v0 = func_001FAB60(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) v0;
L_003622F0:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 11;
    s6 = (s32) ((u32) s6 + 0x1U);
    s3 = (s32) ((u32) s3 + 0x2U);
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x2U); if (c_) goto L_00362230; }
    v1 = (*(volatile s32 *) (u32) (sp + 176));
    s5 = (s32) ((u32) s5 + 0x1U);
    v1 = (s32) ((u32) v1 + 0x52U);
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v1;
    v1 = s5 < 3;
    if (v1 != 0) { v1 = (*(volatile s32 *) (u32) (sp + 176)); goto L_003621FC; }
    v1 = 0xffff;
    if (s4 == v1) goto L_003623D8;
    s0 = 0;
    a0 = s4;
L_00362338:;
    a1 = s0; v0 = func_001FAA60(a0, a1);
    v1 = (s32) ((u32) fp + (u32) s0);
    (*(volatile u8 *) (u32) (v1 + 105)) = (u8) v0;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 5;
    if (v0 != 0) { a0 = s4; goto L_00362338; }
    a0 = s4; v0 = func_001FAA00(a0);
    (*(volatile u8 *) (u32) (fp + 110)) = (u8) v0;
    s0 = 0;
    a0 = s4;
L_0036236C:;
    a1 = s0; v0 = func_001FA920(a0, a1);
    v1 = (s32) ((u32) fp + (u32) s0);
    (*(volatile u8 *) (u32) (v1 + 96)) = (u8) v0;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 4;
    if (v0 != 0) { a0 = s4; goto L_0036236C; }
    s1 = 0;
L_00362390:;
    a0 = s4;
    s0 = (s32) ((u32) fp + 0x6fU); v0 = func_001FA850(a0);
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) v0;
    a0 = s4; v0 = func_001FA780(a0);
    (*(volatile u8 *) (u32) (s0 + 78)) = (u8) v0;
    a0 = s4; v0 = func_001FA6B0(a0);
    (*(volatile u8 *) (u32) (s0 + 79)) = (u8) v0;
    a0 = s4; v0 = func_001FA5E0(a0);
    s1 = (s32) ((u32) s1 + 0x1U);
    (*(volatile u8 *) (u32) (s0 + 80)) = (u8) v0;
    v1 = s1 < 3;
    { s32 c_ = v1 != 0; fp = (s32) ((u32) fp + 0x52U); if (c_) goto L_00362390; }
L_003623D8:;
    return;
}
