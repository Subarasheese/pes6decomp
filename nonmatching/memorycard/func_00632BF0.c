/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s32, s32);
s32 func_001F08B0(s32);
s32 func_00220B70(s32);
s32 func_00246550(s32);
s32 func_0062FD90(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00634BD0(s32);
void func_0063ABF0(s32, s32, s32);
void func_0063AC30(s32, s32, s32, s32, f32);
void func_0063AD20(s32, s32, s32, s32);
s32 func_0063AD90(s32, s32, s32, s32);
s32 func_00645820(s32);

void func_00632BF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;

    s6 = a1;
    s5 = a0;
    s3 = (s32) ((u32) s6 + 0x2acU);
    s2 = 0;
    s1 = s3;
    v0 = (*(volatile s32 *) (u32) (a1 + 4));
    s0 = (s32) 0x650000U;
    s0 = (s32) ((u32) s0 + 0x7ce0U);
    s4 = (*(volatile s32 *) (u32) (v0 + 76));
L_00632C38:;
    v0 = (*(volatile s32 *) (u32) s1);
    if (v0 != 0) goto L_00632C58;
    a2 = (*(volatile s32 *) (u32) s0);
    a0 = s4;
    a1 = s1;
    a3 = (s32) ((u32) gp + 0xffff83acU); v0 = func_0063AD90(a0, a1, a2, a3);
L_00632C58:;
    a1 = (*(volatile s32 *) (u32) s0);
    a2 = (*(volatile s32 *) (u32) s1);
    a0 = s4; func_0063ABF0(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s2 < 21;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00632C38; }
    a0 = s4;
    a1 = 1; func_001D7D60(a0, a1);
    a0 = s6; func_00634BD0(a0);
    s1 = 0;
    s0 = s3;
L_00632C98:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) gp + 0xffff83acU); func_0063AD20(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 21;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00632C98; }
    a0 = 40; v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s3 + 4));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s5 + 57));
    a0 = (s32) ((u32) v0 + 0x2cU); v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) s3);
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a0 = 41; v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s3 + 12));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a0 = 170; v0 = func_00246550(a0);
    v1 = 1;
    if (v0 != v1) { a1 = 0; goto L_00632D0C; }
    a1 = 11;
L_00632D0C:;
    a0 = (*(volatile u8 *) (u32) (s5 + 56));
    v1 = 6;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffa260U);
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    v1 = hi;
    v1 = (s32) ((u32) a1 + (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) (s3 + 8));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a0 = 42; v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s3 + 20));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s5 + 100));
    a0 = (s32) ((u32) v0 + 0x38U); v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s3 + 16));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
    a1 = (s32) ((u32) s5 + 0x1115U); func_0063AD20(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s5 + 52));
    v0 = (s32) ((u32) v0 + 0xffffffd8U);
    at = (u64) v0 < (u64) (s64) 18;
    if (at == 0) { v1 = 19; goto L_00632E04; }
    v1 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffaf10U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x632dacU) goto L_00632DAC; if (t_ == 0x632db8U) goto L_00632DB8; if (t_ == 0x632dc0U) goto L_00632DC0; if (t_ == 0x632dc8U) goto L_00632DC8; if (t_ == 0x632dd0U) goto L_00632DD0; if (t_ == 0x632dd8U) goto L_00632DD8; if (t_ == 0x632de0U) goto L_00632DE0; if (t_ == 0x632de8U) goto L_00632DE8; if (t_ == 0x632df0U) goto L_00632DF0; if (t_ == 0x632df8U) goto L_00632DF8; if (t_ == 0x632e00U) goto L_00632E00; }
L_00632DAC:;
    v1 = 19;
    goto L_00632E04;
L_00632DB8:;
    v1 = 20; goto L_00632E04;
L_00632DC0:;
    v1 = 21; goto L_00632E04;
L_00632DC8:;
    v1 = 22; goto L_00632E04;
L_00632DD0:;
    v1 = 23; goto L_00632E04;
L_00632DD8:;
    v1 = 24; goto L_00632E04;
L_00632DE0:;
    v1 = 15; goto L_00632E04;
L_00632DE8:;
    v1 = 16; goto L_00632E04;
L_00632DF0:;
    v1 = 17; goto L_00632E04;
L_00632DF8:;
    v1 = 18; goto L_00632E04;
L_00632E00:;
    v1 = 25;
L_00632E04:;
    v0 = 25;
    if (v1 != v0) goto L_00632E20;
    a0 = 18; v0 = func_00220B70(a0);
    s0 = v0; goto L_00632E3C;
L_00632E20:;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffa1f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    s0 = v0;
L_00632E3C:;
    a0 = (*(volatile s32 *) (u32) (s3 + 32));
    a1 = s0; func_0063AD20(a0, a1, a2, a3);
    v0 = (s32) 0x650000U;
    a2 = (*(volatile s32 *) (u32) (s3 + 32));
    a1 = (*(volatile s32 *) (u32) (v0 + 32000));
    a3 = s0;
    a0 = s4; func_0063AC30(a0, a1, a2, a3, f12.f);
    v1 = (*(volatile u8 *) (u32) (s5 + 52));
    v0 = 44;
    { s32 c_ = v1 == v0; a0 = 25; if (c_) goto L_00632E7C; }
    v0 = 56;
    if (v1 != v0) { v0 = 45; goto L_00632E84; }
L_00632E7C:;
    a0 = 2; goto L_00632E9C;
L_00632E84:;
    if (v1 == v0) { a0 = 3; goto L_00632E9C; }
    v0 = 57;
    if (v1 != v0) { v0 = 25; goto L_00632EA0; }
    a0 = 3;
L_00632E9C:;
    v0 = 25;
L_00632EA0:;
    if (a0 != v0) goto L_00632EB0;
    v0 = (s32) ((u32) gp + 0xffff83acU); goto L_00632EC8;
L_00632EB0:;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffa1f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
L_00632EC8:;
    a0 = (*(volatile s32 *) (u32) (s3 + 40));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s5 + 52));
    v0 = 46;
    if (v1 != v0) { a0 = s5; goto L_00632EEC; }
    v0 = (s32) ((u32) gp + 0xffff83acU); goto L_00632EF4;
L_00632EEC:;
    v0 = func_0062FD90(a0, a1, a2, a3, a4, a5, a6, a7);
L_00632EF4:;
    a0 = (*(volatile s32 *) (u32) (s3 + 48));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a0 = s4;
    a1 = 1; func_001D7D60(a0, a1);
    return;
}
