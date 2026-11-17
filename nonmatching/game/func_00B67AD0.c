/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00B67AD0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0;

    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (*(volatile u8 *) (u32) (v1 + 76));
    at = (u64) v1 < (u64) (s64) 74;
    if (at == 0) goto L_00B67B78;
    a1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 + 0xffffd1f0U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xb67b00U) goto L_00B67B00; if (t_ == 0xb67b24U) goto L_00B67B24; if (t_ == 0xb67b48U) goto L_00B67B48; if (t_ == 0xb67b6cU) goto L_00B67B6C; }
L_00B67B00:;
    a0 = (*(volatile s32 *) (u32) a0);
    v1 = (*(volatile u8 *) (u32) (a0 + 78));
    if (v1 != 0) { v1 = 2; goto L_00B67B1C; }
    v1 = 14;
    (*(volatile u16 *) (u32) (a0 + 24)) = (u16) v1; goto L_00B67B78;
L_00B67B1C:;
    (*(volatile u16 *) (u32) (a0 + 24)) = (u16) v1; goto L_00B67B78;
L_00B67B24:;
    a0 = (*(volatile s32 *) (u32) a0);
    v1 = (*(volatile u8 *) (u32) (a0 + 78));
    if (v1 != 0) { v1 = 2; goto L_00B67B40; }
    v1 = 16;
    (*(volatile u16 *) (u32) (a0 + 24)) = (u16) v1; goto L_00B67B78;
L_00B67B40:;
    (*(volatile u16 *) (u32) (a0 + 24)) = (u16) v1; goto L_00B67B78;
L_00B67B48:;
    a0 = (*(volatile s32 *) (u32) a0);
    v1 = (*(volatile u8 *) (u32) (a0 + 78));
    if (v1 != 0) { v1 = 2; goto L_00B67B64; }
    v1 = 19;
    (*(volatile u16 *) (u32) (a0 + 24)) = (u16) v1; goto L_00B67B78;
L_00B67B64:;
    (*(volatile u16 *) (u32) (a0 + 24)) = (u16) v1; goto L_00B67B78;
L_00B67B6C:;
    v1 = (*(volatile s32 *) (u32) a0);
    a0 = 23;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0;
L_00B67B78:;
    return;
}
