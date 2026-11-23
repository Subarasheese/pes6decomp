/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00918990(s64, s64, s64, s64);
void func_00918B60(void);
void func_009190B0(void);

void func_009182D0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0;
    s64 gp = 0x3ef370;

    v1 = (s32) ((u32) gp + 0xffffb1d0U);
    a0 = (*(volatile s32 *) (u32) (gp + -20020));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v1 + 44));
    v1 = v1 & 0x1;
    if (v1 != 0) { ; goto L_00918344; }
    func_00918990(a0, a1, a2, a3);
    func_00918B60();
    func_009190B0();
    a2 = (*(volatile s32 *) (u32) (gp + -20020));
    a1 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = -2;
    a0 = (s64) ((u64) 0 + (u64) (s64) 1);
    a2 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a2 = (*(volatile s32 *) (u32) a1);
    a1 = (*(volatile u8 *) (u32) (a2 + 44));
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (a2 + 44)) = (u8) v1;
L_00918344:;
    return;
}
