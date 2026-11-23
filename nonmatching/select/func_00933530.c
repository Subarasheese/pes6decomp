/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Process_Destroy(s32, s32, s32, s32, s32, s32, s32, s32);
void Pes6Process_Unlink(s32);
s32 func_00152130(s32, s32);
s32 func_001B6A30(s32, s32, s32, s32);
s32 func_001BE550(s32, s32);
s32 func_001BE5B0(s32);
s32 func_001CDAA0(void);
s32 func_002133E0(s32, s32, s32, s32);
void func_0023EA10(s32, s32, s32, s32);
s32 func_0023F330(void);
void func_0023F3A0(s32, s32, s32, s32);
void func_0023F510(s32, s32, s32, s32);
void func_002405A0(s32, s32, s32, s32);
s32 func_00246550(s32);
void func_008B3040(s32, s32, s32, s32);
s32 func_008B32E0(s32, s32, s32, s32);

s32 func_00933530(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    v0 = (*(volatile s8 *) (u32) (gp + -18764));
    a1 = 1;
    s0 = (s32) 0x540000U;
    { s32 c_ = v0 == a1; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_00933654; }
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -22756)); goto L_00933568; }
    v0 = 0; goto L_009338CC;
L_00933568:;
    { s32 c_ = a0 == a1; (*(volatile u32 *) (u32) (gp + -18804)) = (u32) 0; if (c_) goto L_0093361C; }
    v0 = 7;
    if (a0 == v0) { v0 = (*(volatile s32 *) (u32) (gp + -18788)); goto L_00933600; }
    v1 = 3;
    if (a0 == v1) { v1 = (*(volatile s32 *) (u32) (gp + -18788)); goto L_009335CC; }
    v0 = 2;
    if (a0 == v0) { v0 = (*(volatile s32 *) (u32) (gp + -18788)); goto L_009335B4; }
    if (a0 == 0) { a0 = 9; goto L_009335A4; }
    a0 = 0; goto L_0093363C;
L_009335A4:;
    func_0023F510(a0, a1, a2, a3);
    goto L_00933638;
L_009335B4:;
    if (v0 != a1) goto L_00933638;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (gp + -18804)) = (u32) a1;
    (*(volatile u32 *) (u32) (v0 + -15592)) = (u32) v1; goto L_00933638;
L_009335CC:;
    if (v1 != a1) { v0 = 2; goto L_009335E8; }
    v1 = 2;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (gp + -18804)) = (u32) a1;
    (*(volatile u32 *) (u32) (v0 + -15592)) = (u32) v1; goto L_00933638;
L_009335E8:;
    if (v1 != v0) goto L_00933638;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (gp + -18804)) = (u32) a1;
    (*(volatile u32 *) (u32) (v0 + -15592)) = (u32) a1; goto L_00933638;
L_00933600:;
    if (v0 != a1) goto L_00933638;
    v1 = 16;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (gp + -18804)) = (u32) a1;
    (*(volatile u32 *) (u32) (v0 + -15592)) = (u32) v1; goto L_00933638;
L_0093361C:;
    v0 = (*(volatile s32 *) (u32) (gp + -18788));
    if (v0 != a1) goto L_00933638;
    v1 = 5;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (gp + -18804)) = (u32) a1;
    (*(volatile u32 *) (u32) (v0 + -15592)) = (u32) v1;
L_00933638:;
    a0 = 0;
L_0093363C:;
    func_0023EA10(a0, a1, a2, a3);
    v0 = (*(volatile s8 *) (u32) (gp + -18764));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18764)) = (u8) v0; goto L_009338C8;
L_00933654:;
    v1 = (*(volatile s8 *) (u32) (gp + -18740));
    v0 = -1;
    if (v1 != v0) goto L_009338C8;
    v0 = (*(volatile s16 *) (u32) (s0 + 6));
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -22756)); goto L_009336EC; }
    v0 = func_001CDAA0();
    v1 = (s32) 0x3c0000U;
    a0 = (*(volatile s32 *) (u32) (gp + -18776));
    v1 = (s32) ((u32) v1 + 0x54c0U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v1 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) v0 << 1);
    v0 = a0 < v0;
    if (v0 != 0) goto L_009336C8;
    a0 = 1;
    a1 = 42; v0 = func_00152130(a0, a1);
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (gp + -18744)); goto L_0093380C; }
    goto L_009338C8;
L_009336C8:;
    v0 = func_0023F330();
    a0 = 0;
    a1 = v0; v0 = func_001BE550(a0, a1);
    if (v0 != 0) goto L_00933808;
    goto L_009338C8;
L_009336EC:;
    a0 = 4;
    if (v1 != a0) { v0 = 6; goto L_00933754; }
    v1 = (*(volatile s32 *) (u32) (gp + -18788));
    if (v1 == 0) goto L_00933710;
    v0 = 2;
    if (v1 != v0) goto L_00933734;
L_00933710:;
    v0 = func_0023F330();
    a0 = 0;
    a1 = v0; v0 = func_001BE550(a0, a1);
    if (v0 != 0) goto L_00933808;
    goto L_009338C8;
L_00933734:;
    v0 = func_0023F330();
    a0 = v0; v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 != 0) goto L_00933808;
    goto L_009338C8;
L_00933754:;
    if (v1 != v0) { v1 = (*(volatile s32 *) (u32) (gp + -22756)); goto L_009337A8; }
    v1 = (*(volatile s32 *) (u32) (gp + -18788));
    v0 = 2;
    if (v1 != v0) goto L_009337A4;
    v0 = (*(volatile s32 *) (u32) (gp + -18784));
    if (v0 != a0) goto L_009337A4;
    a0 = 163; v0 = func_00246550(a0);
    v1 = 1;
    if (v0 != v1) goto L_009337A4;
    a0 = 0; v0 = func_001BE5B0(a0);
    if (v0 != 0) goto L_00933808;
    goto L_009338C8;
L_009337A4:;
    v1 = (*(volatile s32 *) (u32) (gp + -22756));
L_009337A8:;
    v0 = 6;
    if (v1 != v0) goto L_009337F0;
    v1 = (*(volatile s32 *) (u32) (gp + -18788));
    v0 = 2;
    if (v1 != v0) goto L_009337F0;
    v1 = (*(volatile s32 *) (u32) (gp + -18784));
    v0 = 3;
    if (v1 != v0) goto L_009337F0;
    a0 = 1;
    a1 = 8; v0 = func_00152130(a0, a1);
    if (v0 != 0) goto L_00933808;
    goto L_009338C8;
L_009337F0:;
    v0 = func_0023F330();
    a0 = v0; v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 == 0) goto L_009338C8;
L_00933808:;
    a0 = (*(volatile s32 *) (u32) (gp + -18744));
L_0093380C:;
    Pes6Process_Unlink(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -18744)); Pes6Process_Destroy(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (gp + -18792));
    if (a0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -18796)); goto L_00933834; }
    v0 = func_002133E0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -18796));
L_00933834:;
    v0 = 1;
    if (v1 != v0) { (*(volatile u32 *) (u32) (gp + -18796)) = (u32) 0; goto L_0093384C; }
    a0 = (*(volatile s32 *) (u32) (gp + -18800)); v0 = func_002133E0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -18796)) = (u32) 0;
L_0093384C:;
    s2 = 0;
    (*(volatile u32 *) (u32) (gp + -18800)) = (u32) 0;
    s1 = 0;
    (*(volatile u32 *) (u32) (gp + -18792)) = (u32) 0;
L_0093385C:;
    v0 = (*(volatile s32 *) (u32) (gp + -18732));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B32E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18732));
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 13;
    a0 = (s32) ((u32) a0 + (u32) s1);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0093385C; }
    v0 = func_0023F330();
    v1 = 20440;
    if (v0 != v1) goto L_009338A4;
    func_0023F3A0(a0, a1, a2, a3);
L_009338A4:;
    func_008B3040(a0, a1, a2, a3);
    a0 = (s32) ((u32) gp + 0xffffb6d4U); func_002405A0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) 0;
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -18772)) = (u32) 0;
    (*(volatile u8 *) (u32) (gp + -18764)) = (u8) 0; goto L_009338CC;
L_009338C8:;
    v0 = 0;
L_009338CC:;
    return v0;
}
