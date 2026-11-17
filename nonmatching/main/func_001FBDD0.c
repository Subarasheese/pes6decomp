/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6MatchSelect_UpdateLoader(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Pausesetup_Start(s32, s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Resultsetup_Start(void);
s32 Pes6SaveData_GetUnavailableFlag(void);
s32 Pes6TeamAssets_Poll(s32, s32, s32, s32);
s32 Pes6TeamAssets_Reset(void);
s32 func_0020C240(s32, s32, s32, s32);
s32 func_0020C2C0(s32);
s32 func_0020C370(s32, s32, s32, s32);
s32 func_0020D6D0(void);
s32 func_0026C310(s32, s32, s32, s32, s32, s32, s32);
s32 func_00308540(s32, s32, s32, s32, s32);
s32 func_009E1C90(s32, s32, s32, s32);
s32 func_009E1CB0(s32, s32, s32, s32);
s32 func_009E1D30(s32, s32, s32, s32);
s32 func_00C86770(s32, s32, s32, s32);
s32 func_00C86850(s32, s32, s32, s32);

s32 func_001FBDD0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    a0 = 2;
    s0 = 0; v0 = func_009E1C90(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    at = (u64) v0 < (u64) (s64) 12;
    if (at == 0) { a0 = 2; goto L_001FBE18; }
    v1 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x3e90U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x1fbe20U) goto L_001FBE20; if (t_ == 0x1fbe58U) goto L_001FBE58; if (t_ == 0x1fbe70U) goto L_001FBE70; if (t_ == 0x1fbe8cU) goto L_001FBE8C; if (t_ == 0x1fbea4U) goto L_001FBEA4; if (t_ == 0x1fbec0U) goto L_001FBEC0; if (t_ == 0x1fbed8U) goto L_001FBED8; if (t_ == 0x1fbef4U) goto L_001FBEF4; if (t_ == 0x1fbf04U) goto L_001FBF04; if (t_ == 0x1fbf1cU) goto L_001FBF1C; if (t_ == 0x1fbf38U) goto L_001FBF38; if (t_ == 0x1fbf58U) goto L_001FBF58; }
    a0 = 2;
L_001FBE18:;
    a1 = 1; v0 = func_009E1D30(a0, a1, a2, a3);
L_001FBE20:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { a0 = 2; goto L_001FBE50; }
    v0 = func_00308540(a0, a1, a2, a3, a4);
    if (v0 == 0) { v0 = s0; goto L_001FBF60; }
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
    goto L_001FBF5C;
L_001FBE50:;
    v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FBE58:;
    v0 = func_0020D6D0();
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
    goto L_001FBF5C;
L_001FBE70:;
    v0 = Pes6MatchSelect_UpdateLoader(a0, a1, a2, a3, a4, a5, a6);
    v1 = 1;
    if (v0 != v1) goto L_001FBF5C;
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FBE8C:;
    v0 = func_0020C370(a0, a1, a2, a3);
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
    goto L_001FBF5C;
L_001FBEA4:;
    v0 = func_0020C2C0(a0);
    v1 = 1;
    if (v0 != v1) goto L_001FBF5C;
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FBEC0:;
    v0 = Pes6TeamAssets_Reset();
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
    goto L_001FBF5C;
L_001FBED8:;
    v0 = Pes6TeamAssets_Poll(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_001FBF5C;
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FBEF4:;
    v0 = func_0020C240(a0, a1, a2, a3);
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FBF04:;
    v0 = func_0026C310(a0, a1, a2, a3, a4, a5, a6);
    v0 = func_00C86850(a0, a1, a2, a3);
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FBF1C:;
    v0 = func_00C86770(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_001FBF5C;
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FBF38:;
    v0 = Pes6Pausesetup_Start(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = Pes6Resultsetup_Start();
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
    goto L_001FBF5C;
L_001FBF58:;
    s0 = 1;
L_001FBF5C:;
    v0 = s0;
L_001FBF60:;
    return v0;
}
