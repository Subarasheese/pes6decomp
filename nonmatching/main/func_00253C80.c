/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002537A0(void);
void func_00254B10(s32);

void func_00253C80(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    a0 = (s32) 0x580000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0x43f0U);
    v1 = -1;
L_00253C98:;
    (*(volatile u32 *) (u32) (a0 + 68)) = (u32) v1;
    a1 = (s32) ((u32) a1 + 0x6U);
    (*(volatile u32 *) (u32) a0) = (u32) v1;
    v0 = (u64) a1 < (u64) (s64) 36;
    (*(volatile u32 *) (u32) (a0 + 76)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 72)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 160)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 92)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 168)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 164)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 252)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 184)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 260)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 256)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 344)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 276)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 352)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 348)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 436)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 368)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 444)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 440)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 528)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 460)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 536)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 532)) = (u32) 0;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x228U); if (c_) goto L_00253C98; }
    v0 = (s32) 0x590000U;
    a0 = 0;
    (*(volatile u32 *) (u32) (v0 + -29296)) = (u32) 0;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (gp + -22480)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + -29292)) = (u32) 0;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (gp + -22484)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + -29288)) = (u32) 0;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -29284)) = (u32) 0;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -29280)) = (u32) 0;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -29276)) = (u32) 0;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -29272)) = (u32) 0;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -29268)) = (u32) 0;
    v0 = 6;
    (*(volatile u32 *) (u32) (gp + -22476)) = (u32) v0; func_00254B10(a0);
    a0 = 1; func_00254B10(a0);
    func_002537A0();
    return;
}
