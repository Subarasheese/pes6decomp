/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6File_AllChannelsIdle(void);
void func_001A72E0(s64, s64, s64, s64, s64, s64, s64, s64);
void func_001A9A10(s64);
void func_001ABA60(s64);
void func_0026EEA0(s64);

s64 Pes6MatchSelect_ReloadPlayerModels(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 hi = 0, lo = 0;

    v0 = (s32) 0x5f0000U;
    v1 = (*(volatile s16 *) (u32) (v0 + -27956));
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_002F719C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_002F719C:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b4U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = (s32) 0x5f0000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) (v0 + -27960));
    v1 = (*(volatile s32 *) (u32) v1);
    { s32 c_ = v0 != 0; s0 = (*(volatile s32 *) (u32) v1); if (c_) goto L_002F71D0; }
    v0 = 0; goto L_002F72D8;
L_002F71D0:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 != 0) goto L_002F71E8;
    v0 = 0; goto L_002F72D8;
L_002F71E8:;
    v0 = (s32) 0x5f0000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -27954));
    at = v0 < 2;
    if (at != 0) goto L_002F720C;
    v1 = (s32) 0x5f0000U;
    v0 = 1;
    (*(volatile u32 *) (u32) (v1 + -27960)) = (u32) 0; goto L_002F72D8;
L_002F720C:;
    v0 = (s32) 0x5f0000U;
    v1 = 255;
    a0 = (*(volatile s16 *) (u32) (v0 + -27956));
    if (a0 == v1) { a0 = 1; goto L_002F722C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
L_002F722C:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) v0 + (u32) v1); func_0026EEA0(a0);
    a0 = s0; func_001ABA60(a0);
    v0 = (s32) 0x5f0000U;
    v1 = 1;
    v0 = (*(volatile s16 *) (u32) (v0 + -27954));
    if (v0 == v1) { a0 = s0; goto L_002F7284; }
    if (v0 == 0) { a0 = s0; goto L_002F7274; }
    goto L_002F728C;
L_002F7274:;
    func_001A9A10(a0);
    goto L_002F728C;
L_002F7284:;
    func_001A72E0(a0, a1, a2, a3, a4, a5, a6, a7);
L_002F728C:;
    v1 = (s32) 0x5f0000U;
    v0 = (s32) 0x5f0000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -27956));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) (v0 + -27956)) = (u16) v1;
    v0 = (s64) ((u64) v1 << 48);
    v0 = v0 >> 48;
    v0 = v0 < 23;
    if (v0 != 0) { v0 = 0; goto L_002F72D8; }
    v1 = 1;
    v0 = (s32) 0x5f0000U;
    (*(volatile u16 *) (u32) (v0 + -27956)) = (u16) v1;
    v0 = (s32) 0x5f0000U;
    v1 = (*(volatile s16 *) (u32) (v0 + -27954));
    v0 = (s32) 0x5f0000U;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) (v0 + -27954)) = (u16) v1;
    v0 = 0;
L_002F72D8:;
    return v0;
}
