/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F16E0(s64, s64);
void func_001F17C0(s64);
void func_001F18D0(s64, s64);
s64 func_001F1A20(s64, s64, s64, s64);
void func_001F3D10(s64, s64);
void func_0020E310(s64, s64);

void func_002F1A00(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 frame[8];
    s64 sp = (s32) (u32) frame;

    v0 = 8;
    v1 = (s32) ((u32) sp + 0x30U);
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_002F1A38; }
L_002F1A1C:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_002F1A1C;
L_002F1A38:;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s64 *) (u32) (v0 + 16760));
    (*(volatile u64 *) (u32) (sp + 40)) = (u64) v0;
    v0 = (*(volatile u8 *) (u32) s0);
    if (v0 == 0) { v0 = 1; goto L_002F1A58; }
    v0 = 0; goto L_002F1AC8;
L_002F1A58:;
    a0 = a3;
    (*(volatile u8 *) (u32) s0) = (u8) v0;
    a3 = a5;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) a1;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) a2;
    a1 = a4;
    a2 = (s32) ((u32) sp + 0x30U); v0 = func_001F1A20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = (s32) ((u32) sp + 0x28U); func_001F16E0(a0, a1);
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x3cU); func_0020E310(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = (s32) ((u32) sp + 0x3cU); func_001F18D0(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s0 + 2));
    v0 = v0 & 0x10;
    if (v0 == 0) { v0 = 1; goto L_002F1AC8; }
    a0 = (*(volatile s32 *) (u32) (s0 + 32)); func_001F17C0(a0);
    v0 = 1;
L_002F1AC8:;
    return;
}
