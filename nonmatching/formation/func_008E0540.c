/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00292F00(s32);
void func_008D7F40(s32, s32, s32, s32, s32);

void func_008E0540(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v1 = a4 & 0xff;
    at = v1 < 11;
    s3 = a0;
    s2 = a1;
    s1 = a2;
    { s32 c_ = at == 0; s0 = a3; if (c_) goto L_008E0630; }
    v0 = 0;
    a2 = (s32) ((u32) sp + 0x60U);
L_008E0580:;
    a1 = (s32) ((u32) s1 + (u32) v0);
    a0 = (*(volatile u8 *) (u32) (a1 + 1894));
    v0 = (s32) ((u32) v0 + 0x5U);
    v1 = v0 < 6;
    a0 = (s32) ((u32) s1 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a0 + 51));
    (*(volatile u8 *) (u32) a2) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a1 + 1895));
    a0 = (s32) ((u32) s1 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a0 + 51));
    (*(volatile u8 *) (u32) (a2 + 1)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a1 + 1896));
    a0 = (s32) ((u32) s1 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a0 + 51));
    (*(volatile u8 *) (u32) (a2 + 2)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a1 + 1897));
    a0 = (s32) ((u32) s1 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a0 + 51));
    (*(volatile u8 *) (u32) (a2 + 3)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a1 + 1898));
    a0 = (s32) ((u32) s1 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (a0 + 51));
    (*(volatile u8 *) (u32) (a2 + 4)) = (u8) a0;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x5U); if (c_) goto L_008E0580; }
    v1 = (s32) ((u32) v0 + (u32) s1);
    s4 = a4 & 0xff;
    a0 = (*(volatile u8 *) (u32) (v1 + 1894));
    a0 = (s32) ((u32) a0 + (u32) s1);
    v1 = (s32) ((u32) v0 + (u32) sp);
    a0 = (*(volatile u8 *) (u32) (a0 + 51));
    v0 = (s32) ((u32) s4 + (u32) s0);
    (*(volatile u8 *) (u32) (v1 + 96)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (v0 + 172)); v0 = func_00292F00(a0);
    v1 = (s32) ((u32) s4 + (u32) s0);
    a1 = v0;
    v1 = (*(volatile u8 *) (u32) (v1 + 40));
    a0 = (s32) ((u32) s3 + 0x13cU);
    a3 = (s32) ((u32) s1 + 0x7d6U);
    v0 = (s32) ((u32) v1 + (u32) s2);
    a2 = (*(volatile u8 *) (u32) (v0 + 51));
    a4 = (s32) ((u32) sp + 0x60U); func_008D7F40(a0, a1, a2, a3, a4);
L_008E0630:;
    return;
}
