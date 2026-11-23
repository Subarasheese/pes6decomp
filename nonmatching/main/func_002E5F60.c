/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF900(s32, s32);
void func_001F3D10(s32, s32);

void func_002E5F60(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    at = a1 < 8;
    { s32 c_ = at != 0; s0 = a0; if (c_) goto L_002E5F88; }
    v1 = 7; goto L_002E5F98;
L_002E5F88:;
    if (a1 >= 0) { v1 = a1; goto L_002E5F98; }
    v1 = 0; goto L_002E5F98;
L_002E5F98:;
    at = (u64) a1 < (u64) (s64) 7;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v1; if (c_) goto L_002E6088; }
    a0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffc780U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x2e5fc0U) goto L_002E5FC0; if (t_ == 0x2e6018U) goto L_002E6018; if (t_ == 0x2e6068U) goto L_002E6068; }
L_002E5FC0:;
    s2 = 0;
    s1 = s0;
L_002E5FC8:;
    v0 = (*(volatile u8 *) (u32) (s0 + 20));
    a0 = (*(volatile s32 *) (u32) (s1 + 56));
    a1 = v0 & 0x1; func_001EF900(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002E5FC8; }
    s2 = 0;
    s1 = s0;
L_002E5FF0:;
    v0 = (*(volatile u8 *) (u32) (s0 + 20));
    a0 = (*(volatile s32 *) (u32) (s1 + 72));
    a1 = v0 & 0x1; func_001EF900(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002E5FF0; }
    a0 = (*(volatile s32 *) (u32) (s0 + 36)); goto L_002E6098;
L_002E6018:;
    s2 = 0;
    s1 = s0;
L_002E6020:;
    a0 = (*(volatile s32 *) (u32) (s1 + 56));
    a1 = 0; func_001EF900(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002E6020; }
    s2 = 0;
    s1 = s0;
L_002E6044:;
    a0 = (*(volatile s32 *) (u32) (s1 + 72));
    a1 = 0; func_001EF900(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002E6044; }
    goto L_002E6094;
L_002E6068:;
    a0 = (*(volatile s32 *) (u32) (s0 + 52));
    a1 = 0; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 68));
    a1 = 0; func_001F3D10(a0, a1);
    goto L_002E6094;
L_002E6088:;
    v1 = 7;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v1; goto L_002E60A0;
L_002E6094:;
    a0 = (*(volatile s32 *) (u32) (s0 + 36));
L_002E6098:;
    a1 = 0; func_001EF900(a0, a1);
L_002E60A0:;
    return;
}
