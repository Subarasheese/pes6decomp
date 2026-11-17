/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7840(s64, s64);
void func_001D78B0(s64, s64);
void func_001D7960(s64, s64);
void func_001D7D60(s64, s64);
s64 func_002F9440(s64, s64, s64, s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);
void func_002F9720(s64, s64, s64);
s64 func_002F97E0(s64, s64, s64, s64);
void func_00C78170(s64, s64, s64, s64);

void func_00C77F00(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;

    a0 = 5;
    v0 = func_002F97E0(a0, a1, a2, a3);
    s0 = (s32) 0xcb0000U;
    s1 = v0;
    s2 = 0;
    s0 = (s32) ((u32) s0 + 0xffff8740U);
L_00C77F2C:;
    a1 = (*(volatile s32 *) (u32) s0);
    v0 = (s32) 0x10000U;
    a0 = v0 | 0x24a; v0 = func_002F9440(a0, a1, a2, a3);
    a2 = v0;
    a0 = s1;
    a1 = s2; func_002F9720(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 5;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C77F2C; }
    a1 = (*(volatile s32 *) (u32) (gp + -19260));
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe10U);
    a0 = 2;
    v1 = (s32) ((u32) a1 << 5);
    v1 = (s32) ((u32) v1 - (u32) a1);
    s0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u32 *) (u32) v0) = (u32) s1; v0 = func_002F97E0(a0, a1, a2, a3);
    a0 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 + 0xffffbe14U);
    v1 = (s32) ((u32) v1 + 0xffffbe10U);
    a0 = (s32) ((u32) a0 + (u32) s0);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_00C77FF8; }
    a0 = (*(volatile s32 *) (u32) (gp + -19260));
L_00C77FB8:;
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe10U);
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 2; func_001D7960(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (gp + -19260)); goto L_00C77FB8; }
L_00C77FF8:;
    s1 = 0;
    s0 = 0;
L_00C78000:;
    a0 = (*(volatile s32 *) (u32) (gp + -19260));
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe10U);
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 3; func_001D7840(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -19260));
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe10U);
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) a0 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) (v0 + 44));
    v0 = (s32) ((u32) v1 << 8);
    v0 = (s32) ((u32) v0 - (u32) v1);
    { s32 c_ = v0 >= 0; s2 = (s32) v0 >> 8; if (c_) goto L_00C78070; }
    v0 = (s32) ((u32) v0 + 0xffU);
    s2 = (s32) v0 >> 8;
L_00C78070:;
    a0 = (*(volatile s32 *) (u32) a0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a1 = s2 & 0xff;
    a0 = v0; func_001D78B0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 5;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x8U); if (c_) goto L_00C78000; }
    a0 = (*(volatile s32 *) (u32) (gp + -19260));
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe10U);
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_00C78110; }
    a0 = (*(volatile s32 *) (u32) (gp + -19260));
L_00C780CC:;
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe10U);
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 0; func_001D7D60(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (gp + -19260)); goto L_00C780CC; }
L_00C78110:;
    func_00C78170(a0, a1, a2, a3);
    a3 = (*(volatile s32 *) (u32) (gp + -19260));
    a1 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) a1 + 0xffffbe10U);
    v1 = -3;
    a0 = (s64) ((u64) 0 + (u64) (s64) 2);
    a2 = (s32) ((u32) a3 << 5);
    a2 = (s32) ((u32) a2 - (u32) a3);
    a2 = (s32) ((u32) a2 << 2);
    a2 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile u8 *) (u32) (a2 + 113));
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (a2 + 113)) = (u8) v1;
    return;
}
