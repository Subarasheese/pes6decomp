/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_001EE790(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0;

    if (a0 == 0) goto L_001EE7B4;
    if (a1 == 0) goto L_001EE7B4;
    v1 = 1;
L_001EE7A4:;
    if (v1 != 0) { a2 = (*(volatile s16 *) (u32) (a1 + 2)); goto L_001EE7BC; }
    goto L_001EE888;
L_001EE7B4:;
    v1 = 0; goto L_001EE7A4;
L_001EE7BC:;
    v1 = (*(volatile s16 *) (u32) a1);
    a2 = (s32) ((u32) a2 << 4);
    a2 = a2 & 0x3fff;
    v1 = (s32) ((u32) v1 << 4);
    a2 = (s64) ((u64) a2 << 32);
    v1 = v1 & 0x3fff;
    a2 = a2 >> 32;
    v1 = (s64) ((u64) v1 << 32);
    a2 = (s64) ((u64) a2 << 16);
    v1 = v1 >> 32;
    v1 = v1 | a2;
    (*(volatile u64 *) (u32) (a0 + 216)) = (u64) v1;
    v1 = (*(volatile s16 *) (u32) (a1 + 6));
    a2 = (*(volatile s16 *) (u32) (a1 + 4));
    v1 = (s32) ((u32) v1 << 4);
    a2 = (s32) ((u32) a2 << 4);
    v1 = v1 & 0x3fff;
    a2 = a2 & 0x3fff;
    v1 = (s64) ((u64) v1 << 32);
    a2 = (s64) ((u64) a2 << 32);
    v1 = v1 >> 32;
    a2 = a2 >> 32;
    v1 = (s64) ((u64) v1 << 16);
    v1 = a2 | v1;
    (*(volatile u64 *) (u32) (a0 + 224)) = (u64) v1;
    v1 = (*(volatile s16 *) (u32) (a1 + 10));
    a2 = (*(volatile s16 *) (u32) (a1 + 8));
    v1 = (s32) ((u32) v1 << 4);
    a2 = (s32) ((u32) a2 << 4);
    v1 = v1 & 0x3fff;
    a2 = a2 & 0x3fff;
    v1 = (s64) ((u64) v1 << 32);
    a2 = (s64) ((u64) a2 << 32);
    v1 = v1 >> 32;
    a2 = a2 >> 32;
    v1 = (s64) ((u64) v1 << 16);
    v1 = a2 | v1;
    (*(volatile u64 *) (u32) (a0 + 232)) = (u64) v1;
    v1 = (*(volatile s16 *) (u32) (a1 + 14));
    a2 = (*(volatile s16 *) (u32) (a1 + 12));
    v1 = (s32) ((u32) v1 << 4);
    a1 = (s32) ((u32) a2 << 4);
    v1 = v1 & 0x3fff;
    a1 = a1 & 0x3fff;
    v1 = (s64) ((u64) v1 << 32);
    a1 = (s64) ((u64) a1 << 32);
    v1 = v1 >> 32;
    a1 = a1 >> 32;
    v1 = (s64) ((u64) v1 << 16);
    v1 = a1 | v1;
    (*(volatile u64 *) (u32) (a0 + 240)) = (u64) v1;
L_001EE888:;
    return v0;
}
