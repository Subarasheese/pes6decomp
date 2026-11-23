/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00188680(void);
s64 func_00188A30(void);
s64 func_00226710(void);

s64 func_0090C060(s64 a0) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;

    v0 = (s64) ((u64) a0 << 56);
    v0 = v0 >> 56;
    { s32 c_ = v0 <= 0; s0 = 0; if (c_) goto L_0090C088; }
    v0 = (s32) 0x930000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -3674)); goto L_0090C090;
L_0090C088:;
    v0 = (s32) 0x930000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -3676));
L_0090C090:;
    v0 = v0 & 0xff;
    at = (u64) v0 < (u64) (s64) 21;
    if (at == 0) { v0 = s0; goto L_0090C2DC; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffdb30U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x90c0bcU) goto L_0090C0BC; if (t_ == 0x90c140U) goto L_0090C140; if (t_ == 0x90c148U) goto L_0090C148; if (t_ == 0x90c150U) goto L_0090C150; if (t_ == 0x90c2d4U) goto L_0090C2D4; if (t_ == 0x90c2d8U) goto L_0090C2D8; }
L_0090C0BC:;
    v0 = func_00188680();
    v1 = 3;
    if (v0 == v1) goto L_0090C11C;
    a0 = 2;
    if (v0 == a0) { s0 = v1; goto L_0090C2D8; }
    v1 = 1;
    if (v0 == v1) { s0 = a0; goto L_0090C2D8; }
    if (v0 == 0) { s0 = v1; goto L_0090C2D8; }
    goto L_0090C2D8;
    s0 = v1;
    goto L_0090C2D8;
    s0 = a0;
    goto L_0090C2D8;
    s0 = v1;
    goto L_0090C2D8;
L_0090C11C:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7094));
    if (v0 != 0) { s0 = 5; goto L_0090C138; }
    s0 = 4; goto L_0090C138;
    s0 = 5;
L_0090C138:;
    goto L_0090C2D8;
L_0090C140:;
    s0 = 0; goto L_0090C2D8;
L_0090C148:;
    s0 = 30; goto L_0090C2D8;
L_0090C150:;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -3888));
    v0 = v1 & 0x800;
    if (v0 == 0) { s0 = 0; goto L_0090C2D8; }
    v0 = v1 & 0x400;
    if (v0 != 0) goto L_0090C2C8;
    v0 = func_00188A30();
    if (v0 == 0) goto L_0090C188;
    s0 = 8; goto L_0090C2D8;
L_0090C188:;
    v0 = (s32) 0x930000U;
    v1 = (s32) 0x80000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -3888));
    v0 = v0 & v1;
    if (v0 == 0) { s0 = 6; goto L_0090C2D8; }
    v0 = func_00226710();
    v1 = v0 & 0xff;
    v0 = 38;
    if (v1 == v0) { s0 = 28; goto L_0090C2D8; }
    v0 = 39;
    if (v1 == v0) { s0 = 26; goto L_0090C2D8; }
    v0 = 29;
    if (v1 == v0) { s0 = 24; goto L_0090C2D8; }
    v0 = 33;
    if (v1 == v0) { s0 = 22; goto L_0090C2D8; }
    v0 = 58;
    if (v1 == v0) { s0 = 20; goto L_0090C2D8; }
    v0 = 5;
    if (v1 == v0) { s0 = 20; goto L_0090C2D8; }
    v0 = 9;
    if (v1 == v0) { s0 = 18; goto L_0090C2D8; }
    s0 = 10;
    if (v1 == s0) { s0 = 16; goto L_0090C2D8; }
    v0 = 4;
    if (v1 == v0) { s0 = 14; goto L_0090C2D8; }
    v0 = 3;
    if (v1 == v0) { s0 = 12; goto L_0090C2D8; }
    v0 = 2;
    if (v1 == v0) goto L_0090C2D8;
    s0 = 6; goto L_0090C2B4;
    s0 = 12;
    goto L_0090C2D8;
    s0 = 14;
    goto L_0090C2D8;
    s0 = 16;
    goto L_0090C2D8;
    s0 = 18;
    goto L_0090C2D8;
    s0 = 20;
    goto L_0090C2D8;
    s0 = 20;
    goto L_0090C2D8;
    s0 = 22;
    goto L_0090C2D8;
    s0 = 24;
    goto L_0090C2D8;
    s0 = 26;
    goto L_0090C2D8;
    s0 = 28;
    goto L_0090C2D8;
    s0 = 6;
L_0090C2B4:;
    goto L_0090C2D8;
    s0 = 6;
    goto L_0090C2D8;
L_0090C2C8:;
    s0 = 0;
    goto L_0090C2D8;
L_0090C2D4:;
    s0 = 0;
L_0090C2D8:;
    v0 = s0;
L_0090C2DC:;
    return v0;
}
