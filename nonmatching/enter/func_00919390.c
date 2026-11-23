/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00235BB0(s32, s32, s32, s32);
s32 func_00235D70(s32, s32, s32, s32);
s32 func_00235EB0(s32, s32, s32, s32);
s32 func_00235FF0(s32, s32, s32, s32);
s32 func_00236130(s32, s32, s32, s32);
s32 func_00236270(s32, s32, s32, s32);
s32 func_002363B0(s32, s32, s32, s32);

void func_00919390(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    s3 = 0;
    s1 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    s0 = (*(volatile s32 *) (u32) (v0 + 32));
L_009193C8:;
    { s32 c_ = s3 >= 0; v1 = s3 & 0x1; if (c_) goto L_009193DC; }
    if (v1 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -31680)); goto L_009193E0; }
    v1 = (s32) ((u32) v1 + 0xfffffffeU);
L_009193DC:;
    v0 = (*(volatile s32 *) (u32) (gp + -31680));
L_009193E0:;
    a0 = s0 & 0xff;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s2 = (*(volatile u8 *) (u32) (v0 + 44));
    a1 = s2; v0 = func_00235BB0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    a2 = v0 & 0xff;
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    a0 = s0 & 0xff;
    a1 = s2;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile u16 *) (u32) (v0 + 48)) = (u16) a2; v0 = func_00235D70(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    a2 = v0 & 0xff;
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    a0 = s0 & 0xff;
    a1 = s2;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile u16 *) (u32) (v0 + 50)) = (u16) a2; v0 = func_002363B0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    a2 = v0 & 0xff;
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    a0 = s0 & 0xff;
    a1 = s2;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile u16 *) (u32) (v0 + 52)) = (u16) a2; v0 = func_00236270(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    a2 = v0 & 0xff;
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    a0 = s0 & 0xff;
    a1 = s2;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile u16 *) (u32) (v0 + 54)) = (u16) a2; v0 = func_00236130(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    a2 = v0 & 0xff;
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    a0 = s0 & 0xff;
    a1 = s2;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile u16 *) (u32) (v0 + 56)) = (u16) a2; v0 = func_00235FF0(a0, a1, a2, a3);
    a2 = (*(volatile s32 *) (u32) (gp + -20020));
    v1 = (s32) ((u32) gp + 0xffffb1d0U);
    a1 = s2;
    a0 = s0 & 0xff;
    a2 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + (u32) s1);
    (*(volatile u16 *) (u32) (v1 + 58)) = (u16) v0; v0 = func_00235EB0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    s3 = (s32) ((u32) s3 + 0x1U);
    a0 = (s32) ((u32) gp + 0xffffb1d0U);
    at = s3 < 2;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + (u32) s1);
    (*(volatile u16 *) (u32) (v1 + 60)) = (u16) v0;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    a1 = (s32) ((u32) v1 + (u32) s1);
    a0 = (*(volatile u16 *) (u32) (a1 + 58));
    s1 = (s32) ((u32) s1 + 0x14U);
    v1 = (*(volatile u16 *) (u32) (a1 + 60));
    v1 = (s32) ((u32) a0 - (u32) v1);
    { s32 c_ = at != 0; (*(volatile u32 *) (u32) (a1 + 64)) = (u32) v1; if (c_) goto L_009193C8; }
    return;
}
