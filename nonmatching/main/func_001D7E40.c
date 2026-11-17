/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D4F70(s32, s32, s32);
s32 func_001D5000(s32, s32);
s32 func_001D7FA0(s32);
s32 func_001D81D0(s32, s32, s32, s32);

s32 func_001D7E40(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s0 = a0;
    { s32 c_ = s0 == 0; s1 = a1; if (c_) goto L_001D7EF4; }
    a0 = (*(volatile s32 *) (u32) (s0 + 44)); v0 = func_001D5000(a0, a1);
    if (v0 == 0) goto L_001D7EF4;
    (*(volatile u32 *) (u32) (s0 + 68)) = (u32) s1;
    (*(volatile u32 *) (u32) (s0 + 72)) = (u32) v0;
    s1 = (*(volatile s16 *) (u32) (s0 + 78));
    a0 = (*(volatile s32 *) (u32) (s0 + 44));
    a1 = (*(volatile s32 *) (u32) (s0 + 68));
    a2 = s1; v0 = func_001D4F70(a0, a1, a2);
    if (v0 == 0) goto L_001D7ED4;
    (*(volatile u16 *) (u32) (s0 + 78)) = (u16) s1;
    a0 = s0;
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) v0;
    v0 = (*(volatile u16 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (s0 + 44));
    v1 = (s32) ((u32) v0 << 2);
    v0 = (*(volatile s32 *) (u32) (a1 + 16));
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v0;
    (*(volatile u16 *) (u32) (s0 + 76)) = (u16) 0; v0 = func_001D81D0(a0, a1, a2, a3);
    a0 = s0; v0 = func_001D7FA0(a0);
    v1 = 255;
    (*(volatile u8 *) (u32) (s0 + 166)) = (u8) v1;
L_001D7ED4:;
    if (s0 == 0) goto L_001D7EE0;
    (*(volatile u8 *) (u32) (s0 + 168)) = (u8) 0;
L_001D7EE0:;
    if (s0 == 0) goto L_001D7EEC;
    (*(volatile u8 *) (u32) (s0 + 167)) = (u8) 0;
L_001D7EEC:;
    v1 = 255;
    (*(volatile u8 *) (u32) (s0 + 166)) = (u8) v1;
L_001D7EF4:;
    return v0;
}
