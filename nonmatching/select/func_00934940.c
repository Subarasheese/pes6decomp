/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00152130(s32, s32);
void func_008B31A0(s32, s32, s32, s32);

s32 func_00934940(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    v0 = (*(volatile s32 *) (u32) (gp + -18688));
    s3 = a0;
    s2 = a1;
    s1 = a2;
    { s32 c_ = v0 != s3; s0 = 0; if (c_) goto L_00934990; }
    v0 = (*(volatile s32 *) (u32) (gp + -18684));
    if (v0 != s2) { a0 = (*(volatile s32 *) (u32) (gp + -18692)); goto L_00934994; }
    v0 = (*(volatile s32 *) (u32) (gp + -18680));
    if (v0 != s1) goto L_00934990;
    v0 = 1; goto L_00934A60;
L_00934990:;
    a0 = (*(volatile s32 *) (u32) (gp + -18692));
L_00934994:;
    at = (u64) a0 < (u64) (s64) 6;
    if (at == 0) { v0 = s0; goto L_00934A60; }
    v1 = (s32) 0x960000U;
    v0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0x64c0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x9349bcU) goto L_009349BC; if (t_ == 0x9349e4U) goto L_009349E4; if (t_ == 0x934a24U) goto L_00934A24; if (t_ == 0x934a30U) goto L_00934A30; }
L_009349BC:;
    a0 = 1;
    a1 = 8; v0 = func_00152130(a0, a1);
    v1 = 1;
    if (v0 != v1) goto L_00934A5C;
    v0 = (*(volatile s32 *) (u32) (gp + -18692));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18692)) = (u32) v0; goto L_00934A5C;
L_009349E4:;
    v0 = (*(volatile s32 *) (u32) (gp + -18672));
    a0 = (*(volatile s32 *) (u32) (v0 + 116));
    a1 = s3; func_008B31A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18672));
    a0 = (*(volatile s32 *) (u32) (v0 + 120));
    a1 = s2; func_008B31A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18672));
    a0 = (*(volatile s32 *) (u32) (v0 + 124));
    a1 = s1; func_008B31A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18692));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18692)) = (u32) v0; goto L_00934A5C;
L_00934A24:;
    v0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18692)) = (u32) v0; goto L_00934A5C;
L_00934A30:;
    a0 = 0;
    a1 = 17; v0 = func_00152130(a0, a1);
    v1 = 1;
    if (v0 != v1) goto L_00934A5C;
    (*(volatile u32 *) (u32) (gp + -18688)) = (u32) s3;
    s0 = v1;
    (*(volatile u32 *) (u32) (gp + -18684)) = (u32) s2;
    (*(volatile u32 *) (u32) (gp + -18680)) = (u32) s1;
    (*(volatile u32 *) (u32) (gp + -18692)) = (u32) 0;
L_00934A5C:;
    v0 = s0;
L_00934A60:;
    return v0;
}
