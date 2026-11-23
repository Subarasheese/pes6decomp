/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s32, s32);
void func_001D7D80(s32, s32, s32, s32);
s32 func_008CC830(void);

void func_008CCEE0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    v0 = func_008CC830();
    s0 = v0;
    if (s0 == 0) { ; goto L_008CD074; }
    a1 = (*(volatile s32 *) (u32) (s0 + 168));
    at = (u64) a1 < (u64) (s64) 7;
    if (at == 0) goto L_008CD070;
    a0 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffaa40U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x8ccf28U) goto L_008CCF28; if (t_ == 0x8ccf58U) goto L_008CCF58; if (t_ == 0x8ccf88U) goto L_008CCF88; if (t_ == 0x8ccfb8U) goto L_008CCFB8; if (t_ == 0x8ccfe8U) goto L_008CCFE8; if (t_ == 0x8cd018U) goto L_008CD018; if (t_ == 0x8cd048U) goto L_008CD048; }
L_008CCF28:;
    v0 = (s32) ((u32) a1 + (u32) s0);
    a1 = (*(volatile u8 *) (u32) (v0 + 207));
    a0 = (*(volatile s32 *) (u32) (s0 + 100)); func_001D7D80(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 100));
    a1 = 1; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 64));
    a1 = 1; func_001D7D60(a0, a1);
    goto L_008CD070;
L_008CCF58:;
    v0 = (s32) ((u32) a1 + (u32) s0);
    a1 = (*(volatile u8 *) (u32) (v0 + 207));
    a0 = (*(volatile s32 *) (u32) (s0 + 100)); func_001D7D80(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 100));
    a1 = 1; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 64));
    a1 = 1; func_001D7D60(a0, a1);
    goto L_008CD070;
L_008CCF88:;
    v0 = (s32) ((u32) a1 + (u32) s0);
    a1 = (*(volatile u8 *) (u32) (v0 + 207));
    a0 = (*(volatile s32 *) (u32) (s0 + 100)); func_001D7D80(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 100));
    a1 = 1; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 64));
    a1 = 1; func_001D7D60(a0, a1);
    goto L_008CD070;
L_008CCFB8:;
    v0 = (s32) ((u32) a1 + (u32) s0);
    a1 = (*(volatile u8 *) (u32) (v0 + 207));
    a0 = (*(volatile s32 *) (u32) (s0 + 100)); func_001D7D80(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 100));
    a1 = 1; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 64));
    a1 = 1; func_001D7D60(a0, a1);
    goto L_008CD070;
L_008CCFE8:;
    v0 = (s32) ((u32) a1 + (u32) s0);
    a1 = (*(volatile u8 *) (u32) (v0 + 207));
    a0 = (*(volatile s32 *) (u32) (s0 + 100)); func_001D7D80(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 100));
    a1 = 1; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 64));
    a1 = 1; func_001D7D60(a0, a1);
    goto L_008CD070;
L_008CD018:;
    v0 = (s32) ((u32) a1 + (u32) s0);
    a1 = (*(volatile u8 *) (u32) (v0 + 207));
    a0 = (*(volatile s32 *) (u32) (s0 + 100)); func_001D7D80(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 100));
    a1 = 1; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 64));
    a1 = 1; func_001D7D60(a0, a1);
    goto L_008CD070;
L_008CD048:;
    v0 = (s32) ((u32) a1 + (u32) s0);
    a1 = (*(volatile u8 *) (u32) (v0 + 207));
    a0 = (*(volatile s32 *) (u32) (s0 + 100)); func_001D7D80(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 100));
    a1 = 0; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 64));
    a1 = 0; func_001D7D60(a0, a1);
L_008CD070:;
L_008CD074:;
    return;
}
