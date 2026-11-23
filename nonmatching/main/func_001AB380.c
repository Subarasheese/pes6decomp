/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00141000(s32);
void func_0017BFF0(s32, s32, s32);
void func_0017DE90(s32, s32, s32, s32);

void func_001AB380(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    s0 = (*(volatile s32 *) (u32) (a0 + 16));
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); v0 = func_00141000(a0);
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    v1 = 1;
    (*(volatile u32 *) (u32) (s0 + 44)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 32));
    (*(volatile u32 *) (u32) (s0 + 52)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s0 + 20));
    v0 = (*(volatile s32 *) (u32) (s0 + 32));
    a0 = (*(volatile s32 *) (u32) (a0 + 4));
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) a0;
    v0 = (*(volatile s32 *) (u32) (s0 + 24));
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) (s0 + 24));
    (*(volatile u32 *) (u32) (v0 + 28)) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) (s0 + 24));
    (*(volatile u32 *) (u32) (v0 + 56)) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    v0 = (*(volatile s8 *) (u32) (s1 + 529));
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s0 + 28)); goto L_001AB400; }
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    (*(volatile u32 *) (u32) (v0 + 20)) = (u32) v1; goto L_001AB404;
L_001AB400:;
    (*(volatile u32 *) (u32) (v0 + 20)) = (u32) 0;
L_001AB404:;
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    v1 = 1;
    a0 = s0;
    a1 = 2;
    a2 = 16;
    (*(volatile u32 *) (u32) (v0 + 40)) = (u32) v1; func_0017BFF0(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    a0 = s0;
    a1 = 2;
    a2 = 113;
    a3 = 1100;
    (*(volatile u8 *) (u32) (v0 + 53)) = (u8) 0; func_0017DE90(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) s1);
    v0 = (s32) 0x520000U;
    v0 = (s32) ((u32) v0 + 0x1d50U);
    a0 = s0;
    a1 = 2;
    a2 = 114;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 10));
    a3 = (s32) ((u32) v0 + 0x578U); func_0017DE90(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (s1 + 442)) = (u8) 0;
    return;
}
