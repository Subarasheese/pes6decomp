/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_008C4F50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    a2 = (s32) ((u32) a1 << 2);
    v0 = (s32) 0x8f0000U;
    a1 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v0 + 0xffffbe50U);
    v1 = (s32) ((u32) v0 + (u32) a1);
    a0 = (s32) ((u32) a2 + (u32) v1);
    v0 = (s32) 0x8f0000U;
    v1 = (s32) 0x8f0000U;
    a3 = (*(volatile s16 *) (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffbe52U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) a2 + (u32) v1);
    (*(volatile u16 *) (u32) (v0 + 22472)) = (u16) a3;
    a2 = (*(volatile s16 *) (u32) v1);
    a0 = (s32) 0x8f0000U;
    a1 = 15;
    v0 = (s32) 0x8f0000U;
    (*(volatile u16 *) (u32) (v0 + 22476)) = (u16) a1;
    v1 = (s32) 0x8f0000U;
    v0 = (s32) 0x8f0000U;
    (*(volatile u16 *) (u32) (a0 + 22474)) = (u16) a2;
    v0 = (s32) ((u32) v0 + 0x57c8U);
    (*(volatile u16 *) (u32) (v1 + 22478)) = (u16) a1; return v0;
}
