/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_GetUnavailableFlag(void);
s32 Pes6Scene_Get(s32);
s32 func_001B8370(void);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023E780(s32, s32, s32, s32);
void func_0023EC10(s32, s32);
void func_0023F510(s32, s32, s32, s32);
void func_00244AB0(void);
void func_0024E770(void);
s32 func_002DEC40(s32, s32, s32, s32);
void func_002DED00(s32, s32, s32, s32);
s32 func_002FC720(s32);
void func_002FC740(s32, s32);
s32 func_00366290(void);
void func_008C6EE0(s32, s32, s32, s32, f32, f32);
void func_00D0CB50(s32, s32, s32, s32);

void func_008C9230(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    s0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (gp + -20148)) = (u32) 0;
    s0 = (s32) ((u32) s0 + 0xffffc300U); v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) goto L_008C925C;
    a0 = 8; func_0023F510(a0, a1, a2, a3);
L_008C925C:;
    func_008C6EE0(a0, a1, a2, a3, f12.f, f13.f);
    v0 = func_001B8370();
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 != v0) { a0 = 0; goto L_008C928C; }
    v0 = (s32) 0x20000U;
    a0 = v0 | 0x85; func_0023E780(a0, a1, a2, a3);
    a0 = 0;
L_008C928C:;
    v0 = Pes6Scene_Get(a0);
    v1 = 4;
    if (v0 != v1) goto L_008C92D8;
    v1 = (*(volatile s8 *) (u32) (s0 + 9));
    v0 = 2;
    if (v1 != v0) goto L_008C92F8;
    func_00244AB0();
    a0 = 0;
    a1 = 0; func_002FC740(a0, a1);
    a0 = 1;
    a1 = 0; func_002FC740(a0, a1);
    goto L_008C92F8;
L_008C92D8:;
    func_00244AB0();
    a0 = 0;
    a1 = 0; func_002FC740(a0, a1);
    a0 = 1;
    a1 = 0; func_002FC740(a0, a1);
L_008C92F8:;
    v0 = (s32) 0x590000U;
    v1 = 3;
    v0 = (*(volatile u8 *) (u32) (v0 + 7980));
    if (v0 != v1) { v1 = (*(volatile u8 *) (u32) (gp + -21736)); goto L_008C9354; }
    a2 = 0;
    a1 = (s32) ((u32) gp + 0xffffab18U);
    a0 = (s32) ((u32) gp + 0xffffb148U);
    v0 = 1;
L_008C931C:;
    v1 = (*(volatile u8 *) (u32) a1);
    if (v1 != 0) goto L_008C9330;
    (*(volatile u8 *) (u32) a0) = (u8) 0; goto L_008C9338;
L_008C9330:;
    (*(volatile u8 *) (u32) a0) = (u8) v0;
L_008C9338:;
    a2 = (s32) ((u32) a2 + 0x1U);
    at = a2 < 2;
    a1 = (s32) ((u32) a1 + 0x1U);
    { s32 c_ = at != 0; a0 = (s32) ((u32) a0 + 0x1U); if (c_) goto L_008C931C; }
    a2 = (*(volatile u8 *) (u32) (gp + -21736)); goto L_008C9394;
L_008C9354:;
    if (v1 != 0) { v0 = 63; goto L_008C9364; }
    (*(volatile u8 *) (u32) (gp + -20152)) = (u8) 0;
    v0 = 63;
L_008C9364:;
    if (v1 != v0) { v1 = (*(volatile u8 *) (u32) (gp + -21735)); goto L_008C9378; }
    v0 = 2;
    (*(volatile u8 *) (u32) (gp + -20152)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (gp + -21735));
L_008C9378:;
    v0 = 63;
    if (v1 != v0) goto L_008C9390;
    v0 = (*(volatile s8 *) (u32) (gp + -20152));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -20152)) = (u8) v0;
L_008C9390:;
    a2 = (*(volatile u8 *) (u32) (gp + -21736));
L_008C9394:;
    v1 = (s32) 0x8e0000U;
    a1 = (*(volatile u8 *) (u32) (gp + -21735));
    v0 = (s32) 0x8e0000U;
    a0 = 0;
    (*(volatile u32 *) (u32) (v1 + 30816)) = (u32) a2;
    (*(volatile u32 *) (u32) (v0 + 30832)) = (u32) a1; v0 = func_002FC720(a0);
    v1 = v0 & 0xff;
    a0 = 1;
    v0 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (v0 + 30820)) = (u16) v1; v0 = func_002FC720(a0);
    v1 = v0 & 0xff;
    v0 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (v0 + 30836)) = (u16) v1;
    v0 = (s32) 0x8e0000U;
    a1 = (*(volatile u8 *) (u32) (v0 + 30820));
    a0 = 0; func_002FC740(a0, a1);
    v0 = (s32) 0x8e0000U;
    a1 = (*(volatile u8 *) (u32) (v0 + 30836));
    a0 = 1; func_002FC740(a0, a1);
    v0 = (s32) 0x510000U;
    v1 = 8;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) goto L_008C9420;
    v0 = func_00366290();
    v1 = 1;
    if (v0 != v1) goto L_008C9420;
    func_0024E770();
L_008C9420:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { a0 = 20; goto L_008C9460; }
    a0 = (*(volatile s32 *) (u32) (gp + -22804)); func_002DED00(a0, a1, a2, a3);
    a0 = (s32) 0x8c0000U;
    a0 = (s32) ((u32) a0 + 0x76e0U); v0 = func_002DEC40(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -20200)) = (u32) v0;
    a0 = 30; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    func_00D0CB50(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -20176)) = (u32) 0;
    a0 = 20;
L_008C9460:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (s32) 0x8e0000U;
    v0 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (v1 + 30804)) = (u32) 0;
    a0 = (s32) ((u32) gp + 0xffffb14cU);
    (*(volatile u32 *) (u32) (v0 + 30800)) = (u32) 0;
    a1 = 1; func_0023EC10(a0, a1);
    return;
}
