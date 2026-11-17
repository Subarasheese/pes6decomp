/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_00997C30(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0;

    v1 = (*(volatile u8 *) (u32) a0);
    a1 = 0;
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x2800U);
L_00997C40:;
    v0 = (*(volatile u8 *) (u32) (a0 + 16));
    if (v1 != v0) goto L_00997C64;
    v0 = (*(volatile u8 *) (u32) a0);
    at = v0 < 8;
    if (at == 0) goto L_00997C64;
    v0 = a1 & 0xff; goto L_00997C78;
L_00997C64:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 8;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x28U); if (c_) goto L_00997C40; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 255);
L_00997C78:;
    a0 = v0 & 0xff;
    v0 = 255;
    if (a0 == v0) goto L_00997CB4;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0x2803U);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_00997CB4;
    v0 = 1; goto L_00997CB8;
L_00997CB4:;
    v0 = 0;
L_00997CB8:;
    return v0;
}
