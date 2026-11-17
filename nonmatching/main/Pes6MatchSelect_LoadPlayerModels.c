/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6File_AllChannelsIdle(s64);
s64 func_001A66C0(s64);
s64 func_001A72E0(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_001A9A10(s64);
s64 func_001B1170(s64);

s64 Pes6MatchSelect_LoadPlayerModels(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 hi = 0, lo = 0;

    v0 = (s32) 0x5f0000U;
    v1 = (*(volatile s16 *) (u32) (v0 + -27956));
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_002F74CC; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_002F74CC:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b4U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    s0 = (*(volatile s32 *) (u32) v0); v0 = Pes6File_AllChannelsIdle(a0);
    if (v0 != 0) goto L_002F7500;
    v0 = 0; goto L_002F75DC;
L_002F7500:;
    v0 = (s32) 0x5f0000U;
    v1 = (*(volatile s16 *) (u32) (v0 + -27954));
    at = v1 < 6;
    if (at != 0) { v0 = 5; goto L_002F7524; }
    v1 = (s32) 0x5f0000U;
    v0 = 1;
    (*(volatile u32 *) (u32) (v1 + -27960)) = (u32) 0; goto L_002F75DC;
L_002F7524:;
    if (v1 == v0) { a0 = s0; goto L_002F7588; }
    v0 = 4;
    if (v1 == v0) { a0 = s0; goto L_002F7578; }
    v0 = 3;
    if (v1 == v0) { a0 = s0; goto L_002F7568; }
    v0 = 2;
    if (v1 == v0) { a0 = s0; goto L_002F7558; }
    goto L_002F7590;
L_002F7558:;
    v0 = func_001A9A10(a0);
    goto L_002F7590;
L_002F7568:;
    v0 = func_001B1170(a0);
    goto L_002F7590;
L_002F7578:;
    v0 = func_001A66C0(a0);
    goto L_002F7590;
L_002F7588:;
    v0 = func_001A72E0(a0, a1, a2, a3, a4, a5, a6, a7);
L_002F7590:;
    v1 = (s32) 0x5f0000U;
    v0 = (s32) 0x5f0000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -27956));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) (v0 + -27956)) = (u16) v1;
    v0 = (s64) ((u64) v1 << 48);
    v0 = v0 >> 48;
    v0 = v0 < 23;
    if (v0 != 0) { v0 = 0; goto L_002F75DC; }
    v1 = 1;
    v0 = (s32) 0x5f0000U;
    (*(volatile u16 *) (u32) (v0 + -27956)) = (u16) v1;
    v0 = (s32) 0x5f0000U;
    v1 = (*(volatile s16 *) (u32) (v0 + -27954));
    v0 = (s32) 0x5f0000U;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) (v0 + -27954)) = (u16) v1;
    v0 = 0;
L_002F75DC:;
    return v0;
}
