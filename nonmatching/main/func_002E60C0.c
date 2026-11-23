/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF900(s32, s32);
s32 func_001F08B0(s32);
void func_001F1810(s32, s32);
void func_001F1860(s32, s32);
void func_001F18D0(s32, s32);
void func_001F1950(s32, s32, s32, s32);
s32 func_001F1A20(s32, s32, s32, s32);
void func_001F3D10(s32, s32);
void func_001F3D80(s32, s32, s32);
void func_0020E310(s32, s32);
void func_002E6390(s32);
void memcpy(s32, s32, s32);

void func_002E60C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    { s32 c_ = a1 == 0; s0 = a0; if (c_) goto L_002E60E8; }
    v1 = 7;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v1; goto L_002E6374;
L_002E60E8:;
    v1 = 7;
    v0 = 2;
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) s0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 != v0) { v0 = (s32) 0x650000U; goto L_002E6214; }
    v0 = (s32) 0x650000U;
    a0 = v0 | 0x39; v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) sp + 0x70U);
    { s32 c_ = a0 == 0; v1 = 8; if (c_) goto L_002E6138; }
L_002E611C:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_002E611C;
L_002E6138:;
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    if (a0 != 0) { a1 = v0; goto L_002E61C4; }
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = 2;
    a0 = (*(volatile s32 *) (u32) a0);
    if (a0 != v1) { a1 = 33; goto L_002E615C; }
    a1 = 23;
L_002E615C:;
    a0 = (*(volatile s32 *) (u32) (s0 + 24));
    a2 = (s32) ((u32) sp + 0x70U);
    a3 = v0; v0 = func_001F1A20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) v0;
    a0 = v0;
    a1 = 16; func_001F1860(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = 2; func_001F1810(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s0 + 16));
    if (v0 != 0) { a0 = 3; goto L_002E61A8; }
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x7cU); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32)); goto L_002E61B4;
L_002E61A8:;
    a1 = (s32) ((u32) sp + 0x7cU); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
L_002E61B4:;
    a1 = (s32) ((u32) sp + 0x7cU); func_001F18D0(a0, a1);
    v1 = (*(volatile s32 *) (u32) s0); goto L_002E61D0;
L_002E61C4:;
    func_001F1950(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) s0);
L_002E61D0:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x36f0U);
    a0 = (s32) ((u32) sp + 0x50U);
    a2 = 16;
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 4);
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = (s32) ((u32) sp + 0x50U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = 1; func_001F3D10(a0, a1);
    s2 = 0; goto L_002E631C;
L_002E6214:;
    a0 = v0 | 0x3d; v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) sp + 0x68U);
    { s32 c_ = a0 == 0; v1 = 8; if (c_) goto L_002E6244; }
L_002E6228:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_002E6228;
L_002E6244:;
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    if (a0 != 0) { a1 = v0; goto L_002E62D0; }
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = 2;
    a0 = (*(volatile s32 *) (u32) a0);
    if (a0 != v1) { a1 = 33; goto L_002E6268; }
    a1 = 23;
L_002E6268:;
    a0 = (*(volatile s32 *) (u32) (s0 + 24));
    a2 = (s32) ((u32) sp + 0x68U);
    a3 = v0; v0 = func_001F1A20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) v0;
    a0 = v0;
    a1 = 16; func_001F1860(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = 2; func_001F1810(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s0 + 16));
    if (v0 != 0) { a0 = 3; goto L_002E62B4; }
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x78U); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32)); goto L_002E62C0;
L_002E62B4:;
    a1 = (s32) ((u32) sp + 0x78U); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
L_002E62C0:;
    a1 = (s32) ((u32) sp + 0x78U); func_001F18D0(a0, a1);
    v1 = (*(volatile s32 *) (u32) s0); goto L_002E62DC;
L_002E62D0:;
    func_001F1950(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) s0);
L_002E62DC:;
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
L_002E631C:;
    s1 = s0;
L_002E6320:;
    a0 = (*(volatile s32 *) (u32) (s1 + 56));
    a1 = 0; func_001EF900(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002E6320; }
    s2 = 0;
    s1 = s0;
L_002E6344:;
    a0 = (*(volatile s32 *) (u32) (s1 + 72));
    a1 = 0; func_001EF900(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002E6344; }
    a0 = (*(volatile s32 *) (u32) (s0 + 36));
    a1 = 0; func_001EF900(a0, a1);
    a0 = s0; func_002E6390(a0);
L_002E6374:;
    return;
}
