/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6File_AllChannelsIdle(void);
void Pes6MatchContext_SetByteC08(s64);
s64 Pes6Module_Load(s64);
void Pes6TeamSelect_Confirm(s64, s64, s64, s64);
void func_00147F90(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_001BE5B0(s64);
void func_002D9080(s64);
void func_002D9330(s64, s64, s64, s64);
s64 func_00342360(void);
void func_008C9830(s64, s64, s64, s64);
void func_008C98A0(s64, s64, s64, s64);
void func_008C9990(s64, s64, s64, s64);
void func_008C9AE0(s64, s64, s64, s64);

s64 Pes6Demo_SetupMatch(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;

    v0 = (*(volatile u8 *) (u32) (gp + -21384));
    at = (u64) v0 < (u64) (s64) 8;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_00360DC0; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x6db0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x360ca8U) goto L_00360CA8; if (t_ == 0x360cdcU) goto L_00360CDC; if (t_ == 0x360cf0U) goto L_00360CF0; if (t_ == 0x360d2cU) goto L_00360D2C; if (t_ == 0x360d50U) goto L_00360D50; if (t_ == 0x360d7cU) goto L_00360D7C; if (t_ == 0x360d88U) goto L_00360D88; if (t_ == 0x360dacU) goto L_00360DAC; }
L_00360CA8:;
    a0 = 0; v0 = func_001BE5B0(a0);
    if (v0 == 0) { v0 = s0; goto L_00360DC4; }
    a0 = 1;
    a1 = 115;
    a2 = 80; func_00147F90(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 4; Pes6MatchContext_SetByteC08(a0);
    v0 = (*(volatile u8 *) (u32) (gp + -21384));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -21384)) = (u8) v0;
L_00360CDC:;
    a0 = 3; v0 = Pes6Module_Load(a0);
    v0 = (*(volatile u8 *) (u32) (gp + -21384));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -21384)) = (u8) v0;
L_00360CF0:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) goto L_00360DC0;
    v0 = func_00342360();
    a0 = 17; v0 = Pes6Module_Load(a0);
    func_008C98A0(a0, a1, a2, a3);
    func_008C9990(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (gp + -21384));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -21384)) = (u8) v0;
L_00360D2C:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) goto L_00360DC0;
    func_008C9830(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (gp + -21384));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -21384)) = (u8) v0;
L_00360D50:;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 10051));
    v0 = (*(volatile u8 *) (u32) (v0 + 10052));
    a0 = (*(volatile s8 *) (u32) (gp + -21400));
    (*(volatile u8 *) (u32) (gp + -21364)) = (u8) v1;
    (*(volatile u8 *) (u32) (gp + -21368)) = (u8) v0; func_008C9AE0(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (gp + -21384));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -21384)) = (u8) v0;
L_00360D7C:;
    v0 = (*(volatile u8 *) (u32) (gp + -21384));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -21384)) = (u8) v0;
L_00360D88:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) goto L_00360DC0;
    Pes6TeamSelect_Confirm(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (gp + -21384));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -21384)) = (u8) v0;
L_00360DAC:;
    func_002D9330(a0, a1, a2, a3);
    a0 = 1; func_002D9080(a0);
    s0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00360DC0:;
    v0 = s0;
L_00360DC4:;
    return v0;
}
