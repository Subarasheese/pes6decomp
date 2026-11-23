/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0017E2B0(s32);
void func_001863E0(s32, s32, s32, s32, f32);
void func_001864E0(s32);
void func_001890E0(s32);
void func_0018C180(s32, s32);
void func_0018C1B0(s32);
void func_001A33B0(s32);

void func_0090B0E0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    v1 = (s32) 0x20000U;
    v1 = v1 | 0x1c9e;
    s1 = a0;
    s0 = s1 & v1;
    if (s0 == 0) { ; goto L_0090B214; }
    v0 = s1 & 0x8;
    if (v0 == 0) { v0 = s1 & 0x400; goto L_0090B120; }
    a0 = 1; func_001863E0(a0, a1, a2, a3, f12.f);
    v0 = s1 & 0x400;
L_0090B120:;
    if (v0 == 0) { v0 = s1 & 0x80; goto L_0090B134; }
    a0 = 1; func_001A33B0(a0);
    v0 = s1 & 0x80;
L_0090B134:;
    if (v0 == 0) { a0 = s0; goto L_0090B1F4; }
    v0 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -3888));
    v0 = v0 & 0x400;
    if (v0 != 0) goto L_0090B1F0;
    v0 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -3844));
    v1 = (s32) ((u32) v1 + 0xfffff0ffU);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = 6;
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != v0) { a0 = 4; goto L_0090B1DC; }
    v0 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -4056));
    if (v0 == 0) { a0 = 4; goto L_0090B1C0; }
    a0 = (*(volatile s32 *) (u32) (gp + -20036));
    if (a0 == 0) goto L_0090B1BC;
    v0 = func_0017E2B0(a0);
    a0 = v0; func_001890E0(a0);
    a0 = 2; func_0018C1B0(a0);
    a0 = 1;
    a1 = 10; func_0018C180(a0, a1);
    goto L_0090B1F0;
L_0090B1BC:;
    a0 = 4;
L_0090B1C0:;
    func_0018C1B0(a0);
    a0 = 2;
    a1 = 4; func_0018C180(a0, a1);
    goto L_0090B1F0;
L_0090B1DC:;
    func_0018C1B0(a0);
    a0 = 2;
    a1 = 4; func_0018C180(a0, a1);
L_0090B1F0:;
    a0 = s0;
L_0090B1F4:;
    func_001864E0(a0);
    a0 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -3868));
    a0 = a0 | s0;
    (*(volatile u32 *) (u32) (v1 + -3868)) = (u32) a0;
L_0090B214:;
    return;
}
