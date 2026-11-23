/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_GetUnavailableFlag(void);
void func_0023E0E0(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_00246550(s64);
s64 func_002D7920(s64);
s64 func_008472D0(s64, s64, s64, s64);
s64 func_00858C20(s64, s64, s64, s64);
void func_008B31A0(s64, s64);
void func_00D0C5F0(s64, s64, s64, s64);
void func_00D0C770(s64, s64, s64, s64);

void func_008C4F30(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;

    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) goto L_008C51D8;
    v0 = (s32) 0x590000U;
    v1 = 3;
    v0 = (*(volatile u8 *) (u32) (v0 + 7980));
    if (v0 != v1) goto L_008C5074;
    s0 = (s32) 0x8b0000U;
    v1 = (s32) 0x8e0000U;
    s0 = (s32) ((u32) s0 + 0x144eU);
    v1 = (s32) ((u32) v1 + 0x7850U);
    a0 = (*(volatile s8 *) (u32) s0);
    v0 = 2;
    a0 = a0 & 0x1;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) (gp + -20144)); goto L_008C5050; }
    v0 = 1;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) (gp + -20144)); goto L_008C5034; }
    if (v1 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -20144)); goto L_008C4FA8; }
    goto L_008C512C;
L_008C4FA8:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
    v1 = (*(volatile s8 *) (u32) s0);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1bb0U);
    v1 = v1 & 0x1;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u16 *) (u32) v0); v0 = func_002D7920(a0);
    if (v0 != 0) { a0 = 14; goto L_008C5024; }
    a0 = 193; v0 = func_00246550(a0);
    if (v0 != 0) { v0 = (s32) 0x6b0000U; goto L_008C5010; }
    a0 = 194; v0 = func_00246550(a0);
    if (v0 != 0) goto L_008C500C;
    a0 = 195; v0 = func_00246550(a0);
    if (v0 == 0) goto L_008C512C;
L_008C500C:;
    v0 = (s32) 0x6b0000U;
L_008C5010:;
    a0 = 14;
    a1 = v0 | 0x10; func_00D0C770(a0, a1, a2, a3);
    goto L_008C512C;
L_008C5024:;
    func_00D0C5F0(a0, a1, a2, a3);
    goto L_008C512C;
L_008C5034:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
    a0 = 14; func_00D0C5F0(a0, a1, a2, a3);
    goto L_008C512C;
L_008C5050:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
    v0 = (s32) 0x6b0000U;
    a0 = 14;
    a1 = v0 | 0x10; func_00D0C770(a0, a1, a2, a3);
    goto L_008C512C;
L_008C5074:;
    v0 = (s32) 0x8e0000U;
    v1 = 2;
    a0 = (*(volatile s32 *) (u32) (v0 + 30800));
    if (a0 == v1) { v0 = (*(volatile s32 *) (u32) (gp + -20144)); goto L_008C5110; }
    v0 = 1;
    if (a0 == v0) { a0 = 30; goto L_008C5100; }
    if (a0 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -20144)); goto L_008C50A4; }
    goto L_008C512C;
L_008C50A4:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7088)); v0 = func_002D7920(a0);
    if (v0 == 0) { v0 = (s32) 0x6b0000U; goto L_008C50DC; }
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7090)); v0 = func_002D7920(a0);
    if (v0 != 0) { a0 = 30; goto L_008C50F0; }
    v0 = (s32) 0x6b0000U;
L_008C50DC:;
    a0 = 14;
    a1 = v0 | 0x10; func_00D0C770(a0, a1, a2, a3);
    goto L_008C512C;
L_008C50F0:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C512C;
L_008C5100:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C512C;
L_008C5110:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
    v0 = (s32) 0x6b0000U;
    a0 = 14;
    a1 = v0 | 0x10; func_00D0C770(a0, a1, a2, a3);
L_008C512C:;
    v0 = func_008472D0(a0, a1, a2, a3);
    s0 = (*(volatile s16 *) (u32) v0);
    a0 = 0; v0 = func_00858C20(a0, a1, a2, a3);
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    if (s0 == v1) goto L_008C518C;
    v0 = func_008472D0(a0, a1, a2, a3);
    s0 = (*(volatile s16 *) (u32) v0);
    a0 = 1; v0 = func_00858C20(a0, a1, a2, a3);
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    if (s0 == v1) goto L_008C518C;
    v0 = (*(volatile s32 *) (u32) (gp + -20144));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
    a0 = 14; func_00D0C5F0(a0, a1, a2, a3);
L_008C518C:;
    v1 = (s32) 0x8b0000U;
    a0 = (s32) 0x8e0000U;
    a1 = (*(volatile s8 *) (u32) (v1 + 5198));
    a0 = (s32) ((u32) a0 + 0x7868U);
    a1 = a1 & 0x1;
    v1 = 1;
    a1 = (s32) ((u32) a1 << 4);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    if (a0 != v1) { ; goto L_008C54F8; }
    v0 = (*(volatile s32 *) (u32) (gp + -20144));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
    a0 = 14; func_00D0C5F0(a0, a1, a2, a3);
    goto L_008C54F4;
L_008C51D8:;
    v1 = (s32) 0x590000U;
    a0 = 3;
    v1 = (*(volatile u8 *) (u32) (v1 + 7980));
    if (v1 != a0) goto L_008C5448;
    v1 = (s32) 0x8e0000U;
    a1 = 2;
    v1 = (*(volatile s32 *) (u32) (v1 + 30800));
    if (v1 == a1) goto L_008C53D4;
    a0 = 1;
    if (v1 == a0) goto L_008C5334;
    if (v1 == 0) goto L_008C521C;
    goto L_008C54F4;
L_008C521C:;
    v1 = (s32) 0x8e0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 30804));
    if (v1 == a1) { v0 = (*(volatile s32 *) (u32) (gp + -20144)); goto L_008C52DC; }
    if (v1 == a0) { v0 = (*(volatile s32 *) (u32) (gp + -20144)); goto L_008C529C; }
    if (v1 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -20144)); goto L_008C5244; }
    goto L_008C54F4;
L_008C5244:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7088)); v0 = func_002D7920(a0);
    if (v0 == 0) { a0 = 20; goto L_008C527C; }
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7090)); v0 = func_002D7920(a0);
    if (v0 != 0) { a0 = 30; goto L_008C528C; }
    a0 = 20;
L_008C527C:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C54F4;
L_008C528C:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C54F4;
L_008C529C:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7088)); v0 = func_002D7920(a0);
    if (v0 != 0) { a0 = 30; goto L_008C52CC; }
    a0 = 20; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C54F4;
L_008C52CC:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C54F4;
L_008C52DC:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7088)); v0 = func_002D7920(a0);
    if (v0 == 0) { a0 = 20; goto L_008C5314; }
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7090)); v0 = func_002D7920(a0);
    if (v0 != 0) { a0 = 30; goto L_008C5324; }
    a0 = 20;
L_008C5314:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C54F4;
L_008C5324:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C54F4;
L_008C5334:;
    v1 = (s32) 0x8e0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 30804));
    if (v1 == a1) { v0 = (*(volatile s32 *) (u32) (gp + -20144)); goto L_008C53B8; }
    if (v1 == a0) { v0 = (*(volatile s32 *) (u32) (gp + -20144)); goto L_008C539C; }
    if (v1 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -20144)); goto L_008C535C; }
    goto L_008C54F4;
L_008C535C:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7090)); v0 = func_002D7920(a0);
    if (v0 != 0) { a0 = 30; goto L_008C538C; }
    a0 = 20; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C54F4;
L_008C538C:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C54F4;
L_008C539C:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
    a0 = 30; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C54F4;
L_008C53B8:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
    a0 = 20; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C54F4;
L_008C53D4:;
    v0 = (s32) 0x8e0000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 30804));
    if (v1 == a1) { v0 = (*(volatile s32 *) (u32) (gp + -20144)); goto L_008C5428; }
    v0 = 1;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) (gp + -20144)); goto L_008C5414; }
    if (v1 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -20144)); goto L_008C5400; }
    a0 = 20; goto L_008C5438;
L_008C5400:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
    goto L_008C5434;
L_008C5414:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
    goto L_008C5434;
L_008C5428:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
L_008C5434:;
    a0 = 20;
L_008C5438:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C54F4;
L_008C5448:;
    v1 = (s32) 0x8e0000U;
    a0 = 2;
    a1 = (*(volatile s32 *) (u32) (v1 + 30800));
    if (a1 == a0) { v0 = (*(volatile s32 *) (u32) (gp + -20144)); goto L_008C54E0; }
    v1 = 1;
    if (a1 == v1) { a0 = 30; goto L_008C54D0; }
    if (a1 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -20144)); goto L_008C5478; }
    goto L_008C54F4;
L_008C5478:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7088)); v0 = func_002D7920(a0);
    if (v0 == 0) { a0 = 20; goto L_008C54B0; }
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7090)); v0 = func_002D7920(a0);
    if (v0 != 0) { a0 = 30; goto L_008C54C0; }
    a0 = 20;
L_008C54B0:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C54F4;
L_008C54C0:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C54F4;
L_008C54D0:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C54F4;
L_008C54E0:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1);
    a0 = 20; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
L_008C54F4:;
L_008C54F8:;
    return;
}
