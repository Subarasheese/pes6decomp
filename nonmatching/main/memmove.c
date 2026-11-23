/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void memmove(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;

    a4 = a0;
    v0 = (u64) a1 < (u64) a4;
    { s32 c_ = v0 == 0; v1 = a4; if (c_) goto L_001C4838; }
    a3 = (s32) ((u32) a1 + (u32) a2);
    v0 = (u64) a4 < (u64) a3;
    { s32 c_ = v0 == 0; v0 = -1; if (c_) goto L_001C4838; }
    v1 = (s32) ((u32) a4 + (u32) a2);
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    { s32 c_ = a2 == v0; a1 = a3; if (c_) goto L_001C48DC; }
    a0 = v0;
L_001C4814:;
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    v0 = (*(volatile u8 *) (u32) a1);
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    (*(volatile u8 *) (u32) v1) = (u8) v0;
    if (a2 != a0) goto L_001C4814;
    v0 = a4; return;
L_001C4838:;
    v0 = (u64) a2 < (u64) (s64) 32;
    if (v0 != 0) { a2 = (s32) ((u32) a2 + 0xffffffffU); goto L_001C48B4; }
    v0 = a1 | v1;
    v0 = v0 & 0xf;
    if (v0 != 0) { a2 = (s32) ((u32) a2 + 0xffffffffU); goto L_001C48B4; }
    a3 = v1;
L_001C4858:;
    { u32 a_ = (u32) (a1 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a2 = (s32) ((u32) a2 + 0xffffffe0U);
    a1 = (s32) ((u32) a1 + 0x10U);
    a0 = (u64) a2 < (u64) (s64) 32;
    { u32 a_ = (u32) (a3 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    a3 = (s32) ((u32) a3 + 0x10U);
    { u32 a_ = (u32) (a1 + 0) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = (s32) ((u32) a1 + 0x10U);
    { u32 a_ = (u32) (a3 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { s32 c_ = a0 == 0; a3 = (s32) ((u32) a3 + 0x10U); if (c_) goto L_001C4858; }
    v0 = (u64) a2 < (u64) (s64) 8;
    { s32 c_ = v0 != 0; v1 = a3; if (c_) goto L_001C48B0; }
L_001C4890:;
    v1 = (*(volatile s64 *) (u32) a1);
    a2 = (s32) ((u32) a2 + 0xfffffff8U);
    a1 = (s32) ((u32) a1 + 0x8U);
    v0 = (u64) a2 < (u64) (s64) 8;
    (*(volatile u64 *) (u32) a3) = (u64) v1;
    { s32 c_ = v0 == 0; a3 = (s32) ((u32) a3 + 0x8U); if (c_) goto L_001C4890; }
    v1 = a3;
L_001C48B0:;
    a2 = (s32) ((u32) a2 + 0xffffffffU);
L_001C48B4:;
    v0 = -1;
    { s32 c_ = a2 == v0; a0 = v0; if (c_) goto L_001C48DC; }
L_001C48C0:;
    v0 = (*(volatile u8 *) (u32) a1);
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    a1 = (s32) ((u32) a1 + 0x1U);
    (*(volatile u8 *) (u32) v1) = (u8) v0;
    v1 = (s32) ((u32) v1 + 0x1U);
    if (a2 != a0) goto L_001C48C0;
L_001C48DC:;
    v0 = a4; return;
}
