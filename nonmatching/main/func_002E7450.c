/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF900(s32, s32);
s32 func_001F08B0(s32);
void func_001F3D10(s32, s32);
void func_002E82D0(s32, s32, s32, s32, s32, s32, s32);
void memcpy(s32, s32, s32);

void func_002E7450(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s3 = a1;
    s1 = (s32) ((u32) s3 << 2);
    v0 = (*(volatile s32 *) (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 16));
    { s32 c_ = v0 == 0; s4 = a0; if (c_) goto L_002E7494; }
    v0 = (*(volatile u8 *) (u32) v0);
    a0 = v0 & 0x1; goto L_002E7498;
L_002E7494:;
    a0 = 0;
L_002E7498:;
    s0 = (s32) ((u32) s3 << 4);
    v0 = (s32) ((u32) s0 + (u32) s4);
    v1 = (*(volatile s32 *) (u32) (v0 + 48));
    if (v1 != 0) { v0 = 1; goto L_002E74C8; }
    if (a0 != 0) { v0 = (s32) 0x6c0000U; goto L_002E74C0; }
    v0 = (s32) 0x6c0000U;
    a0 = v0 | 0x71; goto L_002E74F0;
L_002E74C0:;
    a0 = v0 | 0x70; goto L_002E74F0;
L_002E74C8:;
    if (v1 != v0) { v0 = (s32) 0x6c0000U; goto L_002E74EC; }
    if (a0 != 0) { v0 = (s32) 0x6c0000U; goto L_002E74E4; }
    v0 = (s32) 0x6c0000U;
    a0 = v0 | 0x72; goto L_002E74F0;
L_002E74E4:;
    a0 = v0 | 0x73; goto L_002E74F0;
L_002E74EC:;
    a0 = v0 | 0x74;
L_002E74F0:;
    v0 = func_001F08B0(a0);
    v1 = (*(volatile s32 *) (u32) s4);
    s2 = v0;
    v0 = (s32) ((u32) v1 + (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 16));
    if (v0 == 0) { v0 = (s32) ((u32) s0 + (u32) s4); goto L_002E752C; }
    v0 = (*(volatile s32 *) (u32) (v1 + 4));
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) v1); goto L_002E7568; }
    v0 = 1;
    if (s3 != v0) goto L_002E7564;
    v0 = (s32) ((u32) s0 + (u32) s4);
L_002E752C:;
    a0 = (*(volatile s32 *) (u32) (v0 + 52));
    a1 = 0; func_001F3D10(a0, a1);
    s0 = (s32) ((u32) s4 + (u32) s0);
    s1 = 0;
L_002E7540:;
    a0 = (*(volatile s32 *) (u32) (s0 + 56));
    a1 = 0; func_001EF900(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 2;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_002E7540; }
    goto L_002E75D0;
L_002E7564:;
    v0 = (*(volatile s32 *) (u32) v1);
L_002E7568:;
    if (s3 != 0) { v1 = (s32) ((u32) v0 << 4); goto L_002E7594; }
    v1 = (s32) ((u32) v0 << 4);
    a0 = (s32) ((u32) sp + 0x60U);
    v0 = (s32) 0x3b0000U;
    a2 = 16;
    v0 = (s32) ((u32) v0 + 0x3780U);
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    a0 = s4; goto L_002E75B0;
L_002E7594:;
    a0 = (s32) ((u32) sp + 0x60U);
    v0 = (s32) 0x3b0000U;
    a2 = 16;
    v0 = (s32) ((u32) v0 + 0x37b0U);
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    a0 = s4;
L_002E75B0:;
    a1 = s3;
    a2 = s2;
    a3 = (s32) ((u32) sp + 0x60U);
    a4 = 18;
    a5 = 0;
    a6 = 0; func_002E82D0(a0, a1, a2, a3, a4, a5, a6);
L_002E75D0:;
    return;
}
