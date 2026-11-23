/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void FlushCache(void);
s64 sceDmaSync(s64, s64, s64, s64, s64, s64, s64, s64);

void func_001424E0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0;
    u64 qh_a0 = 0;
    s64 gp = 0x3ef370;

    v1 = (s32) 0x500000U;
    a2 = (*(volatile s32 *) (u32) (v1 + -8896));
    if (a2 == 0) goto L_001425B0;
    v1 = (s32) 0x500000U;
    a1 = (*(volatile s32 *) (u32) (v1 + -8884));
    at = a1 < 256;
    if (at == 0) goto L_001425C0;
    a0 = (s32) 0x70000000U;
    v1 = (s32) 0x20000000U;
    at = 0 < a1;
    a2 = a2 | v1;
    a3 = a0 | 0x2000;
    { s32 c_ = at == 0; a4 = 0; if (c_) goto L_00142550; }
    v1 = (s32) 0x500000U;
L_0014252C:;
    { u32 a_ = (u32) (a3 + 0) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    a4 = (s32) ((u32) a4 + 0x10U);
    { u32 a_ = (u32) (a2 + 0) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    a3 = (s32) ((u32) a3 + 0x10U);
    a0 = (*(volatile s32 *) (u32) (v1 + -8884));
    a0 = a4 < a0;
    { s32 c_ = a0 != 0; a2 = (s32) ((u32) a2 + 0x10U); if (c_) goto L_0014252C; }
L_00142550:;
    v1 = (s32) 0x500000U;
    a3 = (*(volatile s32 *) (u32) (v1 + -8892));
    a1 = (s32) 0x500000U;
    a2 = (*(volatile s32 *) (u32) (gp + -23412));
    a0 = (s32) 0x500000U;
    v1 = (s32) 0x500000U;
    (*(volatile u32 *) (u32) a2) = (u32) a3;
    a2 = (*(volatile s32 *) (u32) (a1 + -8888));
    a1 = (*(volatile s32 *) (u32) (gp + -23412));
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) a2;
    a1 = (*(volatile s32 *) (u32) (a0 + -8888));
    a0 = (*(volatile s32 *) (u32) (gp + -23412));
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) a1;
    v1 = (*(volatile s32 *) (u32) (v1 + -8884));
    v1 = v1 < 256;
    if (v1 != 0) goto L_00142620;
    v0 = (s32) 0x10000000U;
    a1 = 0;
    a0 = v0 | 0xd000;
    a2 = 0; v0 = sceDmaSync(a0, a1, a2, a3, a4, a5, a6, a7);
L_001425A8:;
    goto L_00142624;
L_001425B0:;
    a0 = 0; FlushCache();
    goto L_001425A8;
L_001425C0:;
    v1 = (s32) 0x70000000U;
    a0 = (s32) 0x10010000U;
    a1 = v1 | 0x2000;
    v1 = (s32) 0x500000U;
    (*(volatile u32 *) (u32) (a0 + -12160)) = (u32) a1;
    v1 = (*(volatile s32 *) (u32) (v1 + -8884));
    v1 = (s32) ((u32) v1 + 0xfU);
    { s32 c_ = v1 >= 0; a3 = (s32) v1 >> 4; if (c_) goto L_001425EC; }
    v1 = (s32) ((u32) v1 + 0xfU);
    a3 = (s32) v1 >> 4;
L_001425EC:;
    v1 = (s32) 0x500000U;
    a1 = 256;
    a2 = (*(volatile s32 *) (u32) (v1 + -8896));
    a0 = -16;
    v1 = (s32) 0x10010000U;
    (*(volatile u32 *) (u32) (v1 + -8176)) = (u32) a1;
    (*(volatile u32 *) (u32) (v1 + -12272)) = (u32) a2;
    (*(volatile u32 *) (u32) (v1 + -12256)) = (u32) a3;
    a1 = (*(volatile s32 *) (u32) (v1 + -12288));
    a0 = a1 & a0;
    a0 = a0 | 0x101;
    (*(volatile u32 *) (u32) (v1 + -12288)) = (u32) a0; goto L_00142550;
L_00142620:;
L_00142624:;
    return;
}
