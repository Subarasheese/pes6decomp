/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0017F9A0(s64, s64, s64, s64, s64);
void memset(s64, s64, s64);
void strcpy(s64, s64);

void func_00253180(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    s64 frame[8];
    s64 sp = (s32) (u32) frame;

    a4 = (s32) 0x580000U;
    v1 = 0;
    a5 = 0;
    (*(volatile u32 *) (u32) (gp + -22540)) = (u32) 0;
    a4 = (s32) ((u32) a4 + 0x43f0U);
    a1 = -1;
    a2 = 1;
    a3 = 3;
L_002531AC:;
    a0 = (*(volatile s32 *) (u32) (a4 + 72));
    if (a0 != 0) { v1 = (s64) ((u64) v1 << 32); goto L_0025339C; }
L_002531B8:;
    a0 = (*(volatile s32 *) (u32) (a4 + 72));
    if (a0 != a3) goto L_002531E0;
    a0 = (*(volatile s32 *) (u32) (a4 + 76));
    if (a0 != a2) goto L_002531E0;
    (*(volatile u32 *) (u32) a4) = (u32) a1;
    (*(volatile u32 *) (u32) (a4 + 76)) = (u32) 0;
    (*(volatile u32 *) (u32) (a4 + 68)) = (u32) a1;
    (*(volatile u32 *) (u32) (a4 + 72)) = (u32) 0;
L_002531E0:;
    a5 = (s32) ((u32) a5 + 0x1U);
    a0 = (u64) a5 < (u64) (s64) 36;
    { s32 c_ = a0 != 0; a4 = (s32) ((u32) a4 + 0x5cU); if (c_) goto L_002531AC; }
    a2 = (s32) 0x580000U;
    (*(volatile u32 *) (u32) (gp + -22516)) = (u32) 0;
    a1 = 0;
    a2 = (s32) ((u32) a2 + 0x43f0U);
    a0 = 2;
L_00253204:;
    v1 = (*(volatile s32 *) (u32) (a2 + 72));
    if (v1 != a0) { v1 = (s64) ((u64) a1 << 32); goto L_00253224; }
    v1 = (*(volatile s32 *) (u32) (gp + -22488));
    if (v1 != 0) goto L_002533B0;
L_0025321C:;
    goto L_002533E8;
L_00253224:;
    a2 = (s32) ((u32) a2 + 0x5cU);
    v1 = v1 >> 32;
    a1 = (s32) ((u32) v1 + 0x1U);
    v1 = (u64) a1 < (u64) (s64) 36;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (gp + -22516)) = (u32) a1; if (c_) goto L_00253204; }
    a2 = (s32) 0x580000U;
    (*(volatile u32 *) (u32) (gp + -22516)) = (u32) 0;
    a1 = 0;
    a2 = (s32) ((u32) a2 + 0x43f0U);
    a0 = 1;
L_00253250:;
    v1 = (*(volatile s32 *) (u32) (a2 + 72));
    if (v1 != a0) { v1 = (s64) ((u64) a1 << 32); goto L_0025337C; }
    a0 = (s64) ((u64) a1 << 32);
    v1 = (s32) ((u32) sp + 0x20U);
    a0 = a0 >> 32;
    { s32 c_ = v1 == 0; v0 = 20; if (c_) goto L_0025328C; }
L_00253270:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_00253270;
L_0025328C:;
    v0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) 0x580000U;
    v1 = (s32) ((u32) v1 - (u32) a0);
    v0 = (s32) ((u32) v0 + 0x43f4U);
    s0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s8 *) (u32) v0);
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) (gp + -22488)) = (u32) 0; if (c_) goto L_00253308; }
    a0 = (s32) 0x590000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffc5a0U);
    a2 = 64; memset(a0, a1, a2);
    v0 = (s32) 0x580000U;
    a0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x43f0U);
    a0 = (s32) ((u32) a0 + 0xffffc5a0U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = (s32) ((u32) v0 + 0x4U); strcpy(a0, a1);
    a0 = (s32) 0x580000U;
    v1 = 1;
    a0 = (s32) ((u32) a0 + 0x4440U);
    (*(volatile u32 *) (u32) (gp + -22548)) = (u32) v1;
    a0 = (s32) ((u32) a0 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) a0);
    (*(volatile u32 *) (u32) (gp + -22456)) = (u32) v1; goto L_0025334C;
L_00253308:;
    v0 = (s32) 0x580000U;
    v1 = 3;
    v0 = (s32) ((u32) v0 + 0x4440U);
    a1 = (s32) 0x250000U;
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) v1;
    v0 = (s32) ((u32) v0 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) a1 + 0x3790U);
    a2 = 0;
    a3 = 0;
    a4 = (s32) ((u32) sp + 0x20U);
    v0 = (s32) 0x580000U;
    v0 = (s32) ((u32) v0 + 0x43f0U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (sp + 40)) = (u32) v1; v0 = func_0017F9A0(a0, a1, a2, a3, a4);
L_0025334C:;
    a1 = (*(volatile s32 *) (u32) (gp + -22516));
    v1 = (s32) 0x580000U;
    v1 = (s32) ((u32) v1 + 0x4438U);
    a2 = 2;
    a0 = (s32) ((u32) a1 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 3);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) a2; goto L_002533E4;
L_0025337C:;
    a2 = (s32) ((u32) a2 + 0x5cU);
    v1 = v1 >> 32;
    a1 = (s32) ((u32) v1 + 0x1U);
    v1 = (u64) a1 < (u64) (s64) 36;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (gp + -22516)) = (u32) a1; if (c_) goto L_00253250; }
    goto L_002533E4;
L_0025339C:;
    v1 = v1 >> 32;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22540)) = (u32) v1; goto L_002531B8;
L_002533B0:;
    a1 = (s64) ((u64) a1 << 32);
    a1 = a1 >> 32;
    a2 = 3;
    v1 = (s32) ((u32) a1 << 1);
    a0 = (s32) ((u32) v1 + (u32) a1);
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x580000U;
    a0 = (s32) ((u32) a0 - (u32) a1);
    v1 = (s32) ((u32) v1 + 0x4438U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) a2; goto L_0025321C;
L_002533E4:;
L_002533E8:;
    return;
}
