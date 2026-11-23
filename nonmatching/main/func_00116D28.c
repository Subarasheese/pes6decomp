/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00105160(void);
s32 func_001064A0(s32, s32);

s32 func_00116D28(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x110000U;
    v1 = (s32) 0x3f0000U;
    a1 = (s32) 0x3f0000U;
    a2 = (s32) 0x3c0000U;
    v0 = (s32) ((u32) v0 + 0x6cc0U);
    v1 = (s32) ((u32) v1 + 0x6f90U);
    a1 = (s32) ((u32) a1 + 0xfffff370U);
    a2 = (s32) ((u32) a2 + 0x4540U);
    a3 = 2048;
    a4 = 104;
    a0 = sp;
    (*(volatile u32 *) (u32) (sp + 4)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 8)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 12)) = (u32) a3;
    (*(volatile u32 *) (u32) (sp + 20)) = (u32) a4;
    (*(volatile u32 *) (u32) (sp + 16)) = (u32) a1;
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) a2; v0 = func_00105160();
    s0 = v0;
    { s32 c_ = s0 >= 0; a0 = s0; if (c_) goto L_00116D90; }
    v0 = -1; goto L_00116D9C;
L_00116D90:;
    a1 = 0; v0 = func_001064A0(a0, a1);
    v0 = s0;
L_00116D9C:;
    return v0;
}
