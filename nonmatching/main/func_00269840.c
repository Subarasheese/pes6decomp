/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6OptionData_GetBlock304(void);
void SD_call(s32);
void func_0026B580(s32, s32, s32, s32);
s32 func_00308400(void);

s32 func_00269840(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a3;
    v0 = func_00308400();
    if (v0 == 0) goto L_00269868;
    v0 = 0; goto L_002698E8;
L_00269868:;
    v0 = (s32) 0x3b0000U;
    s0 = (*(volatile s8 *) (u32) (v0 + -5766)); v0 = Pes6OptionData_GetBlock304();
    v1 = (s32) 0x3b0000U;
    a4 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (v1 + -5766)) = (u8) s0;
    a0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (v0 + 5)) = (u8) s0;
    a1 = (*(volatile s8 *) (u32) (v1 + -5764));
    a6 = 1;
    a3 = (s32) 0x3b0000U;
    a5 = 2;
    a2 = s1;
    (*(volatile u8 *) (u32) (v0 + 6)) = (u8) a1;
    v1 = (s32) 0x3b0000U;
    a4 = (*(volatile s8 *) (u32) (a4 + -5765));
    (*(volatile u8 *) (u32) (v0 + 7)) = (u8) a4;
    v0 = (*(volatile s32 *) (u32) (a0 + -5680));
    (*(volatile u8 *) (u32) (a3 + -5763)) = (u8) a6;
    (*(volatile u8 *) (u32) (v0 + 197)) = (u8) a5;
    a0 = (*(volatile s32 *) (u32) (v1 + -5680));
    a1 = 8; func_0026B580(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    a1 = -1;
    v1 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (s32) 0x84020000U;
    (*(volatile u8 *) (u32) (v1 + 195)) = (u8) a1;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = 2;
L_002698E8:;
    return v0;
}
