/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s32, s32);

void func_00629AE0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v1 = 1;
    s2 = a0;
    a0 = (*(volatile u8 *) (u32) (a1 + 13));
    if (a0 != v1) goto L_00629B48;
    (*(volatile u8 *) (u32) (a1 + 13)) = (u8) 0;
    v1 = (*(volatile s32 *) (u32) (s2 + 8));
    { s32 c_ = v1 <= 0; s1 = 0; if (c_) goto L_00629B48; }
    s0 = 0;
L_00629B1C:;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_001D7D60(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s2 + 8));
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < v1;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00629B1C; }
L_00629B48:;
    v1 = (*(volatile s32 *) (u32) (s2 + 8));
    { s32 c_ = v1 <= 0; s0 = 0; if (c_) goto L_00629BA0; }
    s1 = 0;
L_00629B58:;
    v1 = 10;
    if (s0 == v1) goto L_00629B88;
    v1 = 8;
    if (s0 == v1) goto L_00629B88;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_001D7D60(a0, a1);
L_00629B88:;
    v1 = (*(volatile s32 *) (u32) (s2 + 8));
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < v1;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00629B58; }
L_00629BA0:;
    return;
}
