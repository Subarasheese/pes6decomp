/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF900(s64, s64);
s64 func_001F08B0(s64);
void func_001F1810(s64, s64);
void func_001F1860(s64, s64);
void func_001F18D0(s64, s64);
void func_001F1950(s64, s64, s64, s64);
s64 func_001F1A20(s64, s64, s64, s64);
void func_001F3D10(s64, s64);
void func_001F3D80(s64, s64, s64);
void func_0020E310(s64, s64);
void func_002E79A0(s64, s64);
void memcpy(s64, s64, s64);

void func_002E6420(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[12];
    s64 sp = (s32) (u32) frame;

    { s32 c_ = a1 == 0; s0 = a0; if (c_) goto L_002E6448; }
    v1 = 7;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v1; goto L_002E6618;
L_002E6448:;
    v1 = 2;
    v0 = (s32) 0x250000U;
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v1;
    a0 = v0 | 0x32; v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) sp + 0x50U);
    { s32 c_ = a0 == 0; v1 = 8; if (c_) goto L_002E6484; }
L_002E6468:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_002E6468;
L_002E6484:;
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    if (a0 != 0) { a1 = v0; goto L_002E6510; }
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = 2;
    a0 = (*(volatile s32 *) (u32) a0);
    if (a0 != v1) { a1 = 33; goto L_002E64A8; }
    a1 = 23;
L_002E64A8:;
    a0 = (*(volatile s32 *) (u32) (s0 + 24));
    a2 = (s32) ((u32) sp + 0x50U);
    a3 = v0; v0 = func_001F1A20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) v0;
    a0 = v0;
    a1 = 16; func_001F1860(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = 2; func_001F1810(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s0 + 16));
    if (v0 != 0) { a0 = 3; goto L_002E64F4; }
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x5cU); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32)); goto L_002E6500;
L_002E64F4:;
    a1 = (s32) ((u32) sp + 0x5cU); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
L_002E6500:;
    a1 = (s32) ((u32) sp + 0x5cU); func_001F18D0(a0, a1);
    v1 = (*(volatile s32 *) (u32) s0); goto L_002E651C;
L_002E6510:;
    func_001F1950(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) s0);
L_002E651C:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x36f0U);
    a0 = (s32) ((u32) sp + 0x40U);
    a2 = 16;
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 4);
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = 1; func_001F3D10(a0, a1);
    s2 = 0;
    s1 = s0;
L_002E6560:;
    a0 = (*(volatile s32 *) (u32) (s1 + 56));
    a1 = 0; func_001EF900(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002E6560; }
    s2 = 0;
    s1 = s0;
L_002E6584:;
    a0 = (*(volatile s32 *) (u32) (s1 + 72));
    a1 = 0; func_001EF900(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002E6584; }
    a0 = (*(volatile s32 *) (u32) (s0 + 36));
    a1 = 0; func_001EF900(a0, a1);
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = (*(volatile s32 *) (u32) (v0 + 16));
    if (v1 != 0) { v0 = (*(volatile s32 *) (u32) (v0 + 20)); goto L_002E65C8; }
    a0 = 0;
    v1 = 0; goto L_002E65F8;
L_002E65C8:;
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (v1 + 28)); goto L_002E65E4; }
    v0 = (*(volatile u8 *) (u32) (v1 + 28));
    v0 = (s64) ((u64) v0 << 56);
    v1 = 0;
    a0 = (s64) ((u64) v0 >> 62); goto L_002E65F8;
L_002E65E4:;
    v0 = (*(volatile u8 *) (u32) (v0 + 28));
    v1 = (s64) ((u64) v1 << 56);
    a0 = (s64) ((u64) v1 >> 62);
    v0 = (s64) ((u64) v0 << 56);
    v1 = (s64) ((u64) v0 >> 62);
L_002E65F8:;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) a0;
    a1 = 0;
    a0 = s0;
    (*(volatile u32 *) (u32) (s0 + 64)) = (u32) v1; func_002E79A0(a0, a1);
    a0 = s0;
    a1 = 1; func_002E79A0(a0, a1);
L_002E6618:;
    return;
}
