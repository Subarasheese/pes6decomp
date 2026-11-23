/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008BCD10(s32, s32, s32);

void func_008BCB20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) ((u32) a1 + 0x6U);
    if (v1 == 0) goto L_008BCD04;
    a3 = (*(volatile s8 *) (u32) (v1 + 12));
    if (a3 <= 0) { ; goto L_008BCD08; }
    a2 = (*(volatile s8 *) (u32) (v1 + 10));
    if (a2 > 0) { a6 = 0; goto L_008BCB74; }
    a2 = (*(volatile s8 *) (u32) (v1 + 11));
    if (a2 > 0) goto L_008BCB70;
    at = a3 < 2;
    if (at == 0) goto L_008BCB70;
    a2 = (*(volatile s8 *) (u32) (v1 + 9));
    at = a2 < 2;
    if (at != 0) goto L_008BCD04;
L_008BCB70:;
    a6 = 0;
L_008BCB74:;
    a5 = (s32) ((u32) sp + 0x10U);
L_008BCB78:;
    a4 = (s32) ((u32) v1 + (u32) a6);
    a3 = (*(volatile s8 *) (u32) a4);
    a6 = (s32) ((u32) a6 + 0x7U);
    a2 = a6 < 14;
    (*(volatile u8 *) (u32) a5) = (u8) a3;
    a3 = (*(volatile s8 *) (u32) (a4 + 1));
    (*(volatile u8 *) (u32) (a5 + 1)) = (u8) a3;
    a3 = (*(volatile s8 *) (u32) (a4 + 2));
    (*(volatile u8 *) (u32) (a5 + 2)) = (u8) a3;
    a3 = (*(volatile s8 *) (u32) (a4 + 3));
    (*(volatile u8 *) (u32) (a5 + 3)) = (u8) a3;
    a3 = (*(volatile s8 *) (u32) (a4 + 4));
    (*(volatile u8 *) (u32) (a5 + 4)) = (u8) a3;
    a3 = (*(volatile s8 *) (u32) (a4 + 5));
    (*(volatile u8 *) (u32) (a5 + 5)) = (u8) a3;
    a3 = (*(volatile s8 *) (u32) (a4 + 6));
    (*(volatile u8 *) (u32) (a5 + 6)) = (u8) a3;
    { s32 c_ = a2 != 0; a5 = (s32) ((u32) a5 + 0x7U); if (c_) goto L_008BCB78; }
    a2 = (*(volatile s8 *) (u32) (v1 + 5));
    at = a2 < 2;
    if (at == 0) { a2 = (*(volatile s8 *) (u32) (v1 + 7)); goto L_008BCC24; }
    a2 = (s32) ((u32) a2 + 0x1U);
    (*(volatile u8 *) (u32) (v1 + 5)) = (u8) a2;
    a5 = (*(volatile s8 *) (u32) (v1 + 7));
    if (a5 <= 0) { a2 = (*(volatile s8 *) (u32) (v1 + 12)); goto L_008BCC80; }
    a4 = (*(volatile s8 *) (u32) (v1 + 10));
    a3 = (*(volatile s8 *) (u32) (v1 + 11));
    a2 = (*(volatile s8 *) (u32) (v1 + 12));
    a3 = (s32) ((u32) a4 + (u32) a3);
    a2 = (s32) ((u32) a2 + (u32) a3);
    at = a2 < 3;
    if (at == 0) goto L_008BCC7C;
    v0 = (s32) ((u32) a5 + 0xffffffffU);
    a2 = (s32) ((u32) sp + 0x10U);
    (*(volatile u8 *) (u32) (v1 + 7)) = (u8) v0; func_008BCD10(a0, a1, a2);
    goto L_008BCD04;
    a2 = (*(volatile s8 *) (u32) (v1 + 7));
L_008BCC24:;
    at = a2 < 2;
    if (at == 0) { a2 = (*(volatile s8 *) (u32) (v1 + 10)); goto L_008BCC40; }
    a2 = (s32) ((u32) a2 + 0x1U);
    (*(volatile u8 *) (u32) (v1 + 7)) = (u8) a2; goto L_008BCC7C;
    a2 = (*(volatile s8 *) (u32) (v1 + 10));
L_008BCC40:;
    if (a2 > 0) { a2 = (*(volatile s8 *) (u32) (v1 + 9)); goto L_008BCC68; }
    a2 = (*(volatile s8 *) (u32) (v1 + 11));
    if (a2 > 0) goto L_008BCC64;
    a2 = (*(volatile s8 *) (u32) (v1 + 12));
    at = a2 < 2;
    if (at != 0) goto L_008BCD04;
L_008BCC64:;
    a2 = (*(volatile s8 *) (u32) (v1 + 9));
L_008BCC68:;
    at = a2 < 2;
    if (at == 0) goto L_008BCD04;
    a2 = (s32) ((u32) a2 + 0x1U);
    (*(volatile u8 *) (u32) (v1 + 9)) = (u8) a2;
L_008BCC7C:;
    a2 = (*(volatile s8 *) (u32) (v1 + 12));
L_008BCC80:;
    at = a2 < 2;
    if (at != 0) { a2 = (*(volatile s8 *) (u32) (v1 + 11)); goto L_008BCC9C; }
    v0 = (s32) ((u32) a2 + 0xffffffffU);
    (*(volatile u8 *) (u32) (v1 + 12)) = (u8) v0; goto L_008BCCFC;
    a2 = (*(volatile s8 *) (u32) (v1 + 11));
L_008BCC9C:;
    if (a2 <= 0) { a2 = (*(volatile s8 *) (u32) (v1 + 10)); goto L_008BCCB4; }
    v0 = (s32) ((u32) a2 + 0xffffffffU);
    (*(volatile u8 *) (u32) (v1 + 11)) = (u8) v0; goto L_008BCCFC;
    a2 = (*(volatile s8 *) (u32) (v1 + 10));
L_008BCCB4:;
    at = a2 < 2;
    if (at != 0) goto L_008BCCD4;
    (*(volatile u8 *) (u32) (v1 + 10)) = (u8) 0;
    v0 = (*(volatile s8 *) (u32) (v1 + 12));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (v1 + 12)) = (u8) v0; goto L_008BCCFC;
L_008BCCD4:;
    if (a2 <= 0) { a2 = (*(volatile s8 *) (u32) (v1 + 9)); goto L_008BCCE8; }
    (*(volatile u8 *) (u32) (v1 + 10)) = (u8) 0; goto L_008BCCFC;
    a2 = (*(volatile s8 *) (u32) (v1 + 9));
L_008BCCE8:;
    at = a2 < 2;
    if (at != 0) goto L_008BCD04;
    v0 = (s32) ((u32) a2 + 0xffffffffU);
    (*(volatile u8 *) (u32) (v1 + 9)) = (u8) v0;
L_008BCCFC:;
    a2 = (s32) ((u32) sp + 0x10U); func_008BCD10(a0, a1, a2);
L_008BCD04:;
L_008BCD08:;
    return;
}
