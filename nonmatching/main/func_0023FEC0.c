/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(void);
void Pes6Scene_Set(s32, s32);
void SD_stop(s32);
void func_001FC780(s32);
s32 func_00240C80(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0026DA40(s32);
void func_008CC430(s32, s32, s32, s32);

void func_0023FEC0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile u8 *) (u32) (gp + -22744));
    v0 = 2;
    if (v1 == v0) goto L_0023FF58;
    a0 = 1;
    if (v1 == a0) goto L_0023FF08;
    if (v1 == 0) { v0 = (s32) 0x9a080000U; goto L_0023FEF0; }
    v0 = 0; goto L_0023FF94;
L_0023FEF0:;
    a0 = v0 | 0x400; SD_stop(a0);
    v0 = (*(volatile u8 *) (u32) (gp + -22744));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -22744)) = (u8) v0; goto L_0023FF90;
L_0023FF08:;
    v0 = func_0026DA40(a0);
    if (v0 != 0) goto L_0023FF90;
    v0 = Pes6File_AllChannelsIdle();
    v1 = 1;
    if (v0 != v1) goto L_0023FF90;
    v0 = func_00240C80(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) goto L_0023FF90;
    func_008CC430(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (gp + -22744));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -22744)) = (u8) v0; goto L_0023FF90;
L_0023FF58:;
    a0 = 4; func_001FC780(a0);
    a0 = 5; func_001FC780(a0);
    a0 = 6; func_001FC780(a0);
    a0 = 0;
    a1 = 3; Pes6Scene_Set(a0, a1);
    v0 = (s32) 0x540000U;
    (*(volatile u8 *) (u32) (gp + -22744)) = (u8) 0;
    (*(volatile u16 *) (u32) (v0 + -15616)) = (u16) 0;
    v0 = 1; goto L_0023FF94;
L_0023FF90:;
    v0 = 0;
L_0023FF94:;
    return;
}
