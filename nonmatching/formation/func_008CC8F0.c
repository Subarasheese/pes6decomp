/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008D87E0(s64, s64, s64);

void func_008CC8F0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0;

    v1 = a2 & 0xff;
    if (v1 == 0) goto L_008CC904;
    a2 = (s64) ((u64) 0 + (u64) (s64) 1);
L_008CC904:;
    a3 = a1 & 0xff;
    a4 = a2 & 0xff;
    v1 = (s32) ((u32) a3 + (u32) a0);
    a1 = (s32) ((u32) v1 + 0x1cU);
    v1 = (*(volatile u8 *) (u32) (v1 + 28));
    if (v1 == a4) { ; goto L_008CC948; }
    v0 = (s32) 0x8f0000U;
    (*(volatile u8 *) (u32) a1) = (u8) a2;
    v1 = (s32) ((u32) a3 << 2);
    v0 = (s32) ((u32) v0 + 0xffffd970U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = a4;
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) a0 + 0x6b4U); func_008D87E0(a0, a1, a2);
L_008CC948:;
    return;
}
