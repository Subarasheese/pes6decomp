/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6FormationMenu_Run(void);
s32 Pes6GeneralSettings_Update(s32, s32, s32, s32);
s32 Pes6MatchSelect_AnyPadAssigned(void);
void Pes6MatchSetup_BuildLineups(s32, s32, s32, s32);
void Pes6MatchSide_SetupTeam(s32, s32, s32, s32);
s32 Pes6StripSelect_Update(s32, s32, s32, s32);
void SD_stop(s32);
void func_001B8DC0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_001FA5A0(s32, s32, s32, s32);
s32 func_0021FBC0(s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023F3A0(s32, s32, s32, s32);
void func_0023F510(s32, s32, s32, s32);
void func_0023FC70(void);
void func_002472F0(s32, s32, s32, s32);
s32 func_0024A380(s32, s32, s32, s32);
void func_00361A10(void);
void func_00361EF0(s32, s32, s32);
void func_008B34C0(s32, s32, s32, s32);
s32 func_00930080(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00934710(s32);
void func_00943240(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
s32 func_009432F0(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);

void Pes6SelectMenu_ExhibitionSetup(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    a1 = (*(volatile s32 *) (u32) (gp + -18828));
    at = (u64) a1 < (u64) (s64) 8;
    if (at == 0) goto L_00930FF0;
    a0 = (s32) 0x960000U;
    v1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + 0x62f0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x930ce0U) goto L_00930CE0; if (t_ == 0x930d30U) goto L_00930D30; if (t_ == 0x930d8cU) goto L_00930D8C; if (t_ == 0x930decU) goto L_00930DEC; if (t_ == 0x930df8U) goto L_00930DF8; if (t_ == 0x930e2cU) goto L_00930E2C; if (t_ == 0x930e90U) goto L_00930E90; if (t_ == 0x930fb0U) goto L_00930FB0; }
L_00930CE0:;
    v0 = func_0024A380(a0, a1, a2, a3);
    v1 = 1;
    if (v0 == v1) { (*(volatile u32 *) (u32) (gp + -18828)) = (u32) 0; goto L_00930D20; }
    v1 = 2;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) (gp + -18828)); goto L_00930D08; }
    goto L_00930FF4;
L_00930D08:;
    a0 = 3;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18828)) = (u32) v0; func_0023F510(a0, a1, a2, a3);
    goto L_00930FF0;
L_00930D20:;
    func_0023FC70();
    goto L_00930FF0;
L_00930D30:;
    v0 = func_009432F0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    v1 = 1;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) (gp + -18828)); goto L_00930D74; }
    a0 = 2;
    if (v0 == a0) goto L_00930D58;
    goto L_00930FF0;
L_00930D58:;
    v1 = (s32) 0x540000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -15592));
    if (v1 != 0) { (*(volatile u32 *) (u32) (gp + -18828)) = (u32) a0; goto L_00930FF0; }
    v1 = 4;
    (*(volatile u32 *) (u32) (gp + -18828)) = (u32) v1; goto L_00930FF0;
L_00930D74:;
    a0 = 9;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) (gp + -18828)) = (u32) v0; func_0023F510(a0, a1, a2, a3);
    goto L_00930FF0;
L_00930D8C:;
    v0 = func_00930080(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 == v1) goto L_00930DD4;
    v1 = 2;
    if (v0 == v1) goto L_00930DB4;
    goto L_00930FF0;
L_00930DB4:;
    func_00943240(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = 30; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile s32 *) (u32) (gp + -18828));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18828)) = (u32) v1; goto L_00930FF0;
L_00930DD4:;
    func_00943240(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) (gp + -18828));
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) (gp + -18828)) = (u32) v1; goto L_00930FF0;
L_00930DEC:;
    v1 = (s32) ((u32) a1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18828)) = (u32) v1; goto L_00930FF0;
L_00930DF8:;
    v0 = Pes6StripSelect_Update(a0, a1, a2, a3);
    v1 = 1;
    if (v0 == v1) { (*(volatile u32 *) (u32) (gp + -18828)) = (u32) v1; goto L_00930FF0; }
    v1 = 2;
    if (v0 == v1) { v1 = (*(volatile s32 *) (u32) (gp + -18828)); goto L_00930E20; }
    goto L_00930FF0;
L_00930E20:;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18828)) = (u32) v1; goto L_00930FF0;
L_00930E2C:;
    v0 = Pes6GeneralSettings_Update(a0, a1, a2, a3);
    v1 = 1;
    if (v0 == v1) { v1 = (*(volatile s32 *) (u32) (gp + -18828)); goto L_00930E84; }
    v1 = 2;
    if (v0 == v1) goto L_00930E54;
    goto L_00930FF0;
L_00930E54:;
    v1 = (s32) 0x590000U;
    a0 = 7;
    v1 = (*(volatile u8 *) (u32) (v1 + 7177));
    if (v1 == a0) { v1 = 6; goto L_00930E7C; }
    a0 = 3;
    v1 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (gp + -18828)) = (u32) 0;
    (*(volatile u16 *) (u32) (v1 + -15614)) = (u16) a0; goto L_00930FF0;
L_00930E7C:;
    (*(volatile u32 *) (u32) (gp + -18828)) = (u32) v1; goto L_00930FF0;
L_00930E84:;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) (gp + -18828)) = (u32) v1; goto L_00930FF0;
L_00930E90:;
    v0 = Pes6MatchSelect_AnyPadAssigned();
    v1 = 1;
    if (v0 != v1) { v0 = (s32) 0x9a080000U; goto L_00930F94; }
    func_008B34C0(a0, a1, a2, a3);
    func_001B8DC0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 31; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    func_0023F3A0(a0, a1, a2, a3);
    Pes6MatchSetup_BuildLineups(a0, a1, a2, a3);
    func_001FA5A0(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    a1 = (*(volatile u16 *) (u32) (v0 + 7088));
    a0 = 0; Pes6MatchSide_SetupTeam(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    a1 = (*(volatile u16 *) (u32) (v0 + 7090));
    a0 = 1; Pes6MatchSide_SetupTeam(a0, a1, a2, a3);
    func_00361A10();
    a0 = 1; func_00934710(a0);
    v0 = (s32) 0x590000U;
    v1 = 273;
    a0 = (*(volatile u16 *) (u32) (v0 + 7088));
    if (a0 == v1) goto L_00930F3C;
    v0 = 272;
    if (a0 == v0) goto L_00930F3C;
    v0 = func_0021FBC0(a0);
    a1 = v0;
    a0 = 0;
    a2 = 2; func_00361EF0(a0, a1, a2);
L_00930F3C:;
    v0 = (s32) 0x590000U;
    v1 = 273;
    a0 = (*(volatile u16 *) (u32) (v0 + 7090));
    if (a0 == v1) { v0 = (s32) 0x9a080000U; goto L_00930F78; }
    v0 = 272;
    if (a0 == v0) goto L_00930F74;
    v0 = func_0021FBC0(a0);
    a1 = v0;
    a0 = 1;
    a2 = 2; func_00361EF0(a0, a1, a2);
L_00930F74:;
    v0 = (s32) 0x9a080000U;
L_00930F78:;
    a0 = v0 | 0x400; SD_stop(a0);
    a0 = 1;
    v1 = 7;
    (*(volatile u8 *) (u32) (gp + -22736)) = (u8) a0;
    (*(volatile u32 *) (u32) (gp + -18828)) = (u32) v1; goto L_00930FF0;
L_00930F94:;
    a0 = v0 | 0x400; SD_stop(a0);
    a0 = 3;
    v1 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (gp + -18828)) = (u32) 0;
    (*(volatile u16 *) (u32) (v1 + -15614)) = (u16) a0; goto L_00930FF0;
L_00930FB0:;
    v0 = Pes6FormationMenu_Run();
    v1 = 1;
    if (v0 != v1) goto L_00930FF0;
    v0 = (s32) 0x9a080000U;
    a0 = v0 | 0x400; SD_stop(a0);
    a0 = (s32) 0x3b0000U;
    v1 = 3;
    v0 = (s32) 0x540000U;
    a0 = (s32) ((u32) a0 + 0xffffa200U);
    (*(volatile u16 *) (u32) (v0 + -15614)) = (u16) v1;
    (*(volatile u8 *) (u32) (gp + -22736)) = (u8) 0;
    (*(volatile u32 *) (u32) (gp + -18828)) = (u32) 0; func_002472F0(a0, a1, a2, a3);
L_00930FF0:;
L_00930FF4:;
    return;
}
