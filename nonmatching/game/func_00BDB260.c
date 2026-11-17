/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00BDB260(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0;

    a0 = (*(volatile s32 *) (u32) a0);
    a2 = (s32) 0xcc0000U;
    v0 = 0;
    v1 = 0;
    a2 = (s32) ((u32) a2 + 0xffffd558U);
    a1 = (*(volatile u8 *) (u32) a0);
L_00BDB278:;
    a0 = (*(volatile u8 *) (u32) (a2 + 4));
    if (a1 != a0) { v1 = (s32) ((u32) v1 + 0x1U); goto L_00BDB398; }
    a0 = (s32) 0xcc0000U;
    a0 = (*(volatile u8 *) (u32) (a0 + -13615));
    a0 = (s32) ((u32) a0 + 0xffffff98U);
    at = (u64) a0 < (u64) (s64) 8;
    if (at == 0) goto L_00BDB3A8;
    a1 = (s32) 0xcb0000U;
    a0 = (s32) ((u32) a0 << 2);
    a1 = (s32) ((u32) a1 + 0x25b0U);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    { u32 t_ = (u32) a0; ; if (t_ == 0xbdb2b8U) goto L_00BDB2B8; if (t_ == 0xbdb2d4U) goto L_00BDB2D4; if (t_ == 0xbdb2f0U) goto L_00BDB2F0; if (t_ == 0xbdb30cU) goto L_00BDB30C; if (t_ == 0xbdb328U) goto L_00BDB328; if (t_ == 0xbdb344U) goto L_00BDB344; if (t_ == 0xbdb360U) goto L_00BDB360; if (t_ == 0xbdb37cU) goto L_00BDB37C; }
L_00BDB2B8:;
    a0 = (s32) ((u32) v1 << 2);
    v0 = (s32) 0xca0000U;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0xffffe9f0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_00BDB3A8;
L_00BDB2D4:;
    a0 = (s32) ((u32) v1 << 2);
    v0 = (s32) 0xca0000U;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0xffffea60U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_00BDB3A8;
L_00BDB2F0:;
    a0 = (s32) ((u32) v1 << 2);
    v0 = (s32) 0xca0000U;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0xffffeaf0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_00BDB3A8;
L_00BDB30C:;
    a0 = (s32) ((u32) v1 << 2);
    v0 = (s32) 0xca0000U;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0xffffeb60U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_00BDB3A8;
L_00BDB328:;
    a0 = (s32) ((u32) v1 << 2);
    v0 = (s32) 0xca0000U;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0xffffebd0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_00BDB3A8;
L_00BDB344:;
    a0 = (s32) ((u32) v1 << 2);
    v0 = (s32) 0xca0000U;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0xffffec40U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_00BDB3A8;
L_00BDB360:;
    a0 = (s32) ((u32) v1 << 2);
    v0 = (s32) 0xca0000U;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0xffffec80U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_00BDB3A8;
L_00BDB37C:;
    a0 = (s32) ((u32) v1 << 2);
    v0 = (s32) 0xca0000U;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0xffffecf0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_00BDB3A8;
L_00BDB398:;
    a0 = v1 < 7;
    { s32 c_ = a0 != 0; a2 = (s32) ((u32) a2 + 0x1U); if (c_) goto L_00BDB278; }
L_00BDB3A8:;
    return v0;
}
