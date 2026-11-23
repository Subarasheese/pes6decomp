/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6OptionData_GetBlock304(void);
void SD_call(s32);
void func_002625F0(s32);
void func_0026B580(s32, s32, s32, s32);
void func_00287640(void);

s32 func_009010E0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v0 = (s32) 0x590000U;
    v1 = 5;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    { s32 c_ = v0 != v1; s0 = a3; if (c_) goto L_0090111C; }
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (*(volatile s32 *) (u32) (v0 + 24)); func_002625F0(a0);
    goto L_0090113C;
L_0090111C:;
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    v1 = (*(volatile s32 *) (u32) (v1 + 24));
    (*(volatile u8 *) (u32) (v0 + 7118)) = (u8) v1;
    s1 = v1 & 0xff; v0 = Pes6OptionData_GetBlock304();
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) s1;
L_0090113C:;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7118)); func_00287640();
    v0 = (s32) 0x3b0000U;
    a2 = s0;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a1 = 6; func_0026B580(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    a1 = -1;
    v1 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (s32) 0x84020000U;
    (*(volatile u8 *) (u32) (v1 + 69)) = (u8) a1;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = 2;
    return v0;
}
