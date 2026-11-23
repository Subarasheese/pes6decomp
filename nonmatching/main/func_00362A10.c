/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0012E160(void);
s32 func_0012EED0(s32);
void func_00362BF0(s32, s32, s32, s32);

void func_00362A10(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    s1 = a0;
    s0 = 0; func_0012E160();
    a0 = 0; v0 = func_0012EED0(a0);
    v1 = 1;
    if (v0 == v1) { s0 = v1; goto L_00362AC8; }
    if (v0 == 0) goto L_00362A5C;
    v1 = -1;
    if (v0 == v1) { v0 = s0; goto L_00362AD4; }
    goto L_00362AD0;
L_00362A5C:;
    v1 = (s32) 0x620000U;
    a3 = 4;
    v1 = (s32) ((u32) v1 + 0xffffec50U);
    a0 = 17;
    a1 = 16;
    a2 = 18;
L_00362A74:;
    if (a3 == a2) { a3 = (s32) ((u32) a3 + 0x1U); goto L_00362A98; }
    if (a3 == a1) goto L_00362A94;
    if (a3 == a0) goto L_00362A94;
    v0 = (s32) ((u32) v1 + (u32) a3);
    (*(volatile u8 *) (u32) v0) = (u8) 0;
L_00362A94:;
    a3 = (s32) ((u32) a3 + 0x1U);
L_00362A98:;
    v0 = a3 < 256;
    if (v0 != 0) goto L_00362A74;
    v0 = (s32) 0x620000U;
    (*(volatile u16 *) (u32) (gp + -21336)) = (u16) 0;
    (*(volatile u8 *) (u32) (v0 + -5022)) = (u8) 0;
    v0 = (s32) 0x620000U;
    (*(volatile u32 *) (u32) (gp + -21332)) = (u32) 0;
    (*(volatile u8 *) (u32) (v0 + -5024)) = (u8) 0;
    v0 = (s32) 0x620000U;
    (*(volatile u8 *) (u32) (v0 + -5023)) = (u8) 0; goto L_00362AD0;
L_00362AC8:;
    a0 = s1; func_00362BF0(a0, a1, a2, a3);
L_00362AD0:;
    v0 = s0;
L_00362AD4:;
    return;
}
