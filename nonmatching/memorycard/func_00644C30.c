/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0021DBE0(s32);
s32 func_00622840(void);
s32 func_00623690(s32, s32, s32, s32, s32);
s32 func_00639E00(s32);
void func_0063B0F0(s32);
void func_0063B3F0(s32, s32, s32, s32, s32, s32, s32);
s32 func_0063B6E0(void);
void func_0063B750(void);
void func_00645670(s32);
s32 func_00645860(s32);
s32 func_00655660(void);
void func_00655760(void);
void func_006557C0(void);
void func_00655D10(void);
void func_00655EE0(s32, s32);

s32 func_00644C30(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s32 *) (u32) (gp + -20956));
    v0 = 4;
    s2 = a0;
    s1 = 0;
    { s32 c_ = v1 == v0; s0 = (s32) ((u32) s2 + 0x64U); if (c_) goto L_00644DE4; }
    v0 = 3;
    if (v1 == v0) { v1 = (*(volatile s32 *) (u32) s0); goto L_00644DC0; }
    v0 = 2;
    if (v1 == v0) { a0 = 5; goto L_00644D40; }
    v0 = 1;
    if (v1 == v0) goto L_00644D24;
    (*(volatile u32 *) (u32) s0) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) 0; func_0063B750();
    a0 = 0; func_0021DBE0(a0);
    v0 = (s32) 0x660000U;
    a1 = (*(volatile u8 *) (u32) (v0 + -27776));
    v0 = (s32) 0x660000U;
    a2 = (*(volatile u8 *) (u32) (v0 + -27775));
    v0 = (s32) 0x660000U;
    a3 = (*(volatile u8 *) (u32) (v0 + -27774));
    v0 = (s32) 0x660000U;
    a4 = (*(volatile u8 *) (u32) (v0 + -27773));
    v0 = (s32) 0x660000U;
    a5 = (*(volatile u8 *) (u32) (v0 + -27772));
    v0 = (s32) 0x660000U;
    a6 = (*(volatile u8 *) (u32) (v0 + -27771));
    a0 = s2; func_0063B3F0(a0, a1, a2, a3, a4, a5, a6);
    a0 = s2; func_0063B0F0(a0);
    a0 = (s32) ((u32) gp + 0xffffaaccU); func_00645670(a0);
    a0 = 22; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00655EE0(a0, a1);
    a0 = 95; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00655EE0(a0, a1);
    a0 = 1; func_00655D10();
    func_006557C0();
    func_00655760();
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -20956)) = (u32) v0;
L_00644D24:;
    v0 = func_00655660();
    if (v0 == 0) { v0 = s1; goto L_00644E08; }
    v0 = 2;
    (*(volatile u32 *) (u32) (gp + -20956)) = (u32) v0;
    a0 = 5;
L_00644D40:;
    v0 = func_00639E00(a0);
    a1 = (*(volatile s32 *) (u32) (gp + -21812));
    a2 = (s32) 0x660000U;
    a0 = v0;
    a2 = (s32) ((u32) a2 + 0xffffc0e0U);
    a3 = 0;
    a4 = 1; v0 = func_00623690(a0, a1, a2, a3, a4);
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) s0) = (u32) v0; if (c_) goto L_00644E04; }
    v1 = 1;
    if (v0 == v1) { v1 = (*(volatile s32 *) (u32) s0); goto L_00644D84; }
    v0 = 4;
    (*(volatile u32 *) (u32) (gp + -20956)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) s0);
L_00644D84:;
    v0 = 1;
    if (v1 != v0) { v0 = 3; goto L_00644DB8; }
    v0 = func_00622840();
    if (v0 != 0) goto L_00644DB4;
    v1 = -120;
    v0 = 4;
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    (*(volatile u32 *) (u32) (gp + -20956)) = (u32) v0; goto L_00644E04;
L_00644DB4:;
    v0 = 3;
L_00644DB8:;
    (*(volatile u32 *) (u32) (gp + -20956)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) s0);
L_00644DC0:;
    v0 = 1;
    if (v1 != v0) { v0 = 4; goto L_00644DE0; }
    v0 = func_0063B6E0();
    if (v0 == 0) goto L_00644E04;
    v0 = 4;
L_00644DE0:;
    (*(volatile u32 *) (u32) (gp + -20956)) = (u32) v0;
L_00644DE4:;
    func_0063B750();
    a0 = 0; func_00655D10();
    a0 = 1; func_0021DBE0(a0);
    (*(volatile u32 *) (u32) (gp + -20956)) = (u32) 0;
    s1 = 1;
L_00644E04:;
    v0 = s1;
L_00644E08:;
    return v0;
}
