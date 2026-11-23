/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6OptionData_GetBlock2F5(void);
s32 Pes6SaveData_GetUnavailableFlag(void);
void SD_call(s32);
s32 func_001B6A30(s32, s32, s32, s32);
void func_001B8DC0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023B040(s32, s32, s32, s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023EA10(s32, s32, s32, s32);
s32 func_0023EFE0(void);
void func_0023F3A0(s32, s32, s32, s32);
void func_0023F510(s32, s32, s32, s32);
void func_002405A0(s32, s32, s32, s32);
s32 func_0024E650(void);
void func_0026E130(s32);
void func_0026E140(s32);
void func_0026E190(s32);
void func_002DED00(s32, s32, s32, s32);
void func_002DF960(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00363E10(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00815100(s32, s32, s32, s32);
s32 func_008153B0(s32, s32, s32, s32);
s32 func_008156F0(s32, s32, s32, s32);
s32 func_008214E0(s32, s32, s32, s32);
s32 func_008223F0(s32, s32, s32, s32);
s32 func_008B32E0(s32, s32, s32, s32);
s32 func_008B4290(void);
s32 func_00941CD0(s32, s32, s32, s32);

s32 func_008B4760(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    a0 = (*(volatile s8 *) (u32) (gp + -20332));
    s0 = (s32) 0x540000U;
    at = (u64) a0 < (u64) (s64) 6;
    { s32 c_ = at == 0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_008B4C58; }
    v1 = (s32) 0x8e0000U;
    v0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffa6d0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8b47a4U) goto L_008B47A4; if (t_ == 0x8b4820U) goto L_008B4820; if (t_ == 0x8b49fcU) goto L_008B49FC; if (t_ == 0x8b4a40U) goto L_008B4A40; if (t_ == 0x8b4a98U) goto L_008B4A98; if (t_ == 0x8b4c2cU) goto L_008B4C2C; }
L_008B47A4:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { v0 = (*(volatile s8 *) (u32) (gp + -20332)); goto L_008B4814; }
    v1 = (*(volatile s8 *) (u32) (gp + -20308));
    v0 = 1;
    if (v1 != v0) { v0 = (*(volatile s8 *) (u32) (gp + -20332)); goto L_008B4808; }
    v0 = func_008B4290();
    v1 = 1;
    if (v0 != v1) { v0 = (*(volatile s8 *) (u32) (gp + -20332)); goto L_008B47FC; }
    v0 = func_008156F0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { v0 = 0; goto L_008B4C5C; }
    v0 = (*(volatile s8 *) (u32) (gp + -20332));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -20332)) = (u8) v0; goto L_008B4C58;
L_008B47FC:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -20332)) = (u8) v0; goto L_008B4C58;
L_008B4808:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -20332)) = (u8) v0; goto L_008B4C58;
L_008B4814:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -20332)) = (u8) v0; goto L_008B4C58;
L_008B4820:;
    v1 = (*(volatile s8 *) (u32) (gp + -20308));
    v0 = 2;
    if (v1 != v0) goto L_008B48AC;
    v0 = Pes6OptionData_GetBlock2F5();
    v1 = (s32) 0x8e0000U;
    a3 = (s32) 0x8e0000U;
    a4 = (*(volatile s16 *) (u32) (v1 + -15694));
    a2 = (s32) 0x8e0000U;
    a1 = (s32) 0x8e0000U;
    a0 = (s32) 0x8e0000U;
    (*(volatile u8 *) (u32) v0) = (u8) a4;
    v1 = (s32) 0x8e0000U;
    a3 = (*(volatile s16 *) (u32) (a3 + -15678));
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) a3;
    a2 = (*(volatile s16 *) (u32) (a2 + -15646));
    (*(volatile u8 *) (u32) (v0 + 2)) = (u8) a2;
    a1 = (*(volatile s16 *) (u32) (a1 + -15630));
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) a1;
    a0 = (*(volatile s16 *) (u32) (a0 + -15614));
    (*(volatile u8 *) (u32) (v0 + 4)) = (u8) a0;
    a1 = (*(volatile s16 *) (u32) (v1 + -15662));
    if (a1 == 0) { (*(volatile u8 *) (u32) (v0 + 6)) = (u8) 0; goto L_008B495C; }
    a0 = 1;
    if (a1 == a0) { v1 = 2; goto L_008B48A4; }
    v1 = 2;
    if (a1 == v1) { (*(volatile u8 *) (u32) (v0 + 6)) = (u8) a0; goto L_008B495C; }
    goto L_008B495C;
L_008B48A4:;
    (*(volatile u8 *) (u32) (v0 + 6)) = (u8) v1; goto L_008B495C;
L_008B48AC:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) goto L_008B490C;
    v0 = func_008B4290();
    v1 = 1;
    if (v0 != v1) goto L_008B495C;
    a0 = (*(volatile u8 *) (u32) (gp + -32364)); v0 = func_0023EFE0();
    v1 = 1;
    if (v0 == v1) { v1 = (*(volatile s8 *) (u32) (gp + -20332)); goto L_008B48F4; }
    if (v0 == 0) goto L_008B495C;
    v0 = 0; goto L_008B4904;
L_008B48F4:;
    v0 = 0;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -20332)) = (u8) v1; goto L_008B4C5C;
L_008B4904:;
    goto L_008B4C60;
L_008B490C:;
    v0 = func_008B4290();
    v1 = 1;
    if (v0 != v1) goto L_008B495C;
    a0 = (*(volatile u8 *) (u32) (gp + -32364)); v0 = func_0023EFE0();
    v1 = 1;
    if (v0 == v1) { v0 = 2; goto L_008B4944; }
    if (v0 == 0) goto L_008B495C;
    v0 = 0; goto L_008B4954;
L_008B4944:;
    (*(volatile u8 *) (u32) (gp + -20332)) = (u8) 0;
    (*(volatile u32 *) (u32) (gp + -20336)) = (u32) v0;
    v0 = 0; goto L_008B4C5C;
L_008B4954:;
    goto L_008B4C5C;
L_008B495C:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    v1 = 1;
    if (v0 != v1) goto L_008B49A0;
    v0 = func_008153B0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_008B49A0;
    a0 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) a0 + 0xffffa6b0U); v0 = func_00815100(a0, a1, a2, a3);
    if (v0 != 0) goto L_008B49A0;
    v0 = 0; goto L_008B4C5C;
L_008B49A0:;
    v0 = Pes6OptionData_GetBlock2F5();
    s0 = v0;
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) { v0 = (s32) 0x82000000U; goto L_008B49CC; }
    v0 = (s32) 0x82000000U;
    a0 = v0 | 0x4; SD_call(a0);
    a0 = (*(volatile u8 *) (u32) (s0 + 2)); goto L_008B49D8;
L_008B49CC:;
    a0 = v0 | 0x3; SD_call(a0);
    a0 = (*(volatile u8 *) (u32) (s0 + 2));
L_008B49D8:;
    func_0026E190(a0);
    a0 = (*(volatile u8 *) (u32) (s0 + 3)); func_0026E140(a0);
    a0 = (*(volatile u8 *) (u32) (s0 + 4)); func_0026E130(a0);
    v0 = 3;
    (*(volatile u8 *) (u32) (gp + -20332)) = (u8) v0; goto L_008B4C58;
L_008B49FC:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { v0 = (*(volatile s8 *) (u32) (gp + -20332)); goto L_008B4A34; }
    a0 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) a0 + 0xffffa6b0U); v0 = func_00815100(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_008B4C58;
    v0 = 2;
    (*(volatile u8 *) (u32) (gp + -20332)) = (u8) 0;
    (*(volatile u32 *) (u32) (gp + -20336)) = (u32) v0; goto L_008B4C58;
L_008B4A34:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -20332)) = (u8) v0; goto L_008B4C58;
L_008B4A40:;
    v0 = (s32) 0x510000U;
    v1 = 4;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) { v0 = (s32) ((u32) a0 + 0x1U); goto L_008B4A80; }
    v0 = func_0024E650();
    a0 = v0; v0 = func_00941CD0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { a0 = 0; goto L_008B4A88; }
    v0 = (*(volatile s8 *) (u32) (gp + -20332));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -20332)) = (u8) v0; goto L_008B4A84;
L_008B4A80:;
    (*(volatile u8 *) (u32) (gp + -20332)) = (u8) v0;
L_008B4A84:;
    a0 = 0;
L_008B4A88:;
    func_0023EA10(a0, a1, a2, a3);
    goto L_008B4C58;
L_008B4A98:;
    v0 = (s32) 0x510000U;
    v1 = 4;
    a0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (a0 != v1) { v0 = 15; goto L_008B4ACC; }
    a0 = 20437; v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 == 0) goto L_008B4C58;
    a0 = 2; func_0023F510(a0, a1, a2, a3);
    s2 = 0; goto L_008B4B5C;
L_008B4ACC:;
    if (a0 != v0) { a0 = 1; goto L_008B4B30; }
    v0 = func_008223F0(a0, a1, a2, a3);
    a0 = 1;
    if (v0 != a0) goto L_008B4B00;
    v0 = func_008214E0(a0, a1, a2, a3);
    if (v0 != 0) goto L_008B4B58;
    v0 = 0; goto L_008B4C5C;
L_008B4B00:;
    v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 != 0) goto L_008B4B18;
    v0 = 0; goto L_008B4C5C;
L_008B4B18:;
    func_0023F3A0(a0, a1, a2, a3);
    func_001B8DC0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008B4B58;
L_008B4B30:;
    v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 != 0) goto L_008B4B48;
    v0 = 0; goto L_008B4C5C;
L_008B4B48:;
    func_0023F3A0(a0, a1, a2, a3);
    func_001B8DC0(a0, a1, a2, a3, a4, a5, a6, a7);
L_008B4B58:;
    s2 = 0;
L_008B4B5C:;
    s1 = 0;
L_008B4B60:;
    v0 = (*(volatile s32 *) (u32) (gp + -20320));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B32E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -20320));
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 12;
    a0 = (s32) ((u32) a0 + (u32) s1);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_008B4B60; }
    a0 = (s32) ((u32) gp + 0xffffb0a0U); func_002405A0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x14U); func_002405A0(a0, a1, a2, a3);
    s1 = (s32) 0x8e0000U;
    s0 = 0;
    s1 = (s32) ((u32) s1 + 0xffffc290U);
L_008B4BA8:;
    a0 = (*(volatile s32 *) (u32) s1); func_00363E10(a0, a1, a2, a3, a4, a5, a6, a7);
    s0 = (s32) ((u32) s0 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s0 < 3;
    if (v0 != 0) goto L_008B4BA8;
    v0 = Pes6SaveData_GetUnavailableFlag();
    v1 = 1;
    if (v0 != v1) { a0 = (*(volatile s32 *) (u32) (gp + -20324)); goto L_008B4BF4; }
    v0 = func_008223F0(a0, a1, a2, a3);
    if (v0 != 0) goto L_008B4BF0;
    a0 = 31; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
L_008B4BF0:;
    a0 = (*(volatile s32 *) (u32) (gp + -20324));
L_008B4BF4:;
    func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    func_0023B040(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    v1 = 1;
    v0 = (*(volatile s8 *) (u32) (v0 + 7605));
    if (v0 != v1) { v0 = (*(volatile s8 *) (u32) (gp + -20332)); goto L_008B4C24; }
    v0 = (*(volatile s32 *) (u32) (gp + -20312));
    (*(volatile u8 *) (u32) (gp + -32364)) = (u8) v0;
    v0 = (*(volatile s8 *) (u32) (gp + -20332));
L_008B4C24:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -20332)) = (u8) v0;
L_008B4C2C:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { (*(volatile u8 *) (u32) (gp + -20332)) = (u8) 0; goto L_008B4C50; }
    a0 = (*(volatile s32 *) (u32) (gp + -20328)); func_002DED00(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (gp + -20332)) = (u8) 0;
    v0 = 1; goto L_008B4C5C;
L_008B4C50:;
    v0 = 1; goto L_008B4C5C;
L_008B4C58:;
    v0 = 0;
L_008B4C5C:;
L_008B4C60:;
    return v0;
}
