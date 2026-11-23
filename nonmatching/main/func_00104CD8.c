/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00104C60(s64);

s64 func_00104CD8(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;

    a0 = 1; func_00104C60(a0);
    v0 = (s32) 0x10000000U;
    v1 = (s32) 0x40000000U;
    v0 = v0 | 0x2010;
    a0 = (s32) 0x10000000U;
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    a0 = a0 | 0x2010;
L_00104D00:;
    v0 = (*(volatile s32 *) (u32) a0);
    if (v0 < 0) goto L_00104D00;
    v0 = (s32) 0x10000000U;
    v1 = (s32) 0x10000000U;
    v0 = v0 | 0x2000;
    v1 = v1 | 0x2010;
    (*(volatile u32 *) (u32) v0) = (u32) 0;
L_00104D30:;
    v0 = (*(volatile s32 *) (u32) v1);
    if (v0 < 0) goto L_00104D30;
    a1 = (s32) 0x370000U;
    a0 = (s32) 0x10000000U;
    a1 = (s32) ((u32) a1 + 0x1260U);
    a0 = a0 | 0x7010;
    { u32 a_ = (u32) (a1 + 0) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (s32) 0x10000000U;
    a3 = (s32) 0x50000000U;
    a2 = a2 | 0x2000;
    { u32 a_ = (u32) (a0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a4 = (s32) 0x10000000U;
    a4 = a4 | 0x2010;
    { u32 a_ = (u32) (a1 + 16) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    { u32 a_ = (u32) (a1 + 32) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u32 a_ = (u32) (a1 + 48) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    { u32 a_ = (u32) (a1 + 64) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u32 a_ = (u32) (a1 + 64) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    { u32 a_ = (u32) (a1 + 64) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u32 a_ = (u32) (a1 + 64) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    (*(volatile u32 *) (u32) a2) = (u32) a3;
L_00104DB8:;
    v0 = (*(volatile s32 *) (u32) a4);
    if (v0 < 0) goto L_00104DB8;
    v0 = (s32) 0x10000000U;
    v1 = (s32) 0x58000000U;
    v0 = v0 | 0x2000;
    a0 = (s32) 0x10000000U;
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    a0 = a0 | 0x2010;
L_00104DF0:;
    v0 = (*(volatile s32 *) (u32) a0);
    if (v0 < 0) goto L_00104DF0;
    v1 = (s32) 0x370000U;
    a0 = (s32) 0x10000000U;
    v1 = (s32) ((u32) v1 + 0x12b0U);
    a0 = a0 | 0x7010;
    { u32 a_ = (u32) (v1 + 0) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = (s32) 0x10000000U;
    a2 = (s32) 0x60000000U;
    a1 = a1 | 0x2000;
    { u32 a_ = (u32) (a0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a3 = (s32) 0x10000000U;
    a3 = a3 | 0x2010;
    { u32 a_ = (u32) (v1 + 16) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    (*(volatile u32 *) (u32) a1) = (u32) a2;
L_00104E48:;
    v0 = (*(volatile s32 *) (u32) a3);
    if (v0 < 0) goto L_00104E48;
    v0 = (s32) 0x10000000U;
    v1 = (s32) 0x90000000U;
    v0 = v0 | 0x2000;
    a0 = (s32) 0x10000000U;
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    a0 = a0 | 0x2010;
L_00104E80:;
    v0 = (*(volatile s32 *) (u32) a0);
    if (v0 < 0) goto L_00104E80;
    v0 = (s32) 0x10000000U;
    v1 = (s32) 0x40000000U;
    v0 = v0 | 0x2010;
    a0 = (s32) 0x10000000U;
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    a0 = a0 | 0x2010;
L_00104EB8:;
    v0 = (*(volatile s32 *) (u32) a0);
    if (v0 < 0) goto L_00104EB8;
    v0 = (s32) 0x10000000U;
    v1 = (s32) 0x10000000U;
    v0 = v0 | 0x2000;
    v1 = v1 | 0x2010;
    (*(volatile u32 *) (u32) v0) = (u32) 0;
L_00104EE8:;
    v0 = (*(volatile s32 *) (u32) v1);
    if (v0 < 0) goto L_00104EE8;
    return v0;
}
