/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 DIntr(void);
void EIntr(void);
void WaitSema(void);
void func_00105380(void);

void func_00137A50(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (a0 + 64)); WaitSema();
    (*(volatile u32 *) (u32) (s0 + 68)) = (u32) 0; v0 = DIntr();
    v0 = (s32) 0x10010000U;
    v1 = (s32) 0xfffe0000U;
    a2 = (*(volatile s32 *) (u32) (v0 + -2784));
    a1 = (s32) 0x10000U;
    a0 = 5;
    v1 = v1 | 0xffff;
    a1 = a2 | a1;
    (*(volatile u32 *) (u32) (v0 + -2672)) = (u32) a1;
    (*(volatile u32 *) (u32) (v0 + -19456)) = (u32) a0;
    a0 = (*(volatile s32 *) (u32) (v0 + -2784));
    v1 = a0 & v1;
    (*(volatile u32 *) (u32) (v0 + -2672)) = (u32) v1; EIntr();
    v1 = (s32) 0x10010000U;
    v0 = (s32) 0x10000000U;
    a0 = (*(volatile s32 *) (u32) (v1 + -19440));
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) a0;
    a0 = (*(volatile s32 *) (u32) (v1 + -19408));
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) a0;
    a0 = (*(volatile s32 *) (u32) (v1 + -19424));
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) a0;
    v1 = (*(volatile s32 *) (u32) (v1 + -19456));
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) v1;
    a0 = (*(volatile u16 *) (u32) v0);
    v1 = (*(volatile s32 *) (u32) (v0 + 8208));
    v1 = v1 & 0xf0;
    if (v1 == 0) goto L_00137B10;
    a0 = a0 & 0xffff;
L_00137AE4:;
    v1 = (*(volatile s32 *) (u32) v0);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = v1 & 0xffff;
    at = v1 < 1051;
    if (at == 0) goto L_00137B10;
    v1 = (*(volatile s32 *) (u32) (v0 + 8208));
    v1 = v1 & 0xf0;
    if (v1 != 0) goto L_00137AE4;
L_00137B10:;
    v0 = DIntr();
    v0 = (s32) 0x10010000U;
    v1 = (s32) 0xfffe0000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -2784));
    a0 = (s32) 0x10000U;
    v1 = v1 | 0xffff;
    a0 = a1 | a0;
    (*(volatile u32 *) (u32) (v0 + -2672)) = (u32) a0;
    (*(volatile u32 *) (u32) (v0 + -20480)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (v0 + -2784));
    v1 = a0 & v1;
    (*(volatile u32 *) (u32) (v0 + -2672)) = (u32) v1; EIntr();
    v1 = (s32) 0x10010000U;
    v0 = (s32) 0x10000000U;
    a0 = (*(volatile s32 *) (u32) (v1 + -20464));
    (*(volatile u32 *) (u32) (s0 + 44)) = (u32) a0;
    a0 = (*(volatile s32 *) (u32) (v1 + -20448));
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) a0;
    v1 = (*(volatile s32 *) (u32) (v1 + -20480));
    (*(volatile u32 *) (u32) (s0 + 52)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (v0 + 8224));
    (*(volatile u32 *) (u32) (s0 + 56)) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) (v0 + 8208));
    (*(volatile u32 *) (u32) (s0 + 60)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s0 + 64)); func_00105380();
    v0 = 1;
    return;
}
