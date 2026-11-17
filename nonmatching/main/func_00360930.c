/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00360930(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    a4 = (s32) 0x3b0000U;
    a4 = (s32) ((u32) a4 + 0x7f70U);
    a3 = (s32) ((u32) sp + 0x0U);
    a2 = 14;
L_00360944:;
    v1 = (*(volatile s32 *) (u32) a4);
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    v0 = (*(volatile s32 *) (u32) (a4 + 4));
    (*(volatile u32 *) (u32) a3) = (u32) v1;
    (*(volatile u32 *) (u32) (a3 + 4)) = (u32) v0;
    a4 = (s32) ((u32) a4 + 0x8U);
    { s32 c_ = a2 > 0; a3 = (s32) ((u32) a3 + 0x8U); if (c_) goto L_00360944; }
    if (a0 == 0) { a7 = a1; goto L_00360A14; }
    v0 = a1 < 8;
    { s32 c_ = v0 != 0; a3 = (s32) ((u32) a0 + 0xfU); if (c_) goto L_00360A10; }
    at = a1 < 20;
    if (at == 0) { a7 = a1; goto L_00360A14; }
    a5 = 0;
    at = a5 < 2;
    { s32 c_ = at == 0; a6 = 0; if (c_) goto L_00360A00; }
    a2 = (s32) 0x3e0000U;
    v1 = 1;
    a2 = (s32) ((u32) a2 + 0xffffa360U);
    v0 = (s32) ((u32) a5 << 3);
L_003609A4:;
    a4 = 0;
    a0 = (s32) ((u32) a3 + (u32) v0);
L_003609B0:;
    v0 = (*(volatile u8 *) (u32) a0);
    if (a1 != v0) goto L_003609D8;
    a0 = (s32) ((u32) a5 << 5);
    v0 = (s32) ((u32) a4 << 2);
    a0 = (s32) ((u32) a2 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a7 = (*(volatile s32 *) (u32) v0);
    a6 = v1; goto L_003609E8;
L_003609D8:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < 8;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x1U); if (c_) goto L_003609B0; }
L_003609E8:;
    if (a6 != 0) goto L_00360A00;
    a5 = (s32) ((u32) a5 + 0x1U);
    v0 = a5 < 2;
    if (v0 != 0) { v0 = (s32) ((u32) a5 << 3); goto L_003609A4; }
L_00360A00:;
    if (a6 != 0) goto L_00360A14;
    a7 = a1; goto L_00360A14;
L_00360A10:;
    a7 = a1;
L_00360A14:;
    v0 = (s32) ((u32) a7 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) v0);
    return v0;
}
