/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00209CA0(s32, s32, s32, s32, s32);
s32 func_00209D90(s32, s32, s32, s32, s32);
s32 func_0020A400(s32, s32, s32, s32);
s32 func_0020A4B0(s32, s32, s32, s32);
s32 func_0020BC50(void);
s32 func_0020BE10(void);
s32 func_002305D0(s32, s32, s32, s32);
s32 func_00234F10(s32, s32);
s32 func_00235B60(void);
s32 func_002CD140(s32);
s32 func_00366540(s32, s32, s32, s32, s32);
s32 func_00366680(s32, s32, s32, s32);

s32 func_0020BFD0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    a0 = (s32) 0x530000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0x7a40U);
    v1 = 0xffff;
L_0020BFF4:;
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) v1;
    a1 = (s32) ((u32) a1 + 0x6U);
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) 0;
    v0 = a1 < 12;
    (*(volatile u32 *) (u32) (a0 + 12)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 16)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 20)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 24)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 36)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 40)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 44)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 48)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 52)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 56)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 60)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 64)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 68)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 72)) = (u32) 0;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x48U); if (c_) goto L_0020BFF4; }
    v0 = func_0020BE10();
    v0 = func_0020BC50();
    s0 = 0; v0 = func_002305D0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 2;
    if (v1 == v0) { s0 = 1; goto L_0020C074; }
L_0020C074:;
    if (s0 == 0) goto L_0020C140;
    s0 = (s32) 0x530000U;
    s2 = 0;
    s0 = (s32) ((u32) s0 + 0x7a40U);
L_0020C088:;
    v0 = func_00235B60();
    a1 = v0 & 0xff;
    a0 = s2 & 0xff; v0 = func_00234F10(a0, a1);
    s1 = v0 & 0xffff;
    v0 = 0xffff;
    if (s1 == v0) goto L_0020C130;
    v1 = (s32) ((u32) s2 + 0x6U);
    v0 = 10;
    if (v1 != v0) goto L_0020C0F8;
    v0 = (s32) 0x530000U;
    a1 = 1;
    a0 = (*(volatile s32 *) (u32) (v0 + 31296));
    a2 = s1; v0 = func_0020A400(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 76)) = (u32) s1;
    a1 = 1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (s0 + 80)) = (u32) a1;
    a0 = (*(volatile s32 *) (u32) (v0 + 31296));
    a2 = s1;
    a3 = 0; v0 = func_00209CA0(a0, a1, a2, a3, a4);
    (*(volatile u32 *) (u32) (s0 + 84)) = (u32) v0; goto L_0020C130;
L_0020C0F8:;
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 31296));
    a1 = 1;
    a2 = s1; v0 = func_0020A4B0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 76)) = (u32) s1;
    a1 = 1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (s0 + 80)) = (u32) a1;
    a0 = (*(volatile s32 *) (u32) (v0 + 31296));
    a2 = s1;
    a3 = 0; v0 = func_00209D90(a0, a1, a2, a3, a4);
    (*(volatile u32 *) (u32) (s0 + 84)) = (u32) v0;
L_0020C130:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 4;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0xcU); if (c_) goto L_0020C088; }
L_0020C140:;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7110)); v0 = func_002CD140(a0);
    s0 = (*(volatile u16 *) (u32) (v0 + 4));
    v0 = 0xffff;
    if (s0 == v0) goto L_0020C1A0;
    v0 = (s32) 0x530000U;
    a1 = 1;
    a0 = (*(volatile s32 *) (u32) (v0 + 31296));
    a2 = s0; v0 = func_0020A400(a0, a1, a2, a3);
    v0 = (s32) 0x530000U;
    a1 = 1;
    (*(volatile u32 *) (u32) (v0 + 31420)) = (u32) s0;
    v1 = (s32) 0x530000U;
    v0 = (s32) 0x530000U;
    a2 = s0;
    a0 = (*(volatile s32 *) (u32) (v0 + 31296));
    a3 = 0;
    (*(volatile u32 *) (u32) (v1 + 31424)) = (u32) a1; v0 = func_00209CA0(a0, a1, a2, a3, a4);
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + 31428)) = (u32) v0;
L_0020C1A0:;
    v0 = func_00366680(a0, a1, a2, a3);
    v0 = func_00366540(a0, a1, a2, a3, a4);
    return v0;
}
