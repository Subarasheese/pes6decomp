/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001664A0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00166600(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00166680(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00166740(s32, s32, s32, s32, s32, s32, s32, s32);

void func_00168170(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v0 = (s32) 0x380000U;
    v1 = (s32) 0x380000U;
    (*(volatile u32 *) (u32) (v0 + -21352)) = (u32) a0;
    s1 = (s32) ((u32) v1 + 0xffffaca8U);
    s2 = 15;
    s3 = 1;
L_001681A0:;
    v0 = (*(volatile s8 *) (u32) s1);
    if (v0 != s3) { s2 = (s32) ((u32) s2 + 0xffffffffU); goto L_00168204; }
    v0 = (*(volatile s8 *) (u32) (s1 + 3));
    { s32 c_ = v0 <= 0; s0 = 0; if (c_) goto L_001681EC; }
    a1 = s0;
L_001681C0:;
    a0 = s1; v0 = func_00166600(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s1;
    a1 = s0;
    s0 = (s32) ((u32) s0 + 0x1U);
    a2 = v0; func_001664A0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s8 *) (u32) (s1 + 3));
    v0 = s0 < v0;
    { s32 c_ = v0 != 0; a1 = s0; if (c_) goto L_001681C0; }
L_001681EC:;
    a0 = s1; v0 = func_00166740(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s1;
    a1 = v0; func_00166680(a0, a1, a2, a3, a4, a5, a6, a7);
    s2 = (s32) ((u32) s2 + 0xffffffffU);
L_00168204:;
    { s32 c_ = s2 >= 0; s1 = (s32) ((u32) s1 + 0xc8U); if (c_) goto L_001681A0; }
    return;
}
