/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s32, s32);
s32 func_001F08B0(s32);
s32 func_0062FD90(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0063AC20(s32);
void func_0063AD20(s32, s32, s32, s32);
s32 func_00645820(s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_0062FBF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v1 = 8;
    v0 = 0;
    s1 = a0;
    a0 = (*(volatile u8 *) (u32) (a0 + 52));
    { s32 c_ = a0 == v1; s0 = a1; if (c_) goto L_0062FCB0; }
    v1 = 10;
    if (a0 == v1) { a1 = 3; goto L_0062FCB4; }
    v1 = 9;
    if (a0 == v1) goto L_0062FCB0;
    v1 = 7;
    if (a0 == v1) { a1 = 2; goto L_0062FCB4; }
    v1 = 1;
    if (a0 == v1) goto L_0062FCA4;
    if (a0 == 0) goto L_0062FCA4;
    v1 = 4;
    if (a0 == v1) { a1 = 4; goto L_0062FCB4; }
    v1 = 3;
    if (a0 == v1) goto L_0062FC98;
    v1 = 2;
    if (a0 == v1) goto L_0062FC98;
    v1 = 5;
    if (a0 == v1) goto L_0062FC98;
    v1 = 58;
    if (a0 == v1) goto L_0062FC98;
    v0 = (s32) 0x650000U;
    v0 = (s32) ((u32) v0 + 0x7898U); goto L_0062FCB4;
L_0062FC98:;
    a1 = 4;
    goto L_0062FCB4;
L_0062FCA4:;
    a1 = 2;
    goto L_0062FCB4;
L_0062FCB0:;
    a1 = 3;
L_0062FCB4:;
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (s0 + 436)); goto L_0062FCD8; }
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffa1f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 436));
L_0062FCD8:;
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a0 = 83; v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 408));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a2 = (*(volatile u8 *) (u32) (s1 + 99));
    a0 = (s32) 0x650000U;
    a1 = (s32) 0x660000U;
    a3 = (*(volatile u8 *) (u32) (s1 + 54));
    a0 = (s32) ((u32) a0 + 0x7920U);
    a1 = (s32) ((u32) a1 + 0xffffacd0U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s0 + 444));
    a1 = (s32) 0x650000U;
    a1 = (s32) ((u32) a1 + 0x7920U); func_0063AD20(a0, a1, a2, a3);
    a0 = s1; v0 = func_0062FD90(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s0 + 448));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 448)); func_0063AC20(a0);
    a2 = (*(volatile u8 *) (u32) (s0 + 596));
    v1 = (s32) 0x650000U;
    v1 = (s32) ((u32) v1 + 0x7818U);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (s32) ((u32) a2 << 1);
    a0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_001D7D60(a0, a1);
    return;
}
