/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
s32 func_0063CEA0(void);
void func_0064E3C0(s32);
s32 func_00655660(void);
void func_006556F0(s32, s32, s32, s32);
void func_00655760(void);
void func_006557C0(void);
void func_00655C80(void);
void func_00655E80(s32, s32);
void func_00656020(s32, s32);

s32 func_00638B40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    s1 = a0;
    a0 = (*(volatile u8 *) (u32) (gp + -21840));
    s0 = 0; func_0064E3C0(a0);
    v1 = (*(volatile u8 *) (u32) (gp + -20988));
    v0 = 4;
    if (v1 == v0) { (*(volatile u8 *) (u32) (gp + -20988)) = (u8) 0; goto L_00638CF8; }
    v0 = 3;
    if (v1 == v0) goto L_00638CE4;
    v0 = 2;
    if (v1 == v0) goto L_00638C94;
    v0 = 1;
    if (v1 == v0) goto L_00638C6C;
    v0 = (s32) ((u32) s1 + 0xfffffffbU);
    at = (u64) v0 < (u64) (s64) 4;
    if (at == 0) { v0 = 2; goto L_00638BAC; }
    v0 = 1; goto L_00638D00;
L_00638BAC:;
    if (s1 != v0) goto L_00638C0C;
    a0 = (s32) 0x660000U;
    a4 = 0;
    a2 = 0;
    v1 = 4;
    a0 = (s32) ((u32) a0 + 0xffffd0c0U);
L_00638BC8:;
    a3 = 0;
    a1 = (s32) ((u32) a0 + (u32) a2);
L_00638BD0:;
    v0 = (*(volatile u8 *) (u32) (a1 + 15));
    if (v0 != v1) { a3 = (s32) ((u32) a3 + 0x1U); goto L_00638BE4; }
    v0 = 1; goto L_00638C04;
L_00638BE4:;
    v0 = a3 < 4;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x1U); if (c_) goto L_00638BD0; }
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < 2;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_00638BC8; }
    v0 = 0;
L_00638C04:;
    if (v0 != 0) goto L_00638C1C;
L_00638C0C:;
    func_006556F0(a0, a1, a2, a3);
    s0 = 1; goto L_00638CFC;
L_00638C1C:;
    func_00655C80();
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -23400));
    a1 = 0; func_00655E80(a0, a1);
    a0 = (s32) ((u32) gp + 0xffff83f4U);
    a1 = 1; func_00656020(a0, a1);
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -23396));
    a1 = 2; func_00655E80(a0, a1);
    func_006557C0();
    func_00655760();
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -20988)) = (u8) v0; goto L_00638CFC;
L_00638C6C:;
    v0 = func_00655660();
    if (v0 == 0) { v0 = s0; goto L_00638D00; }
    v0 = func_0063CEA0();
    v1 = (s32) ((u32) v0 << 2);
    v0 = 2;
    (*(volatile u8 *) (u32) (gp + -20992)) = (u8) v1;
    (*(volatile u8 *) (u32) (gp + -20988)) = (u8) v0;
L_00638C94:;
    v0 = (s32) 0x660000U;
    v1 = 256;
    v0 = (*(volatile s32 *) (u32) (v0 + -6560));
    if (v0 != v1) { v0 = (*(volatile u8 *) (u32) (gp + -20992)); goto L_00638CBC; }
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    (*(volatile u8 *) (u32) (gp + -20992)) = (u8) 0;
    v0 = (*(volatile u8 *) (u32) (gp + -20992));
L_00638CBC:;
    if (v0 == 0) goto L_00638CD0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u8 *) (u32) (gp + -20992)) = (u8) v0; goto L_00638CFC;
L_00638CD0:;
    func_006556F0(a0, a1, a2, a3);
    v0 = 3;
    (*(volatile u8 *) (u32) (gp + -20988)) = (u8) v0; goto L_00638CFC;
L_00638CE4:;
    v0 = func_00655660();
    if (v0 == 0) goto L_00638CFC;
    (*(volatile u8 *) (u32) (gp + -20988)) = (u8) 0;
L_00638CF8:;
    s0 = 1;
L_00638CFC:;
    v0 = s0;
L_00638D00:;
    return v0;
}
