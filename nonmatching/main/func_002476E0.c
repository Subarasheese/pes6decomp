/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002259E0(void);

void func_002476E0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    s2 = a0;
    s1 = a1;
    s0 = a2; v0 = func_002259E0();
    v1 = v0 & 0xff;
    at = v1 < 2;
    if (at == 0) { ; goto L_00247868; }
    v1 = (s32) 0x590000U;
    a0 = 1;
    v1 = (*(volatile u8 *) (u32) (v1 + 7980));
    if (v1 != a0) goto L_002477BC;
    v1 = (s32) ((u32) s2 << 1);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s0);
    a1 = (s32) ((u32) v1 + 0x1U);
    v1 = (*(volatile s8 *) (u32) (v1 + 1));
    if (v1 <= 0) goto L_00247780;
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) s2 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8be0U);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (gp + -22608));
    a0 = (*(volatile s32 *) (u32) a0);
    v1 = v1 & a0;
    if (v1 == 0) { v1 = 10; goto L_0024777C; }
    (*(volatile u8 *) (u32) a1) = (u8) 0; goto L_00247780;
L_0024777C:;
    (*(volatile u8 *) (u32) a1) = (u8) v1;
L_00247780:;
    if (s2 != 0) goto L_002477BC;
    a0 = (*(volatile s8 *) (u32) (s0 + 1));
    v1 = -4;
    if (a0 != v1) { a0 = (*(volatile s8 *) (u32) (s0 + 1)); goto L_002477A4; }
    v1 = -1;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v1;
    a0 = (*(volatile s8 *) (u32) (s0 + 1));
L_002477A4:;
    if (a0 == 0) { (*(volatile u8 *) (u32) (s0 + 1)) = (u8) s1; goto L_002477BC; }
    v1 = 10;
    if (a0 != v1) goto L_002477BC;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) s1;
L_002477BC:;
    v1 = (s32) 0x590000U;
    a0 = 2;
    v1 = (*(volatile u8 *) (u32) (v1 + 7980));
    if (v1 != a0) goto L_00247864;
    v1 = (s32) ((u32) s2 << 1);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s0);
    a1 = (s32) ((u32) v1 + 0x1U);
    v1 = (*(volatile s8 *) (u32) (v1 + 1));
    if (v1 >= 0) goto L_00247828;
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) s2 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8be0U);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (gp + -22608));
    a0 = (*(volatile s32 *) (u32) a0);
    v1 = v1 & a0;
    if (v1 == 0) { v1 = 10; goto L_00247824; }
    (*(volatile u8 *) (u32) a1) = (u8) 0; goto L_00247828;
L_00247824:;
    (*(volatile u8 *) (u32) a1) = (u8) v1;
L_00247828:;
    if (s2 != 0) goto L_00247864;
    a0 = (*(volatile s8 *) (u32) (s0 + 1));
    v1 = 4;
    if (a0 != v1) { a0 = (*(volatile s8 *) (u32) (s0 + 1)); goto L_0024784C; }
    v1 = 1;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v1;
    a0 = (*(volatile s8 *) (u32) (s0 + 1));
L_0024784C:;
    if (a0 == 0) { (*(volatile u8 *) (u32) (s0 + 1)) = (u8) s1; goto L_00247864; }
    v1 = 10;
    if (a0 != v1) goto L_00247864;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) s1;
L_00247864:;
L_00247868:;
    return;
}
