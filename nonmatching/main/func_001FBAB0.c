/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(s32);
s32 Pes6SaveData_GetUnavailableFlag(void);
s32 func_00182B30(s32);
s32 func_001A17A0(s32, s32, s32, s32, s32, s32);
s32 func_001A1E90(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001A31D0(void);
s32 func_001A3240(void);
s32 func_002CB060(s32, s32, s32, s32);
s32 func_002CB0E0(s32, s32, s32, s32);
s32 func_009E1C90(s32, s32, s32, s32);
s32 func_009E1CB0(s32, s32, s32, s32);
s32 func_009E1D30(s32, s32, s32, s32);

s32 func_001FBAB0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    a0 = 2;
    s0 = 0; v0 = func_009E1C90(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    at = (u64) v0 < (u64) (s64) 7;
    if (at == 0) { a0 = 2; goto L_001FBAF8; }
    v1 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x3e70U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x1fbb00U) goto L_001FBB00; if (t_ == 0x1fbb20U) goto L_001FBB20; if (t_ == 0x1fbb40U) goto L_001FBB40; if (t_ == 0x1fbb58U) goto L_001FBB58; if (t_ == 0x1fbb68U) goto L_001FBB68; if (t_ == 0x1fbb80U) goto L_001FBB80; if (t_ == 0x1fbb90U) goto L_001FBB90; }
    a0 = 2;
L_001FBAF8:;
    a1 = 1; v0 = func_009E1D30(a0, a1, a2, a3);
L_001FBB00:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -10332));
    if (v0 == 0) { a0 = 2; goto L_001FBB18; }
    s0 = 1; goto L_001FBBD4;
L_001FBB18:;
    v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FBB20:;
    v0 = func_002CB0E0(a0, a1, a2, a3);
    v0 = func_001A3240();
    v0 = func_001A1E90(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FBB40:;
    v0 = Pes6File_AllChannelsIdle(a0);
    if (v0 == 0) { v0 = s0; goto L_001FBBD8; }
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FBB58:;
    v0 = func_001A17A0(a0, a1, a2, a3, a4, a5);
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FBB68:;
    v0 = func_001A31D0();
    if (v0 == 0) goto L_001FBBD4;
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FBB80:;
    v0 = func_002CB060(a0, a1, a2, a3);
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FBB90:;
    v0 = (s32) 0x590000U;
    v1 = 7;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 == v1) { a0 = 0; goto L_001FBBC8; }
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 != 0) goto L_001FBBC4;
    a0 = 1; v0 = func_00182B30(a0);
    s0 = 1; goto L_001FBBD4;
L_001FBBC4:;
    a0 = 0;
L_001FBBC8:;
    v0 = func_00182B30(a0);
    s0 = 1;
L_001FBBD4:;
    v0 = s0;
L_001FBBD8:;
    return v0;
}
