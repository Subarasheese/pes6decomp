/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00B69A80(void);
s32 func_00BBB8C0(s32);

s32 func_00BD93C0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0;
    a0 = 10; v0 = func_00BBB8C0(a0);
    if (v0 == 0) { v0 = 0; goto L_00BD94B0; }
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 13056));
    a0 = (*(volatile u8 *) (u32) (v1 + 18));
    a2 = (s32) ((u32) v0 + 0x8U);
    v1 = (s32) ((u32) a0 << 6);
    v0 = a0 ^ 0x1;
    a1 = (s32) ((u32) v1 - (u32) a0);
    v1 = v0 & 0xff;
    a0 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) a0 - (u32) a1);
    v1 = (s32) ((u32) v0 - (u32) v1);
    a0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) a2 + (u32) a0);
    v0 = (s32) ((u32) a2 + (u32) v0);
    v1 = (*(volatile s16 *) (u32) v1);
    v0 = (*(volatile s16 *) (u32) v0);
    v0 = (s32) ((u32) v0 - (u32) v1);
    at = v0 < 3;
    if (at != 0) goto L_00BD9458;
    at = v0 < 6;
    if (at == 0) goto L_00BD9458;
    v0 = 1; goto L_00BD94B0;
L_00BD9458:;
    if (v0 > 0) goto L_00BD9484;
    at = v0 < 0;
    if (at != 0) goto L_00BD9484;
    v0 = func_00B69A80();
    if (v0 == 0) goto L_00BD9484;
    v0 = 1; goto L_00BD94B0;
L_00BD9484:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9072));
    if (v0 != 0) { a0 = 2; goto L_00BD949C; }
L_00BD9494:;
    v0 = 0; goto L_00BD94B0;
L_00BD949C:;
    v0 = func_00BBB8C0(a0);
    if (v0 != 0) goto L_00BD9494;
    v0 = 1;
L_00BD94B0:;
    return v0;
}
