/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0026EF10(s32);

void func_0026EDE0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = 0;
    s0 = (s32) 0x590000U;
    s0 = (s32) ((u32) s0 + 0xffffe7f0U);
L_0026EDFC:;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (s0 + 18));
    v0 = (s32) ((u32) v0 + 0xffffd8a0U);
    a0 = s0;
    a2 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) a1 + (u32) v1);
    v1 = (s32) ((u32) v1 << 3);
    a1 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) (a2 + 12));
    v0 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a1);
    (*(volatile u32 *) (u32) (a2 + 20)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (a2 + 20));
    v0 = (*(volatile u8 *) (u32) v0);
    (*(volatile u8 *) (u32) (a2 + 48)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (a2 + 20));
    v0 = (*(volatile u8 *) (u32) (v0 + 98));
    (*(volatile u8 *) (u32) (a2 + 511)) = (u8) v0; func_0026EF10(a0);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 22;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x240U); if (c_) goto L_0026EDFC; }
    return;
}
