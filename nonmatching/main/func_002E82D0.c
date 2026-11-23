/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F16E0(s32, s32);
void func_001F1810(s32, s32);
void func_001F1860(s32, s32);
void func_001F18D0(s32, s32);
void func_001F1910(s32, s32, s32, s32);
void func_001F1950(s32, s32, s32, s32);
s32 func_001F1A10(s32, s32, s32, s32, s32, s32);
void func_001F3D10(s32, s32);
void func_001F3D80(s32, s32, s32);
void func_0020E310(s32, s32);

void func_002E82D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v0 = 8;
    v1 = (s32) ((u32) sp + 0x70U);
    s5 = a0;
    s4 = a3;
    s3 = a4;
    s2 = a5;
    if (v1 == 0) goto L_002E8328;
L_002E830C:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_002E830C;
L_002E8328:;
    if (a6 == 0) goto L_002E8338;
    s1 = a6; goto L_002E8340;
L_002E8338:;
    s1 = (s32) 0x3b0000U;
    s1 = (s32) ((u32) s1 + 0x38d0U);
L_002E8340:;
    v0 = (s32) ((u32) a1 << 4);
    v0 = (s32) ((u32) v0 + (u32) s5);
    a0 = (*(volatile s32 *) (u32) (v0 + 52));
    { s32 c_ = a0 != 0; s0 = (s32) ((u32) v0 + 0x34U); if (c_) goto L_002E83C8; }
    v1 = (*(volatile s32 *) (u32) s5);
    v0 = 2;
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 != v0) { a1 = 33; goto L_002E838C; }
    v1 = (*(volatile s32 *) (u32) (s5 + 4));
    if (v1 == 0) goto L_002E8388;
    v0 = 1;
    if (v1 == v0) goto L_002E8388;
    a1 = 23; goto L_002E838C;
L_002E8388:;
    a1 = 33;
L_002E838C:;
    a0 = (*(volatile s32 *) (u32) (s5 + 24));
    a3 = a2;
    a5 = s1;
    a2 = (s32) ((u32) sp + 0x70U);
    a4 = s2; v0 = func_001F1A10(a0, a1, a2, a3, a4, a5);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    a0 = v0;
    a1 = 2; func_001F1810(a0, a1);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0x70U); func_001F16E0(a0, a1);
    goto L_002E83E0;
L_002E83C8:;
    a1 = a2; func_001F1950(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s0);
    a2 = s1;
    a1 = s2; func_001F1910(a0, a1, a2, a3);
L_002E83E0:;
    if (s2 != 0) goto L_002E8408;
    v0 = (*(volatile s32 *) (u32) (s5 + 16));
    if (v0 != 0) goto L_002E8408;
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x7cU); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) s0); goto L_002E8430;
L_002E8408:;
    if (s2 != 0) { a0 = 0; goto L_002E8424; }
    a0 = 3;
    a1 = (s32) ((u32) sp + 0x7cU); func_0020E310(a0, a1);
    goto L_002E842C;
L_002E8424:;
    a1 = (s32) ((u32) sp + 0x7cU); func_0020E310(a0, a1);
L_002E842C:;
    a0 = (*(volatile s32 *) (u32) s0);
L_002E8430:;
    a1 = (s32) ((u32) sp + 0x7cU); func_001F18D0(a0, a1);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = s3; func_001F1860(a0, a1);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = s4;
    a2 = 0; func_001F3D80(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s5 + 20));
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = v0 & 0x1; func_001F3D10(a0, a1);
    return;
}
