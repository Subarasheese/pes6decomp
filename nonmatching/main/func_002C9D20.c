/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00121430(s32, s32);
void strcpy(s32, s32);

void func_002C9D20(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    at = a1 < 22;
    s2 = a0;
    s1 = a2;
    a2 = (*(volatile u8 *) (u32) (gp + -32128));
    s0 = a3;
    v1 = (*(volatile u8 *) (u32) (gp + -32127));
    (*(volatile u8 *) (u32) (sp + 76)) = (u8) a2;
    { s32 c_ = at == 0; (*(volatile u8 *) (u32) (sp + 77)) = (u8) v1; if (c_) goto L_002C9DF8; }
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffc6f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0); strcpy(a0, a1);
    v0 = s1 & 0xff;
    a0 = s2;
    v0 = (s32) ((u32) v0 + 0x31U);
    a1 = (s32) ((u32) sp + 0x4cU);
    (*(volatile u8 *) (u32) (sp + 76)) = (u8) v0; func_00121430(a0, a1);
    a0 = s0 & 0xff;
    v1 = 3;
    if (a0 == v1) goto L_002C9DE8;
    v1 = 2;
    if (a0 == v1) goto L_002C9DD0;
    v1 = 1;
    if (a0 == v1) goto L_002C9DB8;
    goto L_002C9DFC;
L_002C9DB8:;
    a1 = (s32) 0x3e0000U;
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0xffffa728U); func_00121430(a0, a1);
    goto L_002C9DF8;
L_002C9DD0:;
    a1 = (s32) 0x3e0000U;
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0xffffa730U); func_00121430(a0, a1);
    goto L_002C9DF8;
L_002C9DE8:;
    a1 = (s32) 0x3e0000U;
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0xffffa738U); func_00121430(a0, a1);
L_002C9DF8:;
L_002C9DFC:;
    return;
}
