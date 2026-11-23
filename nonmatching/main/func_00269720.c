/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6OptionData_GetBlock304(void);
void SD_call(s32);
void func_00269DF0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0026B580(s32, s32, s32, s32);
s32 func_00308400(void);
s32 func_00C99E60(s32, s32, s32, s32, s32, f32);

s32 func_00269720(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    s1 = a3;
    v0 = func_00308400();
    if (v0 == 0) goto L_00269748;
    v0 = 0; goto L_00269824;
L_00269748:;
    v0 = Pes6OptionData_GetBlock304();
    s0 = v0;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 5));
    v0 = (*(volatile s8 *) (u32) (v0 + -5766));
    if (v0 != v1) { v0 = (s32) 0x6c0000U; goto L_002697A0; }
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 6));
    v0 = (*(volatile s8 *) (u32) (v0 + -5764));
    if (v0 != v1) goto L_0026979C;
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 7));
    v0 = (*(volatile s8 *) (u32) (v0 + -5765));
    if (v0 == v1) goto L_002697DC;
L_0026979C:;
    v0 = (s32) 0x6c0000U;
L_002697A0:;
    a1 = (s32) 0xcb0000U;
    a2 = (s32) 0x270000U;
    a3 = (s32) 0x270000U;
    a4 = (s32) 0x270000U;
    a1 = (s32) ((u32) a1 + 0xffff9640U);
    a0 = v0 | 0x84;
    a2 = (s32) ((u32) a2 + 0xffff9680U);
    a3 = (s32) ((u32) a3 + 0xffff9600U);
    a4 = (s32) ((u32) a4 + 0xffff9590U); v0 = func_00C99E60(a0, a1, a2, a3, a4, f12.f);
    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    (*(volatile u32 *) (u32) (v1 + 204)) = (u32) v0;
    v0 = 0; goto L_00269824;
L_002697DC:;
    v0 = (s32) 0x3b0000U;
    a1 = 2;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v1 = 1;
    v0 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (a0 + 197)) = (u8) a1;
    (*(volatile u8 *) (u32) (v0 + -5763)) = (u8) v1; func_00269DF0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x3b0000U;
    a2 = s1;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a1 = 8; func_0026B580(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    a0 = -1;
    v1 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = 2;
    (*(volatile u8 *) (u32) (v1 + 195)) = (u8) a0;
L_00269824:;
    return v0;
}
