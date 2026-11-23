/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Team_GetHomeStadium(s64, s64, s64, s64);
s64 func_0023B560(s64, s64, s64, s64);
void func_0023E0E0(s64, s64, s64, s64, s64, s64, s64, s64);
void func_0023EA10(s64, s64, s64, s64);

void func_008B59F0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 hi = 0, lo = 0;

    a1 = (s32) 0x8e0000U;
    v0 = (s32) 0x8e0000U;
    a0 = 424;
    a3 = (*(volatile s8 *) (u32) (v0 + -15600));
    a1 = (s32) ((u32) a1 + 0xffffc31eU);
    v0 = (s32) 0x8e0000U;
    v1 = (*(volatile s8 *) (u32) (v0 + -15592));
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (s32) ((u32) a3 + (u32) v0);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s32) ((u32) a1 + (u32) v0);
    { s32 c_ = a3 != 0; v1 = (*(volatile s16 *) (u32) v0); if (c_) goto L_008B5A80; }
    v0 = (s32) ((u32) a3 << 3);
    v1 = (s32) ((u32) v0 + (u32) a3);
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) 0x8d0000U;
    v1 = (s32) ((u32) v1 + (u32) a3);
    v0 = (s32) ((u32) v0 + 0x1dd0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (*(volatile s16 *) (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); func_0023EA10(a0, a1, a2, a3);
    goto L_008B5B28;
L_008B5A80:;
    v0 = 24;
    if (a2 == v0) { v0 = (s32) 0xca0000U; goto L_008B5AE4; }
    v0 = 14;
    if (a2 == v0) { v0 = (s32) 0xca0000U; goto L_008B5AD4; }
    v0 = 13;
    if (a2 == v0) { v0 = (s32) 0xca0000U; goto L_008B5AC4; }
    if (a2 == 0) { v0 = (s32) 0xc80000U; goto L_008B5AB4; }
    v0 = (s64) ((u64) v1 << 48); goto L_008B5AF4;
L_008B5AB4:;
    a0 = v0 | 0x26; func_0023EA10(a0, a1, a2, a3);
    goto L_008B5B28;
L_008B5AC4:;
    a0 = v0 | 0x2e; func_0023EA10(a0, a1, a2, a3);
    goto L_008B5B28;
L_008B5AD4:;
    a0 = v0 | 0x29; func_0023EA10(a0, a1, a2, a3);
    goto L_008B5B28;
L_008B5AE4:;
    a0 = v0 | 0x94; func_0023EA10(a0, a1, a2, a3);
    goto L_008B5B28;
L_008B5AF4:;
    v1 = (s32) ((u32) a2 << 3);
    v0 = v0 >> 48;
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) v1 << 2);
    v1 = (s32) 0x8d0000U;
    a0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 + 0x1dd0U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_0023EA10(a0, a1, a2, a3);
L_008B5B28:;
    v0 = (s32) 0x8e0000U;
    v1 = 13;
    v0 = (*(volatile s8 *) (u32) (v0 + -15600));
    if (v0 == v1) goto L_008B5B44;
    a0 = 16; goto L_008B5CE8;
L_008B5B44:;
    v0 = (s32) 0x8e0000U;
    v1 = (s32) 0x3b0000U;
    a2 = (*(volatile s16 *) (u32) (v0 + -10074));
    v1 = (s32) ((u32) v1 + 0xffff9c61U);
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7088));
    v0 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) v0 + (u32) a2);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    s0 = (*(volatile u8 *) (u32) v0);
    a1 = 0; v0 = Pes6Team_GetHomeStadium(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (s0 != v0) goto L_008B5C00;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7090)); v0 = func_0023B560(a0, a1, a2, a3);
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 + (u32) v0);
    v1 = (s32) ((u32) v1 + 0xffff9c60U);
    a0 = (s32) ((u32) a0 << 2);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != v0) goto L_008B5BC8;
    a0 = 23; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008B5CF4;
L_008B5BC8:;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u16 *) (u32) (v1 + 7088));
    v0 = (*(volatile u16 *) (u32) (v0 + 7090));
    if (v1 != v0) { a0 = 22; goto L_008B5BF0; }
    a0 = 23; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008B5CF0;
L_008B5BF0:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008B5CF0;
L_008B5C00:;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7088)); v0 = func_0023B560(a0, a1, a2, a3);
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 + (u32) v0);
    v1 = (s32) ((u32) v1 + 0xffff9c60U);
    a0 = (s32) ((u32) a0 << 2);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != v0) { a0 = 21; goto L_008B5CD8; }
    v0 = (s32) 0x8e0000U;
    v1 = (s32) 0x3b0000U;
    a2 = (*(volatile s16 *) (u32) (v0 + -10074));
    v1 = (s32) ((u32) v1 + 0xffff9c61U);
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7090));
    v0 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) v0 + (u32) a2);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    s0 = (*(volatile u8 *) (u32) v0);
    a1 = 0; v0 = Pes6Team_GetHomeStadium(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (s0 != v0) goto L_008B5C84;
    a0 = 23; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008B5CF0;
L_008B5C84:;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7090)); v0 = func_0023B560(a0, a1, a2, a3);
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 + (u32) v0);
    v1 = (s32) ((u32) v1 + 0xffff9c60U);
    a0 = (s32) ((u32) a0 << 2);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != v0) { a0 = 22; goto L_008B5CC8; }
    a0 = 23; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008B5CF0;
L_008B5CC8:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008B5CF0;
L_008B5CD8:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008B5CF0;
L_008B5CE8:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
L_008B5CF0:;
L_008B5CF4:;
    return;
}
