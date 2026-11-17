/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0024EDC0(void);
s32 func_0024EFC0(s32, s32, s32, s32);
s32 func_00250E70(s32, s32, s32, s32);
s32 func_002511D0(s32, s32, s32, s32);

s32 func_00250BF0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (a0 + 8));
    a1 = (*(volatile s32 *) (u32) (s0 + 44));
    (*(volatile u32 *) (u32) (gp + -22572)) = (u32) a0; v0 = func_0024EDC0();
    v1 = (*(volatile s32 *) (u32) (s0 + 24));
    v0 = 6;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) (gp + -22572)); goto L_00250D48; }
    v0 = 4;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) (gp + -22572)); goto L_00250D30; }
    v0 = 5;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) (gp + -22572)); goto L_00250D14; }
    v0 = 1;
    if (v1 == v0) goto L_00250C54;
    if (v1 == 0) goto L_00250C54;
    v0 = 1; goto L_00250D98;
L_00250C54:;
    a0 = (*(volatile s32 *) (u32) (gp + -22572));
    a1 = 12; v0 = func_00250E70(a0, a1, a2, a3);
    if (v0 != 0) { v0 = -1; goto L_00250E54; }
    v1 = (*(volatile s32 *) (u32) (s0 + 24));
    if (v1 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -22572)); goto L_00250DA0; }
    v0 = 1;
    if (v1 != v0) goto L_00250C90;
    a0 = (*(volatile s32 *) (u32) (gp + -22572));
    a1 = 14;
    a2 = 2; v0 = func_002511D0(a0, a1, a2, a3);
L_00250C90:;
    a0 = (*(volatile s32 *) (u32) (gp + -22572));
L_00250C94:;
    a1 = 8;
    a2 = 0; v0 = func_002511D0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -22572));
    a2 = (*(volatile s32 *) (u32) (s0 + 20));
    a1 = 10; v0 = func_002511D0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -22572));
    a1 = 12;
    a2 = 1; v0 = func_002511D0(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (s0 + 8));
    v0 = (s32) 0x580000U;
    v0 = (s32) ((u32) v0 + 0x3f80U);
    v1 = 13;
    a0 = (s32) ((u32) a1 << 5);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) v0 + (u32) a0);
L_00250CE0:;
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    s0 = (s32) ((u32) s0 + 0x4U);
    a0 = (s32) ((u32) a0 + 0x4U);
    if (v1 > 0) goto L_00250CE0;
    a0 = (*(volatile s32 *) (u32) (gp + -22572));
    a1 = 15;
    a2 = 1; v0 = func_002511D0(a0, a1, a2, a3);
    goto L_00250D94;
L_00250D14:;
    a1 = 12; v0 = func_00250E70(a0, a1, a2, a3);
    v0 = v0 < 4;
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (gp + -22572)); goto L_00250DB4; }
    v0 = -3; goto L_00250E54;
L_00250D30:;
    a1 = 12; v0 = func_00250E70(a0, a1, a2, a3);
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (gp + -22572)); goto L_00250E00; }
    v0 = -3; goto L_00250E54;
L_00250D48:;
    v0 = func_0024EFC0(a0, a1, a2, a3);
    s0 = (*(volatile s32 *) (u32) (gp + -22572));
    a1 = 8;
    a2 = 0;
    a0 = s0; v0 = func_002511D0(a0, a1, a2, a3);
    a0 = s0;
    a1 = 9;
    a2 = 0; v0 = func_002511D0(a0, a1, a2, a3);
    a0 = s0;
    a1 = 4;
    a2 = 100; v0 = func_002511D0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -22572));
    a1 = 12;
    a2 = 7; v0 = func_002511D0(a0, a1, a2, a3);
L_00250D94:;
    v0 = 1;
L_00250D98:;
    goto L_00250E58;
L_00250DA0:;
    a1 = 14;
    a2 = 1; v0 = func_002511D0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -22572)); goto L_00250C94;
L_00250DB4:;
    a1 = 12; v0 = func_00250E70(a0, a1, a2, a3);
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (gp + -22572)); goto L_00250DCC; }
    v0 = -3; goto L_00250E54;
L_00250DCC:;
    a1 = 9;
    a2 = 0; v0 = func_002511D0(a0, a1, a2, a3);
    a2 = (*(volatile s32 *) (u32) (s0 + 20));
    a0 = (*(volatile s32 *) (u32) (gp + -22572));
    a1 = 11; v0 = func_002511D0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -22572));
    a1 = 12;
    a2 = 4; v0 = func_002511D0(a0, a1, a2, a3);
    goto L_00250D94;
L_00250E00:;
    v0 = func_0024EFC0(a0, a1, a2, a3);
    s0 = (*(volatile s32 *) (u32) (gp + -22572));
    a1 = 8;
    a2 = 0;
    a0 = s0; v0 = func_002511D0(a0, a1, a2, a3);
    a0 = s0;
    a1 = 9;
    a2 = 0; v0 = func_002511D0(a0, a1, a2, a3);
    a0 = s0;
    a1 = 4;
    a2 = 100; v0 = func_002511D0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -22572));
    a1 = 12;
    a2 = 7; v0 = func_002511D0(a0, a1, a2, a3);
    goto L_00250D94;
L_00250E54:;
L_00250E58:;
    return v0;
}
