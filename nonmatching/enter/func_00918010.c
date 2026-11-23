/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DF2F0(s64);
void func_001DF820(s64, s64, s64, s64);
s64 func_002D5720(s64);
s64 func_002F96F0(s64, s64);
void func_002F99A0(s64, s64, s64);
void func_00918150(void);
void func_00918F30(s64, s64, s64, s64, s64, s64, s64, s64);

s64 func_00918010(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    v1 = (*(volatile u8 *) (u32) (a0 + 44));
    v0 = v1 & 0x1;
    if (v0 == 0) { ; goto L_00918138; }
    v0 = (s64) ((u64) v1 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { s2 = 0; goto L_009180BC; }
    a0 = (*(volatile s32 *) (u32) (a0 + 8));
    a1 = 0;
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a1 = (*(volatile s32 *) (u32) (gp + -20020)); goto L_00918078; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (*(volatile s32 *) (u32) (gp + -20020));
L_00918078:;
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    a0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 + 0xffff9cd0U);
    v0 = (s32) ((u32) v0 + 0xffff9cd4U);
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    a0 = (*(volatile s32 *) (u32) (a0 + 28));
    a0 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a2 = s0; func_002F99A0(a0, a1, a2);
    s2 = 0;
L_009180BC:;
    s0 = 0;
L_009180C0:;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_009180F8;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_009180F8:;
    a0 = s2; v0 = func_002D5720(a0);
    a1 = v0;
    a0 = s1; func_001DF820(a0, a1, a2, a3);
    a0 = s1; func_001DF2F0(a0);
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 2;
    { s32 c_ = at != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_009180C0; }
    func_00918F30(a0, a1, a2, a3, a4, a5, a6, a7);
    func_00918150();
L_00918138:;
    v0 = 1;
    return v0;
}
