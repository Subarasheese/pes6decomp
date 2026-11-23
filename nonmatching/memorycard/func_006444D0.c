/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_0021DBB0(s32);
s32 func_0063CEA0(void);
void func_00645670(s32);
s32 func_00655660(void);
void func_006556F0(s32, s32, s32, s32);
void func_00655760(void);
void func_006557C0(void);
void func_00655940(void);
void func_00655E80(s32, s32);

s32 func_006444D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s32 *) (u32) (gp + -20940));
    v0 = 4;
    { s32 c_ = v1 == v0; s0 = 0; if (c_) goto L_006445E4; }
    v0 = 3;
    if (v1 == v0) goto L_006445CC;
    v0 = 2;
    if (v1 == v0) goto L_00644570;
    v0 = 1;
    if (v1 == v0) goto L_00644558;
    a0 = (s32) ((u32) gp + 0xffffaaccU); func_00645670(a0);
    func_00655940();
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -24492));
    a1 = 0; func_00655E80(a0, a1);
    func_006557C0();
    func_00655760();
    v0 = func_0063CEA0();
    v1 = (s32) 0x660000U;
    a0 = 1;
    (*(volatile u16 *) (u32) (v1 + -16024)) = (u16) v0;
    (*(volatile u32 *) (u32) (gp + -20940)) = (u32) a0;
L_00644558:;
    v0 = func_00655660();
    if (v0 == 0) { v0 = s0; goto L_006445F0; }
    v0 = 2;
    (*(volatile u32 *) (u32) (gp + -20940)) = (u32) v0;
L_00644570:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -16024));
    if (v0 <= 0) goto L_006445B8;
    v1 = (s32) ((u32) v0 + 0xffffffffU);
    v0 = (s32) 0x660000U;
    (*(volatile u16 *) (u32) (v0 + -16024)) = (u16) v1;
    v0 = (s32) 0x660000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -6560));
    v0 = 256;
    if (v1 != v0) goto L_006445EC;
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = (s32) 0x660000U;
    (*(volatile u16 *) (u32) (v0 + -16024)) = (u16) 0; goto L_006445EC;
L_006445B8:;
    func_006556F0(a0, a1, a2, a3);
    v0 = 3;
    (*(volatile u32 *) (u32) (gp + -20940)) = (u32) v0; goto L_006445EC;
L_006445CC:;
    v0 = func_00655660();
    if (v0 == 0) goto L_006445EC;
    a0 = (*(volatile s32 *) (u32) (gp + -21812)); func_0021DBB0(a0);
L_006445E4:;
    (*(volatile u32 *) (u32) (gp + -20940)) = (u32) 0;
    s0 = 1;
L_006445EC:;
    v0 = s0;
L_006445F0:;
    return v0;
}
