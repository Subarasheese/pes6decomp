/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 DisableDmac(s32);
void DisableIntc(s32);
s32 EnableIntc(s32);
s32 RemoveDmacHandler(void);
s32 RemoveIntcHandler(void);
void func_00105170(void);
void func_001051B0(void);
s32 func_00105F78(s32);
void func_00134490(void);
void func_00136A80(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00136E60(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00138610(s32, s32, s32, s32);
void func_00138A40(void);

void func_00135370(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    at = (s32) 0x450000U;
    at = at | 0x9540;
    v0 = (*(volatile s32 *) (u32) (gp + -23504));
    a0 = (s32) ((u32) v0 + (u32) at); func_00134490();
    v0 = (*(volatile s32 *) (u32) (gp + -23504));
    at = (s32) 0x530000U;
    at = at | 0xce8c;
    a0 = (s32) ((u32) v0 + (u32) at); func_00138A40();
    v1 = (*(volatile s32 *) (u32) (gp + -23504));
    v0 = (s32) 0x540000U;
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + -12928)); func_001051B0();
    v1 = (*(volatile s32 *) (u32) (gp + -23504));
    v0 = (s32) 0x540000U;
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + -12928)); func_00105170();
    v1 = (*(volatile s32 *) (u32) (gp + -23504));
    v0 = (s32) 0x540000U;
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + -12924)); func_001051B0();
    v1 = (*(volatile s32 *) (u32) (gp + -23504));
    v0 = (s32) 0x540000U;
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + -12924)); func_00105170();
    a0 = 2; v0 = DisableDmac(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -23504));
    v0 = (s32) 0x540000U;
    v0 = (s32) ((u32) v1 + (u32) v0);
    a1 = (*(volatile s32 *) (u32) (v0 + -12760));
    a0 = 2; v0 = RemoveDmacHandler();
    a0 = (*(volatile s32 *) (u32) (gp + -23504));
    v1 = (s32) 0x540000U;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) (v1 + -12064));
    if (v1 != 0) goto L_00135438;
    if (v0 == 0) goto L_00135438;
    a0 = 2; v0 = func_00105F78(a0);
L_00135438:;
    a0 = 2; DisableIntc(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -23504));
    v0 = (s32) 0x540000U;
    v0 = (s32) ((u32) v1 + (u32) v0);
    a1 = (*(volatile s32 *) (u32) (v0 + -12756));
    a0 = 2; v0 = RemoveIntcHandler();
    a0 = (*(volatile s32 *) (u32) (gp + -23504));
    v1 = (s32) 0x540000U;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) (v1 + -12060));
    if (v1 != 0) goto L_00135480;
    if (v0 == 0) goto L_00135480;
    a0 = 2; v0 = EnableIntc(a0);
L_00135480:;
    v0 = (*(volatile s32 *) (u32) (gp + -23504));
    at = (s32) 0x530000U;
    at = at | 0xcdc0;
    a0 = (s32) ((u32) v0 + (u32) at); func_00138610(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -23504));
    at = (s32) 0x530000U;
    at = at | 0xce30;
    a0 = (s32) ((u32) v0 + (u32) at); func_00136A80(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (gp + -23504));
    at = (s32) 0x530000U;
    at = at | 0xcd88;
    a0 = (s32) ((u32) v0 + (u32) at); func_00136E60(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (gp + -23476));
    v1 = (s32) 0x10010000U;
    (*(volatile u32 *) (u32) (v1 + -8192)) = (u32) a0;
    return;
}
