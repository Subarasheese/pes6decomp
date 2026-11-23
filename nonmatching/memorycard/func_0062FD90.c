/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001F08B0(s64);
s64 func_00237A70(s64);
s64 func_00645820(s64);
void sprintf(s64, s64, s64, s64, s64, s64, s64, s64);

s64 func_0062FD90(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 hi = 0, lo = 0;

    s1 = a0;
    a0 = (*(volatile u8 *) (u32) (a0 + 52));
    at = (u64) a0 < (u64) (s64) 59;
    { s32 c_ = at == 0; v0 = 0; if (c_) goto L_0062FF50; }
    a1 = (s32) 0x660000U;
    v1 = (s32) ((u32) a0 << 2);
    a1 = (s32) ((u32) a1 + 0xffffad30U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x62fdd4U) goto L_0062FDD4; if (t_ == 0x62fe1cU) goto L_0062FE1C; if (t_ == 0x62ff18U) goto L_0062FF18; if (t_ == 0x62ff50U) goto L_0062FF50; }
L_0062FDD4:;
    v0 = (*(volatile u8 *) (u32) (s1 + 98));
    if (v0 != 0) { v0 = (s32) 0x190000U; goto L_0062FDF4; }
    v0 = (s32) 0x1a0000U;
    a0 = v0 | 0x4; v0 = func_001F08B0(a0);
    a0 = (*(volatile u8 *) (u32) (s1 + 98)); goto L_0062FF54;
L_0062FDF4:;
    a0 = v0 | 0x90; v0 = func_001F08B0(a0);
    a2 = (*(volatile u8 *) (u32) (s1 + 98));
    a0 = (s32) 0x650000U;
    a1 = v0;
    a0 = (s32) ((u32) a0 + 0x7900U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x650000U;
    v0 = (s32) ((u32) v0 + 0x7900U); goto L_0062FF50;
L_0062FE1C:;
    v0 = (*(volatile u8 *) (u32) (s1 + 54));
    at = v0 < 3;
    if (at == 0) { at = v0 < 5; goto L_0062FE34; }
    s0 = 0; goto L_0062FE60;
L_0062FE34:;
    if (at == 0) { at = v0 < 9; goto L_0062FE44; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_0062FE60;
L_0062FE44:;
    if (at == 0) { at = v0 < 17; goto L_0062FE54; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_0062FE60;
L_0062FE54:;
    if (at == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 4); goto L_0062FE60; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 3);
L_0062FE60:;
    s2 = s0 & 0xff;
    if (s2 != 0) { v1 = 1; goto L_0062FEA0; }
    v1 = (*(volatile u8 *) (u32) (s1 + 98));
    v0 = 1;
    if (v1 != v0) goto L_0062FE9C;
    v0 = func_00237A70(a0);
    if (v0 == 0) goto L_0062FE9C;
    a0 = 91; v0 = func_00645820(a0);
    goto L_0062FF50;
L_0062FE9C:;
    v1 = 1;
L_0062FEA0:;
    if (s2 != v1) { v1 = (*(volatile u8 *) (u32) (s1 + 98)); goto L_0062FED8; }
    v0 = (*(volatile u8 *) (u32) (s1 + 98));
    if (v0 != v1) goto L_0062FED4;
    a0 = (*(volatile u8 *) (u32) (s1 + 52)); v0 = func_00237A70(a0);
    if (v0 == 0) goto L_0062FED4;
    a0 = 92; v0 = func_00645820(a0);
    goto L_0062FF50;
L_0062FED4:;
    v1 = (*(volatile u8 *) (u32) (s1 + 98));
L_0062FED8:;
    { s32 c_ = v1 >= 0; v0 = v1 & 0x7; if (c_) goto L_0062FEEC; }
    if (v0 == 0) { a0 = v0 & 0xff; goto L_0062FEF0; }
    v0 = (s32) ((u32) v0 + 0xfffffff8U);
L_0062FEEC:;
    a0 = v0 & 0xff;
L_0062FEF0:;
    v0 = s0 & 0xff;
    v1 = (s32) ((u32) v0 << 3);
    v0 = (s32) 0x650000U;
    v0 = (s32) ((u32) v0 + 0x78d0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (*(volatile u8 *) (u32) v0); v0 = func_00645820(a0);
    goto L_0062FF50;
L_0062FF18:;
    v1 = (*(volatile u8 *) (u32) (s1 + 98));
    if (v1 == 0) goto L_0062FF50;
    v0 = 9;
    a0 = (s32) 0x650000U;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a1 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0x7900U);
    a1 = (s32) ((u32) a1 + 0xffffad28U);
    v0 = hi;
    a2 = v0 & 0xff; sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x650000U;
    v0 = (s32) ((u32) v0 + 0x7900U);
L_0062FF50:;
    a0 = (*(volatile u8 *) (u32) (s1 + 98));
L_0062FF54:;
    v1 = 253;
    if (a0 != v1) { v1 = 254; goto L_0062FF74; }
    v0 = (s32) 0x190000U;
    a0 = v0 | 0x24; v0 = func_001F08B0(a0);
    goto L_0062FFC4;
L_0062FF74:;
    if (a0 != v1) { v1 = 255; goto L_0062FF90; }
    v0 = (s32) 0x190000U;
    a0 = v0 | 0xcf; v0 = func_001F08B0(a0);
    goto L_0062FFC0;
L_0062FF90:;
    if (a0 != v1) { v1 = 252; goto L_0062FFAC; }
    v0 = (s32) 0x190000U;
    a0 = v0 | 0x53; v0 = func_001F08B0(a0);
    goto L_0062FFC0;
L_0062FFAC:;
    if (a0 != v1) goto L_0062FFC0;
    v0 = (s32) 0x190000U;
    a0 = v0 | 0x23; v0 = func_001F08B0(a0);
L_0062FFC0:;
L_0062FFC4:;
    return v0;
}
