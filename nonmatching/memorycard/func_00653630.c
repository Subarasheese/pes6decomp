/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002E9230(s32);
s32 func_006238E0(s32, s32, s32, s32);
void func_0063A900(void);

s32 func_00653630(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x660000U;
    v1 = 2;
    s2 = a0;
    s1 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + -6260));
    s0 = (s32) 0x660000U;
    { s32 c_ = a0 == v1; s0 = (s32) ((u32) s0 + 0xffffe780U); if (c_) goto L_006536B8; }
    v0 = 1;
    if (a0 == v0) { a0 = (*(volatile s32 *) (u32) (gp + -20760)); goto L_006536A0; }
    func_0063A900();
    { s32 c_ = s2 != 0; (*(volatile u8 *) (u32) (s0 + 33)) = (u8) 0; if (c_) goto L_00653688; }
    (*(volatile u16 *) (u32) (gp + -20760)) = (u16) 0; goto L_00653690;
L_00653688:;
    v0 = 1;
    (*(volatile u16 *) (u32) (gp + -20760)) = (u16) v0;
L_00653690:;
    v0 = 1;
    (*(volatile u16 *) (u32) (gp + -20758)) = (u16) 0;
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (gp + -20760));
L_006536A0:;
    v0 = func_006238E0(a0, a1, a2, a3);
    if (v0 == 0) { v0 = s1; goto L_006536E8; }
    func_0063A900();
L_006536B8:;
    if (s2 != 0) { a0 = 2; goto L_006536C4; }
    a0 = 1;
L_006536C4:;
    v0 = func_002E9230(a0);
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 != v0) { (*(volatile u8 *) (u32) (s0 + 33)) = (u8) 0; goto L_006536E0; }
    (*(volatile u8 *) (u32) (s0 + 33)) = (u8) v0;
L_006536E0:;
    s1 = 1;
    v0 = s1;
L_006536E8:;
    return v0;
}
