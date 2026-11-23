/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002209F0(s32, s32);
s32 func_0024D950(s32);
void func_0024DC00(s32, s32);
void memcpy(s32, s32, s32);

void func_00639A20(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v0 = (*(volatile s16 *) (u32) a1);
    { s32 c_ = v0 != 0; s0 = a0; if (c_) goto L_00639A58; }
    v0 = (*(volatile s16 *) (u32) (a1 + 2));
    if (v0 != 0) { s3 = (s32) ((u32) v0 + 0x1U); goto L_00639A68; }
    s3 = 0; goto L_00639A68;
L_00639A58:;
    v0 = (*(volatile s16 *) (u32) (a1 + 2));
    if (v0 != 0) { s3 = (s32) ((u32) v0 + 0x4U); goto L_00639A68; }
    s3 = 1;
L_00639A68:;
    a0 = s3;
    s2 = (s32) ((u32) s0 + 0x20cU); v0 = func_0024D950(a0);
    s1 = v0;
    a0 = (s32) ((u32) s0 + 0x3c0U);
    a1 = (s32) ((u32) sp + 0x50U); func_002209F0(a0, a1);
    a0 = (s32) ((u32) s1 + 0x4U);
    a1 = (s32) ((u32) sp + 0x50U);
    a2 = 46; memcpy(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) s2);
    a0 = s3;
    a1 = 1;
    (*(volatile u8 *) (u32) (s1 + 2)) = (u8) v0;
    v0 = (*(volatile s8 *) (u32) (s2 + 2));
    (*(volatile u8 *) (u32) (s1 + 3)) = (u8) v0;
    v0 = (*(volatile s8 *) (u32) (s2 + 1));
    (*(volatile u8 *) (u32) (s1 + 50)) = (u8) v0;
    v0 = (*(volatile s8 *) (u32) (s2 + 3));
    (*(volatile u8 *) (u32) (s1 + 51)) = (u8) v0; func_0024DC00(a0, a1);
    return;
}
