/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00652BE0(s32, s32);
void func_006533F0(s32);
s32 func_008FF2D0(s32, s32, s32, s32);

void func_00652A90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0;

    a0 = (s32) 0x660000U;
    v0 = (s32) 0x660000U;
    v1 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -6264));
    (*(volatile u8 *) (u32) (v1 + -6192)) = (u8) 0;
    v1 = 2;
    { s32 c_ = v0 != v1; a0 = (s32) ((u32) a0 + 0xffffe780U); if (c_) goto L_00652ACC; }
    a0 = (*(volatile s32 *) (u32) (a0 + 20));
    a1 = 0; func_00652BE0(a0, a1);
    goto L_00652B18;
L_00652ACC:;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    v0 = 5;
    if (v1 != v0) { v0 = 3; goto L_00652AF0; }
    a0 = (*(volatile s32 *) (u32) (a0 + 20));
    a1 = 1; func_00652BE0(a0, a1);
    goto L_00652B18;
L_00652AF0:;
    if (v1 != v0) { v0 = 6; goto L_00652B08; }
    a0 = (*(volatile s32 *) (u32) (a0 + 28)); func_006533F0(a0);
    goto L_00652B18;
L_00652B08:;
    if (v1 != v0) goto L_00652B18;
    a0 = (*(volatile s32 *) (u32) (a0 + 28)); func_006533F0(a0);
L_00652B18:;
    v0 = (s32) 0x660000U;
    v1 = (s32) 0x660000U;
    a3 = (*(volatile u8 *) (u32) (v0 + -6192));
    a5 = (s32) 0x660000U;
    a6 = (*(volatile s32 *) (u32) (v1 + -23432));
    a1 = (s32) 0x660000U;
    a5 = (s32) ((u32) a5 + 0xffffe7b0U);
    a0 = (s32) 0x660000U;
    v0 = (s32) 0x660000U;
    a2 = (s32) ((u32) a3 + 0x1U);
    a4 = (*(volatile s32 *) (u32) (v0 + -23440));
    v1 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (a1 + -6192)) = (u8) a2;
    v0 = (s32) ((u32) a3 << 2);
    v0 = (s32) ((u32) a5 + (u32) v0);
    (*(volatile u32 *) (u32) v0) = (u32) a6;
    a2 = (*(volatile u8 *) (u32) (v1 + -6192));
    v0 = (s32) 0x660000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -23436));
    a3 = (s32) ((u32) a2 + 0x1U);
    v1 = (s32) 0x660000U;
    a2 = (s32) ((u32) a2 << 2);
    (*(volatile u8 *) (u32) (a0 + -6192)) = (u8) a3;
    a0 = (s32) ((u32) a5 + (u32) a2);
    v0 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) a0) = (u32) a4;
    v1 = (*(volatile u8 *) (u32) (v1 + -6192));
    a0 = (s32) ((u32) v1 + 0x1U);
    v1 = (s32) ((u32) v1 << 2);
    (*(volatile u8 *) (u32) (v0 + -6192)) = (u8) a0;
    v0 = (s32) ((u32) a5 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) a1; v0 = func_008FF2D0(a0, a1, a2, a3);
    if (v0 == 0) { a0 = 2; goto L_00652BB4; }
    a0 = 1;
    v1 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (v1 + -6189)) = (u8) a0; goto L_00652BBC;
L_00652BB4:;
    v1 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (v1 + -6189)) = (u8) a0;
L_00652BBC:;
    a0 = 16;
    v1 = (s32) 0x660000U;
    (*(volatile u8 *) (u32) (v1 + -6191)) = (u8) a0;
    return;
}
