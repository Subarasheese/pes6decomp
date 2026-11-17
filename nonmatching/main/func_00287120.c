/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_00287120(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0;
    s64 gp = 0x3ef370;

    a1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile s32 *) (u32) (a1 + 4));
    a1 = (*(volatile u8 *) (u32) a1);
    a1 = (s64) ((u64) a1 << 58);
    a1 = (s64) ((u64) a1 >> 59);
    (*(volatile u8 *) (u32) (v1 + 5252)) = (u8) a1;
    a1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (*(volatile s32 *) (u32) (a1 + 4));
    v1 = (*(volatile u8 *) (u32) v1);
    v1 = (s64) ((u64) v1 << 58);
    v1 = (s64) ((u64) v1 >> 59);
    at = (u64) v1 < (u64) (s64) 19;
    if (at == 0) goto L_002871A8;
    a0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffff9cf0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x287178U) goto L_00287178; if (t_ == 0x287190U) goto L_00287190; if (t_ == 0x2871b4U) goto L_002871B4; }
L_00287178:;
    v1 = (*(volatile u8 *) (u32) (a1 + 45));
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = (*(volatile u8 *) (u32) (a1 + 5252));
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) (a1 + 5252)) = (u8) v1; goto L_002871B4;
L_00287190:;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile u8 *) (u32) (a1 + 45));
    v1 = (*(volatile u8 *) (u32) (a0 + 5252));
    v1 = (s32) ((u32) v1 - (u32) a1);
    (*(volatile u8 *) (u32) (a0 + 5252)) = (u8) v1; goto L_002871B4;
L_002871A8:;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = 255;
    (*(volatile u8 *) (u32) (v1 + 5252)) = (u8) a0;
L_002871B4:;
    return v0;
}
