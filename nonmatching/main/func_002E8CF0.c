/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(s32);
s32 Pes6Module_Load(s32);
s32 Pes6SaveData_GetUnavailableFlag(void);
s32 func_001540E0(s32);
s32 func_0017F880(s32);
s32 func_0017F8A0(s32, s32);
s32 func_001A5BE0(s32);
s32 func_001A5E00(s32, s32, s32, s32, s32);
s32 func_001A5F20(s32);
s32 func_001FC780(s32, s32);
s32 func_002CB140(s32, s32, s32, s32);
s32 func_002CB1C0(s32, s32, s32, s32);
s32 func_002DEC40(s32, s32, s32, s32);
s32 func_002DED00(s32, s32, s32, s32);
s32 func_0063F3C0(s32, s32, s32, s32);
s32 func_0063F9A0(s32, s32, s32, s32);
s32 func_0064E6B0(s32, s32, s32, s32);
s32 func_0064E750(s32, s32, s32, s32);
s32 func_00815100(s32, s32, s32, s32);
s32 func_00815540(s32, s32, s32, s32);
s32 func_00815620(s32, s32, s32, s32);
s32 func_008156F0(s32, s32, s32, s32);
s32 func_008157A0(s32, s32, s32, s32);
s32 func_00815B70(s32, s32, s32, s32);
s32 func_00D0CB50(s32, s32, s32, s32);

s32 func_002E8CF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x3f0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 30608));
    s0 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -21872));
    { s32 c_ = v1 != v0; (*(volatile u32 *) (u32) (gp + -21876)) = (u32) v0; if (c_) goto L_002E8D20; }
    v0 = 0; goto L_002E90C8;
L_002E8D20:;
    (*(volatile u32 *) (u32) (gp + -21872)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -21888));
    at = (u64) v0 < (u64) (s64) 11;
    if (at == 0) { v0 = 1; goto L_002E8D54; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffc7f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x2e8d50U) goto L_002E8D50; if (t_ == 0x2e8dd0U) goto L_002E8DD0; if (t_ == 0x2e8ea0U) goto L_002E8EA0; if (t_ == 0x2e8f08U) goto L_002E8F08; if (t_ == 0x2e8f54U) goto L_002E8F54; if (t_ == 0x2e8f7cU) goto L_002E8F7C; if (t_ == 0x2e8fb8U) goto L_002E8FB8; if (t_ == 0x2e8fd0U) goto L_002E8FD0; if (t_ == 0x2e8ff8U) goto L_002E8FF8; if (t_ == 0x2e905cU) goto L_002E905C; if (t_ == 0x2e9074U) goto L_002E9074; }
L_002E8D50:;
    v0 = 1;
L_002E8D54:;
    (*(volatile u32 *) (u32) (gp + -21836)) = (u32) 0;
    (*(volatile u32 *) (u32) (gp + -21888)) = (u32) v0;
    s1 = 0; v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) goto L_002E8D8C;
    v1 = (*(volatile s32 *) (u32) (gp + -21880));
    v0 = 28;
    if (v1 == v0) goto L_002E8D8C;
    v0 = 12;
    if (v1 == v0) goto L_002E8D8C;
    s1 = 1;
L_002E8D8C:;
    if (s1 == 0) { v0 = (s32) 0x10000U; goto L_002E8DA8; }
    a0 = (s32) 0x2f0000U;
    a0 = (s32) ((u32) a0 + 0xffff8be0U); v0 = func_002DEC40(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -21844)) = (u32) v0;
    v0 = (s32) 0x10000U;
L_002E8DA8:;
    a0 = v0 | 0x3de;
    (*(volatile u32 *) (u32) (gp + -21856)) = (u32) a0; v0 = func_0017F8A0(a0, a1);
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (gp + -21856)); goto L_002E8DD4; }
    a0 = (*(volatile s32 *) (u32) (gp + -21856)); v0 = func_0017F880(a0);
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -21868)) = (u32) v0; goto L_002E90C4;
L_002E8DD0:;
    a0 = (*(volatile s32 *) (u32) (gp + -21856));
L_002E8DD4:;
    v0 = func_0017F880(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -21856)); v0 = func_0017F8A0(a0, a1);
    if (v0 == 0) { v0 = s0; goto L_002E90C8; }
    a0 = 1; v0 = func_001A5F20(a0);
    if (v0 != 0) { a0 = 1; goto L_002E8E04; }
    (*(volatile u32 *) (u32) (gp + -21868)) = (u32) 0; goto L_002E8E0C;
L_002E8E04:;
    (*(volatile u32 *) (u32) (gp + -21868)) = (u32) a0; v0 = func_001A5BE0(a0);
L_002E8E0C:;
    a0 = 1; v0 = func_001FC780(a0, a1);
    a0 = 5; v0 = Pes6Module_Load(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -21880));
    a0 = (s32) 0x3e0000U;
    a1 = 0;
    a2 = 0;
    a0 = (s32) ((u32) a0 + 0xffffc7a0U);
L_002E8E30:;
    v0 = (*(volatile s32 *) (u32) a0);
    if (v1 != v0) { a2 = (s32) ((u32) a2 + 0x1U); goto L_002E8E44; }
    a1 = 1; goto L_002E8E50;
L_002E8E44:;
    v0 = (u64) a2 < (u64) (s64) 9;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_002E8E30; }
L_002E8E50:;
    if (a1 == 0) { a0 = 7; goto L_002E8E74; }
    a0 = 5; v0 = func_001FC780(a0, a1);
    a0 = 16; v0 = Pes6Module_Load(a0);
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -21860)) = (u32) v0;
    a0 = 7;
L_002E8E74:;
    v0 = func_001540E0(a0);
    if (v0 != 0) { (*(volatile u32 *) (u32) (gp + -21864)) = (u32) 0; goto L_002E8E94; }
    v0 = func_002CB1C0(a0, a1, a2, a3);
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -21864)) = (u32) v0;
L_002E8E94:;
    v0 = 2;
    (*(volatile u32 *) (u32) (gp + -21888)) = (u32) v0; goto L_002E90C4;
L_002E8EA0:;
    v0 = Pes6File_AllChannelsIdle(a0);
    if (v0 == 0) goto L_002E90C4;
    v0 = func_0063F9A0(a0, a1, a2, a3);
    s1 = 0; v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { (*(volatile u32 *) (u32) (gp + -21852)) = (u32) s1; goto L_002E8EEC; }
    v1 = (*(volatile s32 *) (u32) (gp + -21880));
    v0 = 28;
    if (v1 == v0) { s1 = 1; goto L_002E8EE8; }
    v0 = 12;
    if (v1 != v0) goto L_002E8EE8;
    s1 = 1;
L_002E8EE8:;
    (*(volatile u32 *) (u32) (gp + -21852)) = (u32) s1;
L_002E8EEC:;
    if (s1 == 0) { v0 = 4; goto L_002E8F00; }
    v0 = 3;
    (*(volatile u32 *) (u32) (gp + -21888)) = (u32) v0; goto L_002E90C4;
L_002E8F00:;
    (*(volatile u32 *) (u32) (gp + -21888)) = (u32) v0; goto L_002E90C4;
L_002E8F08:;
    v0 = func_008156F0(a0, a1, a2, a3);
    if (v0 == 0) goto L_002E90C4;
    v0 = func_00815620(a0, a1, a2, a3);
    a0 = 0; v0 = func_00815B70(a0, a1, a2, a3);
    v0 = func_00D0CB50(a0, a1, a2, a3);
    a0 = (s32) 0x2f0000U;
    a1 = (s32) 0x2f0000U;
    a2 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) a0 + 0xffff90f0U);
    a1 = (s32) ((u32) a1 + 0xffff90e0U);
    a2 = (s32) ((u32) a2 + 0xffffc7d0U); v0 = func_008157A0(a0, a1, a2, a3);
    v0 = 4;
    (*(volatile u32 *) (u32) (gp + -21888)) = (u32) v0;
L_002E8F54:;
    v0 = func_0064E750(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -21852));
    if (v0 == 0) { v0 = 5; goto L_002E8F78; }
    a0 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) a0 + 0xffffc7d0U); v0 = func_00815100(a0, a1, a2, a3);
    v0 = 5;
L_002E8F78:;
    (*(volatile u32 *) (u32) (gp + -21888)) = (u32) v0;
L_002E8F7C:;
    v0 = func_0063F3C0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -21880));
    if (v0 != 0) goto L_002E90C4;
    v0 = (*(volatile s32 *) (u32) (gp + -21852));
    v1 = 74;
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) (gp + -21880)) = (u32) v1; if (c_) goto L_002E8FAC; }
    v0 = 6;
    (*(volatile u32 *) (u32) (gp + -21888)) = (u32) v0; goto L_002E90C4;
L_002E8FAC:;
    v0 = 7;
    (*(volatile u32 *) (u32) (gp + -21888)) = (u32) v0; goto L_002E90C4;
L_002E8FB8:;
    v0 = func_008156F0(a0, a1, a2, a3);
    if (v0 == 0) goto L_002E90C4;
    v0 = func_00815540(a0, a1, a2, a3);
L_002E8FD0:;
    v0 = func_0064E6B0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -21852));
    if (v0 == 0) { v0 = 8; goto L_002E8FF4; }
    a0 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) a0 + 0xffffc7d0U); v0 = func_00815100(a0, a1, a2, a3);
    v0 = 8;
L_002E8FF4:;
    (*(volatile u32 *) (u32) (gp + -21888)) = (u32) v0;
L_002E8FF8:;
    a0 = 1; v0 = func_001FC780(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -21864));
    v0 = 1;
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) (gp + -21868)); goto L_002E901C; }
    v0 = func_002CB140(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -21868));
L_002E901C:;
    a0 = 1;
    if (v0 != a0) { v0 = 10; goto L_002E903C; }
    v0 = func_001A5E00(a0, a1, a2, a3, a4);
    v0 = 9;
    (*(volatile u32 *) (u32) (gp + -21888)) = (u32) v0; goto L_002E9040;
L_002E903C:;
    (*(volatile u32 *) (u32) (gp + -21888)) = (u32) v0;
L_002E9040:;
    v0 = (*(volatile s32 *) (u32) (gp + -21860));
    if (v0 == 0) goto L_002E90C4;
    a0 = 5; v0 = func_001FC780(a0, a1);
    (*(volatile u32 *) (u32) (gp + -21860)) = (u32) 0; goto L_002E90C4;
L_002E905C:;
    a0 = 1; v0 = func_001A5F20(a0);
    if (v0 == 0) goto L_002E90C4;
    v0 = 10;
    (*(volatile u32 *) (u32) (gp + -21888)) = (u32) v0;
L_002E9074:;
    s0 = 0; v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) goto L_002E90A4;
    v1 = (*(volatile s32 *) (u32) (gp + -21880));
    v0 = 28;
    if (v1 == v0) goto L_002E90A4;
    v0 = 12;
    if (v1 == v0) goto L_002E90A4;
    s0 = 1;
L_002E90A4:;
    if (s0 == 0) { (*(volatile u32 *) (u32) (gp + -21880)) = (u32) 0; goto L_002E90B8; }
    a0 = (*(volatile s32 *) (u32) (gp + -21844)); v0 = func_002DED00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -21880)) = (u32) 0;
L_002E90B8:;
    s0 = 1;
    (*(volatile u32 *) (u32) (gp + -21888)) = (u32) 0;
    (*(volatile u32 *) (u32) (gp + -21884)) = (u32) 0;
L_002E90C4:;
    v0 = s0;
L_002E90C8:;
    return v0;
}
