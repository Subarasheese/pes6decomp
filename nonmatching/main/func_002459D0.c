/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_GetUnavailableFlag(void);
void SD_call(s64);
void func_008BA360(s64, s64, s64, s64);
void func_008BA6C0(s64, s64, s64, s64);
void func_008BAC70(s64, s64, s64, s64);
void func_008BB210(s64, s64, s64, s64);
void func_008BB690(s64, s64, s64, s64);
s64 func_008BB9C0(s64, s64, s64, s64);

s64 func_002459D0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;

    s0 = 0; v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) goto L_00245A0C;
    v1 = (*(volatile s8 *) (u32) (gp + -22676));
    v0 = 3;
    if (v1 == v0) goto L_00245A14;
    func_008BA360(a0, a1, a2, a3);
    goto L_00245A14;
L_00245A0C:;
    func_008BA360(a0, a1, a2, a3);
L_00245A14:;
    v0 = (s32) 0x510000U;
    v1 = 15;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 == v1) { v1 = (*(volatile s8 *) (u32) (gp + -22676)); goto L_00245A6C; }
    a0 = (*(volatile s8 *) (u32) (gp + -22668));
    v1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffc270U);
    v0 = 4;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 != v0) goto L_00245A68;
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    func_008BA6C0(a0, a1, a2, a3);
    v0 = 11; goto L_00245AE4;
L_00245A68:;
    v1 = (*(volatile s8 *) (u32) (gp + -22676));
L_00245A6C:;
    v0 = 3;
    if (v1 == v0) goto L_00245AD4;
    v0 = 2;
    if (v1 == v0) goto L_00245AC4;
    v0 = 1;
    if (v1 == v0) goto L_00245AB4;
    if (v1 == 0) goto L_00245AA0;
    v0 = (s64) ((u64) s0 << 56); goto L_00245AE0;
L_00245AA0:;
    v0 = func_008BB9C0(a0, a1, a2, a3);
    s0 = (s64) ((u64) v0 << 56);
    s0 = s0 >> 56; goto L_00245ADC;
L_00245AB4:;
    func_008BB690(a0, a1, a2, a3);
    goto L_00245ADC;
L_00245AC4:;
    func_008BB210(a0, a1, a2, a3);
    goto L_00245ADC;
L_00245AD4:;
    func_008BAC70(a0, a1, a2, a3);
L_00245ADC:;
    v0 = (s64) ((u64) s0 << 56);
L_00245AE0:;
    v0 = v0 >> 56;
L_00245AE4:;
    return v0;
}
