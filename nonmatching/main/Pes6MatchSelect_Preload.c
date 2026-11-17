/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6HeapZone_Close(s32);
s32 Pes6NowLoading_IsNotClosing(void);
s32 Pes6TeamAssets_Poll(s32, s32, s32, s32);
s32 Pes6TeamAssets_Reset(void);
s32 func_001540E0(s32);
s32 func_001BDAA0(s32, s32, s32, s32);
s32 func_001DA3F0(s32);
s32 func_0020B660(s32);
s32 func_0020C1D0(s32, s32, s32, s32);
s32 func_0020C2C0(s32);
s32 func_0020C370(s32, s32, s32, s32);
s32 func_00266430(s32, s32, s32, s32, s32);
s32 func_00266730(s32, s32, s32, s32);

s32 Pes6MatchSelect_Preload(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v0 = (s32) 0x5f0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -27972));
    at = (u64) v0 < (u64) (s64) 6;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_002F6DAC; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffc910U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x2f6c64U) goto L_002F6C64; if (t_ == 0x2f6c8cU) goto L_002F6C8C; if (t_ == 0x2f6cc0U) goto L_002F6CC0; if (t_ == 0x2f6cdcU) goto L_002F6CDC; if (t_ == 0x2f6d10U) goto L_002F6D10; if (t_ == 0x2f6da8U) goto L_002F6DA8; }
L_002F6C64:;
    v0 = Pes6TeamAssets_Reset();
    a0 = 0; v0 = func_0020B660(a0);
    v1 = (s32) 0x5f0000U;
    v0 = (s32) 0x5f0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -27972));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (v0 + -27972)) = (u32) v1; goto L_002F6DAC;
L_002F6C8C:;
    a0 = 2; v0 = func_001DA3F0(a0);
    if (v0 == 0) { v0 = s0; goto L_002F6DB0; }
    a0 = 1; v0 = func_001DA3F0(a0);
    if (v0 == 0) goto L_002F6DAC;
    v1 = (s32) 0x5f0000U;
    v0 = (s32) 0x5f0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -27972));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (v0 + -27972)) = (u32) v1;
L_002F6CC0:;
    v0 = func_0020C370(a0, a1, a2, a3);
    v1 = (s32) 0x5f0000U;
    v0 = (s32) 0x5f0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -27972));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (v0 + -27972)) = (u32) v1;
L_002F6CDC:;
    v0 = func_0020C2C0(a0);
    if (v0 == 0) goto L_002F6DAC;
    v0 = Pes6NowLoading_IsNotClosing();
    if (v0 == 0) goto L_002F6DAC;
    v1 = (s32) 0x5f0000U;
    v0 = (s32) 0x5f0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -27972));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (v0 + -27972)) = (u32) v1;
L_002F6D10:;
    v0 = Pes6TeamAssets_Poll(a0, a1, a2, a3);
    if (v0 == 0) goto L_002F6DAC;
    v0 = Pes6NowLoading_IsNotClosing();
    if (v0 == 0) goto L_002F6DAC;
    v0 = func_00266430(a0, a1, a2, a3, a4);
    v0 = func_0020C1D0(a0, a1, a2, a3);
    a0 = 1; v0 = func_0020B660(a0);
    v0 = func_00266730(a0, a1, a2, a3);
    a0 = 0; v0 = func_001BDAA0(a0, a1, a2, a3);
    s1 = (s32) 0x3e0000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffffc8c0U);
L_002F6D64:;
    a0 = (*(volatile s32 *) (u32) s1); v0 = func_001540E0(a0);
    if (v0 == 0) goto L_002F6D80;
    a0 = (*(volatile s8 *) (u32) s1); v0 = Pes6HeapZone_Close(a0);
L_002F6D80:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = (u64) s2 < (u64) (s64) 5;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002F6D64; }
    v1 = (s32) 0x5f0000U;
    v0 = (s32) 0x5f0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -27972));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (v0 + -27972)) = (u32) v1; goto L_002F6DAC;
L_002F6DA8:;
    s0 = 1;
L_002F6DAC:;
    v0 = s0;
L_002F6DB0:;
    return v0;
}
