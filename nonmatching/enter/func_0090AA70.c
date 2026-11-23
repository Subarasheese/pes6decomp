/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001A15B0(s32, s32, s32, s32, s32, s32, s32, s32);

void func_0090AA70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;

    a1 = (s32) 0x930000U;
    a0 = (s32) 0x930000U;
    a2 = (*(volatile u8 *) (u32) (a0 + -3844));
    a1 = (s32) ((u32) a1 + 0xfffff0ffU);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a0 = 4;
    a1 = (*(volatile u8 *) (u32) a1);
    { s32 c_ = a1 == a0; v1 = 0; if (c_) goto L_0090AB04; }
    a0 = 3;
    if (a1 == a0) goto L_0090AAB0;
    a0 = (s32) 0x930000U; goto L_0090AB58;
L_0090AAB0:;
    a0 = (s32) 0x930000U;
    a1 = (s32) 0x20000U;
    a2 = (*(volatile s32 *) (u32) (a0 + -3888));
    a0 = a2 & a1;
    if (a0 == 0) goto L_0090AAD8;
    a0 = (s32) 0x100000U;
    a0 = a2 & a0;
    if (a0 == 0) goto L_0090ABAC;
L_0090AAD8:;
    a0 = (s32) 0x930000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -3876));
    a0 = a0 & 0x8;
    if (a0 != 0) { a0 = a2 & 0x5000; goto L_0090AAF4; }
    v1 = 1; goto L_0090ABAC;
L_0090AAF4:;
    if (a0 == 0) goto L_0090ABAC;
    v1 = 1; goto L_0090ABAC;
L_0090AB04:;
    a0 = (s32) 0x930000U;
    a1 = (s32) 0x20000U;
    a2 = (*(volatile s32 *) (u32) (a0 + -3888));
    a0 = a2 & a1;
    if (a0 == 0) goto L_0090AB2C;
    a0 = (s32) 0x100000U;
    a0 = a2 & a0;
    if (a0 == 0) goto L_0090ABAC;
L_0090AB2C:;
    a0 = (s32) 0x930000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -3876));
    a0 = a0 & 0x4;
    if (a0 != 0) { a0 = a2 & 0x5000; goto L_0090AB48; }
    v1 = 1; goto L_0090ABAC;
L_0090AB48:;
    if (a0 == 0) goto L_0090ABAC;
    v1 = 1; goto L_0090ABAC;
L_0090AB58:;
    a1 = (*(volatile s32 *) (u32) (a0 + -3888));
    a0 = a1 & 0x5000;
    if (a0 == 0) goto L_0090ABAC;
    a0 = (s32) 0x20000U;
    a0 = a1 & a0;
    if (a0 == 0) goto L_0090AB88;
    a0 = (s32) 0x100000U;
    a0 = a1 & a0;
    if (a0 == 0) goto L_0090ABAC;
L_0090AB88:;
    a0 = (s32) 0x930000U;
    a1 = (*(volatile s32 *) (u32) (a0 + -3876));
    a0 = a1 & 0x4;
    if (a0 != 0) { v1 = 1; goto L_0090ABAC; }
    a0 = a1 & 0x8;
    if (a0 == 0) goto L_0090ABAC;
    v1 = 1;
L_0090ABAC:;
    if (v1 == 0) { ; goto L_0090ABC0; }
    func_001A15B0(a0, a1, a2, a3, a4, a5, a6, a7);
L_0090ABC0:;
    return;
}
