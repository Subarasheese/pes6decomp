/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64);
s64 func_0023F240(s64, s64, s64, s64);
s64 func_00246550(s64);

s64 func_00933180(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) 0x8e0000U;
    s1 = (s32) 0x540000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -15824));
    s1 = (s32) ((u32) s1 + 0xffffc300U);
    s0 = (*(volatile s32 *) (u32) (gp + -18788));
    v0 = 32;
    { s32 c_ = v1 == v0; a1 = s0; if (c_) goto L_009331C4; }
    v0 = 16;
    if (v1 == v0) goto L_009331C4;
    goto L_0093324C;
L_009331C4:;
    v0 = (s32) 0x8e0000U;
    v1 = (*(volatile s32 *) (u32) (gp + -22756));
    a0 = (*(volatile u16 *) (u32) (v0 + -15824));
    a2 = 0;
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0xffffd500U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    a3 = (s32) ((u32) v0 + 0xffffffffU); v0 = func_0023F240(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -22756));
    v1 = 6;
    { s32 c_ = a0 != v1; (*(volatile u32 *) (u32) (gp + -18788)) = (u32) v0; if (c_) goto L_00933228; }
    a1 = v0;
    v1 = 7;
    if (a1 == v1) goto L_009331C4;
    v1 = 8;
    if (a1 == v1) goto L_009331C4;
    v1 = 9;
    if (a1 == v1) goto L_009331C4;
L_00933228:;
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    if (s0 == v0) goto L_0093324C;
    v1 = 4;
    v0 = (s32) 0x84000000U;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v1;
    a0 = v0 | 0xf802; SD_call(a0);
L_0093324C:;
    v0 = (s32) 0x8e0000U;
    v1 = 2;
    a0 = (*(volatile s32 *) (u32) (v0 + -15760));
    if (a0 == v1) { v0 = (s32) 0x84000000U; goto L_00933384; }
    v0 = 1;
    if (a0 == v0) { v1 = (*(volatile s8 *) (u32) (gp + -18740)); goto L_00933274; }
    v0 = 0; goto L_0093339C;
L_00933274:;
    v0 = -1;
    if (v1 != v0) goto L_00933398;
    v1 = (*(volatile s32 *) (u32) (gp + -22756));
    v0 = 6;
    if (v1 == v0) { v0 = (s32) 0x84020000U; goto L_00933298; }
    v0 = (s32) 0x84020000U; goto L_00933374;
L_00933298:;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -18788));
    v0 = 2;
    if (a0 == v0) { (*(volatile u16 *) (u32) (s1 + 6)) = (u16) v0; goto L_009332F8; }
    v1 = 9;
    if (a0 == v1) { v1 = 16; goto L_009332E4; }
    if (a0 == 0) { (*(volatile u16 *) (u32) (s1 + 6)) = (u16) v0; goto L_009332CC; }
    goto L_0093336C;
L_009332CC:;
    v0 = 4;
    (*(volatile u32 *) (u32) (gp + -18784)) = (u32) 0;
    (*(volatile u32 *) (u32) (gp + -18780)) = (u32) v0;
    v0 = 16;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v0; goto L_00933398;
L_009332E4:;
    (*(volatile u16 *) (u32) (s1 + 6)) = (u16) v0;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v1;
    (*(volatile u32 *) (u32) (gp + -18780)) = (u32) v0;
    (*(volatile u32 *) (u32) (gp + -18784)) = (u32) 0; goto L_00933398;
L_009332F8:;
    a0 = 161;
    v0 = 7;
    (*(volatile u32 *) (u32) (gp + -18784)) = (u32) 0;
    (*(volatile u32 *) (u32) (gp + -18780)) = (u32) v0; v0 = func_00246550(a0);
    if (v0 != 0) { a0 = 163; goto L_00933324; }
    v0 = (*(volatile s32 *) (u32) (gp + -18780));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) (gp + -18780)) = (u32) v0;
    a0 = 163;
L_00933324:;
    v0 = func_00246550(a0);
    if (v0 != 0) { a0 = 162; goto L_00933344; }
    v0 = (*(volatile s32 *) (u32) (gp + -18780));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) (gp + -18780)) = (u32) v0;
    a0 = 162;
L_00933344:;
    v0 = func_00246550(a0);
    if (v0 != 0) { v0 = 16; goto L_00933364; }
    v0 = (*(volatile s32 *) (u32) (gp + -18780));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) (gp + -18780)) = (u32) v0;
    v0 = 16;
L_00933364:;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v0; goto L_00933398;
L_0093336C:;
    goto L_009333A0;
L_00933374:;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = 2; goto L_0093339C;
L_00933384:;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = 8;
    (*(volatile u16 *) (u32) (s1 + 6)) = (u16) 0;
    (*(volatile u32 *) (u32) (s1 + 16)) = (u32) v0;
L_00933398:;
    v0 = 0;
L_0093339C:;
L_009333A0:;
    return v0;
}
