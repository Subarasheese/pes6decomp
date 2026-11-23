/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008B9410(void);

s32 func_008D8F90(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v1 = (s32) 0x8f0000U;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0x5880U);
    s0 = (s32) ((u32) v1 + (u32) a0);
    v0 = 1;
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = (s32) ((u32) v0 << (a1 & 31));
    v0 = 9;
    v1 = v1 | a0;
    { s32 c_ = a1 == v0; (*(volatile u32 *) (u32) s0) = (u32) v1; if (c_) goto L_008D9060; }
    v0 = 10;
    if (a1 == v0) goto L_008D903C;
    v0 = 19;
    if (a1 == v0) { v0 = (*(volatile s32 *) (u32) s0); goto L_008D9030; }
    v0 = 18;
    if (a1 == v0) { v0 = (*(volatile s32 *) (u32) s0); goto L_008D9024; }
    v0 = 17;
    if (a1 == v0) { v0 = (*(volatile s32 *) (u32) s0); goto L_008D9018; }
    v0 = 16;
    if (a1 == v0) { v0 = (*(volatile s32 *) (u32) s0); goto L_008D900C; }
    goto L_008D908C;
L_008D900C:;
    v0 = v0 | 0x5;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_008D9088;
L_008D9018:;
    v0 = v0 | 0x9;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_008D9088;
L_008D9024:;
    v0 = v0 | 0x6;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_008D9088;
L_008D9030:;
    v0 = v0 | 0xa;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_008D9088;
L_008D903C:;
    v0 = func_008B9410();
    if (v0 == 0) goto L_008D9088;
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = -1025;
    v0 = v1 & v0;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_008D9088;
L_008D9060:;
    v0 = func_008B9410();
    if (v0 == 0) goto L_008D9088;
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = -513;
    v0 = v1 & v0;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    v0 = v0 | 0x400;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
L_008D9088:;
L_008D908C:;
    v0 = 0;
    return v0;
}
