/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021E4B0(s32, s32, s32);
void strncpy(s32, s32, s32);

void func_008BF3F0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;

    v1 = 179;
    s1 = a0;
    s0 = a1;
    a1 = (s32) ((u32) s1 + 0x766U);
    a0 = (s32) ((u32) s0 + 0x6U);
L_008BF414:;
    v0 = (*(volatile s16 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u16 *) (u32) a0) = (u16) v0;
    a1 = (s32) ((u32) a1 + 0x2U);
    a0 = (s32) ((u32) a0 + 0x2U);
    if (v1 > 0) goto L_008BF414;
    a0 = (*(volatile u16 *) (u32) s1);
    a1 = 1;
    a3 = (*(volatile u16 *) (u32) (s1 + 2));
    a2 = 0; v0 = func_0021E4B0(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x2U);
    a1 = v0;
    a2 = 3; strncpy(a0, a1, a2);
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) 0;
    v1 = 295;
    a0 = (*(volatile u16 *) (u32) (s1 + 2));
    if (a0 == v1) { v1 = 286; goto L_008BF480; }
    v1 = 294;
    if (a0 == v1) goto L_008BF47C;
    v1 = (*(volatile u16 *) (u32) s1); goto L_008BF488;
L_008BF47C:;
    v1 = 286;
L_008BF480:;
    (*(volatile u16 *) (u32) s0) = (u16) v1; goto L_008BF48C;
L_008BF488:;
    (*(volatile u16 *) (u32) s0) = (u16) v1;
L_008BF48C:;
    return;
}
