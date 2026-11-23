/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
s32 Pes6PauseEvSet_Start(s32, s32, s32);
void SD_call(s32);
void func_00262BC0(s32, s32);
s32 func_002640B0(void);
void func_0026AED0(s32, s32, s32, s32);

s32 func_00900F60(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -5742));
    if (v0 == 0) goto L_00900F80;
    v0 = 0; goto L_00901008;
L_00900F80:;
    func_0026AED0(a0, a1, a2, a3);
    a0 = 1;
    a1 = 20; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = (s32) 0x3b0000U;
    a0 = (s32) 0x84020000U;
    (*(volatile u32 *) (u32) (v1 + -5680)) = (u32) v0;
    a0 = a0 | 0x8400; SD_call(a0);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -5776));
    v0 = (s32) ((u32) v0 + 0xfffffffbU);
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) goto L_00900FE0;
    v0 = (s32) 0x3b0000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) v1; v0 = func_002640B0();
    a0 = v0;
    a1 = 7; func_00262BC0(a0, a1);
L_00900FE0:;
    a0 = (s32) 0x900000U;
    a1 = (s32) 0x900000U;
    a0 = (s32) ((u32) a0 + 0xe80U);
    a1 = (s32) ((u32) a1 + 0xe40U);
    a2 = 0; v0 = Pes6PauseEvSet_Start(a0, a1, a2);
    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    (*(volatile u32 *) (u32) (v1 + 8)) = (u32) v0;
    v0 = 0;
L_00901008:;
    return v0;
}
