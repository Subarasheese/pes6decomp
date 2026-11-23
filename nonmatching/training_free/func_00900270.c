/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6OptionData_GetBlock304(void);
void SD_call(s32);
void func_0026B580(s32, s32, s32, s32);
s32 func_00308400(void);

s32 func_00900270(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a3; v0 = func_00308400();
    if (v0 == 0) goto L_00900294;
    v0 = 0; goto L_00900308;
L_00900294:;
    v0 = (s32) 0x3b0000U;
    a2 = s0;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a1 = 6; func_0026B580(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    a1 = -1;
    v1 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (s32) 0x84020000U;
    (*(volatile u8 *) (u32) (v1 + 329)) = (u8) a1;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -5776));
    at = (u64) v0 < (u64) (s64) 11;
    if (at == 0) { v0 = 2; goto L_00900308; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffe1e0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x9002f4U) goto L_009002F4; }
L_009002F4:;
    v0 = (s32) 0x590000U;
    s0 = (*(volatile u16 *) (u32) (v0 + 7662)); v0 = Pes6OptionData_GetBlock304();
    (*(volatile u16 *) (u32) (v0 + 8)) = (u16) s0;
    v0 = 2;
L_00900308:;
    return v0;
}
