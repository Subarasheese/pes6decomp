/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002C8220(s32, s32, s32, s32);

void func_002C82C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s1 = a0;
    s0 = a1;
    a0 = 0;
L_002C82E0:;
    v1 = (s32) ((u32) s1 + (u32) a0);
    (*(volatile u8 *) (u32) (v1 + 6)) = (u8) 0;
    a0 = (s32) ((u32) a0 + 0x7U);
    (*(volatile u8 *) (u32) (v1 + 7)) = (u8) 0;
    v0 = a0 < 14;
    (*(volatile u8 *) (u32) (v1 + 8)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 9)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 10)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 11)) = (u8) 0;
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) (v1 + 12)) = (u8) 0; if (c_) goto L_002C82E0; }
    v1 = 3;
    v0 = 16;
    (*(volatile u8 *) (u32) s1) = (u8) v1;
    s2 = 0;
    (*(volatile u8 *) (u32) (s1 + 1)) = (u8) v0;
    v1 = 23;
    (*(volatile u8 *) (u32) (s1 + 2)) = (u8) v1;
    v0 = 33;
    (*(volatile u8 *) (u32) (s1 + 3)) = (u8) v0;
    v1 = 30;
    v0 = 38;
    (*(volatile u8 *) (u32) (s1 + 4)) = (u8) v1;
    (*(volatile u8 *) (u32) (s1 + 5)) = (u8) v0;
L_002C8340:;
    v0 = (s32) ((u32) s0 + (u32) s2);
    a1 = (*(volatile u8 *) (u32) (v0 + 20));
    a0 = s1; func_002C8220(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 11;
    if (v1 != 0) goto L_002C8340;
    return;
}
