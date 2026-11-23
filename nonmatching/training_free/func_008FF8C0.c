/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00825DF0(s32, s32, s32, s32);
s32 func_008FACB0(void);
void func_00C86B10(s32, s32, s32, s32);
void func_00C86B90(s32, s32, s32, s32);
void func_00C86C10(s32, s32, s32, s32);
void func_00C86C90(s32, s32, s32, s32);
void func_00C86D10(s32, s32, s32, s32);
void func_00C86D90(s32, s32, s32, s32);

void func_008FF8C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    s0 = a0;
    a0 = 2;
    a1 = (*(volatile s32 *) (u32) (v1 + 28));
    { s32 c_ = a1 == a0; a2 = (*(volatile s32 *) (u32) (v1 + 24)); if (c_) goto L_008FF90C; }
    v1 = 1;
    if (a1 == v1) { v1 = 6; goto L_008FF8FC; }
    v1 = (s32) ((u32) a2 + 0xfffffffdU); goto L_008FF920;
L_008FF8FC:;
    if (a2 == v1) { a2 = 11; goto L_008FF91C; }
    goto L_008FF91C;
L_008FF90C:;
    v1 = a2 < 4;
    if (v1 != 0) goto L_008FF91C;
    a2 = (s32) ((u32) a2 + 0x5U);
L_008FF91C:;
    v1 = (s32) ((u32) a2 + 0xfffffffdU);
L_008FF920:;
    at = (u64) v1 < (u64) (s64) 9;
    if (at == 0) { ; goto L_008FF9C8; }
    a0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffe180U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x8ff948U) goto L_008FF948; if (t_ == 0x8ff958U) goto L_008FF958; if (t_ == 0x8ff968U) goto L_008FF968; if (t_ == 0x8ff978U) goto L_008FF978; if (t_ == 0x8ff988U) goto L_008FF988; if (t_ == 0x8ff998U) goto L_008FF998; if (t_ == 0x8ff9a8U) goto L_008FF9A8; if (t_ == 0x8ff9b8U) goto L_008FF9B8; }
L_008FF948:;
    a0 = s0; func_00C86D90(a0, a1, a2, a3);
    goto L_008FF9C4;
L_008FF958:;
    a0 = s0; func_00C86C90(a0, a1, a2, a3);
    goto L_008FF9C4;
L_008FF968:;
    a0 = s0; func_00C86D10(a0, a1, a2, a3);
    goto L_008FF9C4;
L_008FF978:;
    a0 = s0; func_00C86C10(a0, a1, a2, a3);
    goto L_008FF9C4;
L_008FF988:;
    a0 = s0; func_00C86B90(a0, a1, a2, a3);
    goto L_008FF9C4;
L_008FF998:;
    a0 = s0; func_00C86B10(a0, a1, a2, a3);
    goto L_008FF9C4;
L_008FF9A8:;
    v0 = func_008FACB0();
    (*(volatile u32 *) (u32) v0) = (u32) s0; goto L_008FF9C4;
L_008FF9B8:;
    a1 = s0;
    a0 = 0; func_00825DF0(a0, a1, a2, a3);
L_008FF9C4:;
L_008FF9C8:;
    return;
}
