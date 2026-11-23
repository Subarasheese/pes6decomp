/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00622950(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0;

    a3 = (s32) ((u32) a1 >> 2);
    a5 = (s32) ((u32) a0 + 0xcU);
    a4 = 0;
    { s32 c_ = a3 == 0; t6 = 0; if (c_) goto L_006229E8; }
    at = (u64) a3 < (u64) (s64) 9;
    { s32 c_ = at != 0; v1 = (s32) ((u32) a3 + 0xfffffff8U); if (c_) goto L_006229C0; }
L_00622970:;
    t4 = (*(volatile s32 *) (u32) a5);
    a4 = (s32) ((u32) a4 + 0x8U);
    a7 = (*(volatile s32 *) (u32) (a5 + 4));
    a6 = (u64) a4 < (u64) v1;
    t5 = (*(volatile s32 *) (u32) (a5 + 8));
    t6 = (s32) ((u32) t6 + (u32) t4);
    t6 = (s32) ((u32) t6 + (u32) a7);
    t4 = (*(volatile s32 *) (u32) (a5 + 12));
    a7 = (*(volatile s32 *) (u32) (a5 + 16));
    t6 = (s32) ((u32) t6 + (u32) t5);
    t5 = (*(volatile s32 *) (u32) (a5 + 20));
    t6 = (s32) ((u32) t6 + (u32) t4);
    t6 = (s32) ((u32) t6 + (u32) a7);
    t4 = (*(volatile s32 *) (u32) (a5 + 24));
    a7 = (*(volatile s32 *) (u32) (a5 + 28));
    t5 = (s32) ((u32) t6 + (u32) t5);
    t4 = (s32) ((u32) t5 + (u32) t4);
    t6 = (s32) ((u32) t4 + (u32) a7);
    { s32 c_ = a6 != 0; a5 = (s32) ((u32) a5 + 0x20U); if (c_) goto L_00622970; }
L_006229C0:;
    at = (u64) a4 < (u64) a3;
    if (at == 0) goto L_006229E8;
L_006229CC:;
    a6 = (*(volatile s32 *) (u32) a5);
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = (u64) a4 < (u64) a3;
    t6 = (s32) ((u32) t6 + (u32) a6);
    a5 = (s32) ((u32) a5 + 0x4U);
    if (v1 != 0) goto L_006229CC;
L_006229E8:;
    (*(volatile u32 *) (u32) a0) = (u32) a1;
    v1 = (s32) 0x650000U;
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) t6;
    a1 = a2 & 0xff;
    v1 = (s32) ((u32) v1 + 0x6e30U);
    (*(volatile u8 *) (u32) (a0 + 8)) = (u8) 0;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile u8 *) (u32) v1);
    (*(volatile u8 *) (u32) (a0 + 9)) = (u8) v1;
    (*(volatile u8 *) (u32) (a0 + 10)) = (u8) a2; return;
}
