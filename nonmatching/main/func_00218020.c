/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 strcmp(s32, s32);
void strcpy(s32, s32);

s32 func_00218020(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    a6 = 0;
    s2 = a0;
    a1 = (*(volatile s32 *) (u32) (a0 + 28));
    s0 = (*(volatile s32 *) (u32) (a0 + 200));
    a4 = (*(volatile s32 *) (u32) (a0 + 168));
    a2 = (*(volatile s32 *) (u32) (a0 + 172));
    a0 = (*(volatile s32 *) (u32) a4);
    { s32 c_ = a0 == a2; a5 = 0; if (c_) goto L_00218078; }
    v1 = a4;
L_0021805C:;
    v1 = (s32) ((u32) v1 + 0x4U);
    a6 = (s32) ((u32) a6 + 0x1U);
    v0 = (*(volatile s32 *) (u32) v1);
    if (v0 != a2) goto L_0021805C;
L_00218078:;
    v1 = (s32) 0x210000U;
    v1 = (s32) ((u32) v1 + 0x7cd0U);
    if (a0 == v1) goto L_002180A8;
    a3 = a4;
L_0021808C:;
    a3 = (s32) ((u32) a3 + 0x4U);
    a5 = (s32) ((u32) a5 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a3);
    if (v0 != v1) goto L_0021808C;
L_002180A8:;
    v0 = (*(volatile s32 *) (u32) (s2 + 184));
    v0 = (u64) a1 < (u64) v0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) a5 - (u32) a6); if (c_) goto L_002180EC; }
    a3 = 0;
    { s32 c_ = a0 == a2; a1 = 0; if (c_) goto L_002181A4; }
    v1 = a4;
L_002180C8:;
    v1 = (s32) ((u32) v1 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) v1);
    if (v0 != a2) goto L_002180C8;
    goto L_002181A4;
L_002180EC:;
    if (s0 == 0) goto L_0021819C;
    a0 = (s32) ((u32) s2 + 0x58U);
    a1 = s0; strcpy(a0, a1);
    a1 = (*(volatile s32 *) (u32) (s0 + 24));
    a0 = (s32) 0x540000U;
    v1 = (s32) 0x540000U;
    v0 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (s2 + 120)) = (u32) a1;
    a1 = (*(volatile s32 *) (u32) (s0 + 28));
    (*(volatile u32 *) (u32) (s2 + 128)) = (u32) a1;
    (*(volatile u32 *) (u32) (s2 + 124)) = (u32) 0;
    v1 = (*(volatile s16 *) (u32) (v1 + -32162));
    v0 = (*(volatile s16 *) (u32) (v0 + -28234));
    { s32 c_ = v1 != v0; a0 = (s32) ((u32) a0 + 0xffff8250U); if (c_) goto L_0021815C; }
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s16 *) (u32) (a0 + 12));
    v0 = (*(volatile s16 *) (u32) (v0 + -28236));
    if (v1 != v0) goto L_0021815C;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -28240));
    if (v0 >= 0) goto L_002181D8;
L_00218154:;
    v0 = 0; goto L_00218160;
L_0021815C:;
    v0 = 0;
L_00218160:;
    if (v0 == 0) goto L_0021819C;
    v1 = (*(volatile s16 *) (u32) (s2 + 12));
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s16 *) (u32) (s2 + 14));
    v0 = (s32) ((u32) v0 + 0x7b30U);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_0021819C;
    s1 = -126;
L_0021819C:;
    v0 = s1; goto L_002181F8;
L_002181A4:;
    v1 = (s32) 0x210000U;
    v1 = (s32) ((u32) v1 + 0x6990U);
    if (a0 == v1) goto L_002181D0;
L_002181B4:;
    a4 = (s32) ((u32) a4 + 0x4U);
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a4);
    if (v0 != v1) goto L_002181B4;
L_002181D0:;
    s1 = (s32) ((u32) a1 - (u32) a3); goto L_0021819C;
L_002181D8:;
    a1 = (s32) 0x3b0000U;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0xffff9190U); v0 = strcmp(a0, a1);
    if (v0 != 0) goto L_00218154;
    v0 = 1; goto L_00218160;
L_002181F8:;
    return v0;
}
