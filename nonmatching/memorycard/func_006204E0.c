/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6OptionData_GetBlock304(void);
void func_0021DBB0(s32);
void func_0021DBE0(s32);
s32 func_002E84D0(void);
s32 func_002E8560(void);
s32 func_002E9250(void);
s32 func_002E9360(void);
s32 func_00623880(void);
s32 func_006238E0(s32, s32, s32, s32);
s32 func_00623D70(s32);
s32 func_00623E80(s32);
s32 func_00649E10(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0064B860(void);
void func_0064D660(s32);
void func_0064D670(s32);
void func_0064D680(void);

s32 func_006204E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v0 = (*(volatile u8 *) (u32) (gp + -21284));
    at = (u64) v0 < (u64) (s64) 11;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_00620518; }
    v1 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffa690U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x620518U) goto L_00620518; if (t_ == 0x620554U) goto L_00620554; if (t_ == 0x620578U) goto L_00620578; if (t_ == 0x620624U) goto L_00620624; if (t_ == 0x620654U) goto L_00620654; if (t_ == 0x620718U) goto L_00620718; if (t_ == 0x620728U) goto L_00620728; if (t_ == 0x6207bcU) goto L_006207BC; if (t_ == 0x6207ccU) goto L_006207CC; if (t_ == 0x6207f0U) goto L_006207F0; if (t_ == 0x620814U) goto L_00620814; }
L_00620518:;
    v0 = 3;
    (*(volatile u8 *) (u32) (gp + -21276)) = (u8) 0;
    (*(volatile u32 *) (u32) (gp + -21836)) = (u32) v0; v0 = func_002E84D0();
    if (v0 != 0) goto L_00620538;
    s0 = 1; goto L_0062081C;
L_00620538:;
    v0 = func_002E9250();
    v0 = v0 & 0xff;
    if (v0 == 0) goto L_00620554;
    s0 = 1; goto L_0062081C;
L_00620554:;
    v0 = func_00623880();
    if (v0 != 0) { v0 = s0; goto L_00620820; }
    a0 = (*(volatile s16 *) (u32) (gp + -21816)); v0 = func_00623D70(a0);
    v0 = 2;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) v0; goto L_0062081C;
L_00620578:;
    func_0064D680();
    a0 = 0; func_0064D670(a0);
    a0 = 0; func_0064D660(a0);
    v0 = func_002E9250();
    v0 = v0 & 0xff;
    if (v0 != 0) { (*(volatile u8 *) (u32) (gp + -21280)) = (u8) 0; goto L_006205AC; }
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -21280)) = (u8) v0;
L_006205AC:;
    v0 = func_002E8560();
    v0 = func_002E9250();
    v0 = v0 & 0xff;
    if (v0 != 0) { v0 = 1; goto L_006205F4; }
    v0 = func_002E9360();
    if (v0 == 0) { (*(volatile u8 *) (u32) (gp + -21272)) = (u8) 0; goto L_00620600; }
    v0 = Pes6OptionData_GetBlock304();
    v1 = (*(volatile u8 *) (u32) (v0 + 20));
    v0 = 1;
    if (v1 != v0) goto L_006205FC;
    v0 = 1;
L_006205F4:;
    (*(volatile u8 *) (u32) (gp + -21272)) = (u8) v0; goto L_00620604;
L_006205FC:;
    (*(volatile u8 *) (u32) (gp + -21272)) = (u8) 0;
L_00620600:;
    v0 = 0;
L_00620604:;
    v0 = v0 & 0xff;
    if (v0 != 0) { v0 = 3; goto L_0062061C; }
    v0 = 9;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) v0; goto L_0062081C;
L_0062061C:;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) v0; goto L_0062081C;
L_00620624:;
    v1 = (*(volatile s16 *) (u32) (gp + -21816));
    v0 = -1;
    if (v1 != v0) { a0 = (*(volatile s32 *) (u32) (gp + -21816)); goto L_00620640; }
    v0 = 5;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) v0; goto L_0062081C;
L_00620640:;
    func_0021DBB0(a0);
    v0 = 7;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) v0; goto L_0062081C;
L_00620654:;
    a0 = (*(volatile s32 *) (u32) (gp + -21816)); v0 = func_006238E0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_0062081C;
    v0 = func_002E9250();
    v1 = v0 & 0xff;
    v0 = 2;
    if (v1 == v0) { v1 = (*(volatile s16 *) (u32) (gp + -21816)); goto L_006206BC; }
    v1 = (*(volatile s16 *) (u32) (gp + -21816));
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s16 *) (u32) (gp + -21814));
    v0 = (s32) ((u32) v0 + 0xffffc090U);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 != 0) goto L_006206B8;
    v0 = 9;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) v0; goto L_0062081C;
L_006206B8:;
    v1 = (*(volatile s16 *) (u32) (gp + -21816));
L_006206BC:;
    v0 = -1;
    if (v1 != v0) { a0 = (*(volatile s16 *) (u32) (gp + -21814)); goto L_006206D4; }
    v0 = 5;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) v0; goto L_0062081C;
L_006206D4:;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffc090U);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (gp + -21816)); goto L_00620704; }
    v0 = 9;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) v0; goto L_0062081C;
L_00620704:;
    func_0021DBB0(a0);
    v0 = 7;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) v0; goto L_0062081C;
L_00620718:;
    v1 = 1;
    v0 = 8;
    (*(volatile u8 *) (u32) (gp + -21276)) = (u8) v1;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) v0;
L_00620728:;
    v0 = (*(volatile u8 *) (u32) (gp + -21280));
    if (v0 != 0) { a0 = 0; goto L_00620774; }
    v0 = func_0064B860();
    v1 = 2;
    if (v0 == v1) { v0 = 9; goto L_0062076C; }
    v1 = 1;
    if (v0 == v1) { v0 = 9; goto L_00620764; }
    if (v0 == 0) goto L_0062081C;
    goto L_0062081C;
L_00620764:;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) v0; goto L_0062081C;
L_0062076C:;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) v0; goto L_0062081C;
L_00620774:;
    v0 = func_00649E10(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 2;
    if (v0 == v1) { v0 = 9; goto L_006207B4; }
    v1 = 1;
    if (v0 == v1) { v1 = 6; goto L_006207A4; }
    if (v0 == 0) goto L_0062081C;
    goto L_0062081C;
L_006207A4:;
    v0 = 9;
    (*(volatile u32 *) (u32) (gp + -21836)) = (u32) v1;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) v0; goto L_0062081C;
L_006207B4:;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) v0; goto L_0062081C;
L_006207BC:;
    v1 = 1;
    v0 = 6;
    (*(volatile u8 *) (u32) (gp + -21276)) = (u8) v1;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) v0;
L_006207CC:;
    a0 = 0;
    (*(volatile u16 *) (u32) (gp + -21816)) = (u16) 0;
    (*(volatile u16 *) (u32) (gp + -21814)) = (u16) 0; func_0021DBE0(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -21816)); func_0021DBB0(a0);
    v0 = 7;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) v0; goto L_0062081C;
L_006207F0:;
    v0 = func_00623880();
    if (v0 != 0) goto L_0062081C;
    a0 = -1; v0 = func_00623E80(a0);
    v0 = 10;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) v0; goto L_0062081C;
L_00620814:;
    (*(volatile u8 *) (u32) (gp + -21284)) = (u8) 0;
    s0 = 1;
L_0062081C:;
    v0 = s0;
L_00620820:;
    return v0;
}
