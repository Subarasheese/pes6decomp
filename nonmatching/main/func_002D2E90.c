/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_GetUnavailableFlag(void);
s32 func_001A1190(s32);
s32 func_002631B0(void);
s32 func_002D2530(s32, s32, s32);
s32 func_002D26E0(s32, s32, s32);
s32 func_002D2C20(s32);

s32 func_002D2E90(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;

    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 != 0) goto L_002D2EB0;
    a0 = 0; v0 = func_001A1190(a0);
L_002D2EB0:;
    v1 = (s32) 0x590000U;
    a0 = 10;
    a1 = (*(volatile u8 *) (u32) (v1 + 7177));
    if (a1 == a0) goto L_002D2F70;
    v1 = 14;
    if (a1 == v1) goto L_002D2F60;
    v1 = 4;
    if (a1 == v1) goto L_002D2F60;
    v1 = 2;
    if (a1 == v1) goto L_002D2F60;
    v1 = 1;
    if (a1 == v1) goto L_002D2F60;
    v1 = 5;
    if (a1 == v1) goto L_002D2F2C;
    v1 = 7;
    if (a1 == v1) goto L_002D2F1C;
    if (a1 == 0) goto L_002D2F1C;
    goto L_002D2F7C;
L_002D2F1C:;
    v0 = func_002D2C20(a0);
    goto L_002D2F78;
L_002D2F2C:;
    v0 = func_002631B0();
    v1 = 1;
    if (v0 == v1) goto L_002D2F78;
    if (v0 == 0) goto L_002D2F50;
    goto L_002D2F78;
L_002D2F50:;
    v0 = func_002D2C20(a0);
    goto L_002D2F78;
L_002D2F60:;
    v0 = func_002D26E0(a0, a1, a2);
    goto L_002D2F78;
L_002D2F70:;
    v0 = func_002D2530(a0, a1, a2);
L_002D2F78:;
L_002D2F7C:;
    return v0;
}
