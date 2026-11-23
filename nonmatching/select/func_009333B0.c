/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64);
s64 func_0023F240(s64, s64, s64, s64);

s64 func_009333B0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) 0x8e0000U;
    v1 = 32;
    a0 = (*(volatile s32 *) (u32) (v0 + -15824));
    s0 = (s32) 0x540000U;
    { s32 c_ = a0 == v1; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_009333E8; }
    v0 = 16;
    if (a0 == v0) { v0 = (s32) 0x84000000U; goto L_009333EC; }
    goto L_009334A0;
L_009333E8:;
    v0 = (s32) 0x84000000U;
L_009333EC:;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = (s32) 0x8e0000U;
    v1 = (s32) 0x960000U;
    a1 = (*(volatile s32 *) (u32) (gp + -22756));
    v1 = (s32) ((u32) v1 + 0x6cf0U);
    a0 = (*(volatile u16 *) (u32) (v0 + -15824));
    a4 = 4;
    a2 = 0;
    a3 = 10;
    v0 = (s32) ((u32) v1 + (u32) a1);
    (*(volatile u8 *) (u32) v0) = (u8) a4; v0 = func_0023F240(a0, a1, a2, a3);
    v1 = (s32) 0x8e0000U;
    a0 = (*(volatile s32 *) (u32) (v1 + -15824));
    v1 = 16;
    { s32 c_ = a0 != v1; (*(volatile u32 *) (u32) (gp + -22756)) = (u32) v0; if (c_) goto L_0093344C; }
    v1 = 10;
    if (v0 != v1) { a0 = (s64) ((u64) v0 << 32); goto L_00933480; }
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) (gp + -22756)) = (u32) v0; goto L_0093347C;
L_0093344C:;
    v1 = 10;
    if (v0 != v1) { v1 = (s64) ((u64) v0 << 32); goto L_00933464; }
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22756)) = (u32) v0;
    v1 = (s64) ((u64) v0 << 32);
L_00933464:;
    v1 = v1 >> 32;
    v1 = v1 < 11;
    if (v1 != 0) goto L_0093347C;
    (*(volatile u32 *) (u32) (gp + -22756)) = (u32) 0;
    v0 = 0;
L_0093347C:;
    a0 = (s64) ((u64) v0 << 32);
L_00933480:;
    v1 = (s32) 0x960000U;
    a0 = a0 >> 32;
    v1 = (s32) ((u32) v1 + 0x6cf0U);
    v0 = 1;
    a1 = 2;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) v0;
    (*(volatile u8 *) (u32) v1) = (u8) a1;
L_009334A0:;
    v0 = (s32) 0x8e0000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + -15760));
    if (v0 == v1) { v0 = (s32) 0x84020000U; goto L_009334BC; }
    v0 = 0; goto L_0093351C;
L_009334BC:;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = (*(volatile s32 *) (u32) (gp + -22756));
    at = (u64) v0 < (u64) (s64) 11;
    if (at == 0) { (*(volatile u32 *) (u32) (gp + -18788)) = (u32) 0; goto L_00933508; }
    v1 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x6400U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x9334f0U) goto L_009334F0; if (t_ == 0x9334f8U) goto L_009334F8; if (t_ == 0x933504U) goto L_00933504; }
L_009334F0:;
    v0 = 2; goto L_0093351C;
L_009334F8:;
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -18788)) = (u32) v0; goto L_00933508;
L_00933504:;
    (*(volatile u32 *) (u32) (gp + -18788)) = (u32) 0;
L_00933508:;
    v1 = 2;
    v0 = 1;
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) v1;
    (*(volatile u16 *) (u32) (s0 + 6)) = (u16) v0;
    v0 = 0;
L_0093351C:;
    return v0;
}
