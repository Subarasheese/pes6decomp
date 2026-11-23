/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00237530(s32);
s32 func_00645050(void);

void func_006453D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 gp = 0x3ef370;

    v0 = func_00645050();
    v0 = v0 & 0xff;
    v1 = (s32) ((u32) gp + 0xffff8404U);
    s3 = (s32) ((u32) v0 << 1);
    a0 = (s32) ((u32) v1 + (u32) s3);
    v0 = (s32) ((u32) gp + 0xffff8408U);
    v1 = (s32) ((u32) v0 + (u32) s3);
    s2 = (*(volatile u16 *) (u32) a0);
    s1 = (*(volatile u16 *) (u32) v1);
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) gp + 0xffff8400U);
    s5 = (s32) ((u32) v1 + (u32) s3);
    a0 = (*(volatile u16 *) (u32) s5);
    s0 = (*(volatile s32 *) (u32) (v0 + -4232)); v0 = func_00237530(a0);
    a3 = (*(volatile s32 *) (u32) v0);
    s4 = v0;
    a2 = (s32) ((u32) s0 + 0x20U);
    a0 = 563;
    a1 = s4;
L_00645440:;
    v1 = (*(volatile s32 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s32 *) (u32) (a2 + 4));
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    a2 = (s32) ((u32) a2 + 0x8U);
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) v0;
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x8U); if (c_) goto L_00645440; }
    a0 = (s32) ((u32) s0 + 0x11b8U);
    (*(volatile u32 *) (u32) s4) = (u32) a3;
    v1 = 2063;
L_0064546C:;
    v0 = (*(volatile s32 *) (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) a3) = (u32) v0;
    a0 = (s32) ((u32) a0 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x4U);
    if (v1 > 0) goto L_0064546C;
    v0 = func_00645050();
    v1 = v0 & 0xff;
    if (v1 != 0) goto L_00645528;
    a0 = (*(volatile s32 *) (u32) s4);
    v1 = 443;
    a1 = (s32) ((u32) a0 + 0x3cU);
    a0 = (*(volatile s32 *) (u32) (a0 + 60));
    if (a0 != v1) { a0 = (*(volatile s32 *) (u32) s4); goto L_006454C0; }
    v1 = 442;
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    a0 = (*(volatile s32 *) (u32) s4);
L_006454C0:;
    v1 = 443;
    a1 = (s32) ((u32) a0 + 0x40U);
    a0 = (*(volatile s32 *) (u32) (a0 + 64));
    if (a0 != v1) { v1 = (*(volatile s32 *) (u32) s4); goto L_006454E0; }
    v1 = 442;
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) s4);
L_006454E0:;
    a2 = 0;
    a1 = (s32) ((u32) v1 + 0x158U);
L_006454E8:;
    a0 = (*(volatile u8 *) (u32) (a1 + 3));
    v1 = a0 < 84;
    if (v1 != 0) goto L_00645518;
    at = a0 < 88;
    if (at == 0) goto L_00645518;
    v1 = (s32) ((u32) a0 + 0xffffffacU);
    (*(volatile u8 *) (u32) (a1 + 3)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a1 + 3));
    v1 = (s32) ((u32) v1 + 0x50U);
    (*(volatile u8 *) (u32) (a1 + 3)) = (u8) v1;
L_00645518:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 4;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x18U); if (c_) goto L_006454E8; }
L_00645528:;
    a4 = s1 & 0xffff;
    a3 = s2 & 0xffff;
    a2 = 0;
L_00645534:;
    a1 = (*(volatile u16 *) (u32) (s4 + 4340));
    if (a1 != 0) goto L_00645548;
    (*(volatile u16 *) (u32) (s4 + 4404)) = (u16) 0; goto L_00645590;
L_00645548:;
    a0 = (*(volatile u16 *) (u32) (s4 + 4404));
    v1 = a0 < 28672;
    if (v1 != 0) goto L_00645568;
    at = a0 < 28704;
    if (at != 0) goto L_00645580;
L_00645568:;
    v1 = a1 < 28672;
    if (v1 != 0) goto L_00645588;
    at = a1 < 28704;
    if (at == 0) goto L_00645588;
L_00645580:;
    (*(volatile u16 *) (u32) (s4 + 4340)) = (u16) a4;
L_00645588:;
    (*(volatile u16 *) (u32) (s4 + 4404)) = (u16) a3;
L_00645590:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 32;
    s4 = (s32) ((u32) s4 + 0x2U);
    a4 = (s32) ((u32) a4 + 0x1U);
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x1U); if (c_) goto L_00645534; }
    a0 = (*(volatile u16 *) (u32) s5);
    v1 = (s32) ((u32) gp + 0xffffa620U);
    v1 = (s32) ((u32) v1 + (u32) s3);
    (*(volatile u16 *) (u32) v1) = (u16) a0;
    return;
}
