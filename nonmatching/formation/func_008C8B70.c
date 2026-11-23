/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_008C8610(s32, s32, s32, s32);
s32 func_008C8980(s32, s32, s32, s32);
void func_008C8D20(s32);
void func_008D8F10(s32, s32);
void func_008E2A40(s32, s32, s32, s32);

s32 func_008C8B70(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v0 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = v0 != 0; s0 = a0; if (c_) goto L_008C8B90; }
    v0 = 0; goto L_008C8C58;
L_008C8B90:;
    v1 = (*(volatile u8 *) (u32) (s0 + 15));
    v0 = 4;
    if (v1 == v0) { a0 = s0; goto L_008C8C40; }
    v0 = 3;
    if (v1 == v0) { a0 = (s32) ((u32) s0 + 0x100U); goto L_008C8C2C; }
    v0 = 2;
    if (v1 == v0) goto L_008C8C0C;
    if (v1 == 0) { a0 = s0; goto L_008C8BF0; }
    v0 = 1;
    if (v1 == v0) goto L_008C8BD4;
    a0 = (*(volatile u8 *) (u32) (s0 + 4)); goto L_008C8C4C;
L_008C8BD4:;
    v0 = func_008C8610(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (s0 + 15)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 15));
    if (v0 != 0) goto L_008C8C48;
    a0 = s0;
L_008C8BF0:;
    v0 = func_008C8980(a0, a1, a2, a3);
    if (v0 == 0) goto L_008C8C48;
    v0 = 2;
    (*(volatile u8 *) (u32) (s0 + 15)) = (u8) v0; goto L_008C8C48;
L_008C8C0C:;
    v0 = func_008C8610(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 3;
    if (v1 != v0) goto L_008C8C48;
    (*(volatile u8 *) (u32) (s0 + 15)) = (u8) v0;
    a0 = (s32) ((u32) s0 + 0x100U);
L_008C8C2C:;
    func_008E2A40(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x140U); func_008E2A40(a0, a1, a2, a3);
    a0 = s0;
L_008C8C40:;
    func_008C8D20(a0);
L_008C8C48:;
    a0 = (*(volatile u8 *) (u32) (s0 + 4));
L_008C8C4C:;
    a1 = 0; func_008D8F10(a0, a1);
    v0 = 1;
L_008C8C58:;
    return v0;
}
