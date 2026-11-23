/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00292F00(s32);
s32 func_00292F30(s32, s32);
s32 func_002937A0(s32);
s32 func_008D1EE0(s32);

void func_008C98A0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    s5 = a1;
    s4 = a2;
    s2 = a0;
    a0 = (s32) ((u32) s2 + 0x480U);
    v0 = func_008D1EE0(a0);
    s1 = (*(volatile s32 *) (u32) (s2 + 1140));
    v1 = v0 & 0xff;
    a0 = (*(volatile u8 *) (u32) (s2 + 1160));
    { s32 c_ = s5 < 0; s3 = 0; if (c_) goto L_008C99A8; }
    v1 = v1 & 0xff;
    at = s5 < v1;
    if (at == 0) goto L_008C99A8;
    if (s1 == 0) goto L_008C99A8;
    a0 = a0 & 0xff;
    at = a0 < 11;
    { s32 c_ = at == 0; s2 = -1; if (c_) goto L_008C9920; }
    v1 = (s32) ((u32) s5 + (u32) s1);
    s2 = (*(volatile u8 *) (u32) (v1 + 1));
    s0 = a0; goto L_008C9944;
L_008C9920:;
    at = a0 < v1;
    if (at == 0) goto L_008C9944;
    at = s5 < 11;
    if (at == 0) goto L_008C9944;
    v1 = (s32) ((u32) a0 + (u32) s1);
    s0 = s5;
    s2 = (*(volatile u8 *) (u32) (v1 + 1));
L_008C9944:;
    if (s2 < 0) goto L_008C99A8;
    v1 = (s32) ((u32) s2 + (u32) s1);
    v1 = (*(volatile u8 *) (u32) (v1 + 496));
    if (v1 != 0) goto L_008C99A8;
    v0 = (s32) ((u32) s0 + (u32) s1);
    a0 = (*(volatile u8 *) (u32) (v0 + 35));
    s0 = (s32) ((u32) v0 + 0x23U); v0 = func_002937A0(a0);
    a0 = (s32) ((u32) s2 << 2);
    a1 = v0;
    a0 = (s32) ((u32) a0 + (u32) s2);
    v1 = (*(volatile s32 *) (u32) (s1 + 816));
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) v1 + (u32) v0); v0 = func_00292F30(a0, a1);
    if (v0 == 0) goto L_008C99A8;
    a0 = (*(volatile u8 *) (u32) s0); v0 = func_00292F00(a0);
    v1 = v0 & 0xff;
    s3 = (s32) ((u32) v1 + 0x1U);
L_008C99A8:;
    v1 = (s32) 0x8f0000U;
    a0 = (s32) ((u32) s3 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd890U);
    a2 = (s32) ((u32) v1 + (u32) a0);
    a1 = (*(volatile u8 *) (u32) a2);
    a0 = (*(volatile u8 *) (u32) (a2 + 1));
    v1 = (*(volatile u8 *) (u32) (a2 + 2));
    (*(volatile u8 *) (u32) s4) = (u8) a1;
    (*(volatile u8 *) (u32) (s4 + 1)) = (u8) a0;
    (*(volatile u8 *) (u32) (s4 + 2)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a2 + 3));
    (*(volatile u8 *) (u32) (s4 + 3)) = (u8) v1;
    return;
}
