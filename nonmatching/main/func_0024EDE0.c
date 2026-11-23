/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 ADXT_Create(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00154070(s32);
void func_00155A00(void);
void func_00155A10(void);
void func_00251B80(s32);
void func_00251BA0(s32);

void func_0024EDE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x100000U;
    a0 = v0 | 0x40;
    v0 = func_00154070(a0);
    s0 = v0;
    a0 = s0; func_00251B80(a0);
    { s32 c_ = s0 >= 0; v1 = s0 & 0x3f; if (c_) goto L_0024EE18; }
    if (v1 == 0) goto L_0024EE18;
    v1 = (s32) ((u32) v1 + 0xffffffc0U);
L_0024EE18:;
    v0 = 64;
    v0 = (s32) ((u32) v0 - (u32) v1);
    s0 = (s32) ((u32) s0 + (u32) v0);
    a0 = s0; func_00251BA0(a0);
    at = (s32) 0xe0000U;
    at = at | 0x2000;
    v1 = (s32) ((u32) s0 + (u32) at);
    at = (s32) 0xf0000U;
    (*(volatile u32 *) (u32) (gp + -22580)) = (u32) v1;
    at = at | 0x1000;
    v0 = (s32) ((u32) s0 + (u32) at);
    (*(volatile u32 *) (u32) (gp + -22584)) = (u32) v0; func_00155A10();
    a1 = (*(volatile s32 *) (u32) (gp + -22580));
    a0 = 1;
    a2 = 0xe124; v0 = ADXT_Create(a0, a1, a2, a3, a4, a5, a6, a7);
    a1 = (*(volatile s32 *) (u32) (gp + -22584));
    v1 = (s32) 0x580000U;
    a0 = 1;
    (*(volatile u32 *) (u32) (v1 + 13104)) = (u32) v0;
    a2 = 0xe124; v0 = ADXT_Create(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (s32) 0x580000U;
    a1 = (s32) 0x560000U;
    (*(volatile u32 *) (u32) (v1 + 13112)) = (u32) v0;
    a0 = 2;
    v0 = (s32) 0x20000U;
    a1 = (s32) ((u32) a1 + 0x140U);
    a2 = v0 | 0x31e4; v0 = ADXT_Create(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (s32) 0x580000U;
    a1 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v1 + 13108)) = (u32) v0;
    a0 = 2;
    v0 = (s32) 0x20000U;
    a1 = (s32) ((u32) a1 + 0xffffcf40U);
    a2 = v0 | 0x31e4; v0 = ADXT_Create(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (s32) 0x580000U;
    (*(volatile u32 *) (u32) (v1 + 13116)) = (u32) v0; func_00155A00();
    v1 = 1;
    (*(volatile u32 *) (u32) (gp + -22588)) = (u32) v1;
    return;
}
