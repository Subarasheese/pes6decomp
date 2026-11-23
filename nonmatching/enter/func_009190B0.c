/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001ED8F0(s64, s64);
void func_001EDAE0(s64, s64);
s64 func_002F96F0(s64, s64);
void func_002F9720(s64, s64, s64);
s64 func_002F9AF0(s64, s64, s64, s64);

void func_009190B0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;

    s1 = 0;
    s0 = 0;
L_009190CC:;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) s1 + 0x1U); v0 = func_002F96F0(a0, a1);
    a3 = (*(volatile s32 *) (u32) (gp + -20020));
    a0 = v0;
    v1 = (s32) 0x930000U;
    a1 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 + 0xffff9cd0U);
    v0 = (s32) ((u32) a3 << 2);
    v0 = (s32) ((u32) a1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (v0 + 8));
    a2 = 1; v0 = func_002F9AF0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -20020));
    a2 = v0;
    v1 = (s32) ((u32) gp + 0xffffb1d0U);
    v0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = 0; func_002F9720(a0, a1, a2);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 2;
    { s32 c_ = at != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_009190CC; }
    a1 = (*(volatile s32 *) (u32) (gp + -20020));
    a3 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = -3;
    a0 = (s64) ((u64) 0 + (u64) (s64) 2);
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a3 + (u32) a1);
    a2 = (*(volatile s32 *) (u32) a1);
    a1 = (*(volatile u8 *) (u32) (a2 + 44));
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (a2 + 44)) = (u8) v1;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a3 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v1 + 44));
    v1 = (s64) ((u64) v1 << 62);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_00919210;
    s2 = 0;
    s0 = 0;
L_009191B8:;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_009191F0;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_009191F0:;
    a0 = s1;
    a1 = 1; func_001EDAE0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 2;
    { s32 c_ = at != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_009191B8; }
L_00919210:;
    a0 = (*(volatile s32 *) (u32) (gp + -20020));
    v1 = (s32) ((u32) gp + 0xffffb1d0U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v1 + 44));
    v1 = (s64) ((u64) v1 << 62);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_00919298;
    s2 = 0;
    s0 = 0;
L_00919240:;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_00919278;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_00919278:;
    a0 = s1;
    a1 = 0; func_001ED8F0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 2;
    { s32 c_ = at != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00919240; }
L_00919298:;
    return;
}
