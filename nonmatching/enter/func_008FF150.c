/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DF2F0(s64);
void func_001DF820(s64, s64, s64, s64);
s64 func_002D5720(s64);
s64 func_002F96F0(s64, s64);
void func_002F99A0(s64, s64, s64);
void func_008FF850(s64, s64, s64, s64, s64, s64, s64, s64);

s64 func_008FF150(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;

    v1 = (s32) ((u32) gp + 0xffffb1acU);
    a0 = (*(volatile s32 *) (u32) (gp + -20056));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (*(volatile s32 *) (u32) v1);
    a0 = (*(volatile u8 *) (u32) (a1 + 28));
    v1 = a0 & 0x1;
    { s32 c_ = v1 == 0; v0 = 0; if (c_) goto L_008FF260; }
    v0 = (s64) ((u64) a0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { s1 = 0; goto L_008FF1F8; }
    a0 = (*(volatile s32 *) (u32) (a1 + 4));
    s0 = 0;
    a1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a1 = (*(volatile s32 *) (u32) (gp + -20056)); goto L_008FF1B4; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (*(volatile s32 *) (u32) (gp + -20056));
L_008FF1B4:;
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    a0 = (s32) ((u32) gp + 0xffffb1acU);
    v1 = (s32) ((u32) v1 + 0xffff8d20U);
    v0 = (s32) ((u32) v0 + 0xffff8d24U);
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
    s1 = 0;
L_008FF1F8:;
    v1 = (*(volatile s32 *) (u32) (gp + -20056));
L_008FF1FC:;
    v0 = (s32) ((u32) gp + 0xffffb1acU);
    a1 = (s32) ((u32) s1 + 0x5U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_008FF228;
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
L_008FF228:;
    a0 = s1; v0 = func_002D5720(a0);
    a1 = v0;
    a0 = s0; func_001DF820(a0, a1, a2, a3);
    a0 = s0; func_001DF2F0(a0);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 2;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20056)); goto L_008FF1FC; }
    func_008FF850(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 1;
L_008FF260:;
    return v0;
}
