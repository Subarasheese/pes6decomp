/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_GetUnavailableFlag(void);
s32 func_00225B20(s32, s32, s32, s32);
s32 func_00226710(void);

s32 func_00230490(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v0 = Pes6SaveData_GetUnavailableFlag();
    v1 = (u64) 0 < (u64) v0;
    v0 = 1;
    if (v1 != v0) goto L_002304BC;
    v0 = 0; goto L_002305B8;
L_002304BC:;
    v1 = (s32) 0x590000U;
    a0 = 4;
    a1 = (*(volatile u8 *) (u32) (v1 + 7177));
    if (a1 == a0) { ; goto L_002305BC; }
    v1 = 14;
    if (a1 == v1) goto L_002305B8;
    v1 = 2;
    if (a1 == v1) { s1 = 0; goto L_00230578; }
    if (a1 == v0) goto L_002304F8;
    v0 = 0; goto L_002305B8;
L_002304F8:;
    v0 = func_00226710();
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0xfffffff4U);
    at = (u64) v0 < (u64) (s64) 16;
    if (at == 0) { s1 = 0; goto L_0023053C; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8630U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x230530U) goto L_00230530; if (t_ == 0x230538U) goto L_00230538; }
L_00230530:;
    v0 = 1; goto L_002305B8;
L_00230538:;
    s1 = 0;
L_0023053C:;
    s0 = 0;
L_00230540:;
    a0 = s1 & 0xff; v0 = func_00225B20(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_00230558;
    s0 = (s32) ((u32) s0 + 0x1U);
L_00230558:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 72;
    if (v0 != 0) goto L_00230540;
    v0 = s0 ^ 0x1;
    v0 = (u64) v0 < (u64) (s64) 1; goto L_002305B8;
    s1 = 0;
L_00230578:;
    s0 = 0;
L_0023057C:;
    a0 = s1 & 0xff; v0 = func_00225B20(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_00230598;
    s0 = (s32) ((u32) s0 + 0x1U);
L_00230598:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 72;
    if (v0 != 0) goto L_0023057C;
    v0 = s0 ^ 0x1;
    v0 = (u64) v0 < (u64) (s64) 1; goto L_002305B8;
    v0 = 0;
L_002305B8:;
L_002305BC:;
    return v0;
}
