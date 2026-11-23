/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Team_GetHomeStadium(s64, s64, s64, s64);
s64 func_0023B560(s64, s64, s64, s64);
void func_0023E0E0(s64, s64, s64, s64, s64, s64, s64, s64);
void func_0023EA10(s64, s64, s64, s64);

void func_0095C1B0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 hi = 0, lo = 0;

    v1 = (s32) 0x970000U;
    v0 = (s32) 0x970000U;
    a0 = 424;
    a1 = (*(volatile s8 *) (u32) (v0 + -11568));
    v1 = (s32) ((u32) v1 + 0xffffd2deU);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v0 = 11;
    v1 = (s32) ((u32) v1 + (u32) a0);
    { s32 c_ = a1 == v0; v1 = (*(volatile s16 *) (u32) v1); if (c_) goto L_0095C208; }
    v0 = 6;
    if (a1 == v0) { v0 = (s32) 0xca0000U; goto L_0095C1F8; }
    v0 = (s64) ((u64) v1 << 48); goto L_0095C244;
L_0095C1F8:;
    a0 = v0 | 0x49; func_0023EA10(a0, a1, a2, a3);
    goto L_0095C278;
L_0095C208:;
    v1 = (s32) 0x970000U;
    v0 = (s32) 0x970000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -6890));
    v0 = (*(volatile s16 *) (u32) (v0 + -6884));
    if (v1 != v0) { v0 = (s32) 0xca0000U; goto L_0095C234; }
    v0 = (s32) 0xca0000U;
    a0 = v0 | 0x71; func_0023EA10(a0, a1, a2, a3);
    goto L_0095C278;
L_0095C234:;
    a0 = v0 | 0x2e; func_0023EA10(a0, a1, a2, a3);
    goto L_0095C278;
L_0095C244:;
    v1 = (s32) ((u32) a1 << 3);
    v0 = v0 >> 48;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) v1 << 2);
    v1 = (s32) 0x960000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0x5290U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); func_0023EA10(a0, a1, a2, a3);
L_0095C278:;
    v0 = (s32) 0x970000U;
    v1 = (s32) 0x970000U;
    a0 = (*(volatile s8 *) (u32) (v0 + -11560));
    a1 = (*(volatile s8 *) (u32) (v1 + -11568));
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = 6;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a0 = (s32) ((u32) a1 + (u32) v0);
    if (a0 == v1) { a0 = 15; goto L_0095C360; }
    v0 = 11;
    if (a0 == v0) goto L_0095C2BC;
    a0 = 16; goto L_0095C370;
L_0095C2BC:;
    v0 = (s32) 0x970000U;
    v1 = (s32) 0x3b0000U;
    a2 = (*(volatile s16 *) (u32) (v0 + -6890));
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
    if (s0 != v0) goto L_0095C30C;
    a0 = 23; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0095C37C;
L_0095C30C:;
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
    if (v1 != v0) { a0 = 21; goto L_0095C350; }
    a0 = 23; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0095C378;
L_0095C350:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0095C378;
L_0095C360:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0095C378;
L_0095C370:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
L_0095C378:;
L_0095C37C:;
    return;
}
