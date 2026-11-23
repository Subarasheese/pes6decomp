/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void memset(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 v0 = 0, v1 = 0;
    u64 qh_v1 = 0;
    u64 qh_a4 = 0;

    v0 = (u64) a2 < (u64) (s64) 8;
    { s32 c_ = v0 != 0; v1 = a0; if (c_) goto L_001C4968; }
    v0 = a0 & 0xf;
    { s32 c_ = v0 != 0; a3 = a0; if (c_) goto L_001C4968; }
    a5 = a1 & 0xff;
    a6 = (u64) a2 < (u64) (s64) 32;
    a4 = a5;
    v1 = (s64) ((u64) a4 << 8);
    a4 = v1 | a5;
    { u64 l_ = (u64) a4 & 0xFFFF, h_ = qh_a4 & 0xFFFF; l_ *= 0x0001000100010001ULL; h_ *= 0x0001000100010001ULL; v1 = (s64) l_; qh_v1 = h_; }
    { s32 c_ = a6 != 0; v0 = (u64) a2 < (u64) (s64) 8; if (c_) goto L_001C4954; }
    { u64 h_ = (u64) v1; a4 = (s64) (u64) v1; qh_a4 = h_; }
L_001C4924:;
    { u32 a_ = (u32) (a3 + 0) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    a2 = (s32) ((u32) a2 + 0xffffffe0U);
    a3 = (s32) ((u32) a3 + 0x10U);
    v0 = (u64) a2 < (u64) (s64) 32;
    { u32 a_ = (u32) (a3 + 0) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    { s32 c_ = v0 == 0; a3 = (s32) ((u32) a3 + 0x10U); if (c_) goto L_001C4924; }
    v0 = (u64) a2 < (u64) (s64) 8; goto L_001C4954;
L_001C4948:;
    a2 = (s32) ((u32) a2 + 0xfffffff8U);
    a3 = (s32) ((u32) a3 + 0x8U);
    v0 = (u64) a2 < (u64) (s64) 8;
L_001C4954:;
    if (v0 == 0) { (*(volatile u64 *) (u32) a3) = (u64) v1; goto L_001C4948; }
    v1 = a3;
L_001C4968:;
    v0 = (s32) 0xffff0000U;
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    v0 = v0 | 0xffff;
    if (a2 == v0) goto L_001C49A0;
    v0 = (s32) 0xffff0000U;
    v0 = v0 | 0xffff;
L_001C4984:;
    (*(volatile u8 *) (u32) v1) = (u8) a1;
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (a2 != v0) goto L_001C4984;
L_001C49A0:;
    v0 = a0; return;
}
