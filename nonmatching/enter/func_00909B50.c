/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0017E2C0(s32);
void func_0017E2D0(s32, s32, s32, s32);
void func_0017E350(s32, s32, s32, s32);
s32 func_0027C1F0(void);
s32 func_0027C210(void);
void func_00295BD0(s32);
void func_00297390(s32, s32, s32, s32);
void func_002974F0(s32);
void func_009090E0(void);
void func_00909600(void);

void func_00909B50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0x930000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -4052));
    if (v1 == 0) goto L_00909B98;
    v0 = (u64) v1 < (u64) (s64) 6;
    if (v0 != 0) goto L_00909B90;
    at = (u64) v1 < (u64) (s64) 30;
    if (at == 0) goto L_00909B90;
    a1 = (*(volatile s32 *) (u32) (gp + -20036));
    a0 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 + 0xffffef40U); func_0017E2D0(a0, a1, a2, a3);
L_00909B90:;
    func_00297390(a0, a1, a2, a3);
L_00909B98:;
    v1 = (s32) 0x930000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -4056));
    if (v1 == 0) { ; goto L_00909CD4; }
    v0 = (u64) v1 < (u64) (s64) 6;
    if (v0 != 0) { v0 = 30; goto L_00909CA0; }
    at = (u64) v1 < (u64) (s64) 30;
    if (at == 0) goto L_00909C9C;
    a1 = (s32) 0x930000U;
    a0 = 0;
    a1 = (s32) ((u32) a1 + 0xffffef40U);
L_00909BCC:;
    v1 = a0 & 0xff;
    v0 = (s32) ((u32) a0 + 0x8U);
    v1 = (s32) ((u32) v1 << 2);
    a0 = v0 & 0xff;
    v1 = (s32) ((u32) a1 + (u32) v1);
    v0 = a0 < 42;
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 4)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 20)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 24)) = (u32) 0;
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) (v1 + 28)) = (u32) 0; if (c_) goto L_00909BCC; }
    v0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) a1 + (u32) v0);
    a0 = 0;
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) 0; func_0017E2C0(a0);
    v0 = func_0027C1F0();
    v1 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v1 = (*(volatile s32 *) (u32) (v1 + -4056));
    v1 = (s32) ((u32) v1 + 0xfffffffaU);
    v1 = v1 & 0x1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (gp + -20036)) = (u32) v0; v0 = func_0027C210();
    a1 = (*(volatile s32 *) (u32) (gp + -20036));
    a0 = (s32) 0x930000U;
    a2 = v0;
    a0 = (s32) ((u32) a0 + 0xffffef40U); func_0017E350(a0, a1, a2, a3);
    v0 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -4056));
    v0 = (s32) ((u32) v0 + 0xfffffff8U);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) goto L_00909C8C;
    func_009090E0();
    goto L_00909CB0;
L_00909C8C:;
    func_00909600();
    goto L_00909CB0;
L_00909C9C:;
    v0 = 30;
L_00909CA0:;
    if (v1 != v0) goto L_00909CB0;
    a0 = (s32) ((u32) gp + 0xffffb1c0U); func_00295BD0(a0);
L_00909CB0:;
    v0 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -4056));
    v1 = (s32) ((u32) v1 + 0xffff91ecU);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); func_002974F0(a0);
L_00909CD4:;
    return;
}
