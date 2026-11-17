/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_001EE630(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0;
    s64 frame[2];
    s64 sp = (s32) (u32) frame;

    if (a0 == 0) goto L_001EE778;
    if (a1 == 0) goto L_001EE778;
    a4 = (*(volatile s16 *) (u32) a1);
    v1 = (s32) ((u32) sp + 0x0U);
    a3 = (*(volatile s16 *) (u32) (a1 + 2));
    a2 = (*(volatile s16 *) (u32) (a1 + 4));
    (*(volatile u16 *) (u32) sp) = (u16) a4;
    (*(volatile u16 *) (u32) (sp + 2)) = (u16) a3;
    a1 = (*(volatile s16 *) (u32) (a1 + 6));
    a2 = (s32) ((u32) a4 + (u32) a2);
    (*(volatile u16 *) (u32) (sp + 8)) = (u16) a4;
    (*(volatile u16 *) (u32) (sp + 6)) = (u16) a3;
    (*(volatile u16 *) (u32) (sp + 4)) = (u16) a2;
    (*(volatile u16 *) (u32) (sp + 12)) = (u16) a2;
    a1 = (s32) ((u32) a3 + (u32) a1);
    (*(volatile u16 *) (u32) (sp + 10)) = (u16) a1;
    { s32 c_ = a0 == 0; (*(volatile u16 *) (u32) (sp + 14)) = (u16) a1; if (c_) goto L_001EE69C; }
    if (v1 == 0) goto L_001EE69C;
    a1 = 1;
L_001EE68C:;
    if (a1 != 0) goto L_001EE6A4;
L_001EE694:;
    goto L_001EE77C;
L_001EE69C:;
    a1 = 0; goto L_001EE68C;
L_001EE6A4:;
    a1 = (*(volatile s16 *) (u32) (v1 + 2));
    a6 = (*(volatile s16 *) (u32) v1);
    a5 = (*(volatile s16 *) (u32) (v1 + 4));
    a4 = (*(volatile s16 *) (u32) (v1 + 6));
    a3 = (*(volatile s16 *) (u32) (v1 + 8));
    a2 = (*(volatile s16 *) (u32) (v1 + 10));
    a7 = (s32) ((u32) a1 << 4);
    a1 = (*(volatile s16 *) (u32) (v1 + 12));
    a7 = a7 & 0x3fff;
    a6 = (s32) ((u32) a6 << 4);
    a7 = (s64) ((u64) a7 << 32);
    a4 = (s32) ((u32) a4 << 4);
    a6 = a6 & 0x3fff;
    a5 = (s32) ((u32) a5 << 4);
    a4 = a4 & 0x3fff;
    a2 = (s32) ((u32) a2 << 4);
    a7 = a7 >> 32;
    a6 = (s64) ((u64) a6 << 32);
    a5 = a5 & 0x3fff;
    v1 = (*(volatile s16 *) (u32) (v1 + 14));
    a3 = (s32) ((u32) a3 << 4);
    a4 = (s64) ((u64) a4 << 32);
    a2 = a2 & 0x3fff;
    a5 = (s64) ((u64) a5 << 32);
    a4 = a4 >> 32;
    a3 = a3 & 0x3fff;
    a2 = (s64) ((u64) a2 << 32);
    a1 = (s32) ((u32) a1 << 4);
    a3 = (s64) ((u64) a3 << 32);
    a2 = a2 >> 32;
    a1 = a1 & 0x3fff;
    v1 = (s32) ((u32) v1 << 4);
    a1 = (s64) ((u64) a1 << 32);
    v1 = v1 & 0x3fff;
    a7 = (s64) ((u64) a7 << 16);
    a6 = a6 >> 32;
    v1 = (s64) ((u64) v1 << 32);
    a6 = a6 | a7;
    v1 = v1 >> 32;
    a5 = a5 >> 32;
    a4 = (s64) ((u64) a4 << 16);
    (*(volatile u64 *) (u32) (a0 + 216)) = (u64) a6;
    a4 = a5 | a4;
    a3 = a3 >> 32;
    a2 = (s64) ((u64) a2 << 16);
    (*(volatile u64 *) (u32) (a0 + 224)) = (u64) a4;
    a2 = a3 | a2;
    a1 = a1 >> 32;
    v1 = (s64) ((u64) v1 << 16);
    (*(volatile u64 *) (u32) (a0 + 232)) = (u64) a2;
    v1 = a1 | v1;
    (*(volatile u64 *) (u32) (a0 + 240)) = (u64) v1; goto L_001EE694;
L_001EE778:;
L_001EE77C:;
    return v0;
}
