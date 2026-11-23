/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00264840(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0;

    a2 = a1 & 0xff;
    at = a2 < 10;
    if (at == 0) goto L_002648D8;
    v1 = 10;
    v1 = (s32) ((u32) v1 - (u32) a1);
    at = (u64) v1 < (u64) (s64) 9;
    if (at != 0) goto L_002648A8;
    at = (u64) a1 < (u64) (s64) 11;
    if (at == 0) goto L_002648A8;
L_00264870:;
    a1 = a2 & 0xff;
    v1 = (s32) ((u32) a2 + 0x8U);
    a1 = (s32) ((u32) a0 + (u32) a1);
    a2 = v1 & 0xff;
    (*(volatile u8 *) (u32) a1) = (u8) 0;
    v1 = a2 < 2;
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) 0;
    (*(volatile u8 *) (u32) (a1 + 2)) = (u8) 0;
    (*(volatile u8 *) (u32) (a1 + 3)) = (u8) 0;
    (*(volatile u8 *) (u32) (a1 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (a1 + 5)) = (u8) 0;
    (*(volatile u8 *) (u32) (a1 + 6)) = (u8) 0;
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (a1 + 7)) = (u8) 0; if (c_) goto L_00264870; }
L_002648A8:;
    a1 = a2 & 0xff;
    at = a1 < 10;
    if (at == 0) goto L_002648D8;
L_002648B8:;
    v1 = (s32) ((u32) a2 + 0x1U);
    a1 = (s32) ((u32) a0 + (u32) a1);
    a2 = v1 & 0xff;
    (*(volatile u8 *) (u32) a1) = (u8) 0;
    v1 = a2 < 10;
    { s32 c_ = v1 != 0; a1 = a2; if (c_) goto L_002648B8; }
L_002648D8:;
    return v0;
}
