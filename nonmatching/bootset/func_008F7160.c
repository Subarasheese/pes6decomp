/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002CBF10(void);

s32 func_008F7160(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0; v0 = func_002CBF10();
    v1 = 3;
    if (v0 == v1) goto L_008F71C0;
    v1 = 2;
    if (v0 == v1) goto L_008F71A8;
    v1 = 1;
    v0 = (s32) 0x900000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0xffff9b10U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_008F71D4;
L_008F71A8:;
    v0 = (s32) 0x900000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0xffff9b20U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_008F71D4;
L_008F71C0:;
    v0 = (s32) 0x900000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0xffff9b30U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
L_008F71D4:;
    at = (u64) v0 < (u64) (s64) 10;
    if (at == 0) { v0 = 0; goto L_008F724C; }
    v1 = (s32) 0x900000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9f20U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8f71fcU) goto L_008F71FC; if (t_ == 0x8f7208U) goto L_008F7208; if (t_ == 0x8f7210U) goto L_008F7210; if (t_ == 0x8f7218U) goto L_008F7218; if (t_ == 0x8f7220U) goto L_008F7220; if (t_ == 0x8f7228U) goto L_008F7228; if (t_ == 0x8f7230U) goto L_008F7230; if (t_ == 0x8f7238U) goto L_008F7238; if (t_ == 0x8f7240U) goto L_008F7240; if (t_ == 0x8f7248U) goto L_008F7248; }
L_008F71FC:;
    v0 = 0;
    goto L_008F724C;
L_008F7208:;
    v0 = 1; goto L_008F724C;
L_008F7210:;
    v0 = 2; goto L_008F724C;
L_008F7218:;
    v0 = 3; goto L_008F724C;
L_008F7220:;
    v0 = 4; goto L_008F724C;
L_008F7228:;
    v0 = 5; goto L_008F724C;
L_008F7230:;
    v0 = 6; goto L_008F724C;
L_008F7238:;
    v0 = 7; goto L_008F724C;
L_008F7240:;
    v0 = 8; goto L_008F724C;
L_008F7248:;
    v0 = 9;
L_008F724C:;
    return v0;
}
