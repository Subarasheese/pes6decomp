/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0023B380(s64);
void func_0023B3B0(s64, s64, s64, s64);
void func_0023EA10(s64, s64, s64, s64);
void func_0024A710(s64, s64, s64, s64);
void func_0024ABF0(s64, s64, s64, s64, s64, s64, s64, s64);
void func_0024AE40(s64, s64, s64, s64);
void func_0024AF00(s64, s64, s64, s64);
void func_0024B770(s64, s64, s64, s64);
void func_0024BBB0(s64, s64, s64, s64, s64, s64, s64, s64);
void func_0024BC80(s64, s64, s64, s64);
void func_0024BE20(s64, s64, s64, s64);
s64 func_0024E650(void);

void func_00249E90(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;

    v0 = func_0024E650();
    v1 = (*(volatile s32 *) (u32) (gp + -22624));
    s0 = v0;
    v0 = 1;
    v1 = v1 & 0x1;
    if (v1 != v0) { v1 = (*(volatile s32 *) (u32) (gp + -22624)); goto L_00249EF4; }
    s1 = 0;
    a0 = (s64) ((u64) s1 << 56);
L_00249EC4:;
    a0 = a0 >> 56; func_0024BE20(a0, a1, a2, a3);
    a0 = s1; func_0024AE40(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 8;
    if (v0 != 0) { a0 = (s64) ((u64) s1 << 56); goto L_00249EC4; }
    a0 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 + 0xffffa200U); func_0024B770(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -22624));
L_00249EF4:;
    v0 = 2;
    v1 = v1 & 0x2;
    if (v1 != v0) { v1 = (*(volatile s32 *) (u32) (gp + -22624)); goto L_00249F3C; }
    s1 = 0;
L_00249F08:;
    a0 = (s64) ((u64) s1 << 56);
    a0 = a0 >> 56; func_0024BC80(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 8;
    if (v0 != 0) goto L_00249F08;
    func_0024AF00(a0, a1, a2, a3);
    a0 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 + 0xffffa200U); func_0024B770(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -22624));
L_00249F3C:;
    v0 = 4;
    v1 = v1 & 0x4;
    if (v1 != v0) { v1 = (*(volatile s32 *) (u32) (gp + -22624)); goto L_00249F68; }
    a0 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 + 0xffffa200U); func_0024A710(a0, a1, a2, a3);
    a0 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 + 0xffffa200U); func_0024B770(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -22624));
L_00249F68:;
    v0 = 8;
    v1 = v1 & 0x8;
    if (v1 != v0) { s1 = 0; goto L_00249F90; }
    func_0024ABF0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 + 0xffffa200U); func_0024B770(a0, a1, a2, a3);
    s1 = 0;
L_00249F90:;
    a0 = s1; v0 = func_0023B380(a0);
    if (v0 != 0) goto L_00249FB0;
    a1 = (s32) ((u32) s1 + 0x8U);
    a0 = s1; func_0023B3B0(a0, a1, a2, a3);
L_00249FB0:;
    a0 = (s32) ((u32) s1 + 0x8U); v0 = func_0023B380(a0);
    if (v0 != 0) goto L_00249FD0;
    a0 = (s32) ((u32) s1 + 0x8U);
    a1 = s1; func_0023B3B0(a0, a1, a2, a3);
L_00249FD0:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 8;
    if (v0 != 0) goto L_00249F90;
    v0 = (*(volatile s16 *) (u32) (gp + -22644));
    v0 = v0 < 8;
    if (v0 != 0) { v0 = (s32) 0xc90000U; goto L_0024A054; }
    v0 = (s32) ((u32) s0 << 1);
    v1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) v0 + (u32) s0);
    v1 = (s32) ((u32) v1 + 0xffffa200U);
    a0 = (s32) ((u32) a0 << 2);
    v0 = 5;
    a0 = (s32) ((u32) a0 + (u32) s0);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s8 *) (u32) v1);
    if (v1 == v0) { v0 = (s32) 0xc90000U; goto L_0024A044; }
    v0 = 6;
    if (v1 == v0) { v0 = (s32) 0xc90000U; goto L_0024A034; }
    goto L_0024A05C;
L_0024A034:;
    a0 = v0 | 0x11; func_0023EA10(a0, a1, a2, a3);
    goto L_0024A05C;
L_0024A044:;
    a0 = v0 | 0xe; func_0023EA10(a0, a1, a2, a3);
    goto L_0024A05C;
L_0024A054:;
    a0 = v0 | 0xa; func_0023EA10(a0, a1, a2, a3);
L_0024A05C:;
    func_0024BBB0(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u32 *) (u32) (gp + -22624)) = (u32) 0;
    return;
}
