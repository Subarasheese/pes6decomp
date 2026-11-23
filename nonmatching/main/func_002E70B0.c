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
void func_002E7360(s32, s32, s32, s32, s32, s32, s32, s32);
void memcpy(s32, s32, s32);

void func_002E70B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    { s32 c_ = a1 < 0; s0 = a0; if (c_) goto L_002E70D0; }
    at = a1 < 29;
    if (at != 0) { v0 = a1 < 26; goto L_002E70DC; }
L_002E70D0:;
    v1 = 7;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v1; goto L_002E7348;
L_002E70DC:;
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) (s0 + 12)) = (u32) a1; if (c_) goto L_002E70F0; }
    v0 = 1;
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v0; goto L_002E70F4;
L_002E70F0:;
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) 0;
L_002E70F4:;
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = 2;
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 != v0) { v1 = (*(volatile s32 *) (u32) (s0 + 12)); goto L_002E7228; }
    v1 = (*(volatile s32 *) (u32) (s0 + 12));
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x39d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) sp + 0x50U);
    { s32 c_ = a0 == 0; v1 = 8; if (c_) goto L_002E714C; }
L_002E7130:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_002E7130;
L_002E714C:;
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    if (a0 != 0) { a1 = v0; goto L_002E71D8; }
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = 2;
    a0 = (*(volatile s32 *) (u32) a0);
    if (a0 != v1) { a1 = 33; goto L_002E7170; }
    a1 = 23;
L_002E7170:;
    a0 = (*(volatile s32 *) (u32) (s0 + 24));
    a2 = (s32) ((u32) sp + 0x50U);
    a3 = v0; v0 = func_001F1A20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) v0;
    a0 = v0;
    a1 = 16; func_001F1860(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = 2; func_001F1810(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s0 + 16));
    if (v0 != 0) { a0 = 3; goto L_002E71BC; }
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x5cU); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32)); goto L_002E71C8;
L_002E71BC:;
    a1 = (s32) ((u32) sp + 0x5cU); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
L_002E71C8:;
    a1 = (s32) ((u32) sp + 0x5cU); func_001F18D0(a0, a1);
    v1 = (*(volatile s32 *) (u32) s0); goto L_002E71E4;
L_002E71D8:;
    func_001F1950(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) s0);
L_002E71E4:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x36f0U);
    a0 = (s32) ((u32) sp + 0x30U);
    a2 = 16;
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 4);
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = 1; func_001F3D10(a0, a1);
    a0 = s0; goto L_002E7340;
L_002E7228:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x3950U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a0 = (s32) ((u32) sp + 0x48U);
    { s32 c_ = a0 == 0; v1 = 8; if (c_) goto L_002E7268; }
L_002E724C:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_002E724C;
L_002E7268:;
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    if (a0 != 0) { a1 = v0; goto L_002E72F4; }
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = 2;
    a0 = (*(volatile s32 *) (u32) a0);
    if (a0 != v1) { a1 = 33; goto L_002E728C; }
    a1 = 23;
L_002E728C:;
    a0 = (*(volatile s32 *) (u32) (s0 + 24));
    a2 = (s32) ((u32) sp + 0x48U);
    a3 = v0; v0 = func_001F1A20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) v0;
    a0 = v0;
    a1 = 16; func_001F1860(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = 2; func_001F1810(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s0 + 16));
    if (v0 != 0) { a0 = 3; goto L_002E72D8; }
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x58U); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32)); goto L_002E72E4;
L_002E72D8:;
    a1 = (s32) ((u32) sp + 0x58U); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
L_002E72E4:;
    a1 = (s32) ((u32) sp + 0x58U); func_001F18D0(a0, a1);
    v1 = (*(volatile s32 *) (u32) s0); goto L_002E7300;
L_002E72F4:;
    func_001F1950(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) s0);
L_002E7300:;
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
    a0 = s0;
L_002E7340:;
    func_002E7360(a0, a1, a2, a3, a4, a5, a6, a7);
L_002E7348:;
    return;
}
