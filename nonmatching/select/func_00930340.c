/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6FormationMenu_Run(void);
s32 Pes6MatchSelect_AnyPadAssigned(void);
void Pes6MatchSetup_BuildLineups(s32, s32, s32, s32);
void Pes6MatchSide_SetupTeam(s32, s32, s32, s32);
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
void func_00263F20(s32, s32, s32, s32);
void func_00361A10(void);
void func_00361EF0(s32, s32, s32);
void func_008B34C0(s32, s32, s32, s32);
s32 func_00930080(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00934710(s32);
s32 func_009432F0(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
s32 func_0095D330(s32, s32, s32, s32, s32, s32, s32, s32);

void func_00930340(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v1 = (*(volatile s32 *) (u32) (gp + -18848));
    at = (u64) v1 < (u64) (s64) 11;
    if (at == 0) { ; goto L_00930730; }
    a0 = (s32) 0x960000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x62a0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x930374U) goto L_00930374; if (t_ == 0x9303fcU) goto L_009303FC; if (t_ == 0x930414U) goto L_00930414; if (t_ == 0x930470U) goto L_00930470; if (t_ == 0x9304ccU) goto L_009304CC; if (t_ == 0x930518U) goto L_00930518; if (t_ == 0x930524U) goto L_00930524; if (t_ == 0x93055cU) goto L_0093055C; if (t_ == 0x930568U) goto L_00930568; if (t_ == 0x930670U) goto L_00930670; if (t_ == 0x9306a0U) goto L_009306A0; }
L_00930374:;
    a0 = (*(volatile s32 *) (u32) (gp + -18788));
    v1 = 1;
    if (a0 != v1) goto L_00930390;
    v1 = 2;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) v1; goto L_009303A8;
L_00930390:;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (a0 + 7090)) = (u16) 0;
    a0 = 10;
    (*(volatile u16 *) (u32) (v1 + 7088)) = (u16) 0;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) a0;
L_009303A8:;
    v1 = (s32) 0x3b0000U;
    a0 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (v1 + -24011)) = (u8) 0;
    v1 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (a0 + -23959)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + -23907)) = (u8) 0;
    a0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (a0 + -23855)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + -23803)) = (u8) 0;
    a0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (a0 + -23751)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + -23699)) = (u8) 0;
    a0 = -1;
    v1 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (v1 + -24063)) = (u8) a0;
    a0 = 1;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 7980)) = (u8) a0; goto L_0093072C;
L_009303FC:;
    a0 = 4;
    v1 = (s32) 0x540000U;
    (*(volatile u16 *) (u32) (v1 + -15614)) = (u16) a0;
    v1 = 2;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) v1; goto L_0093072C;
L_00930414:;
    v0 = func_0024A380(a0, a1, a2, a3);
    a0 = 1;
    if (v0 == a0) { (*(volatile u32 *) (u32) (gp + -18848)) = (u32) 0; goto L_00930460; }
    v1 = 2;
    if (v0 == v1) { v1 = (*(volatile s32 *) (u32) (gp + -18788)); goto L_0093043C; }
    goto L_0093072C;
L_0093043C:;
    if (v1 != a0) { v1 = 7; goto L_00930458; }
    a0 = 3;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) a0; func_0023F510(a0, a1, a2, a3);
    goto L_0093072C;
L_00930458:;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) v1; goto L_0093072C;
L_00930460:;
    func_0023FC70();
    goto L_0093072C;
L_00930470:;
    v0 = func_009432F0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    v1 = 1;
    if (v0 == v1) { a0 = 2; goto L_009304BC; }
    v1 = 2;
    if (v0 == v1) goto L_00930498;
    goto L_0093072C;
L_00930498:;
    v1 = (s32) 0x540000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -15592));
    if (v1 != 0) { v1 = 4; goto L_009304B4; }
    v1 = 6;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) v1; goto L_0093072C;
L_009304B4:;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) v1; goto L_0093072C;
L_009304BC:;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) a0; func_0023F510(a0, a1, a2, a3);
    goto L_0093072C;
L_009304CC:;
    v0 = func_00930080(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 == v1) { v1 = 3; goto L_00930510; }
    v1 = 2;
    if (v0 == v1) { a0 = 294; goto L_009304F4; }
    goto L_0093072C;
L_009304F4:;
    v1 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v1 + 7090)) = (u16) a0;
    v1 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v1 + 7088)) = (u16) a0;
    v1 = 5;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) v1; goto L_0093072C;
L_00930510:;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) v1; goto L_0093072C;
L_00930518:;
    v1 = 6;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) v1; goto L_0093072C;
L_00930524:;
    v0 = func_0095D330(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 == v1) { v1 = 3; goto L_00930554; }
    v1 = 2;
    if (v0 == v1) { v1 = 8; goto L_0093054C; }
    goto L_0093072C;
L_0093054C:;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) v1; goto L_0093072C;
L_00930554:;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) v1; goto L_0093072C;
L_0093055C:;
    v1 = 10;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) v1; goto L_0093072C;
L_00930568:;
    v0 = Pes6MatchSelect_AnyPadAssigned();
    v1 = 1;
    if (v0 != v1) { v1 = 10; goto L_00930668; }
    func_0023F3A0(a0, a1, a2, a3);
    func_001B8DC0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 31; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -22736)) = (u8) v0; Pes6MatchSetup_BuildLineups(a0, a1, a2, a3);
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
    if (a0 == v1) goto L_00930610;
    v0 = 272;
    if (a0 == v0) goto L_00930610;
    v0 = func_0021FBC0(a0);
    a1 = v0;
    a0 = 0;
    a2 = 2; func_00361EF0(a0, a1, a2);
L_00930610:;
    v0 = (s32) 0x590000U;
    v1 = 273;
    a0 = (*(volatile u16 *) (u32) (v0 + 7090));
    if (a0 == v1) { v0 = (s32) 0x9a080000U; goto L_0093064C; }
    v0 = 272;
    if (a0 == v0) goto L_00930648;
    v0 = func_0021FBC0(a0);
    a1 = v0;
    a0 = 1;
    a2 = 2; func_00361EF0(a0, a1, a2);
L_00930648:;
    v0 = (s32) 0x9a080000U;
L_0093064C:;
    a0 = v0 | 0x400; SD_stop(a0);
    func_008B34C0(a0, a1, a2, a3);
    v1 = 9;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) v1; goto L_0093072C;
L_00930668:;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) v1; goto L_0093072C;
L_00930670:;
    v0 = Pes6FormationMenu_Run();
    v1 = 1;
    if (v0 != v1) goto L_0093072C;
    a0 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 + 0xffffa200U); func_002472F0(a0, a1, a2, a3);
    v1 = 10;
    (*(volatile u8 *) (u32) (gp + -22736)) = (u8) 0;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) v1; goto L_0093072C;
L_009306A0:;
    func_001B8DC0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (gp + -18788));
    v1 = 1;
    if (a0 == v1) { a0 = 3; goto L_00930720; }
    if (a0 != 0) goto L_009306DC;
    a0 = 9;
    a1 = 0;
    a2 = 0;
    a3 = 0; func_00263F20(a0, a1, a2, a3);
    goto L_0093071C;
L_009306DC:;
    if (a0 != v1) { v1 = 2; goto L_00930700; }
    a0 = 2;
    a1 = 0;
    a2 = 0;
    a3 = 0; func_00263F20(a0, a1, a2, a3);
    goto L_0093071C;
L_00930700:;
    if (a0 != v1) goto L_0093071C;
    a0 = 3;
    a1 = 0;
    a2 = 0;
    a3 = 0; func_00263F20(a0, a1, a2, a3);
L_0093071C:;
    a0 = 3;
L_00930720:;
    v1 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) 0;
    (*(volatile u16 *) (u32) (v1 + -15614)) = (u16) a0;
L_0093072C:;
L_00930730:;
    return;
}
