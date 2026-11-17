/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00333700(s32, s32);

s32 func_00322940(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;

    a3 = a3 & 0xff;
    v1 = (s32) 0x590000U;
    v0 = (s32) ((u32) a3 << 4);
    v1 = (s32) ((u32) v1 + 0x2980U);
    s5 = a1;
    s4 = a2;
    a2 = (s32) ((u32) v0 - (u32) a3);
    a1 = (s32) ((u32) a2 << 3);
    v0 = (s32) ((u32) a3 << 10);
    a1 = (s32) ((u32) a1 - (u32) a2);
    s0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (s32) ((u32) a1 << 8);
    s2 = 0;
    s6 = a3 ^ 0x1;
    s1 = (s32) ((u32) v1 + (u32) v0);
L_003229A0:;
    v1 = (*(volatile u16 *) (u32) (s1 + 70));
    a1 = 0;
    a0 = s0;
L_003229B0:;
    v0 = (*(volatile u16 *) (u32) (a0 + 200));
    if (v0 != v1) goto L_003229D8;
    if (v1 == 0) goto L_003229D8;
    v0 = (s32) ((u32) a1 << 5);
    v1 = 1;
    v0 = (s32) ((u32) s0 + (u32) v0);
    s3 = (s32) ((u32) v0 + 0xc8U); goto L_003229F0;
L_003229D8:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 32;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x20U); if (c_) goto L_003229B0; }
    v1 = 0;
L_003229F0:;
    if (v1 == 0) goto L_00322AF8;
    v1 = (*(volatile s32 *) (u32) (s3 + 28));
    v0 = -128;
    v0 = v1 & v0;
    (*(volatile u32 *) (u32) (s3 + 28)) = (u32) v0;
    v1 = (*(volatile u16 *) (u32) (s5 + 62));
    v0 = (*(volatile u16 *) (u32) s3);
    if (v1 != v0) goto L_00322A28;
    v0 = (*(volatile s32 *) (u32) (s3 + 28));
    v0 = v0 | 0x1;
    (*(volatile u32 *) (u32) (s3 + 28)) = (u32) v0;
L_00322A28:;
    v1 = (*(volatile u16 *) (u32) (s5 + 64));
    v0 = (*(volatile u16 *) (u32) s3);
    if (v1 != v0) goto L_00322A48;
    v0 = (*(volatile s32 *) (u32) (s3 + 28));
    v0 = v0 | 0x2;
    (*(volatile u32 *) (u32) (s3 + 28)) = (u32) v0;
L_00322A48:;
    v1 = (*(volatile u16 *) (u32) (s5 + 66));
    v0 = (*(volatile u16 *) (u32) s3);
    if (v1 != v0) goto L_00322A78;
    a0 = s5;
    a1 = s6; v0 = func_00333700(a0, a1);
    if (v0 != 0) goto L_00322A78;
    v0 = (*(volatile s32 *) (u32) (s3 + 28));
    v0 = v0 | 0x4;
    (*(volatile u32 *) (u32) (s3 + 28)) = (u32) v0;
L_00322A78:;
    v1 = (*(volatile u16 *) (u32) (s4 + 48));
    v0 = (*(volatile u16 *) (u32) s3);
    if (v1 != v0) goto L_00322A98;
    v0 = (*(volatile s32 *) (u32) (s3 + 28));
    v0 = v0 | 0x8;
    (*(volatile u32 *) (u32) (s3 + 28)) = (u32) v0;
L_00322A98:;
    v1 = (*(volatile u16 *) (u32) (s4 + 50));
    v0 = (*(volatile u16 *) (u32) s3);
    if (v1 != v0) goto L_00322AB8;
    v0 = (*(volatile s32 *) (u32) (s3 + 28));
    v0 = v0 | 0x10;
    (*(volatile u32 *) (u32) (s3 + 28)) = (u32) v0;
L_00322AB8:;
    v1 = (*(volatile u16 *) (u32) (s4 + 52));
    v0 = (*(volatile u16 *) (u32) s3);
    if (v1 != v0) goto L_00322AD8;
    v0 = (*(volatile s32 *) (u32) (s3 + 28));
    v0 = v0 | 0x20;
    (*(volatile u32 *) (u32) (s3 + 28)) = (u32) v0;
L_00322AD8:;
    v1 = (*(volatile u16 *) (u32) (s4 + 54));
    v0 = (*(volatile u16 *) (u32) s3);
    if (v1 != v0) goto L_00322AF8;
    v0 = (*(volatile s32 *) (u32) (s3 + 28));
    v0 = v0 | 0x40;
    (*(volatile u32 *) (u32) (s3 + 28)) = (u32) v0;
L_00322AF8:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 32;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x348U); if (c_) goto L_003229A0; }
    v0 = 1;
    return v0;
}
