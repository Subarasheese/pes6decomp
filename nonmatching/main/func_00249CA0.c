/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023EA10(s32, s32, s32, s32);
s32 func_0023EFE0(void);
void func_00240600(void);
void func_002472F0(s32, s32, s32, s32);
s32 func_0024A6C0(s32, s32, s32, s32);
void func_0024C1C0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0024C810(s32, s32);
void func_0024DC00(s32, s32);
void func_0024DFB0(s32);
void func_0024DFD0(s32);
s32 func_0024E650(void);

s32 func_00249CA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s32 *) (u32) (gp + -22636));
    v0 = 2;
    s0 = (s32) 0x540000U;
    { s32 c_ = v1 == v0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_00249E24; }
    v0 = 1;
    if (v1 == v0) { v1 = (*(volatile s32 *) (u32) (gp + -22604)); goto L_00249D40; }
    if (v1 == 0) goto L_00249CDC;
    v0 = 0; goto L_00249E74;
L_00249CDC:;
    v0 = (s32) 0x510000U;
    v1 = 8;
    a0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (a0 == v1) { v1 = (*(volatile s32 *) (u32) (gp + -22604)); goto L_00249D00; }
    v0 = 14;
    if (a0 != v0) { v0 = (*(volatile s32 *) (u32) (gp + -22636)); goto L_00249D34; }
    v1 = (*(volatile s32 *) (u32) (gp + -22604));
L_00249D00:;
    v0 = 1;
    if (v1 != v0) goto L_00249D30;
    a1 = (s32) 0x3b0000U;
    a0 = 2;
    a1 = (s32) ((u32) a1 + 0xffffa200U); v0 = func_0024C810(a0, a1);
    v1 = 1;
    if (v0 != v1) goto L_00249D30;
    a0 = 30; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
L_00249D30:;
    v0 = (*(volatile s32 *) (u32) (gp + -22636));
L_00249D34:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22636)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (gp + -22604));
L_00249D40:;
    v0 = 2;
    if (v1 != v0) goto L_00249D60;
    a0 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 + 0xffffa200U); func_002472F0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -22636)); goto L_00249E18;
L_00249D60:;
    v0 = (s32) 0x510000U;
    v1 = 8;
    a0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (a0 == v1) goto L_00249D80;
    v0 = 14;
    if (a0 != v0) goto L_00249E04;
L_00249D80:;
    a1 = (s32) 0x3b0000U;
    a0 = 2;
    a1 = (s32) ((u32) a1 + 0xffffa200U); v0 = func_0024C810(a0, a1);
    v1 = 1;
    if (v0 != v1) goto L_00249E04;
    v0 = func_0024E650();
    a0 = v0; v0 = func_0023EFE0();
    v1 = 1;
    if (v0 == v1) { v0 = 2; goto L_00249DEC; }
    if (v0 == 0) { s0 = 0; goto L_00249DC8; }
    v0 = 0; goto L_00249DFC;
L_00249DC8:;
    a0 = s0;
    a1 = 0; func_0024DC00(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 8;
    if (v0 != 0) goto L_00249DC8;
    goto L_00249E04;
L_00249DEC:;
    (*(volatile u32 *) (u32) (gp + -22636)) = (u32) 0;
    (*(volatile u8 *) (u32) (gp + -22640)) = (u8) v0;
    v0 = 0; goto L_00249E74;
L_00249DFC:;
    goto L_00249E78;
L_00249E04:;
    a1 = (s32) 0x3b0000U;
    a0 = 1;
    a1 = (s32) ((u32) a1 + 0xffffa200U); v0 = func_0024C810(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -22636));
L_00249E18:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22636)) = (u32) v0; goto L_00249E70;
L_00249E24:;
    a0 = (*(volatile s32 *) (u32) (gp + -22604)); v0 = func_0024A6C0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_00249E70;
    func_0024C1C0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 0; func_0023EA10(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -22604));
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) v0; func_00240600();
    a0 = 0; func_0024DFD0(a0);
    a0 = 0; func_0024DFB0(a0);
    (*(volatile u32 *) (u32) (gp + -22636)) = (u32) 0;
    v0 = 1; goto L_00249E74;
L_00249E70:;
    v0 = 0;
L_00249E74:;
L_00249E78:;
    return v0;
}
