/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00125F90(s64, s64, s64, s64);
s64 func_00126540(s64, s64, s64);
s64 func_001267A0(s64, s64, s64, s64);

s64 func_0014AD60(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    v0 = (s64) ((u64) a2 << 32);
    v1 = (s32) ((u32) sp + 0x34U);
    v0 = v0 >> 32;
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    s0 = a3;
    v0 = (s64) ((u64) v0 << 32);
    v0 = (s64) ((u64) v0 >> 32);
    { s32 c_ = v0 != a2; (*(volatile u32 *) (u32) (sp + 48)) = (u32) a0; if (c_) goto L_0014ADC0; }
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) a1;
    v1 = (s32) ((u32) sp + 0x44U);
    v0 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    v1 = (s64) ((u64) v0 << 32);
    v0 = (*(volatile s64 *) (u32) s0);
    v1 = (s64) ((u64) v1 >> 32);
    if (v1 == v0) goto L_0014ADC8;
    v0 = -5; goto L_0014AE44;
L_0014ADC0:;
    v0 = -5; goto L_0014AE44;
L_0014ADC8:;
    v1 = (s32) 0x150000U;
    v0 = (s32) 0x150000U;
    v1 = (s32) ((u32) v1 + 0xffffae70U);
    v0 = (s32) ((u32) v0 + 0xffffae60U);
    a1 = (s32) 0x3c0000U;
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) v1;
    a0 = (s32) ((u32) sp + 0x30U);
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) v0;
    a1 = (s32) ((u32) a1 + 0x71b8U);
    a2 = 72; v0 = func_00126540(a0, a1, a2);
    if (v0 == 0) { a0 = (s32) ((u32) sp + 0x30U); goto L_0014AE04; }
    goto L_0014AE48;
L_0014AE04:;
    a1 = 4; v0 = func_00125F90(a0, a1, a2, a3);
    s1 = v0;
    v0 = 1;
    if (s1 == v0) { v0 = (*(volatile s64 *) (u32) (sp + 72)); goto L_0014AE38; }
    a0 = (s32) ((u32) sp + 0x30U); v0 = func_001267A0(a0, a1, a2, a3);
    if (s1 != 0) goto L_0014AE30;
    s1 = -5;
L_0014AE30:;
    v0 = s1; goto L_0014AE44;
L_0014AE38:;
    a0 = (s32) ((u32) sp + 0x30U);
    (*(volatile u64 *) (u32) s0) = (u64) v0; v0 = func_001267A0(a0, a1, a2, a3);
L_0014AE44:;
L_0014AE48:;
    return v0;
}
