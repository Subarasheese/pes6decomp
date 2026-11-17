/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00B356D0(s32, s32, s32);
s32 func_00BBB8C0(s32);
s32 func_00BD6CD0(s32, s32);

s32 func_00BD6930(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;

    s4 = a0;
    s3 = a1;
    s1 = 0;
    s0 = 0; v0 = func_00BD6CD0(a0, a1);
    s2 = v0 & 0xffff;
    if (s2 != 0) { v0 = s2; goto L_00BD6AFC; }
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 12));
    at = (u64) v0 < (u64) (s64) 7;
    if (at == 0) goto L_00BD6AB8;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x2550U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbd699cU) goto L_00BD699C; if (t_ == 0xbd69d8U) goto L_00BD69D8; if (t_ == 0xbd6a28U) goto L_00BD6A28; if (t_ == 0xbd6a78U) goto L_00BD6A78; if (t_ == 0xbd6ab8U) goto L_00BD6AB8; }
L_00BD699C:;
    v0 = 2;
    if (s3 == v0) { s1 = v0; goto L_00BD69D0; }
    v0 = 1;
    if (s3 == v0) goto L_00BD69C4;
    if (s3 == 0) goto L_00BD69C4;
    goto L_00BD6AB8;
L_00BD69C4:;
    s1 = 2;
    s0 = (s32) ((u32) gp + 0xffff8738U); goto L_00BD6AB8;
L_00BD69D0:;
    s0 = (s32) ((u32) gp + 0xffff873cU); goto L_00BD6AB8;
L_00BD69D8:;
    v0 = 2;
    if (s3 == v0) { s1 = v0; goto L_00BD6A20; }
    v0 = 1;
    if (s3 == v0) goto L_00BD6A10;
    if (s3 == 0) goto L_00BD6A00;
    goto L_00BD6AB8;
L_00BD6A00:;
    s0 = (s32) 0xca0000U;
    s1 = 5;
    s0 = (s32) ((u32) s0 + 0xffffe990U); goto L_00BD6AB8;
L_00BD6A10:;
    s0 = (s32) 0xca0000U;
    s1 = 4;
    s0 = (s32) ((u32) s0 + 0xffffe9a0U); goto L_00BD6AB8;
L_00BD6A20:;
    s0 = (s32) ((u32) gp + 0xffff8740U); goto L_00BD6AB8;
L_00BD6A28:;
    v0 = 2;
    if (s3 == v0) goto L_00BD6A68;
    v0 = 1;
    if (s3 == v0) { s1 = v0; goto L_00BD6A60; }
    if (s3 == 0) goto L_00BD6A50;
    goto L_00BD6AB8;
L_00BD6A50:;
    s0 = (s32) 0xca0000U;
    s1 = 5;
    s0 = (s32) ((u32) s0 + 0xffffe9a8U); goto L_00BD6AB8;
L_00BD6A60:;
    s0 = (s32) ((u32) gp + 0xffff8744U); goto L_00BD6AB8;
L_00BD6A68:;
    s0 = (s32) 0xca0000U;
    s1 = 3;
    s0 = (s32) ((u32) s0 + 0xffffe9b8U); goto L_00BD6AB8;
L_00BD6A78:;
    v0 = 2;
    if (s3 == v0) goto L_00BD6AAC;
    v0 = 1;
    if (s3 == v0) goto L_00BD6AA0;
    if (s3 == 0) goto L_00BD6AA0;
    goto L_00BD6AB8;
L_00BD6AA0:;
    s1 = 1;
    s0 = (s32) ((u32) gp + 0xffff8748U); goto L_00BD6AB8;
L_00BD6AAC:;
    s0 = (s32) 0xca0000U;
    s1 = 3;
    s0 = (s32) ((u32) s0 + 0xffffe9c0U);
L_00BD6AB8:;
    if (s0 == 0) goto L_00BD6AF8;
    if (s1 == 0) goto L_00BD6AF8;
L_00BD6AC8:;
    a0 = s1; v0 = func_00BBB8C0(a0);
    v0 = (s32) ((u32) v0 << 1);
    a2 = (s32) ((u32) s1 + 0xffffffffU);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = s4;
    s2 = (*(volatile u16 *) (u32) v0);
    a1 = s2; v0 = func_00B356D0(a0, a1, a2);
    if (v0 != 0) goto L_00BD6AC8;
L_00BD6AF8:;
    v0 = s2;
L_00BD6AFC:;
    return v0;
}
