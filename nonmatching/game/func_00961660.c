/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00961660(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;

    v1 = a1 & 0xff;
    v1 = (s32) ((u32) v1 + 0xfffffff7U);
    at = (u64) v1 < (u64) (s64) 7;
    { s32 c_ = at == 0; a4 = (*(volatile u8 *) (u32) (a0 + 19)); if (c_) goto L_00961690; }
    a3 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a3 = (s32) ((u32) a3 + 0xffff9bd0U);
    v1 = (s32) ((u32) v1 + (u32) a3);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x9616c8U) goto L_009616C8; }
L_00961690:;
    v1 = a1 & 0xff;
    (*(volatile u32 *) (u32) (a0 + 480)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a0 + 176));
    if (v1 == 0) { a1 = (*(volatile u8 *) (u32) (a0 + 19)); goto L_009616E4; }
L_009616A4:;
    v1 = a2 & 0xff;
    a1 = a4 & 0xff;
    (*(volatile u32 *) (u32) (a0 + 484)) = (u32) v1;
    v1 = (s32) 0xcb0000U;
    a0 = 1;
    v1 = (s32) ((u32) v1 + 0x539cU);
    v1 = (s32) ((u32) v1 + (u32) a1);
    (*(volatile u8 *) (u32) v1) = (u8) a0; goto L_009616FC;
L_009616C8:;
    a3 = a4 & 0xff;
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x5360U);
    a3 = (s32) ((u32) a3 << 2);
    v1 = (s32) ((u32) v1 + (u32) a3);
    (*(volatile u32 *) (u32) v1) = (u32) 0; goto L_00961690;
L_009616E4:;
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x539cU);
    a3 = 1;
    v1 = (s32) ((u32) v1 + (u32) a1);
    (*(volatile u8 *) (u32) v1) = (u8) a3; goto L_009616A4;
L_009616FC:;
    return;
}
