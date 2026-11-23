/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_0021D420(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0;
    s64 frame[2];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0x540000U;
    a1 = (*(volatile s32 *) (u32) (v1 + -32252));
    v0 = 0;
    (*(volatile u32 *) (u32) (sp + 12)) = (u32) a0;
    a0 = (*(volatile s16 *) (u32) (sp + 14));
    at = 0 < a1;
    { s32 c_ = at == 0; a5 = 0; if (c_) goto L_0021D44C; }
    v1 = (s32) 0x540000U;
    a5 = (*(volatile s32 *) (u32) (v1 + -32256));
L_0021D44C:;
    v1 = (s32) 0x540000U;
    a4 = 0;
    v1 = (*(volatile s32 *) (u32) (v1 + -32256));
    { s32 c_ = v1 == 0; a2 = 0; if (c_) goto L_0021D4DC; }
    a2 = a1; goto L_0021D4DC;
    a0 = (s64) ((u64) a0 << 48);
L_0021D46C:;
    a0 = a0 >> 48;
    if (a0 == v1) goto L_0021D4B8;
    at = 0 < a2;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_0021D4B8; }
L_0021D484:;
    v1 = (*(volatile s16 *) (u32) (a5 + 2));
    if (v1 != a0) goto L_0021D4A4;
    v1 = (*(volatile s16 *) (u32) a5);
    if (v1 != a1) goto L_0021D4A4;
    a4 = a5; goto L_0021D4B8;
L_0021D4A4:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v1 = a3 < a2;
    { s32 c_ = v1 != 0; a5 = (s32) ((u32) a5 + 0x10U); if (c_) goto L_0021D484; }
L_0021D4B8:;
    if (a4 == 0) goto L_0021D4F4;
    v1 = (*(volatile s32 *) (u32) (a4 + 12));
    v0 = v1 & 0x3;
    v1 = v1 | 0x3;
    v1 = v1 ^ 0x3;
    (*(volatile u32 *) (u32) (a4 + 12)) = (u32) v1;
    goto L_0021D4F8;
L_0021D4DC:;
    a1 = (*(volatile s16 *) (u32) (sp + 12));
    v1 = -1;
    if (a1 == v1) goto L_0021D4B8;
    a0 = (s64) ((u64) a0 << 48); goto L_0021D46C;
L_0021D4F4:;
L_0021D4F8:;
    return v0;
}
