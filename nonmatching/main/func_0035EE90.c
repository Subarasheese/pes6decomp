/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
s32 func_00226710(void);
s32 func_00230010(void);
s32 func_00230410(void);
s32 func_002307F0(void);
s32 func_00236630(void);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_0035EE90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    v0 = func_002307F0();
    v0 = v0 & 0xff;
    if (v0 != 0) { v0 = 8; goto L_0035EF40; }
    v0 = func_00226710();
    v1 = v0 & 0xff;
    v0 = 6;
    if (v1 == v0) goto L_0035EF3C;
    v0 = func_00230410();
    if (v0 == 0) goto L_0035EEF4;
    v0 = func_00230010();
    v1 = v0 & 0xff;
    v0 = 2;
    if (v1 != v0) goto L_0035EEF4;
    v0 = 8; goto L_0035EF40;
L_0035EEF4:;
    v0 = func_00236630();
    s0 = v0 & 0xff;
    if (s0 > 0) goto L_0035EF10;
    v0 = 8; goto L_0035EF40;
L_0035EF10:;
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32332)); v0 = func_001F08B0(a0);
    a0 = (s32) 0x620000U;
    a1 = v0;
    a2 = s0;
    a0 = (s32) ((u32) a0 + 0xffffcb60U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x620000U;
    v0 = (s32) ((u32) v0 + 0xffffcb60U); goto L_0035EF7C;
L_0035EF3C:;
    v0 = 8;
L_0035EF40:;
    if (v0 < 0) goto L_0035EF74;
    at = (u64) v0 < (u64) (s64) 8;
    if (at == 0) goto L_0035EF74;
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x7e30U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    goto L_0035EF7C;
L_0035EF74:;
    v0 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 + 0x6d10U);
L_0035EF7C:;
    return v0;
}
