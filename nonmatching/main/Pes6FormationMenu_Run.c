/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(s32);
s32 Pes6FormationMenu_Close(s32, s32, s32, s32);
s32 Pes6FormationMenu_Update(s32, s32, s32, s32);
s32 Pes6Module_Load(s32);
s32 Pes6Scene_Get(s32);
s32 func_001E6E10(s32);
s32 func_001FC780(s32, s32);
s32 func_0023F330(s32, s32, s32, s32);
s32 func_002472F0(s32, s32, s32, s32);
s32 func_0026B250(s32, s32, s32, s32);
s32 func_0028CD80(s32, s32, s32);
s32 func_003626D0(s32, s32, s32, s32, s32);
s32 func_008B7960(s32, s32, s32, s32);

s32 Pes6FormationMenu_Run(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v0 = (*(volatile s8 *) (u32) (gp + -22732));
    at = (u64) v0 < (u64) (s64) 7;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_00240C04; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8b10U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x24091cU) goto L_0024091C; if (t_ == 0x2409a0U) goto L_002409A0; if (t_ == 0x240a0cU) goto L_00240A0C; if (t_ == 0x240a24U) goto L_00240A24; if (t_ == 0x240b18U) goto L_00240B18; if (t_ == 0x240b5cU) goto L_00240B5C; if (t_ == 0x240b84U) goto L_00240B84; }
L_0024091C:;
    a2 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (gp + -22724)) = (u8) 0;
    a3 = 0;
    a2 = (s32) ((u32) a2 + 0xffffa200U);
    a0 = 1;
    v1 = 2;
L_00240934:;
    a1 = (*(volatile s8 *) (u32) (a2 + 1));
    if (a1 <= 0) { v0 = (s32) ((u32) 0 - (u32) a1); goto L_0024094C; }
    v0 = a1; goto L_0024094C;
    v0 = (s32) ((u32) 0 - (u32) a1);
L_0024094C:;
    if (v0 == a0) goto L_00240970;
    if (a1 <= 0) { a1 = (s32) ((u32) 0 - (u32) a1); goto L_00240968; }
    goto L_00240968;
    a1 = (s32) ((u32) 0 - (u32) a1);
L_00240968:;
    if (a1 != v1) goto L_00240980;
L_00240970:;
    v0 = (*(volatile s8 *) (u32) (a2 + 2));
    if (v0 != 0) goto L_00240980;
    (*(volatile u8 *) (u32) (gp + -22724)) = (u8) a0;
L_00240980:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < 8;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x34U); if (c_) goto L_00240934; }
    v0 = (*(volatile s8 *) (u32) (gp + -22732));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -22732)) = (u8) v0; goto L_00240C04;
L_002409A0:;
    a0 = 0; v0 = Pes6Scene_Get(a0);
    v0 = v0 ^ 0x8;
    v0 = (u64) v0 < (u64) (s64) 1;
    if (v0 == 0) { v1 = (s32) ((u32) v0 << 3); goto L_002409E4; }
    v0 = func_0026B250(a0, a1, a2, a3);
    v0 = v0 ^ 0x3;
    v0 = (u64) v0 < (u64) (s64) 1;
    if (v0 != 0) goto L_002409E0;
    v0 = func_0026B250(a0, a1, a2, a3);
    v0 = v0 ^ 0x4;
    v0 = (u64) v0 < (u64) (s64) 1;
L_002409E0:;
    v1 = (s32) ((u32) v0 << 3);
L_002409E4:;
    a1 = 1;
    v0 = (s32) 0x3b0000U;
    a2 = 0;
    v0 = (s32) ((u32) v0 + 0xffff9f50U);
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_003626D0(a0, a1, a2, a3, a4);
    v0 = (*(volatile s8 *) (u32) (gp + -22732));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -22732)) = (u8) v0; goto L_00240C04;
L_00240A0C:;
    a0 = 4; v0 = Pes6Module_Load(a0);
    v0 = (*(volatile s8 *) (u32) (gp + -22732));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -22732)) = (u8) v0; goto L_00240C04;
L_00240A24:;
    v0 = Pes6File_AllChannelsIdle(a0);
    s0 = 1;
    if (v0 != s0) { v0 = s1; goto L_00240C08; }
    v0 = (s32) 0x510000U;
    v1 = 14;
    a0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (a0 == v1) { s0 = 4; goto L_00240A94; }
    v0 = 8;
    if (a0 == v0) goto L_00240A94;
    goto L_00240A6C;
    s0 = 4;
    goto L_00240A94;
L_00240A6C:;
    v0 = (s32) 0x590000U;
    v1 = 5;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) { s0 = 3; goto L_00240A94; }
    v0 = func_0028CD80(a0, a1, a2);
    s0 = 5; goto L_00240A94;
    s0 = 3;
L_00240A94:;
    v0 = (s32) 0x590000U;
    v1 = 7;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) { v0 = (*(volatile s8 *) (u32) (gp + -22736)); goto L_00240AB4; }
    s0 = s0 | 0x10; goto L_00240AC8;
    v0 = (*(volatile s8 *) (u32) (gp + -22736));
L_00240AB4:;
    if (v0 == 0) { s0 = s0 | 0x10; goto L_00240AC8; }
    s0 = s0 | 0x30; goto L_00240AC8;
    s0 = s0 | 0x10;
L_00240AC8:;
    v0 = func_0023F330(a0, a1, a2, a3);
    a0 = v0; v0 = func_001E6E10(a0);
    if (v0 == 0) { a0 = s0; goto L_00240B00; }
    v0 = func_0023F330(a0, a1, a2, a3);
    a0 = s0;
    a1 = v0; v0 = func_008B7960(a0, a1, a2, a3);
    v0 = (*(volatile s8 *) (u32) (gp + -22732)); goto L_00240B0C;
    a0 = s0;
L_00240B00:;
    a1 = -1; v0 = func_008B7960(a0, a1, a2, a3);
    v0 = (*(volatile s8 *) (u32) (gp + -22732));
L_00240B0C:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -22732)) = (u8) v0; goto L_00240C04;
L_00240B18:;
    v0 = Pes6FormationMenu_Update(a0, a1, a2, a3);
    if (v0 == 0) goto L_00240C04;
    v0 = Pes6FormationMenu_Close(a0, a1, a2, a3);
    a0 = 0; v0 = Pes6Scene_Get(a0);
    v1 = 5;
    if (v0 == v1) { v0 = (*(volatile s8 *) (u32) (gp + -22732)); goto L_00240B50; }
    a0 = 4; v0 = func_001FC780(a0, a1);
    v0 = (*(volatile s8 *) (u32) (gp + -22732));
L_00240B50:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -22732)) = (u8) v0; goto L_00240C04;
L_00240B5C:;
    a0 = 0; v0 = Pes6Scene_Get(a0);
    v1 = 5;
    if (v0 == v1) { v0 = (*(volatile s8 *) (u32) (gp + -22732)); goto L_00240B7C; }
    a0 = 3; v0 = Pes6Module_Load(a0);
    v0 = (*(volatile s8 *) (u32) (gp + -22732));
L_00240B7C:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -22732)) = (u8) v0;
L_00240B84:;
    v0 = Pes6File_AllChannelsIdle(a0);
    v1 = 1;
    if (v0 != v1) goto L_00240C04;
    a2 = (s32) 0x590000U;
    v1 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (gp + -22724)) = (u8) 0;
    a3 = 0;
    a2 = (s32) ((u32) a2 + 0x2800U);
    v1 = (s32) ((u32) v1 + 0xffffa200U);
L_00240BB0:;
    a1 = (*(volatile u8 *) (u32) a2);
    at = a1 < 8;
    if (at == 0) goto L_00240BE0;
    v0 = (s32) ((u32) a1 << 1);
    a0 = (*(volatile u8 *) (u32) (a2 + 6));
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u8 *) (u32) (v0 + 51)) = (u8) a0;
L_00240BE0:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < 8;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x28U); if (c_) goto L_00240BB0; }
    a0 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 + 0xffffa200U); v0 = func_002472F0(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (gp + -22732)) = (u8) 0;
    s1 = 1;
L_00240C04:;
    v0 = s1;
L_00240C08:;
    return v0;
}
