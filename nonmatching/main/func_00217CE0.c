/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021CA90(s32, s32, s32, s32, s32);
void func_0021CD70(s32, s32);

s32 func_00217CE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    a3 = 3;
    a1 = (s32) ((u32) sp + 0x5cU);
    a2 = (s32) ((u32) sp + 0x58U);
    s3 = a0;
    a0 = 1;
    a4 = s3;
    s0 = (s32) 0x210000U;
    s0 = (s32) ((u32) s0 + 0x6990U); v0 = func_0021CA90(a0, a1, a2, a3, a4);
    s2 = v0;
    v0 = -126;
    if (s2 != v0) goto L_00217F94;
    v0 = (s32) 0x540000U;
    a0 = (*(volatile s16 *) (u32) (s3 + 12));
    a1 = (*(volatile s32 *) (u32) (v0 + -32252));
    a4 = 0;
    v1 = (*(volatile s16 *) (u32) (s3 + 14));
    (*(volatile u16 *) (u32) (sp + 84)) = (u16) a0;
    at = 0 < a1;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 86)) = (u16) v1; if (c_) goto L_00217D58; }
    v0 = (s32) 0x540000U;
    a4 = (*(volatile s32 *) (u32) (v0 + -32256));
L_00217D58:;
    v0 = (s32) 0x540000U;
    a0 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a2 = 0; if (c_) goto L_00217E34; }
    a2 = a1; goto L_00217E34;
L_00217D74:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_00217DC0;
    at = 0 < a2;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_00217DC0; }
L_00217D8C:;
    v0 = (*(volatile s16 *) (u32) (a4 + 2));
    if (v0 != v1) goto L_00217DAC;
    v0 = (*(volatile s16 *) (u32) a4);
    if (v0 != a1) goto L_00217DAC;
    a0 = a4; goto L_00217DC0;
L_00217DAC:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < a2;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_00217D8C; }
L_00217DC0:;
    a1 = (*(volatile s32 *) (u32) (sp + 88));
    { s32 c_ = a1 < 0; s1 = 0; if (c_) goto L_00217E4C; }
    v1 = -255;
    v0 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (v0 + -28240)) = (u32) v1;
L_00217DD8:;
    if (s1 != 0) { (*(volatile u32 *) (u32) (s3 + 32)) = (u32) s1; goto L_00217F00; }
L_00217DE0:;
    v0 = (s32) 0x530000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + 31568));
    if (v0 != v1) goto L_00217F94;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    a4 = 0;
    a0 = (*(volatile s32 *) (u32) (s3 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_00217F68; }
    a1 = a2;
L_00217E10:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_00217E10;
    goto L_00217F68;
L_00217E34:;
    a1 = (*(volatile s16 *) (u32) (sp + 84));
    v0 = -1;
    if (a1 == v0) goto L_00217DC0;
    v1 = (s32) ((u32) sp + 0x56U); goto L_00217D74;
L_00217E4C:;
    v0 = -5;
    if (a1 == v0) { a0 = -255; goto L_00217ECC; }
    { s32 c_ = a1 <= 0; v0 = a1; if (c_) goto L_00217EDC; }
    v0 = 0; goto L_00217EDC;
L_00217E68:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    v1 = (s32) 0x3b0000U;
    a2 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff94e0U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = -125;
    s1 = (*(volatile s32 *) (u32) v1);
    if (s1 == v0) goto L_00217EF0;
    v0 = -124;
    if (s1 == v0) goto L_00217EF0;
    v0 = -127;
    if (s1 == v0) goto L_00217EF0;
L_00217EA4:;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 31568));
    if (v0 != 0) goto L_00217DD8;
    v1 = 1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31568)) = (u32) v1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31572)) = (u32) s1; goto L_00217DD8;
L_00217ECC:;
    v1 = (s32) 0x3b0000U;
    v0 = s2;
    (*(volatile u32 *) (u32) (v1 + -28240)) = (u32) a0; goto L_00217F98;
L_00217EDC:;
    at = a1 < -10;
    if (at == 0) goto L_00217E68;
    v0 = -10; goto L_00217E68;
L_00217EF0:;
    func_0021CD70(a0, a1);
    goto L_00217EA4;
L_00217F00:;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    a0 = (*(volatile s32 *) (u32) (s3 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_00217F38; }
    a1 = a2;
L_00217F1C:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_00217F1C;
L_00217F38:;
    if (v1 == s0) goto L_00217F60;
L_00217F40:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s0) goto L_00217F40;
L_00217F60:;
    s2 = (s32) ((u32) a3 - (u32) a4); goto L_00217DE0;
L_00217F68:;
    if (v1 == s0) goto L_00217F90;
L_00217F70:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s0) goto L_00217F70;
L_00217F90:;
    s2 = (s32) ((u32) a3 - (u32) a4);
L_00217F94:;
    v0 = s2;
L_00217F98:;
    return v0;
}
