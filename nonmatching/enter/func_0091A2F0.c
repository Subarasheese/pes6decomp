/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D80(s64, s64, s64, s64);
s64 func_002F96F0(s64, s64);
void func_002F99A0(s64, s64, s64);
void func_0091A720(s64);
void func_0091AA50(s64, s64, s64, s64, s64, s64, s64, s64);

s64 func_0091A2F0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;

    v1 = (s32) ((u32) gp + 0xffffb1dcU);
    a0 = (*(volatile s32 *) (u32) (gp + -20008));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a2 = (*(volatile s32 *) (u32) v1);
    a1 = (*(volatile u8 *) (u32) (a2 + 32));
    v1 = a1 & 0x1;
    { s32 c_ = v1 == 0; v0 = 0; if (c_) goto L_0091A3F8; }
    a0 = (*(volatile u8 *) (u32) (a2 + 80));
    v1 = 1;
    a0 = a0 & 0x1;
    if (a0 != v1) { ; goto L_0091A3FC; }
    v0 = (s64) ((u64) a1 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) goto L_0091A3A4;
    a0 = (*(volatile s32 *) (u32) (a2 + 4));
    a1 = 0;
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a1 = (*(volatile s32 *) (u32) (gp + -20008)); goto L_0091A364; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (*(volatile s32 *) (u32) (gp + -20008));
L_0091A364:;
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    a0 = (s32) ((u32) gp + 0xffffb1dcU);
    v1 = (s32) ((u32) v1 + 0xffff9ec0U);
    v0 = (s32) ((u32) v0 + 0xffff9ec4U);
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    a0 = (*(volatile s32 *) (u32) (a0 + 20));
    a0 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a2 = s0; func_002F99A0(a0, a1, a2);
L_0091A3A4:;
    func_0091AA50(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile s32 *) (u32) (gp + -20008));
    v0 = (s32) ((u32) gp + 0xffffb1dcU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (s0 + 32));
    v0 = v0 & 0x1;
    if (v0 == 0) { a0 = 0; goto L_0091A3EC; }
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 0; v0 = func_002F96F0(a0, a1);
    a1 = (*(volatile s16 *) (u32) (s0 + 36));
    a0 = v0; func_001D7D80(a0, a1, a2, a3);
    a0 = 0;
L_0091A3EC:;
    func_0091A720(a0);
    v0 = 1;
L_0091A3F8:;
L_0091A3FC:;
    return v0;
}
