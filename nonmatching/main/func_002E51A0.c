/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
void func_001F1810(s32, s32);
void func_001F1860(s32, s32);
void func_001F18D0(s32, s32);
void func_001F1950(s32, s32, s32, s32);
s32 func_001F1A20(s32, s32, s32, s32);
void func_001F3D10(s32, s32);
void func_001F3D80(s32, s32, s32);
void func_0020E310(s32, s32);
void memcpy(s32, s32, s32);

s32 func_002E51A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    a0 = a1; v0 = func_001F08B0(a0);
    { s32 c_ = s0 == 0; a3 = v0; if (c_) goto L_002E52D0; }
    if (a3 == 0) { ; goto L_002E52D4; }
    a0 = (*(volatile s32 *) (u32) (s0 + 8));
    v1 = 6;
    if (a0 != v1) goto L_002E52D0;
    v1 = (s32) ((u32) sp + 0x30U);
    { s32 c_ = v1 == 0; v0 = 8; if (c_) goto L_002E5200; }
L_002E51E4:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_002E51E4;
L_002E5200:;
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    if (a0 != 0) { a1 = a3; goto L_002E5288; }
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = 2;
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 != v0) { a1 = 33; goto L_002E5224; }
    a1 = 23;
L_002E5224:;
    a0 = (*(volatile s32 *) (u32) (s0 + 24));
    a2 = (s32) ((u32) sp + 0x30U); v0 = func_001F1A20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) v0;
    a0 = v0;
    a1 = 16; func_001F1860(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = 2; func_001F1810(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s0 + 16));
    if (v0 != 0) { a0 = 3; goto L_002E526C; }
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x3cU); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32)); goto L_002E5278;
L_002E526C:;
    a1 = (s32) ((u32) sp + 0x3cU); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
L_002E5278:;
    a1 = (s32) ((u32) sp + 0x3cU); func_001F18D0(a0, a1);
    v1 = (*(volatile s32 *) (u32) s0); goto L_002E5294;
L_002E5288:;
    func_001F1950(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) s0);
L_002E5294:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x36f0U);
    a0 = (s32) ((u32) sp + 0x20U);
    a2 = 16;
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 4);
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = (s32) ((u32) sp + 0x20U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = 1; func_001F3D10(a0, a1);
L_002E52D0:;
L_002E52D4:;
    return v0;
}
