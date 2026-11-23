/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0063A820(void);
s32 func_0063A9F0(s32);
s32 func_0063C0B0(s32);
s32 func_0063E160(s32, s32);
s32 func_0063E1E0(s32);
s32 func_0063F390(s32);
s32 func_0063F3A0(s32);
s32 func_0063F3B0(s32);
s32 func_00643A00(s32, s32);

void func_006436B0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 gp = 0x3ef370;

    s5 = 0;
    s2 = a0;
    s1 = a1;
    s0 = a2;
    a0 = s1; v0 = func_0063E1E0(a0);
    v0 = v0 & 0xff;
    a0 = s1;
    s4 = v0 & 0x7f; v0 = func_0063E1E0(a0);
    v0 = v0 & 0xff;
    a0 = s0;
    v0 = v0 & 0x80;
    s3 = v0 & 0xff; v0 = func_0063A9F0(a0);
    a0 = v0 & 0xff;
    v0 = s3 & 0xff;
    if (v0 != 0) { v0 = (s32) 0x80000000U; goto L_00643724; }
    v0 = 0; goto L_006439D8;
L_00643724:;
    if (s0 != v0) { v0 = (s32) 0x8000000U; goto L_00643734; }
    s5 = 3; goto L_006439D4;
L_00643734:;
    if (s0 != v0) { v0 = (s32) 0x40000000U; goto L_00643744; }
    s5 = 3; goto L_006439D4;
L_00643744:;
    if (s0 != v0) { v0 = (s32) 0x10000000U; goto L_00643820; }
    v0 = (*(volatile u8 *) (u32) (s2 + 79));
    a0 = 1;
    if (v0 != a0) { v0 = 35; goto L_00643794; }
    v1 = s4 & 0xff;
    v0 = 14;
    if (v1 != v0) { v0 = 13; goto L_00643774; }
    s5 = 3; goto L_006439D4;
L_00643774:;
    if (v1 != v0) goto L_00643784;
    s5 = 3; goto L_006439D4;
L_00643784:;
    if (v1 != 0) { v0 = s5; goto L_006439D8; }
    s5 = 4; goto L_006439D4;
L_00643794:;
    if (s1 != v0) { v1 = s4 & 0xff; goto L_006437A4; }
    s5 = 4; goto L_006439D4;
L_006437A4:;
    v0 = 14;
    if (v1 == v0) { v0 = 14; goto L_006437CC; }
    v0 = (s32) 0x660000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -9872));
    if (v1 == v0) goto L_006437C8;
    s5 = a0; goto L_006439D4;
L_006437C8:;
    v0 = 14;
L_006437CC:;
    if (v1 != v0) goto L_006439D4;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -9872)); v0 = func_0063C0B0(a0);
    if (v0 != 0) goto L_006439D4;
    a0 = (*(volatile s16 *) (u32) (gp + -21812));
    v1 = (s32) 0x660000U;
    a1 = (*(volatile s16 *) (u32) (gp + -21810));
    v1 = (s32) ((u32) v1 + 0xffffc094U);
    v0 = 1;
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 != v0) goto L_006439D4;
    s5 = 5; goto L_006439D4;
L_00643820:;
    v0 = s0 & v0;
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s2 + 76)); goto L_00643944; }
    v0 = func_0063A820();
    if (v0 == 0) { v1 = s4 & 0xff; goto L_00643920; }
    v1 = s4 & 0xff;
    v0 = 10;
    if (v1 == v0) { a0 = s1; goto L_0064385C; }
    v0 = 5;
    if (v1 != v0) { v0 = 14; goto L_00643910; }
    a0 = s1;
L_0064385C:;
    a1 = 0; v0 = func_0063E160(a0, a1);
    a0 = (*(volatile u8 *) (u32) (v0 + 4372));
    s1 = v0;
    s2 = 0; v0 = func_0063F3B0(a0);
    v1 = 1;
    if (v0 != v1) { v0 = (s32) 0x200000U; goto L_00643888; }
    s2 = s2 | 0x1;
    v0 = (s32) 0x200000U;
L_00643888:;
    s0 = s0 & v0;
    if (s0 == 0) goto L_006438AC;
    a0 = (*(volatile u8 *) (u32) (s1 + 4372)); v0 = func_0063F3A0(a0);
    v1 = 1;
    if (v0 != v1) goto L_006438AC;
    s2 = s2 | 0x2;
L_006438AC:;
    if (s0 == 0) { v0 = 1; goto L_006438D0; }
    a0 = (*(volatile u8 *) (u32) (s1 + 4372)); v0 = func_0063F390(a0);
    v1 = 1;
    if (v0 != v1) goto L_006438CC;
    s2 = s2 | 0x4;
L_006438CC:;
    v0 = 1;
L_006438D0:;
    if (s2 != v0) { v0 = 2; goto L_006438E0; }
    s5 = 6; goto L_006439D4;
L_006438E0:;
    if (s2 != v0) { v0 = 4; goto L_006438F0; }
    s5 = 7; goto L_006439D4;
L_006438F0:;
    if (s2 != v0) goto L_00643900;
    s5 = 8; goto L_006439D4;
L_00643900:;
    if (s2 == 0) goto L_006439D4;
    s5 = 9; goto L_006439D4;
L_00643910:;
    if (v1 != v0) { s5 = 1; goto L_006439D4; }
    s5 = 3; goto L_006439D4;
L_00643920:;
    v0 = 14;
    if (v1 != v0) { a0 = s2; goto L_00643934; }
    s5 = 3; goto L_006439D4;
L_00643934:;
    a1 = s0; v0 = func_00643A00(a0, a1);
    goto L_006439D4;
L_00643944:;
    if (v0 != 0) { s5 = 3; goto L_006439D4; }
    v0 = 35;
    if (s1 != v0) { v1 = s4 & 0xff; goto L_00643960; }
    s5 = 4; goto L_006439D4;
L_00643960:;
    v0 = 14;
    if (v1 == v0) { v0 = 14; goto L_00643984; }
    v0 = a0 & 0xff;
    if (v1 == v0) goto L_00643980;
    s5 = 1; goto L_006439D4;
L_00643980:;
    v0 = 14;
L_00643984:;
    if (v1 != v0) goto L_006439D4;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -9872)); v0 = func_0063C0B0(a0);
    if (v0 != 0) goto L_006439D4;
    a0 = (*(volatile s16 *) (u32) (gp + -21812));
    v1 = (s32) 0x660000U;
    a1 = (*(volatile s16 *) (u32) (gp + -21810));
    v1 = (s32) ((u32) v1 + 0xffffc094U);
    v0 = 1;
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 != v0) goto L_006439D4;
    s5 = 5;
L_006439D4:;
    v0 = s5;
L_006439D8:;
    return;
}
