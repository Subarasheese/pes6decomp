/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_001ED390(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0;
    u64 qh_a3 = 0;
    u64 qh_a6 = 0;

    if (a0 == 0) goto L_001ED520;
    if (a2 == 0) goto L_001ED520;
    if (a1 < 0) goto L_001ED520;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    at = v1 < a1;
    if (at == 0) goto L_001ED3BC;
    a1 = v1;
L_001ED3BC:;
    at = 0 < a1;
    { s32 c_ = at == 0; a4 = 0; if (c_) goto L_001ED500; }
    at = a1 < 9;
    { s32 c_ = at != 0; v1 = (s32) ((u32) a1 + 0xfffffff8U); if (c_) goto L_001ED4C8; }
    at = a1 < 0;
    a6 = 0;
    { s32 c_ = at != 0; a3 = 0; if (c_) goto L_001ED510; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a1 < at;
    if (at == 0) goto L_001ED510;
    a3 = 1; goto L_001ED510;
    a3 = (s32) 0x80000000U;
L_001ED404:;
    a3 = a1 & a3;
    { s32 c_ = a3 != 0; a5 = 1; if (c_) goto L_001ED41C; }
    if (a3 == 0) goto L_001ED41C;
    a5 = 0;
L_001ED41C:;
    if (a5 == 0) goto L_001ED428;
    a6 = 1;
L_001ED428:;
    if (a6 == 0) goto L_001ED4C8;
    a3 = 0;
L_001ED434:;
    a7 = (*(volatile s32 *) (u32) (a0 + 32));
    a4 = (s32) ((u32) a4 + 0x8U);
    { u32 a_ = (u32) (a2 + 0) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    a5 = a4 < v1;
    a7 = (s32) ((u32) a7 + (u32) a3);
    { u32 a_ = (u32) (a7 + 0) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    a7 = (*(volatile s32 *) (u32) (a0 + 32));
    { u32 a_ = (u32) (a2 + 16) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    a7 = (s32) ((u32) a7 + (u32) a3);
    { u32 a_ = (u32) (a7 + 16) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    a7 = (*(volatile s32 *) (u32) (a0 + 32));
    { u32 a_ = (u32) (a2 + 32) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    a7 = (s32) ((u32) a7 + (u32) a3);
    { u32 a_ = (u32) (a7 + 32) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    a7 = (*(volatile s32 *) (u32) (a0 + 32));
    { u32 a_ = (u32) (a2 + 48) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    a7 = (s32) ((u32) a7 + (u32) a3);
    { u32 a_ = (u32) (a7 + 48) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    a7 = (*(volatile s32 *) (u32) (a0 + 32));
    { u32 a_ = (u32) (a2 + 64) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    a7 = (s32) ((u32) a7 + (u32) a3);
    { u32 a_ = (u32) (a7 + 64) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    a7 = (*(volatile s32 *) (u32) (a0 + 32));
    { u32 a_ = (u32) (a2 + 80) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    a7 = (s32) ((u32) a7 + (u32) a3);
    { u32 a_ = (u32) (a7 + 80) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    a7 = (*(volatile s32 *) (u32) (a0 + 32));
    { u32 a_ = (u32) (a2 + 96) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    a7 = (s32) ((u32) a7 + (u32) a3);
    { u32 a_ = (u32) (a7 + 96) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    a7 = (*(volatile s32 *) (u32) (a0 + 32));
    { u32 a_ = (u32) (a2 + 112) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    a7 = (s32) ((u32) a7 + (u32) a3);
    { u32 a_ = (u32) (a7 + 112) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    a2 = (s32) ((u32) a2 + 0x80U);
    { s32 c_ = a5 != 0; a3 = (s32) ((u32) a3 + 0x80U); if (c_) goto L_001ED434; }
L_001ED4C8:;
    at = a4 < a1;
    if (at == 0) goto L_001ED500;
    a6 = (s32) ((u32) a4 << 4);
L_001ED4D8:;
    a5 = (*(volatile s32 *) (u32) (a0 + 32));
    a4 = (s32) ((u32) a4 + 0x1U);
    { u32 a_ = (u32) (a2 + 0) & ~15U; a3 = *(volatile s64 *) a_; qh_a3 = *(volatile u64 *) (a_ + 8); }
    v1 = a4 < a1;
    a5 = (s32) ((u32) a5 + (u32) a6);
    { u32 a_ = (u32) (a5 + 0) & ~15U; *(volatile u64 *) a_ = (u64) a3; *(volatile u64 *) (a_ + 8) = qh_a3; }
    a6 = (s32) ((u32) a6 + 0x10U);
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x10U); if (c_) goto L_001ED4D8; }
L_001ED500:;
    v1 = (*(volatile u8 *) (u32) (a0 + 53));
    v1 = v1 | 0x1;
    (*(volatile u8 *) (u32) (a0 + 53)) = (u8) v1; goto L_001ED520;
L_001ED510:;
    if (a3 == 0) goto L_001ED428;
    a3 = (s32) 0x80000000U; goto L_001ED404;
L_001ED520:;
    return v0;
}
