/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B6A30(s32, s32, s32, s32);
void func_001B9C60(s32, s32, s32, s32);
void func_0023F510(s32, s32, s32, s32);
void func_002405A0(s32, s32, s32, s32);
void func_002DC1D0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002DF960(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_008B32E0(s32, s32, s32, s32);

s32 func_009386B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    s3 = a0;
    s0 = (s32) 0x540000U;
    { s32 c_ = s3 != 0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_009386E0; }
    a0 = 20437; goto L_009386F8;
L_009386E0:;
    v0 = (s32) 0x540000U;
    v1 = 2;
    v0 = (*(volatile s8 *) (u32) (v0 + -15607));
    if (v0 != v1) { a0 = 20437; goto L_009386F8; }
    a0 = 20427;
L_009386F8:;
    v0 = func_001B6A30(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { v0 = 0; goto L_0093877C; }
    s2 = 0;
    s1 = 0;
L_00938714:;
    v0 = (*(volatile s32 *) (u32) (gp + -18588));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B32E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18588));
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 11;
    a0 = (s32) ((u32) a0 + (u32) s1);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00938714; }
    a0 = (s32) ((u32) gp + 0xffffb764U); func_002405A0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x14U); func_002405A0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18592)); func_001B9C60(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18596)); func_002DC1D0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (gp + -18600)); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    if (s3 != 0) { v0 = 1; goto L_0093877C; }
    a0 = 2; func_0023F510(a0, a1, a2, a3);
    v0 = 1;
L_0093877C:;
    return v0;
}
