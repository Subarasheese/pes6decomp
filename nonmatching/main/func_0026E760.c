/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0024FB20(s32, s32, s32, s32);
s32 func_00307400(s32);

void func_0026E760(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    s3 = a1;
    s2 = a2;
    s1 = a3;
    s0 = a4; v0 = func_00307400(a0);
    a0 = v0;
    if (a0 == 0) { a1 = 0; goto L_0026E7F4; }
    v1 = (s32) ((u32) a0 >> 25);
    v1 = v1 & 0xf;
    if (v1 != 0) { at = (u64) v1 < (u64) (s64) 16; goto L_0026E7B4; }
    a1 = 0;
    goto L_0026E7F4;
L_0026E7B4:;
    if (at == 0) { a1 = 0; goto L_0026E7F4; }
    a1 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 + 0xffff9bf0U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x26e7d8U) goto L_0026E7D8; if (t_ == 0x26e7e0U) goto L_0026E7E0; if (t_ == 0x26e7e8U) goto L_0026E7E8; if (t_ == 0x26e7f0U) goto L_0026E7F0; }
L_0026E7D8:;
    a1 = 3; goto L_0026E7F4;
L_0026E7E0:;
    a1 = 1; goto L_0026E7F4;
L_0026E7E8:;
    a1 = 2; goto L_0026E7F4;
L_0026E7F0:;
    a1 = 0;
L_0026E7F4:;
    v1 = 1;
    if (a1 == v1) { v1 = (s32) ((u32) s3 << 16); goto L_0026E808; }
    goto L_0026E828;
L_0026E808:;
    v0 = (s32) ((u32) s1 << 16);
    a1 = (s32) ((u32) v1 + (u32) s2);
    a2 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u32 *) (u32) (gp + -22252)) = (u32) a1;
    a3 = 0;
    (*(volatile u32 *) (u32) (gp + -22248)) = (u32) a2; v0 = func_0024FB20(a0, a1, a2, a3);
L_0026E828:;
    return;
}
