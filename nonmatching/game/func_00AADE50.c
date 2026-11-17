/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00930240(s32);
s32 func_00A08020(s32, s32, s32, s32);

void func_00AADE50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e67U);
    v0 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (a0 + 18));
    s0 = a0;
    v1 = (s32) ((u32) v1 + (u32) a1);
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 102)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (v0 + 8800));
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (a0 + 28));
    (*(volatile u32 *) (u32) (a0 + 32)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    a0 = (*(volatile u16 *) (u32) (v0 + 48)); v0 = func_00A08020(a0, a1, a2, a3);
    if (v0 != 0) { a0 = s0; goto L_00AADEB0; }
L_00AADEA0:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u16 *) (u32) (v1 + 8814));
    (*(volatile u16 *) (u32) (s0 + 40)) = (u16) v1; goto L_00AADEC0;
L_00AADEB0:;
    func_00930240(a0);
    goto L_00AADEA0;
L_00AADEC0:;
    return;
}
