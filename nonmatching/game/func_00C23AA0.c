/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void memset(s32, s32, s32);

s32 func_00C23AA0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    s5 = a0;
    s3 = 0;
    s2 = 0;
L_00C23ACC:;
    s0 = (s32) 0xcb0000U;
    s4 = 0;
    s0 = (s32) ((u32) s0 + 0x52a0U);
L_00C23AD8:;
    a0 = (*(volatile s32 *) (u32) (s0 + 1724));
    { s32 c_ = a0 == 0; s1 = (s32) ((u32) s0 + 0x6bcU); if (c_) goto L_00C23B90; }
    v1 = (*(volatile u8 *) (u32) s5);
    v0 = (*(volatile u8 *) (u32) (s1 + 16));
    if (v1 != v0) goto L_00C23B90;
    if (s2 != 0) goto L_00C23B10;
    v0 = (*(volatile u8 *) (u32) (s1 + 17));
    if (v0 != 0) goto L_00C23B20;
    goto L_00C23B90;
L_00C23B10:;
    v0 = (*(volatile u8 *) (u32) (s1 + 17));
    if (v0 != 0) goto L_00C23B90;
L_00C23B20:;
    v0 = (s32) 0xca0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xfffff360U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = s5;
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; a1 = s1; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    v1 = 4;
    if (v0 == v1) { a0 = s1; goto L_00C23BB8; }
    v1 = 3;
    if (v0 == v1) { v0 = 1; goto L_00C23BC8; }
    a0 = 1;
    if (v0 == a0) goto L_00C23B80;
    v1 = 2;
    if (v0 == v1) goto L_00C23B78;
    goto L_00C23B90;
L_00C23B78:;
    s3 = a0; goto L_00C23B90;
L_00C23B80:;
    a0 = s1;
    a1 = 0;
    a2 = 64; memset(a0, a1, a2);
L_00C23B90:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 22;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x40U); if (c_) goto L_00C23AD8; }
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    if (v0 != 0) goto L_00C23ACC;
    v0 = s3; goto L_00C23BC8;
L_00C23BB8:;
    a1 = 0;
    a2 = 64; memset(a0, a1, a2);
    v0 = 1;
L_00C23BC8:;
    return v0;
}
