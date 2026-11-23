/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001EDC80(s32, s32);
void func_001EE630(s32, s32);
s32 func_00292D80(s32);
s32 func_002F96F0(s32, s32);
void func_0035D360(s32, s32, s32, s32, s32, s32);

void func_0035D000(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 gp = 0x3ef370;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    a5 = a3;
    a3 = (s32) 0x3b0000U;
    a3 = (s32) ((u32) a3 + 0x7c70U);
    a0 = 8;
    s4 = a1;
    a1 = (s32) ((u32) sp + 0x90U);
L_0035D040:;
    v1 = (*(volatile s16 *) (u32) a3);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s16 *) (u32) (a3 + 2));
    (*(volatile u16 *) (u32) a1) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 2)) = (u16) v0;
    a3 = (s32) ((u32) a3 + 0x4U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_0035D040; }
    a4 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) 0x3b0000U;
    a1 = a2;
    v1 = (s32) ((u32) gp + 0xffffac54U);
    v0 = (s32) ((u32) v0 + 0x7ba8U);
    a0 = s4;
    a4 = (s32) ((u32) a4 << 2);
    a3 = 2;
    v1 = (s32) ((u32) v1 + (u32) a4);
    v1 = (*(volatile s32 *) (u32) v1);
    s1 = (*(volatile s32 *) (u32) (v1 + 632));
    a4 = (*(volatile s32 *) (u32) (v1 + 608));
    v1 = (s32) ((u32) a4 << 1);
    v1 = (s32) ((u32) v1 + (u32) a4);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a4 = (*(volatile s32 *) (u32) v0);
    a2 = (s32) ((u32) sp + 0x90U); func_0035D360(a0, a1, a2, a3, a4, a5);
    a0 = (*(volatile s32 *) (u32) (gp + -21424));
    v1 = (s32) ((u32) gp + 0xffffac54U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    s5 = (*(volatile s32 *) (u32) (v1 + 856));
    { s32 c_ = s5 <= 0; s3 = 0; if (c_) goto L_0035D1F0; }
    v0 = (s32) ((u32) s1 << 4);
    s0 = 0;
    a0 = (s32) ((u32) v0 - (u32) s1);
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) 0x5a0000U;
    v1 = (s32) ((u32) v1 - (u32) a0);
    v0 = (s32) ((u32) v0 + 0x2020U);
    v1 = (s32) ((u32) v1 << 3);
    s6 = (s32) ((u32) v0 + (u32) v1);
    s7 = (s32) ((u32) s6 + 0x1U);
L_0035D0F4:;
    a0 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (*(volatile u8 *) (u32) s7);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v1 << 2);
    a0 = (*(volatile s32 *) (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + (u32) s0);
    v0 = (s32) ((u32) v0 << 1);
    v1 = (s32) ((u32) s6 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (a0 + 812));
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile u8 *) (u32) (v0 + 28)); v0 = func_00292D80(a0);
    v0 = v0 & 0xff;
    if (v0 > 0) goto L_0035D150;
    s2 = 0; goto L_0035D188;
L_0035D150:;
    at = v0 < 6;
    if (at == 0) goto L_0035D168;
    s2 = 1; goto L_0035D188;
L_0035D168:;
    at = v0 < 13;
    if (at == 0) goto L_0035D180;
    s2 = 2; goto L_0035D188;
L_0035D180:;
    s2 = 3;
L_0035D188:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0035D1B8;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_0035D1B8:;
    a0 = s1;
    a1 = s4; v0 = func_001EDC80(a0, a1);
    v1 = (s32) ((u32) s2 << 3);
    a0 = v0;
    v0 = (s32) ((u32) v1 + (u32) sp);
    a1 = (s32) ((u32) v0 + 0x90U); func_001EE630(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    s0 = (s32) ((u32) s0 + 0x4U);
    v1 = s3 < s5;
    { s32 c_ = v1 != 0; s4 = (s32) ((u32) s4 + 0x3U); if (c_) goto L_0035D0F4; }
L_0035D1F0:;
    return;
}
