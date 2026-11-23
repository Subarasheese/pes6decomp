/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021D420(s32);
void func_002E9340(s32);
s32 func_00622810(void);
void func_00630BC0(s32, s32);
void func_0063B750(void);
s32 func_0063B780(s32, s32, s32);
s32 func_0063CA40(s32);
s32 func_00645860(s32);
void func_0064B100(s32, s32, s32);
void func_0064B2E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_006557C0(void);
void func_00655940(void);
void func_00655D10(void);
void func_00656020(s32, s32);

s32 func_0064D060(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    s0 = a1;
    v0 = (s32) ((u32) s0 + 0x7fU);
    at = (u64) v0 < (u64) (s64) 9;
    { s32 c_ = at == 0; s1 = a0; if (c_) goto L_0064D0A0; }
    v1 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffba50U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x64d0a0U) goto L_0064D0A0; if (t_ == 0x64d0b8U) goto L_0064D0B8; if (t_ == 0x64d0e0U) goto L_0064D0E0; if (t_ == 0x64d11cU) goto L_0064D11C; if (t_ == 0x64d13cU) goto L_0064D13C; }
L_0064D0A0:;
    a0 = (*(volatile s32 *) (u32) (gp + -21816)); v0 = func_0021D420(a0);
    v1 = 3;
    if (v0 != v1) { a0 = s1; goto L_0064D0BC; }
    s0 = -125;
L_0064D0B8:;
    a0 = s1;
L_0064D0BC:;
    a1 = s0;
    a2 = (s32) ((u32) gp + 0xffffaac8U); func_0064B2E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s1;
    a1 = s0;
    a2 = (s32) ((u32) gp + 0xffffaac8U); func_0064B100(a0, a1, a2);
    v0 = 2; goto L_0064D234;
L_0064D0E0:;
    v0 = 1;
    a0 = -1;
    (*(volatile u8 *) (u32) (gp + -20884)) = (u8) v0;
    (*(volatile u8 *) (u32) (gp + -20888)) = (u8) v0; func_002E9340(a0);
    a0 = s1;
    a1 = s0;
    a2 = (s32) ((u32) gp + 0xffffaac8U); func_0064B2E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s1;
    a1 = s0;
    a2 = (s32) ((u32) gp + 0xffffaac8U); func_0064B100(a0, a1, a2);
    v0 = 2; goto L_0064D234;
L_0064D11C:;
    a0 = (s32) ((u32) gp + 0xffffaac8U);
    a1 = 0;
    a2 = 1; v0 = func_0063B780(a0, a1, a2);
    func_0063B750();
    v0 = 0; goto L_0064D234;
L_0064D13C:;
    v1 = 1;
    v0 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (gp + -20884)) = (u8) v1;
    v0 = (s32) ((u32) v0 + 0xffffc180U);
    (*(volatile u8 *) (u32) (gp + -20888)) = (u8) v1;
    v1 = (*(volatile s16 *) (u32) (gp + -21816));
    a1 = (*(volatile s16 *) (u32) (gp + -21814));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a1 + (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (*(volatile s32 *) (u32) v0);
    a0 = 0; v0 = func_0063CA40(a0);
    at = s0 < v0;
    if (at == 0) goto L_0064D1A8;
    a0 = s1;
    a1 = -123;
    a2 = (s32) ((u32) gp + 0xffffaac8U); func_0064B2E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s1;
    a1 = -123;
    a2 = (s32) ((u32) gp + 0xffffaac8U); func_0064B100(a0, a1, a2);
    v0 = 2; goto L_0064D234;
L_0064D1A8:;
    v0 = func_00622810();
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 != v0) { a0 = s1; goto L_0064D214; }
    func_00655940();
    a0 = 26; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 0; func_00656020(a0, a1);
    a0 = 95; v0 = func_00645860(a0);
    a0 = v0;
    a1 = 1; func_00656020(a0, a1);
    a0 = 1; func_00655D10();
    func_006557C0();
    a0 = 1;
    a1 = a0; func_00630BC0(a0, a1);
    v0 = 0; goto L_0064D234;
L_0064D214:;
    a1 = -119;
    a2 = (s32) ((u32) gp + 0xffffaac8U); func_0064B2E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s1;
    a1 = -119;
    a2 = (s32) ((u32) gp + 0xffffaac8U); func_0064B100(a0, a1, a2);
    v0 = 2;
L_0064D234:;
    return v0;
}
