/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Title_Unload(void);
void func_00240C20(void);
s32 func_0026DA40(s32);
void func_002D32B0(s32, s32, s32, s32);
s32 func_002D65E0(void);
s32 func_002D65F0(s32, s32, s32, s32);
void func_002D6800(void);
s32 func_002D6A30(void);
void func_00901560(s32, s32, s32, s32);
void func_00901570(s32, s32, s32, s32);
void memset(s32, s32, s32);

void Pes6Scene_Title(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    v1 = (s32) 0x510000U;
    a2 = 4;
    a3 = (*(volatile s32 *) (u32) (v1 + 4056));
    if (a3 == a2) goto L_0017A9D8;
    v1 = 3;
    if (a3 == v1) goto L_0017A990;
    a1 = 2;
    if (a3 == a1) { v1 = (*(volatile s32 *) (u32) (gp + -23348)); goto L_0017A8E0; }
    v1 = 1;
    if (a3 == v1) goto L_0017A898;
    if (a3 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -23348)); goto L_0017A7D0; }
    goto L_0017AA54;
L_0017A7D0:;
    v1 = 12;
    v0 = 6;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    v1 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -23348)) = (u32) v1;
    v1 = hi;
    if (v1 == v0) { v1 = (s32) ((u32) a3 + 0x1U); goto L_0017A86C; }
    if (v1 == 0) { (*(volatile u8 *) (u32) (gp + -21396)) = (u8) 0; goto L_0017A868; }
    v0 = 10;
    if (v1 == v0) goto L_0017A828;
    v0 = 8;
    if (v1 == v0) goto L_0017A828;
    if (v1 == a2) goto L_0017A828;
    if (v1 == a1) goto L_0017A828;
    goto L_0017A868;
L_0017A828:;
    Pes6Title_Unload();
    func_00240C20();
    v1 = 12;
    v0 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (v0 + 4048)) = (u32) v1;
    a0 = (s32) 0x510000U;
    v0 = (s32) 0x510000U;
    a0 = (s32) ((u32) a0 + 0xfd8U);
    (*(volatile u32 *) (u32) (v0 + 4052)) = (u32) 0;
    a1 = 0;
    a2 = 16; memset(a0, a1, a2);
    goto L_0017AA50;
L_0017A868:;
    v1 = (s32) ((u32) a3 + 0x1U);
L_0017A86C:;
    v0 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (v0 + 4056)) = (u32) v1;
    a0 = (s32) 0x510000U;
    v0 = (s32) 0x510000U;
    a0 = (s32) ((u32) a0 + 0xfe0U);
    (*(volatile u32 *) (u32) (v0 + 4060)) = (u32) 0;
    a1 = 0;
    a2 = 8; memset(a0, a1, a2);
    goto L_0017AA50;
L_0017A898:;
    v0 = func_002D6A30();
    v1 = 1;
    if (v0 != v1) goto L_0017AA50;
    v0 = (s32) 0x510000U;
    a0 = (s32) 0x510000U;
    a3 = (*(volatile s32 *) (u32) (v0 + 4056));
    v1 = (s32) 0x510000U;
    a0 = (s32) ((u32) a0 + 0xfe0U);
    a1 = 0;
    a2 = 8;
    v0 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (v0 + 4060)) = (u32) 0;
    v0 = (s32) ((u32) a3 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 4056)) = (u32) v0; memset(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (gp + -23348));
L_0017A8E0:;
    v0 = 12;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = hi;
    if (v1 == 0) { a0 = 1; goto L_0017A908; }
    v0 = 6;
    if (v1 != v0) goto L_0017A958;
    a0 = 1;
L_0017A908:;
    v0 = func_0026DA40(a0);
    if (v0 != 0) goto L_0017AA50;
    func_00901570(a0, a1, a2, a3);
    func_00901560(a0, a1, a2, a3);
    v1 = 3;
    v0 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (v0 + 4048)) = (u32) v1;
    a0 = (s32) 0x510000U;
    v0 = (s32) 0x510000U;
    a0 = (s32) ((u32) a0 + 0xfd8U);
    (*(volatile u32 *) (u32) (v0 + 4052)) = (u32) 0;
    a1 = 0;
    a2 = 16; memset(a0, a1, a2);
    goto L_0017AA50;
L_0017A958:;
    func_002D6800();
    v0 = (s32) 0x510000U;
    a0 = (s32) 0x510000U;
    a3 = (*(volatile s32 *) (u32) (v0 + 4056));
    v1 = (s32) 0x510000U;
    a0 = (s32) ((u32) a0 + 0xfe0U);
    a1 = 0;
    a2 = 8;
    v0 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (v0 + 4060)) = (u32) 0;
    v0 = (s32) ((u32) a3 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 4056)) = (u32) v0; memset(a0, a1, a2);
L_0017A990:;
    v0 = func_002D65F0(a0, a1, a2, a3);
    if (v0 == 0) goto L_0017AA50;
    v0 = (s32) 0x510000U;
    a0 = (s32) 0x510000U;
    a3 = (*(volatile s32 *) (u32) (v0 + 4056));
    v1 = (s32) 0x510000U;
    a0 = (s32) ((u32) a0 + 0xfe0U);
    a1 = 0;
    a2 = 8;
    v0 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (v0 + 4060)) = (u32) 0;
    v0 = (s32) ((u32) a3 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 4056)) = (u32) v0; memset(a0, a1, a2);
    goto L_0017AA50;
L_0017A9D8:;
    v0 = func_002D65E0();
    v1 = 1;
    if (v0 != v1) { v1 = 3; goto L_0017AA2C; }
    Pes6Title_Unload();
    func_002D32B0(a0, a1, a2, a3);
    v1 = 4;
    v0 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (v0 + 4048)) = (u32) v1;
    a0 = (s32) 0x510000U;
    v0 = (s32) 0x510000U;
    a0 = (s32) ((u32) a0 + 0xfd8U);
    (*(volatile u32 *) (u32) (v0 + 4052)) = (u32) 0;
    a1 = 0;
    a2 = 16; memset(a0, a1, a2);
    goto L_0017AA50;
L_0017AA2C:;
    v0 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (v0 + 4048)) = (u32) v1;
    a0 = (s32) 0x510000U;
    v0 = (s32) 0x510000U;
    a0 = (s32) ((u32) a0 + 0xfd8U);
    (*(volatile u32 *) (u32) (v0 + 4052)) = (u32) 0;
    a1 = 0;
    a2 = 16; memset(a0, a1, a2);
L_0017AA50:;
L_0017AA54:;
    return;
}
