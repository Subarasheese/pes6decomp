/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00268EA0(s64);
void func_00269900(s64);
s64 func_0026AD80(void);
void func_0026AEE0(s64, s64, s64, s64);
void func_002CAFB0(void);
void func_008FAB70(s64, s64, s64, s64);

void func_008FEE40(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0;

    s0 = a0;
    a0 = (s64) ((u64) s0 << 56);
    a0 = a0 >> 56; func_008FAB70(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v1 = (u64) 0 < (u64) s0;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = v1 ^ 0x1;
    a1 = (s32) ((u32) v0 + 0x1cU); func_0026AEE0(a0, a1, a2, a3);
    if (s0 == 0) { ; goto L_008FEEF8; }
    v0 = func_0026AD80();
    v1 = 1;
    if (v0 == v1) goto L_008FEED4;
    v0 = func_0026AD80();
    if (v0 != 0) goto L_008FEEB8;
    v1 = 8;
    v0 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (v0 + -5765)) = (u8) v1;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 10051)); func_00269900(a0);
L_008FEEB8:;
    v0 = (s32) 0x590000U;
    v1 = 12;
    v0 = (*(volatile u8 *) (u32) (v0 + 10051));
    if (v0 != v1) goto L_008FEED4;
    a0 = 2; func_00269900(a0);
L_008FEED4:;
    v0 = (s32) 0x3b0000U;
    v1 = 2;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = 1;
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) v1; func_00268EA0(a0);
    func_002CAFB0();
L_008FEEF8:;
    return;
}
