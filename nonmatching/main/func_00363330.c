/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0012ED90(s64, s64);
s64 func_001CDA50(s64);

void func_00363330(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x7ff0U);
    a0 = 1;
    (*(volatile u32 *) (u32) (gp + -21324)) = (u32) v0;
    (*(volatile u32 *) (u32) (gp + -21328)) = (u32) 0; v0 = func_001CDA50(a0);
    at = (u64) v0 < (u64) (s64) 10;
    if (at == 0) goto L_00363420;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x6ee0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x363378U) goto L_00363378; if (t_ == 0x363390U) goto L_00363390; if (t_ == 0x3633a8U) goto L_003633A8; if (t_ == 0x3633c0U) goto L_003633C0; if (t_ == 0x3633d8U) goto L_003633D8; if (t_ == 0x3633f0U) goto L_003633F0; if (t_ == 0x363408U) goto L_00363408; if (t_ == 0x363420U) goto L_00363420; }
L_00363378:;
    v1 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (gp + -21328)) = (u32) 0;
    v1 = (s32) ((u32) v1 + 0x7ff0U);
    v0 = 0;
    (*(volatile u32 *) (u32) (gp + -21324)) = (u32) v1; goto L_00363434;
L_00363390:;
    v1 = (s32) 0x3c0000U;
    v0 = 3;
    v1 = (s32) ((u32) v1 + 0xffff8900U);
    (*(volatile u32 *) (u32) (gp + -21328)) = (u32) v0;
    (*(volatile u32 *) (u32) (gp + -21324)) = (u32) v1; goto L_00363434;
L_003633A8:;
    v1 = (s32) 0x3c0000U;
    v0 = 4;
    v1 = (s32) ((u32) v1 + 0xffff8730U);
    (*(volatile u32 *) (u32) (gp + -21328)) = (u32) v0;
    (*(volatile u32 *) (u32) (gp + -21324)) = (u32) v1; goto L_00363434;
L_003633C0:;
    v1 = (s32) 0x3c0000U;
    v0 = 5;
    v1 = (s32) ((u32) v1 + 0xffff8390U);
    (*(volatile u32 *) (u32) (gp + -21328)) = (u32) v0;
    (*(volatile u32 *) (u32) (gp + -21324)) = (u32) v1; goto L_00363434;
L_003633D8:;
    v1 = (s32) 0x3c0000U;
    v0 = 6;
    v1 = (s32) ((u32) v1 + 0xffff8560U);
    (*(volatile u32 *) (u32) (gp + -21328)) = (u32) v0;
    (*(volatile u32 *) (u32) (gp + -21324)) = (u32) v1; goto L_00363434;
L_003633F0:;
    v1 = (s32) 0x3c0000U;
    v0 = 9;
    v1 = (s32) ((u32) v1 + 0xffff81c0U);
    (*(volatile u32 *) (u32) (gp + -21328)) = (u32) v0;
    (*(volatile u32 *) (u32) (gp + -21324)) = (u32) v1; goto L_00363434;
L_00363408:;
    v1 = (s32) 0x3c0000U;
    v0 = 2;
    v1 = (s32) ((u32) v1 + 0xffff8ad0U);
    (*(volatile u32 *) (u32) (gp + -21328)) = (u32) v0;
    (*(volatile u32 *) (u32) (gp + -21324)) = (u32) v1; goto L_00363434;
L_00363420:;
    v1 = (s32) 0x3c0000U;
    v0 = 1;
    v1 = (s32) ((u32) v1 + 0xffff81c0U);
    (*(volatile u32 *) (u32) (gp + -21328)) = (u32) v0;
    (*(volatile u32 *) (u32) (gp + -21324)) = (u32) v1;
L_00363434:;
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    if (v0 == 0) { a0 = 0; goto L_0036344C; }
    a0 = 0; goto L_0036345C;
L_0036344C:;
    a1 = 1; func_0012ED90(a0, a1);
    goto L_00363468;
L_0036345C:;
    a1 = 0; func_0012ED90(a0, a1);
L_00363468:;
    return;
}
