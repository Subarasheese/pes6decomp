/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF900(s32, s32);
s32 func_001F08B0(s32);
void func_001F3D10(s32, s32);
void func_002E7450(s32, s32);
void func_002E75F0(s32, s32, s32, s32);
void func_002E77F0(s32, s32);
void func_002E79A0(s32, s32);
void func_002E7BA0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002E82D0(s32, s32, s32, s32, s32, s32, s32);
void memcpy(s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_002E5A90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    at = (u64) v1 < (u64) (s64) 8;
    { s32 c_ = at == 0; s0 = a1; if (c_) goto L_002E5D20; }
    a2 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 << 2);
    a2 = (s32) ((u32) a2 + 0xffffc760U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x2e5ad0U) goto L_002E5AD0; if (t_ == 0x2e5ae4U) goto L_002E5AE4; if (t_ == 0x2e5af8U) goto L_002E5AF8; if (t_ == 0x2e5b08U) goto L_002E5B08; if (t_ == 0x2e5b18U) goto L_002E5B18; if (t_ == 0x2e5b28U) goto L_002E5B28; if (t_ == 0x2e5c28U) goto L_002E5C28; if (t_ == 0x2e5d18U) goto L_002E5D18; }
L_002E5AD0:;
    a2 = s0;
    a1 = 99; func_002E7BA0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_002E5D24;
L_002E5AE4:;
    a2 = s0;
    a1 = 8; func_002E7BA0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_002E5D20;
L_002E5AF8:;
    func_002E79A0(a0, a1);
    goto L_002E5D20;
L_002E5B08:;
    func_002E77F0(a0, a1);
    goto L_002E5D20;
L_002E5B18:;
    func_002E75F0(a0, a1, a2, a3);
    goto L_002E5D20;
L_002E5B28:;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 16));
    if (v0 == 0) { s0 = (s32) ((u32) s0 << 4); goto L_002E5B5C; }
    v0 = (*(volatile s32 *) (u32) (v1 + 4));
    if (v0 != 0) { v0 = (s32) ((u32) s0 << 4); goto L_002E5B9C; }
    v0 = 1;
    if (s0 != v0) goto L_002E5B98;
    s0 = (s32) ((u32) s0 << 4);
L_002E5B5C:;
    v0 = (s32) ((u32) s0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 52));
    a1 = 0; func_001F3D10(a0, a1);
    s0 = (s32) ((u32) s1 + (u32) s0);
    s1 = 0;
L_002E5B74:;
    a0 = (*(volatile s32 *) (u32) (s0 + 56));
    a1 = 0; func_001EF900(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 2;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_002E5B74; }
    goto L_002E5D20;
L_002E5B98:;
    v0 = (s32) ((u32) s0 << 4);
L_002E5B9C:;
    a1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (s32) ((u32) sp + 0x58U);
    a2 = (*(volatile s32 *) (u32) (v0 + 48));
    a1 = (s32) ((u32) a1 + 0xffffc750U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) s1);
    { s32 c_ = s0 != 0; v0 = (*(volatile s32 *) (u32) v0); if (c_) goto L_002E5BE4; }
    v1 = (s32) ((u32) v0 << 4);
    a0 = (s32) ((u32) sp + 0x40U);
    v0 = (s32) 0x3b0000U;
    a2 = 16;
    v0 = (s32) ((u32) v0 + 0x3780U);
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    a0 = s1; goto L_002E5C04;
L_002E5BE4:;
    v1 = (s32) ((u32) v0 << 4);
    a0 = (s32) ((u32) sp + 0x40U);
    v0 = (s32) 0x3b0000U;
    a2 = 16;
    v0 = (s32) ((u32) v0 + 0x37b0U);
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    a0 = s1;
L_002E5C04:;
    a1 = s0;
    a2 = (s32) ((u32) sp + 0x58U);
    a3 = (s32) ((u32) sp + 0x40U);
    a4 = 18;
    a5 = 0;
    a6 = 0; func_002E82D0(a0, a1, a2, a3, a4, a5, a6);
    goto L_002E5D20;
L_002E5C28:;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 16));
    if (v0 == 0) { s0 = (s32) ((u32) s0 << 4); goto L_002E5C5C; }
    v0 = (*(volatile s32 *) (u32) (v1 + 4));
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) v1); goto L_002E5C9C; }
    v0 = 1;
    if (s0 != v0) goto L_002E5C98;
    s0 = (s32) ((u32) s0 << 4);
L_002E5C5C:;
    v0 = (s32) ((u32) s0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 52));
    a1 = 0; func_001F3D10(a0, a1);
    s0 = (s32) ((u32) s1 + (u32) s0);
    s1 = 0;
L_002E5C74:;
    a0 = (*(volatile s32 *) (u32) (s0 + 56));
    a1 = 0; func_001EF900(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 2;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_002E5C74; }
    goto L_002E5D20;
L_002E5C98:;
    v0 = (*(volatile s32 *) (u32) v1);
L_002E5C9C:;
    if (s0 != 0) { v1 = (s32) ((u32) v0 << 4); goto L_002E5CC8; }
    v1 = (s32) ((u32) v0 << 4);
    a0 = (s32) ((u32) sp + 0x30U);
    v0 = (s32) 0x3b0000U;
    a2 = 16;
    v0 = (s32) ((u32) v0 + 0x3780U);
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    v0 = (s32) ((u32) s0 << 4); goto L_002E5CE4;
L_002E5CC8:;
    a0 = (s32) ((u32) sp + 0x30U);
    v0 = (s32) 0x3b0000U;
    a2 = 16;
    v0 = (s32) ((u32) v0 + 0x37b0U);
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    v0 = (s32) ((u32) s0 << 4);
L_002E5CE4:;
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 48)); v0 = func_001F08B0(a0);
    a0 = s1;
    a1 = s0;
    a2 = v0;
    a3 = (s32) ((u32) sp + 0x30U);
    a4 = 18;
    a5 = 0;
    a6 = 0; func_002E82D0(a0, a1, a2, a3, a4, a5, a6);
    goto L_002E5D20;
L_002E5D18:;
    func_002E7450(a0, a1);
L_002E5D20:;
L_002E5D24:;
    return;
}
