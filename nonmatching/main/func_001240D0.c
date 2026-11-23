/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00129790(s64);
void memset(s64, s64, s64);

void func_001240D0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, v1 = 0, s0 = 0;

    if (a0 == 0) goto L_0012424C;
    v0 = (*(volatile s32 *) (u32) (a0 + 36));
    if (v0 == 0) goto L_0012424C;
    v0 = (*(volatile s32 *) (u32) (a0 + 40));
    if (v0 == 0) goto L_0012424C;
    v0 = (*(volatile s32 *) (u32) (a0 + 44));
    if (v0 == 0) goto L_0012424C;
    (*(volatile u64 *) (u32) (a0 + 24)) = (u64) 0;
    v0 = 2;
    (*(volatile u64 *) (u32) (a0 + 8)) = (u64) 0;
    (*(volatile u32 *) (u32) (a0 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 52)) = (u32) v0;
    s0 = (*(volatile s32 *) (u32) (a0 + 36));
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (s0 + 8));
    (*(volatile u32 *) (u32) (s0 + 24)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 32));
    if (v0 < 0) { (*(volatile u32 *) (u32) (s0 + 32)) = (u32) 0; goto L_00124134; }
L_00124134:;
    a2 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = 113;
    v1 = 42;
    v0 = 1;
    if (a2 == 0) a1 = v1;
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) a1;
    (*(volatile u64 *) (u32) (a0 + 56)) = (u64) v0;
    a0 = s0;
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) 0; func_00129790(a0);
    v0 = (*(volatile u32 *) (u32) (s0 + 44));
    a1 = 0;
    v0 = (s64) ((u64) v0 << 1);
    (*(volatile u64 *) (u32) (s0 + 64)) = (u64) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 84));
    v1 = (*(volatile s32 *) (u32) (s0 + 76));
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u16 *) (u32) (v0 + -2)) = (u16) 0;
    v0 = (*(volatile s32 *) (u32) (s0 + 84));
    a0 = (*(volatile s32 *) (u32) (s0 + 76));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    a2 = (s32) ((u32) v0 << 1); memset(a0, a1, a2);
    a5 = (*(volatile s32 *) (u32) (s0 + 148));
    a3 = (s32) 0x3c0000U;
    a2 = (s32) 0x3c0000U;
    a1 = (s32) 0x3c0000U;
    a0 = (s32) 0x3c0000U;
    a3 = (s32) ((u32) a3 + 0x56d2U);
    a2 = (s32) ((u32) a2 + 0x56d0U);
    a1 = (s32) ((u32) a1 + 0x56d4U);
    a0 = (s32) ((u32) a0 + 0x56d6U);
    v1 = 2;
    v0 = 0;
    a4 = (s32) ((u32) a5 << 1);
    a4 = (s32) ((u32) a4 + (u32) a5);
    a4 = (s32) ((u32) a4 << 2);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (*(volatile u16 *) (u32) a3);
    (*(volatile u32 *) (u32) (s0 + 144)) = (u32) a3;
    a4 = (*(volatile s32 *) (u32) (s0 + 148));
    a3 = (s32) ((u32) a4 << 1);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (s32) ((u32) a3 << 2);
    a2 = (s32) ((u32) a2 + (u32) a3);
    a2 = (*(volatile u16 *) (u32) a2);
    (*(volatile u32 *) (u32) (s0 + 156)) = (u32) a2;
    a3 = (*(volatile s32 *) (u32) (s0 + 148));
    a2 = (s32) ((u32) a3 << 1);
    a2 = (s32) ((u32) a2 + (u32) a3);
    a2 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile u16 *) (u32) a1);
    (*(volatile u32 *) (u32) (s0 + 160)) = (u32) a1;
    a2 = (*(volatile s32 *) (u32) (s0 + 148));
    a1 = (s32) ((u32) a2 << 1);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u16 *) (u32) a0);
    (*(volatile u32 *) (u32) (s0 + 140)) = (u32) a0;
    (*(volatile u32 *) (u32) (s0 + 124)) = (u32) 0;
    (*(volatile u64 *) (u32) (s0 + 104)) = (u64) 0;
    (*(volatile u32 *) (u32) (s0 + 132)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 136)) = (u32) v1;
    (*(volatile u32 *) (u32) (s0 + 112)) = (u32) v1;
    (*(volatile u32 *) (u32) (s0 + 120)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 80)) = (u32) 0; goto L_00124250;
L_0012424C:;
    v0 = -2;
L_00124250:;
    return;
}
