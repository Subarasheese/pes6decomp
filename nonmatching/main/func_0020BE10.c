/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00209B10(s32, s32, s32, s32);
s32 func_00209D20(s32, s32, s32, s32, s32);
s32 func_00209D90(s32, s32, s32, s32, s32);
s32 func_0020A460(s32, s32, s32, s32);
s32 func_0020A4B0(s32, s32, s32, s32);

s32 func_0020BE10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v1 = (s32) 0x3d0000U;
    a5 = (s32) 0x530000U;
    v0 = (s32) 0x590000U;
    s0 = (*(volatile u16 *) (u32) (v0 + 7088));
    a4 = (s32) 0x530000U;
    a3 = (s32) 0x530000U;
    a1 = (*(volatile s32 *) (u32) (v1 + 16812));
    a5 = (s32) ((u32) a5 + 0x7a44U);
    a4 = (s32) ((u32) a4 + 0x7a48U);
    v0 = (s32) 0x3d0000U;
    a3 = (s32) ((u32) a3 + 0x7a4cU);
    a0 = (*(volatile s32 *) (u32) (v0 + 16808));
    v1 = (s32) ((u32) a0 << 1);
    v0 = 0xffff;
    a0 = (s32) ((u32) v1 + (u32) a0);
    a6 = (s32) ((u32) a0 << 2);
    v1 = (s32) 0x3d0000U;
    a0 = (*(volatile s32 *) (u32) (v1 + 16816));
    a2 = (s32) ((u32) a5 + (u32) a6);
    (*(volatile u32 *) (u32) a2) = (u32) v0;
    a2 = (s32) ((u32) a3 + (u32) a6);
    v1 = (s32) ((u32) a4 + (u32) a6);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    v1 = (s32) ((u32) a1 << 1);
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    v1 = (s32) ((u32) v1 + (u32) a1);
    a2 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (s32) ((u32) a5 + (u32) a2);
    v1 = (s32) ((u32) v1 << 2);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    a1 = (s32) ((u32) a5 + (u32) v1);
    a0 = (s32) ((u32) a4 + (u32) a2);
    (*(volatile u32 *) (u32) a0) = (u32) 0;
    a0 = (s32) ((u32) a3 + (u32) a2);
    (*(volatile u32 *) (u32) a0) = (u32) 0;
    a0 = (s32) ((u32) a4 + (u32) v1);
    (*(volatile u32 *) (u32) a1) = (u32) v0;
    v1 = (s32) ((u32) a3 + (u32) v1);
    (*(volatile u32 *) (u32) a0) = (u32) 0;
    { s32 c_ = s0 == v0; (*(volatile u32 *) (u32) v1) = (u32) 0; if (c_) goto L_0020BF0C; }
    v0 = (s32) 0x530000U;
    a1 = 2;
    a0 = (*(volatile s32 *) (u32) (v0 + 31296));
    a2 = s0; v0 = func_0020A4B0(a0, a1, a2, a3);
    v0 = (s32) 0x530000U;
    a1 = 2;
    (*(volatile u32 *) (u32) (v0 + 31300)) = (u32) s0;
    a2 = s0;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31304)) = (u32) a1;
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 31296));
    a3 = 0; v0 = func_00209D90(a0, a1, a2, a3, a4);
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + 31308)) = (u32) v0;
L_0020BF0C:;
    v0 = 0xffff;
    if (s0 == v0) { a0 = s0; goto L_0020BF60; }
    v0 = (s32) 0x530000U;
    a1 = 1;
    a0 = (*(volatile s32 *) (u32) (v0 + 31296));
    a2 = s0; v0 = func_0020A4B0(a0, a1, a2, a3);
    v0 = (s32) 0x530000U;
    a1 = 1;
    (*(volatile u32 *) (u32) (v0 + 31324)) = (u32) s0;
    a2 = s0;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31328)) = (u32) a1;
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 31296));
    a3 = 0; v0 = func_00209D90(a0, a1, a2, a3, a4);
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + 31332)) = (u32) v0;
    a0 = s0;
L_0020BF60:;
    v0 = func_00209B10(a0, a1, a2, a3);
    if (v0 == 0) { ; goto L_0020BFB8; }
    v0 = (s32) 0x530000U;
    a1 = 2;
    a0 = (*(volatile s32 *) (u32) (v0 + 31296));
    a2 = 456; v0 = func_0020A460(a0, a1, a2, a3);
    v0 = (s32) 0x530000U;
    a1 = 2;
    (*(volatile u32 *) (u32) (v0 + 31348)) = (u32) s0;
    a2 = 456;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31352)) = (u32) a1;
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 31296));
    a3 = 0; v0 = func_00209D20(a0, a1, a2, a3, a4);
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + 31356)) = (u32) v0;
L_0020BFB8:;
    return v0;
}
