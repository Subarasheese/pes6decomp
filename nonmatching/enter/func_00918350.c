/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7F10(s64, s64, s64, s64);
s64 func_002F9630(s64);
void func_002F9650(s64, s64, s64, s64);
s64 func_002F96F0(s64, s64);
void func_002F97A0(s64, s64, s64, s64);
void func_00918E50(s64, s64, s64, s64);

void func_00918350(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;

    v1 = (s32) ((u32) gp + 0xffffb1d0U);
    a0 = (*(volatile s32 *) (u32) (gp + -20020));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v1 + 44));
    v1 = v1 & 0x1;
    if (v1 == 0) { ; goto L_00918560; }
    func_00918E50(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 44));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { s1 = 0; goto L_00918424; }
    s1 = 0;
    s0 = 0;
L_009183BC:;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = 0; func_002F9650(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 2;
    { s32 c_ = at != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_009183BC; }
    a1 = (*(volatile s32 *) (u32) (gp + -20020));
    v1 = 0 & 0x1;
    a0 = (s32) ((u32) gp + 0xffffb1d0U);
    v0 = -3;
    v1 = (s32) ((u32) v1 << 1);
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a1 = (*(volatile s32 *) (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a1 + 44));
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (a1 + 44)) = (u8) v0;
    s1 = 0;
L_00918424:;
    s0 = 0;
L_00918428:;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 8)); func_002F97A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -20020));
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = (s32) ((u32) gp + 0xffffb1d0U);
    at = s1 < 2;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) 0;
    { s32 c_ = at != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00918428; }
    v0 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); func_002F97A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -20020));
    v1 = (s32) ((u32) gp + 0xffffb1d0U);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_00918500; }
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
L_009184CC:;
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0; func_001D7F10(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20020)); goto L_009184CC; }
L_00918500:;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); func_002F97A0(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (gp + -20020));
    a2 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = -2;
    a0 = 0 & 0x1;
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a1 = (*(volatile s32 *) (u32) a1);
    (*(volatile u32 *) (u32) a1) = (u32) 0;
    a1 = (*(volatile s32 *) (u32) (gp + -20020));
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a2 = (*(volatile s32 *) (u32) a1);
    a1 = (*(volatile u8 *) (u32) (a2 + 44));
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (a2 + 44)) = (u8) v1;
L_00918560:;
    return;
}
