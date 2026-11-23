/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_GetUnavailableFlag(void);
void func_001B62F0(f32);
void func_001B6410(f32);
s32 func_001B6A30(s32, s32, s32, s32);
void func_001B7920(void);
void func_001B79C0(s32, s32, s32, s32);
void func_001B8DC0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001C4698(s32, s32, s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023EA10(s32, s32, s32, s32);
s32 func_0023EFE0(void);
void func_0023F3A0(s32, s32, s32, s32);
void func_0023F510(s32, s32, s32, s32);
void func_0023FC70(s32, s32, s32, s32);
s32 func_00245190(s32);
void func_002685F0(s32);
void func_002DED00(s32, s32, s32, s32);
s32 func_00815100(s32, s32, s32, s32);
s32 func_008153B0(s32, s32, s32, s32);
s32 func_008156F0(s32, s32, s32, s32);
s32 func_008214E0(s32, s32, s32, s32);
s32 func_008223F0(s32, s32, s32, s32);
void func_008B3040(s32, s32, s32, s32);
void func_008B88D0(s32, s32, s32, s32);
void func_008B9950(s32, s32, s32, s32);
s32 func_00941CD0(s32, s32, s32, s32);
void memcpy(s32, s32, s32);

s32 func_00245520(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    a0 = (*(volatile s8 *) (u32) (gp + -22696));
    at = (u64) a0 < (u64) (s64) 7;
    if (at == 0) { v0 = 0; goto L_002459B0; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8b80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x24555cU) goto L_0024555C; if (t_ == 0x245674U) goto L_00245674; if (t_ == 0x2456a8U) goto L_002456A8; if (t_ == 0x2457bcU) goto L_002457BC; if (t_ == 0x245828U) goto L_00245828; if (t_ == 0x245868U) goto L_00245868; if (t_ == 0x245968U) goto L_00245968; }
L_0024555C:;
    (*(volatile u32 *) (u32) (gp + -22688)) = (u32) 0; v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { v0 = (*(volatile s8 *) (u32) (gp + -22704)); goto L_002455F4; }
    v0 = (*(volatile s8 *) (u32) (gp + -22704));
    if (v0 != 0) goto L_002455D0;
    s0 = (s32) 0x540000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0xffffc590U);
L_00245584:;
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -22704)) = (u8) v0; func_008B9950(a0, a1, a2, a3);
    a0 = s1;
    (*(volatile u8 *) (u32) (gp + -22704)) = (u8) 0; v0 = func_00245190(a0);
    a0 = s0;
    a1 = v0;
    a2 = 36; v0 = func_001C4698(a0, a1, a2);
    if (v0 == 0) { s1 = (s32) ((u32) s1 + 0x1U); goto L_002455C0; }
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -22688)) = (u32) v0; goto L_002455D0;
L_002455C0:;
    v0 = s1 < 8;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x36U); if (c_) goto L_00245584; }
L_002455D0:;
    v0 = (*(volatile s32 *) (u32) (gp + -22688));
    if (v0 != 0) { v0 = (*(volatile s8 *) (u32) (gp + -22696)); goto L_002455E8; }
    v0 = 2;
    (*(volatile u8 *) (u32) (gp + -22696)) = (u8) v0; goto L_002459AC;
L_002455E8:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -22696)) = (u8) v0; goto L_002459AC;
L_002455F4:;
    if (v0 != 0) goto L_00245668;
    s1 = (s32) 0x540000U;
    s0 = 0;
    s1 = (s32) ((u32) s1 + 0xffffc590U);
L_00245608:;
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -22704)) = (u8) v0; func_008B9950(a0, a1, a2, a3);
    a0 = s0;
    (*(volatile u8 *) (u32) (gp + -22704)) = (u8) 0; v0 = func_00245190(a0);
    a0 = s1;
    a1 = v0;
    a2 = 36; v0 = func_001C4698(a0, a1, a2);
    if (v0 == 0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_0024565C; }
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -22688)) = (u32) v0; func_001B79C0(a0, a1, a2, a3);
    a0 = 2; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 30; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00245668;
L_0024565C:;
    v0 = s0 < 8;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x36U); if (c_) goto L_00245608; }
L_00245668:;
    v0 = 2;
    (*(volatile u8 *) (u32) (gp + -22696)) = (u8) v0; goto L_002459AC;
L_00245674:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) goto L_002459AC;
    v0 = func_008156F0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_002459AC;
    v0 = (*(volatile s8 *) (u32) (gp + -22696));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -22696)) = (u8) v0; goto L_002459AC;
L_002456A8:;
    v0 = (*(volatile s8 *) (u32) (gp + -22704));
    if (v0 != 0) goto L_00245730;
    v1 = (*(volatile s32 *) (u32) (gp + -22688));
    v0 = 1;
    if (v1 != v0) goto L_00245730;
    a0 = (*(volatile s8 *) (u32) (gp + -22668)); v0 = func_0023EFE0();
    v1 = 1;
    if (v0 == v1) { v1 = (*(volatile s8 *) (u32) (gp + -22696)); goto L_00245718; }
    if (v0 == 0) goto L_002456E8;
    v0 = 0; goto L_00245728;
L_002456E8:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 != 0) goto L_00245730;
    func_001B7920();
    a0 = 2; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 30; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00245730;
L_00245718:;
    v0 = 0;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -22696)) = (u8) v1; goto L_002459B0;
L_00245728:;
    goto L_002459B4;
L_00245730:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    v1 = 1;
    if (v0 != v1) goto L_00245774;
    v0 = func_008153B0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_00245774;
    a0 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) a0 + 0xffff8b60U); v0 = func_00815100(a0, a1, a2, a3);
    if (v0 != 0) goto L_00245774;
    v0 = 0; goto L_002459B0;
L_00245774:;
    func_008B9950(a0, a1, a2, a3);
    s0 = (s32) 0x590000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0x1970U);
L_00245788:;
    a0 = s1; v0 = func_00245190(a0);
    a1 = v0;
    a0 = s0;
    a2 = 36; memcpy(a0, a1, a2);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 8;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x24U); if (c_) goto L_00245788; }
    v0 = 4;
    (*(volatile u8 *) (u32) (gp + -22696)) = (u8) v0; goto L_002459AC;
L_002457BC:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { v0 = 2; goto L_00245814; }
    v0 = func_008153B0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { v0 = 2; goto L_00245808; }
    a0 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) a0 + 0xffff8b60U); v0 = func_00815100(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_002459AC;
    v0 = 2;
    (*(volatile u8 *) (u32) (gp + -22696)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -22700)) = (u8) v0; goto L_002459AC;
L_00245808:;
    (*(volatile u8 *) (u32) (gp + -22696)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -22700)) = (u8) v0; goto L_002459AC;
L_00245814:;
    (*(volatile u8 *) (u32) (gp + -22696)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -22700)) = (u8) v0; func_001B7920();
    goto L_002459AC;
L_00245828:;
    v0 = (s32) 0x510000U;
    v1 = 4;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) { v0 = (s32) ((u32) a0 + 0x1U); goto L_00245860; }
    a0 = (*(volatile s8 *) (u32) (gp + -22668)); v0 = func_00941CD0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_002459AC;
    v0 = (*(volatile s8 *) (u32) (gp + -22696));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -22696)) = (u8) v0; goto L_002459AC;
L_00245860:;
    (*(volatile u8 *) (u32) (gp + -22696)) = (u8) v0; goto L_002459AC;
L_00245868:;
    v0 = (s32) 0x510000U;
    v1 = 4;
    a0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (a0 != v1) { v0 = 15; goto L_002458A4; }
    a0 = 20437; v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 != 0) { a0 = 2; goto L_00245894; }
    v0 = 0; goto L_002459B0;
L_00245894:;
    func_0023F510(a0, a1, a2, a3);
    a0 = 0; goto L_00245934;
L_002458A4:;
    if (a0 != v0) { a0 = 1; goto L_00245908; }
    a0 = 2; func_0023EA10(a0, a1, a2, a3);
    v0 = func_008223F0(a0, a1, a2, a3);
    a0 = 1;
    if (v0 != a0) goto L_002458E0;
    v0 = func_008214E0(a0, a1, a2, a3);
    if (v0 != 0) goto L_00245930;
    v0 = 0; goto L_002459B0;
L_002458E0:;
    v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 != 0) goto L_002458F8;
    v0 = 0; goto L_002459B0;
L_002458F8:;
    func_0023F3A0(a0, a1, a2, a3);
    goto L_00245930;
L_00245908:;
    v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 != 0) goto L_00245920;
    v0 = 0; goto L_002459B0;
L_00245920:;
    func_0023F3A0(a0, a1, a2, a3);
    func_001B8DC0(a0, a1, a2, a3, a4, a5, a6, a7);
L_00245930:;
    a0 = 0;
L_00245934:;
    func_0023EA10(a0, a1, a2, a3);
    func_008B3040(a0, a1, a2, a3);
    func_008B88D0(a0, a1, a2, a3);
    a0 = 0; func_002685F0(a0);
    func_0023FC70(a0, a1, a2, a3);
    v0 = (*(volatile s8 *) (u32) (gp + -22696));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -22696)) = (u8) v0;
L_00245968:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { (*(volatile u8 *) (u32) (gp + -22696)) = (u8) 0; goto L_002459A4; }
    f12.i = (s32) 0;
    func_001B6410(f12.f);
    f12.i = (s32) 0;
    func_001B62F0(f12.f);
    a0 = (*(volatile s32 *) (u32) (gp + -22692)); func_002DED00(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (gp + -22696)) = (u8) 0;
    v0 = 1; goto L_002459B0;
L_002459A4:;
    v0 = 1; goto L_002459B0;
L_002459AC:;
    v0 = 0;
L_002459B0:;
L_002459B4:;
    return v0;
}
