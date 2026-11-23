/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_009002E0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0;

    a3 = a1;
    v1 = 0;
    v0 = (u64) a0 < (u64) (s64) 10;
    { s32 c_ = v0 == 0; a1 = 0; if (c_) goto L_0090037C; }
    a4 = (s32) 0x900000U;
    a2 = (s32) ((u32) a0 << 4);
    v0 = (s32) ((u32) a4 + 0x1800U);
    a0 = 0xffff;
    a0 = (s64) ((u64) a0 << 24);
    v0 = (s32) ((u32) v0 + (u32) a2);
    v1 = (*(volatile s64 *) (u32) (v0 + 8));
    { s32 c_ = v1 == a0; v0 = (u64) a0 < (u64) v1; if (c_) goto L_00900350; }
    if (v0 != 0) goto L_00900338;
    v0 = 0xff00;
    v0 = (s64) ((u64) v0 << 24);
    { s32 c_ = v1 == v0; v0 = 0; if (c_) goto L_00900358; }
    goto L_00900380;
L_00900338:;
    v0 = -1;
    v0 = (s64) ((u64) v0 >> 24);
    { s32 c_ = v1 != v0; v0 = (s32) ((u32) a4 + 0x1800U); if (c_) goto L_00900360; }
    a0 = (s64) ((u64) a3 << (a1 & 63)); goto L_00900370;
L_00900350:;
    a1 = 24; goto L_00900368;
L_00900358:;
    a1 = 32; goto L_00900368;
L_00900360:;
    v0 = 0; return v0;
L_00900368:;
    v0 = (s32) ((u32) a4 + 0x1800U);
    a0 = (s64) ((u64) a3 << (a1 & 63));
L_00900370:;
    v0 = (s32) ((u32) a2 + (u32) v0);
    v1 = (*(volatile s64 *) (u32) v0);
    v1 = v1 | a0;
L_0090037C:;
    v0 = v1;
L_00900380:;
    return v0;
}
