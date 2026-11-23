/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6OptionData_GetBlock304(void);
void SD_call(s32);
void func_00825DF0(s32, s32, s32, s32);
s32 func_008FACB0(void);
void func_00900420(s32, s32, s32, s32);
void func_00C86B10(s32, s32, s32, s32);
void func_00C86B90(s32, s32, s32, s32);
void func_00C86C10(s32, s32, s32, s32);
void func_00C86C90(s32, s32, s32, s32);
void func_00C86D10(s32, s32, s32, s32);
void func_00C86D90(s32, s32, s32, s32);
void func_00C913F0(s32, s32, s32, s32);
void func_00C99850(s32, s32, s32, s32);
void func_00C99AD0(s32, s32, s32, s32);

s32 func_008FFE00(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s0 = a2; v0 = Pes6OptionData_GetBlock304();
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (*(volatile s8 *) (u32) (v0 + 38)); func_00C913F0(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (*(volatile s8 *) (u32) (a1 + 39));
    v0 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (v1 + -5762)) = (u8) a0;
    v1 = (*(volatile s8 *) (u32) (a1 + 40));
    (*(volatile u8 *) (u32) (v0 + -5761)) = (u8) v1;
    v0 = (*(volatile s8 *) (u32) (a1 + 36));
    a0 = (s32) ((u32) v0 + 0x1U); func_00C99850(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (*(volatile s8 *) (u32) (v0 + 37)); func_00C99850(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (*(volatile s8 *) (u32) (v0 + 41)); func_00C86D90(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (*(volatile s8 *) (u32) (v0 + 42)); func_00C86C90(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (*(volatile s8 *) (u32) (v0 + 43)); func_00C86C10(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (*(volatile s8 *) (u32) (v0 + 44)); func_00C86B90(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (*(volatile s8 *) (u32) (v0 + 45)); func_00C86B10(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (*(volatile s8 *) (u32) (v0 + 49)); func_00C86D10(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v1 = 6;
    v0 = (*(volatile s8 *) (u32) (v0 + -5776));
    if (v0 == v1) goto L_008FFEE0;
    goto L_008FFF08;
L_008FFEE0:;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    s1 = (*(volatile s8 *) (u32) (v0 + 46)); v0 = func_008FACB0();
    (*(volatile u32 *) (u32) v0) = (u32) s1;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a1 = (*(volatile s8 *) (u32) (v0 + 47));
    a0 = 0; func_00825DF0(a0, a1, a2, a3);
L_008FFF08:;
    func_00900420(a0, a1, a2, a3);
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (*(volatile s32 *) (u32) (v0 + 336));
    a1 = s0; func_00C99AD0(a0, a1, a2, a3);
    v1 = (s32) 0x3b0000U;
    v0 = 2;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    v1 = (*(volatile s32 *) (u32) (v1 + 336));
    (*(volatile u16 *) (u32) (v1 + 16)) = (u16) 0;
    return v0;
}
