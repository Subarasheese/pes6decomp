/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00292440(s64, s64);
s64 func_002928B0(s64);

s64 func_00291FF0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s3 = a1;
    s2 = a2;
    s1 = a3;
    s0 = a0; v0 = func_00292440(a0, a1);
    if (v0 == 0) { v0 = 0; goto L_002922B4; }
    v0 = (s32) 0x5a0000U;
    v0 = (s32) ((u32) v0 + 0x2330U);
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) v0); goto L_0029203C; }
    v1 = 0;
L_0029203C:;
    v0 = 2;
    if (v1 != v0) goto L_00292228;
    v0 = (s32) 0x5a0000U;
    v0 = (s32) ((u32) v0 + 0x2330U);
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) v0); goto L_0029205C; }
    v1 = 0;
L_0029205C:;
    v0 = 2;
    if (v1 != v0) { v0 = 0; goto L_00292070; }
    v0 = (s32) 0x5a0000U;
    v0 = (s32) ((u32) v0 + 0x2336U);
L_00292070:;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) v0); goto L_0029207C; }
    v0 = 0;
L_0029207C:;
    if (v0 == 0) goto L_00292104;
    v0 = (s32) 0x5a0000U;
    v0 = (s32) ((u32) v0 + 0x2330U);
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) v0); goto L_00292098; }
    v1 = 0;
L_00292098:;
    v0 = 2;
    if (v1 != v0) { v0 = 0; goto L_002920AC; }
    v0 = (s32) 0x5a0000U;
    v0 = (s32) ((u32) v0 + 0x2336U);
L_002920AC:;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) v0); goto L_002920B8; }
    v0 = 0;
L_002920B8:;
    if (v0 != 0) goto L_002920C8;
    v0 = 0; goto L_002920F4;
L_002920C8:;
    v0 = (s32) 0x5a0000U;
    v0 = (s32) ((u32) v0 + 0x2330U);
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) v0); goto L_002920DC; }
    v1 = 0;
L_002920DC:;
    v0 = 2;
    if (v1 != v0) { v0 = 0; goto L_002920F0; }
    v0 = (s32) 0x5a0000U;
    v0 = (s32) ((u32) v0 + 0x2336U);
L_002920F0:;
    v0 = (*(volatile u8 *) (u32) (v0 + 1));
L_002920F4:;
    if (v0 != 0) goto L_00292104;
    v0 = 0; goto L_002922B4;
L_00292104:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 8936));
    if (v0 == 0) { s3 = (s64) ((u64) s1 << 48); goto L_00292128; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 8937));
    v0 = s0 ^ v0;
    v0 = (u64) 0 < (u64) v0; goto L_002922B4;
L_00292128:;
    s2 = (s64) ((u64) s2 << 48);
    a0 = s0;
    s3 = s3 >> 48;
    s2 = s2 >> 48;
    s4 = s0 ^ 0x1; v0 = func_002928B0(a0);
    v0 = (s64) ((u64) v0 << 48);
    a0 = s4;
    v0 = v0 >> 48;
    s1 = (s32) ((u32) s2 + (u32) v0); v0 = func_002928B0(a0);
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    v0 = (s32) ((u32) s3 + (u32) v0);
    v0 = (s32) ((u32) s1 - (u32) v0);
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48;
    if (a0 != 0) goto L_00292210;
    v0 = (s32) 0x5a0000U;
    v0 = (s32) ((u32) v0 + 0x2330U);
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) v0); goto L_00292188; }
    v1 = 0;
L_00292188:;
    v0 = 2;
    if (v1 != v0) { v0 = 0; goto L_0029219C; }
    v0 = (s32) 0x5a0000U;
    v0 = (s32) ((u32) v0 + 0x2336U);
L_0029219C:;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) v0); goto L_002921A8; }
    v0 = 0;
L_002921A8:;
    if (v0 != 0) goto L_002921B8;
    v0 = 0; goto L_002921E4;
L_002921B8:;
    v0 = (s32) 0x5a0000U;
    v0 = (s32) ((u32) v0 + 0x2330U);
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) v0); goto L_002921CC; }
    v1 = 0;
L_002921CC:;
    v0 = 2;
    if (v1 != v0) { v0 = 0; goto L_002921E0; }
    v0 = (s32) 0x5a0000U;
    v0 = (s32) ((u32) v0 + 0x2336U);
L_002921E0:;
    v0 = (*(volatile u8 *) (u32) (v0 + 6));
L_002921E4:;
    if (v0 == 0) goto L_00292210;
    if (s0 != 0) { a0 = s4; goto L_00292294; }
    a0 = s0; v0 = func_002928B0(a0);
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    v0 = (s32) ((u32) v0 - (u32) s3);
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48;
L_00292210:;
    v0 = (s64) ((u64) a0 << 48);
    v0 = v0 >> 48;
    if (v0 <= 0) goto L_0029228C;
    v0 = 1; goto L_002922B4;
L_00292228:;
    v0 = (s32) 0x5a0000U;
    v1 = (s32) ((u32) s3 << 2);
    v0 = (s32) ((u32) v0 + 0x2310U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 == 0) goto L_0029228C;
    if (s0 == 0) { a0 = (s64) ((u64) s2 << 48); goto L_00292260; }
    a0 = (s64) ((u64) s1 << 48);
    v1 = (s64) ((u64) s2 << 48);
    a0 = a0 >> 48;
    v1 = v1 >> 48; goto L_0029226C;
L_00292260:;
    v1 = (s64) ((u64) s1 << 48);
    a0 = a0 >> 48;
    v1 = v1 >> 48;
L_0029226C:;
    a1 = (s64) ((u64) a0 << 48);
    a2 = (s64) ((u64) v1 << 48);
    a1 = a1 >> 48;
    a2 = a2 >> 48;
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_002922B8;
L_0029228C:;
    v0 = 0; goto L_002922B4;
L_00292294:;
    v0 = func_002928B0(a0);
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    v0 = (s32) ((u32) s2 - (u32) v0);
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48; goto L_00292210;
L_002922B4:;
L_002922B8:;
    return v0;
}
