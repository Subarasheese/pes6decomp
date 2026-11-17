/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32, s32);
void func_001BB080(s32, s32);
s32 func_001BB370(s32);
s32 func_001BB3E0(s32);

void func_001BBA60(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x530000U;
    v0 = (s32) ((u32) v0 + 0xffff9a58U);
    s1 = a0;
    s0 = (s32) 0x530000U;
    a0 = 0;
    { s32 c_ = v0 == 0; s0 = (s32) ((u32) s0 + 0xffff9a50U); if (c_) goto L_001BBA94; }
    a0 = (*(volatile s32 *) (u32) (s0 + 12));
L_001BBA94:;
    v0 = func_001BB370(a0);
    if (v0 == 0) goto L_001BBB70;
    v1 = (u64) s1 < (u64) v0;
L_001BBAA8:;
    a2 = 0;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) v0 + 0x2e8U); if (c_) goto L_001BBB40; }
    at = (u64) s1 < (u64) a0;
    if (at == 0) goto L_001BBB40;
    v1 = (s32) 0x2aaa0000U;
    a1 = (s32) ((u32) s1 - (u32) v0);
    v1 = v1 | 0xaaab;
    a0 = (s32) ((u32) a1 >> 31);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = hi;
    v1 = (s32) v1 >> 1;
    a2 = (s32) ((u32) v1 + (u32) a0);
    { s32 c_ = a2 >= 0; a1 = a2 & 0x7; if (c_) goto L_001BBAF4; }
    if (a1 == 0) { a0 = 1; goto L_001BBAF8; }
    a1 = (s32) ((u32) a1 + 0xfffffff8U);
L_001BBAF4:;
    a0 = 1;
L_001BBAF8:;
    v1 = (s32) a2 >> 3;
    { s32 c_ = a2 >= 0; a0 = (s32) ((u32) a0 << (a1 & 31)); if (c_) goto L_001BBB0C; }
    v1 = (s32) ((u32) a2 + 0x7U);
    v1 = (s32) v1 >> 3;
L_001BBB0C:;
    a1 = (s32) ((u32) v0 + (u32) v1);
    a0 = a0 & 0xff;
    v1 = (*(volatile u8 *) (u32) (a1 + 744));
    a2 = 1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (a1 + 744)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a1 + 744));
    v1 = v1 ^ a0;
    (*(volatile u8 *) (u32) (a1 + 744)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (v0 + 752));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + 752)) = (u8) v1;
L_001BBB40:;
    if (a2 == 0) { a0 = (s32) ((u32) v0 + 0x2f4U); goto L_001BBB58; }
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v1; goto L_001BBB70;
L_001BBB58:;
    v0 = func_001BB3E0(a0);
    a0 = v0; v0 = func_001BB370(a0);
    if (v0 != 0) { v1 = (u64) s1 < (u64) v0; goto L_001BBAA8; }
L_001BBB70:;
    v1 = (*(volatile s32 *) (u32) (gp + -23124));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -23124)) = (u32) v1;
    v1 = v1 & 0x1f;
    if (v1 != 0) goto L_001BBC00;
    v0 = (s32) ((u32) s0 + 0x8U);
    { s32 c_ = v0 == 0; a0 = 0; if (c_) goto L_001BBB98; }
    a0 = (*(volatile s32 *) (u32) (s0 + 12));
L_001BBB98:;
    v0 = func_001BB370(a0);
    s2 = v0;
    if (s2 == 0) goto L_001BBC00;
L_001BBBAC:;
    a0 = (s32) ((u32) s2 + 0x2f4U); v0 = func_001BB3E0(a0);
    a0 = v0; v0 = func_001BB370(a0);
    v1 = (*(volatile u8 *) (u32) (s2 + 752));
    v1 = (u64) v1 < (u64) (s64) 62;
    { s32 c_ = v1 != 0; s1 = v0; if (c_) goto L_001BBBF8; }
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = (s32) ((u32) s2 + 0x2f4U);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = (s32) ((u32) v1 + 0xffffffc2U);
    v0 = (s32) ((u32) v0 + 0xffffffc2U);
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v0; func_001BB080(a0, a1);
    a0 = s2; Pes6Heap_Free(a0, a1);
L_001BBBF8:;
    { s32 c_ = s1 != 0; s2 = s1; if (c_) goto L_001BBBAC; }
L_001BBC00:;
    return;
}
