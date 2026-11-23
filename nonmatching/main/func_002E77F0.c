/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
void func_001F3D10(s32, s32);
void func_0020E310(s32, s32);
void func_002E82D0(s32, s32, s32, s32, s32, s32, s32);
void memcpy(s32, s32, s32);

void func_002E77F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s1 = a1;
    v1 = (*(volatile s32 *) (u32) a0);
    v0 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 16));
    { s32 c_ = v0 == 0; s2 = a0; if (c_) goto L_002E7838; }
    v0 = (*(volatile s32 *) (u32) (v1 + 4));
    if (v0 != 0) { v1 = (s32) ((u32) s1 << 4); goto L_002E7858; }
    v0 = 1;
    if (s1 != v0) goto L_002E7854;
L_002E7838:;
    v0 = (s32) ((u32) s1 << 4);
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) (v0 + 52));
    a1 = 0; func_001F3D10(a0, a1);
    goto L_002E7980;
L_002E7854:;
    v1 = (s32) ((u32) s1 << 4);
L_002E7858:;
    v0 = (s32) ((u32) v1 + (u32) s2);
    v0 = (*(volatile s32 *) (u32) (v0 + 48));
    at = v0 < 2;
    if (at != 0) goto L_002E7874;
    v0 = 1; goto L_002E7884;
L_002E7874:;
    if (v0 >= 0) goto L_002E7884;
    v0 = 0; goto L_002E7884;
L_002E7884:;
    a0 = (s32) ((u32) v1 + (u32) s2);
    (*(volatile u32 *) (u32) (a0 + 48)) = (u32) v0;
    v1 = 255;
    v0 = 64;
    (*(volatile u8 *) (u32) (sp + 88)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 89)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 90)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 91)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 95)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 92)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 93)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 94)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (a0 + 48));
    if (v0 != 0) { a0 = 8; goto L_002E78F8; }
    v1 = (*(volatile s32 *) (u32) s2);
    v0 = 2;
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == v0) { a0 = 0; goto L_002E78E8; }
    a0 = (*(volatile s32 *) (u32) (a0 + 52));
    a1 = 0; func_001F3D10(a0, a1);
    goto L_002E797C;
L_002E78E8:;
    a1 = (s32) ((u32) sp + 0x58U); func_0020E310(a0, a1);
    s0 = 0; goto L_002E7904;
L_002E78F8:;
    a1 = (s32) ((u32) sp + 0x58U); func_0020E310(a0, a1);
    s0 = 2;
L_002E7904:;
    v0 = (*(volatile s32 *) (u32) s2);
    { s32 c_ = s1 != 0; v0 = (*(volatile s32 *) (u32) v0); if (c_) goto L_002E7934; }
    v1 = (s32) ((u32) v0 << 4);
    a0 = (s32) ((u32) sp + 0x40U);
    v0 = (s32) 0x3b0000U;
    a2 = 16;
    v0 = (s32) ((u32) v0 + 0x3720U);
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    v0 = (s32) 0x250000U; goto L_002E7954;
L_002E7934:;
    v1 = (s32) ((u32) v0 << 4);
    a0 = (s32) ((u32) sp + 0x40U);
    v0 = (s32) 0x3b0000U;
    a2 = 16;
    v0 = (s32) ((u32) v0 + 0x3750U);
    a1 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    v0 = (s32) 0x250000U;
L_002E7954:;
    a0 = v0 | 0x36; v0 = func_001F08B0(a0);
    a0 = s2;
    a1 = s1;
    a5 = s0;
    a2 = v0;
    a3 = (s32) ((u32) sp + 0x40U);
    a4 = 2;
    a6 = (s32) ((u32) sp + 0x58U); func_002E82D0(a0, a1, a2, a3, a4, a5, a6);
L_002E797C:;
L_002E7980:;
    return;
}
