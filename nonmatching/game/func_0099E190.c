/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0099E190(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s64 frame[2];
    s32 sp = (s32) (u32) frame;

    v0 = (*(volatile u8 *) (u32) (a0 + 36));
    if (v0 != 0) goto L_0099E2A8;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7804));
    if (v0 == 0) goto L_0099E2A8;
    a1 = (*(volatile u8 *) (u32) a0);
    a3 = (s32) 0x590000U;
    a2 = 0;
    a3 = (s32) ((u32) a3 + 0x2800U);
L_0099E1C0:;
    v1 = (*(volatile u8 *) (u32) (a3 + 16));
    if (a1 != v1) { a2 = (s32) ((u32) a2 + 0x1U); goto L_0099E294; }
    a0 = (s32) ((u32) a2 << 2);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 + 0x2800U);
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (*(volatile u8 *) (u32) v1);
    v1 = a1 < 8;
    if (v1 != 0) goto L_0099E1FC;
    v1 = 0; goto L_0099E210;
L_0099E1FC:;
    v1 = (s32) 0xcb0000U;
    a0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0x6393U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
L_0099E210:;
    v1 = v1 & 0xff;
    v1 = v1 & 0xf0;
    if (v1 != 0) { v0 = a1 < 8; goto L_0099E2B0; }
    a3 = (s32) 0xca0000U;
    a2 = (s32) ((u32) sp + 0x0U);
    a3 = (s32) ((u32) a3 + 0xffffa3d0U);
    a1 = 4;
L_0099E230:;
    a0 = (*(volatile s16 *) (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s16 *) (u32) (a3 + 2));
    (*(volatile u16 *) (u32) a2) = (u16) a0;
    (*(volatile u16 *) (u32) (a2 + 2)) = (u16) v1;
    a3 = (s32) ((u32) a3 + 0x4U);
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_0099E230; }
    a0 = (s32) 0xcb0000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffa2e0U);
L_0099E25C:;
    v1 = (*(volatile s32 *) (u32) a0);
    if (v0 != v1) { a1 = (s32) ((u32) a1 + 0x1U); goto L_0099E278; }
    v0 = (s32) ((u32) a1 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile u16 *) (u32) v0); goto L_0099E28C;
L_0099E278:;
    v1 = a1 < 8;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_0099E25C; }
    v0 = 0xffff;
    v0 = v0 & 0xffff;
L_0099E28C:;
    goto L_0099E2F4;
L_0099E294:;
    v1 = a2 < 8;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x28U); if (c_) goto L_0099E1C0; }
    v0 = (*(volatile u16 *) (u32) (a0 + 38)); goto L_0099E2F0;
L_0099E2A8:;
    v0 = (*(volatile u16 *) (u32) (a0 + 38)); goto L_0099E2F0;
L_0099E2B0:;
    if (v0 != 0) { v1 = a1 & 0xff; goto L_0099E2C0; }
    v0 = 0; goto L_0099E2D4;
L_0099E2C0:;
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x6390U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0);
L_0099E2D4:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u16 *) (u32) (v1 + 10058));
    { s32 c_ = v1 != 0; v0 = v0 & 0xffff; if (c_) goto L_0099E2F0; }
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v0 = (s32) ((u32) v0 + 0x4001U);
    v0 = v0 & 0xffff;
L_0099E2F0:;
L_0099E2F4:;
    return v0;
}
