/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00278280(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0;

    v1 = a0 & 0xff;
    v0 = (s32) ((u32) v1 << 2);
    a0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0x2803U);
    v0 = (s32) ((u32) v0 << 3);
    a0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (*(volatile u8 *) (u32) a0);
    if (a0 != 0) goto L_002783F0;
    a1 = (s32) 0x590000U;
    a0 = 8;
    a1 = (s32) ((u32) a1 + 0x2800U);
    a2 = (s32) ((u32) a1 + (u32) v0);
    a1 = (*(volatile u8 *) (u32) a2);
    if (a1 == a0) goto L_002783F0;
    a3 = (*(volatile u8 *) (u32) (a2 + 1));
    a5 = (s32) 0x590000U;
    a5 = (s32) ((u32) a5 + 0xffffe7f0U);
    a4 = 0;
    a2 = (s32) ((u32) a2 + 0x12U);
L_002782D8:;
    a0 = (*(volatile u8 *) (u32) (a5 + 18));
    if (a0 != a3) goto L_002783A4;
    a0 = (*(volatile s32 *) (u32) (a5 + 4));
    a0 = (*(volatile u8 *) (u32) (a0 + 44));
    if (a0 == 0) goto L_002783A4;
    a1 = (*(volatile u8 *) (u32) (a5 + 17));
    a0 = (*(volatile u8 *) (u32) a2);
    if (a1 != a0) goto L_002783A4;
    a1 = (*(volatile u8 *) (u32) a5);
    a0 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    a0 = (s32) 0x590000U;
    a2 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) a0 + 0x2810U);
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x2801U);
    a0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 + (u32) a2);
    (*(volatile u8 *) (u32) a0) = (u8) a1;
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != 0) goto L_0027836C;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x280cU);
    v0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (*(volatile u8 *) (u32) (v1 + 7628));
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) v0) = (u8) v1; goto L_0027839C;
L_0027836C:;
    v1 = (s32) 0x590000U;
    a0 = 12;
    a1 = (*(volatile u8 *) (u32) (v1 + 7628));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x280cU);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) a0 - (u32) v1);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
L_0027839C:;
    v0 = 1; goto L_002783F4;
L_002783A4:;
    a0 = (s32) ((u32) a4 + 0x1U);
    a4 = a0 & 0xff;
    a0 = a4 < 22;
    { s32 c_ = a0 != 0; a5 = (s32) ((u32) a5 + 0x240U); if (c_) goto L_002782D8; }
    v0 = (s32) ((u32) v1 << 2);
    a1 = 255;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) 0x590000U;
    a2 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) v1 + 0x2810U);
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) v1 + (u32) a2);
    v0 = (s32) ((u32) v0 + 0x280cU);
    v1 = (s32) ((u32) v0 + (u32) a2);
    (*(volatile u8 *) (u32) a0) = (u8) a1;
    v0 = 0;
    (*(volatile u8 *) (u32) v1) = (u8) a1; goto L_002783F4;
L_002783F0:;
    v0 = 0;
L_002783F4:;
    return v0;
}
