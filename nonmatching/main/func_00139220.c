/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001393B0(s32);

s32 func_00139220(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v0 = (s32) 0x400000U;
    s1 = (*(volatile s32 *) (u32) (v0 + -14256));
    { s32 c_ = s1 == 0; s0 = a0; if (c_) goto L_00139268; }
L_00139240:;
    v0 = (*(volatile u8 *) (u32) (s1 + 14));
    if (v0 != 0) { (*(volatile u8 *) (u32) (s1 + 13)) = (u8) 0; goto L_00139378; }
L_00139250:;
    s1 = (*(volatile s32 *) (u32) (s1 + 4));
    if (s1 != 0) goto L_00139240;
L_00139268:;
    v0 = (s32) 0x400000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -14256));
    if (v0 == 0) goto L_00139370;
    v1 = (s32) 0x400000U;
    a1 = (*(volatile s32 *) (u32) (v1 + -14248));
L_00139280:;
    v1 = (*(volatile u8 *) (u32) (v0 + 13));
    if (v1 != 0) goto L_00139360;
    a0 = (*(volatile u8 *) (u32) (v0 + 12));
    v1 = (u64) a0 < (u64) s0;
    if (v1 != 0) goto L_00139360;
    v1 = (s32) ((u32) a0 - (u32) s0);
    at = (u64) a1 < (u64) v1;
    if (at != 0) goto L_00139360;
    at = (u64) s0 < (u64) a0;
    if (at == 0) goto L_00139340;
    a2 = (s32) 0x400000U;
    a1 = (s32) 0x400000U;
    a0 = (s32) 0x400000U;
    v1 = (s32) 0x400000U;
    a5 = 1;
L_001392CC:;
    a6 = (*(volatile s32 *) (u32) (a2 + -14252));
    a3 = (*(volatile s32 *) (u32) (a0 + -14248));
    a4 = (*(volatile s32 *) (u32) (a6 + 4));
    a3 = (s32) ((u32) a3 + 0xffffffffU);
    (*(volatile u32 *) (u32) (a1 + -14252)) = (u32) a4;
    (*(volatile u32 *) (u32) (v1 + -14248)) = (u32) a3;
    (*(volatile u32 *) (u32) a6) = (u32) v0;
    a3 = (*(volatile s32 *) (u32) (v0 + 4));
    (*(volatile u32 *) (u32) (a6 + 4)) = (u32) a3;
    a3 = (*(volatile u8 *) (u32) (v0 + 12));
    a3 = (s32) ((u32) a3 + 0xffffffffU);
    (*(volatile u8 *) (u32) (a6 + 12)) = (u8) a3;
    a4 = (*(volatile u8 *) (u32) (a6 + 12));
    a3 = (*(volatile s32 *) (u32) (v0 + 8));
    a4 = (s32) ((u32) a5 << (a4 & 31));
    a3 = (s32) ((u32) a3 + (u32) a4);
    (*(volatile u32 *) (u32) (a6 + 8)) = (u32) a3;
    a3 = (*(volatile s32 *) (u32) (v0 + 4));
    if (a3 == 0) goto L_00139320;
    (*(volatile u32 *) (u32) a3) = (u32) a6;
L_00139320:;
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) a6;
    a3 = (*(volatile u8 *) (u32) (v0 + 12));
    a3 = (s32) ((u32) a3 + 0xffffffffU);
    (*(volatile u8 *) (u32) (v0 + 12)) = (u8) a3;
    a3 = (*(volatile u8 *) (u32) (v0 + 12));
    at = (u64) s0 < (u64) a3;
    if (at != 0) goto L_001392CC;
L_00139340:;
    v1 = 1;
    (*(volatile u8 *) (u32) (v0 + 13)) = (u8) v1;
    (*(volatile u8 *) (u32) (v0 + 14)) = (u8) 0;
    v1 = (s32) 0x400000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 8));
    v1 = (s32) ((u32) v1 + 0xffffc880U);
    v0 = (s32) ((u32) v1 + (u32) v0); goto L_00139390;
L_00139360:;
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    if (v0 != 0) goto L_00139280;
L_00139370:;
    v0 = 0; goto L_00139390;
L_00139378:;
    a0 = s1;
    (*(volatile u8 *) (u32) (s1 + 14)) = (u8) 0; v0 = func_001393B0(a0);
    goto L_00139250;
L_00139390:;
    return v0;
}
