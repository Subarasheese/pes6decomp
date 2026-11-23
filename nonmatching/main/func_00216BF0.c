/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021CA90(s32, s32, s32, s32, s32);
void func_0021CD70(s32, s32);
s32 strcmp(s32, s32);

s32 func_00216BF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x540000U;
    v0 = (s32) 0x3b0000U;
    s3 = a0;
    a0 = (s32) 0x540000U;
    a0 = (s32) ((u32) a0 + 0xffff8250U);
    v1 = (*(volatile s16 *) (u32) (v1 + -32162));
    s0 = (s32) 0x210000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -28234));
    { s32 c_ = v1 != v0; s0 = (s32) ((u32) s0 + 0x6990U); if (c_) goto L_00216C5C; }
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s16 *) (u32) (a0 + 12));
    v0 = (*(volatile s16 *) (u32) (v0 + -28236));
    if (v1 != v0) goto L_00216C5C;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -28240));
    if (v0 >= 0) goto L_00216DA0;
L_00216C54:;
    v0 = 0; goto L_00216C60;
L_00216C5C:;
    v0 = 0;
L_00216C60:;
    if (v0 == 0) { a0 = 1; goto L_00216C88; }
    a0 = 1;
    a1 = (s32) ((u32) sp + 0x5cU);
    a2 = (s32) ((u32) sp + 0x58U);
    a3 = 4;
    a4 = s3; v0 = func_0021CA90(a0, a1, a2, a3, a4);
    v1 = -126; goto L_00216CA0;
L_00216C88:;
    a1 = (s32) ((u32) sp + 0x5cU);
    a2 = (s32) ((u32) sp + 0x58U);
    a3 = 3;
    a4 = s3; v0 = func_0021CA90(a0, a1, a2, a3, a4);
    v1 = -126;
L_00216CA0:;
    { s32 c_ = v0 != v1; s2 = v0; if (c_) goto L_00216F04; }
    v0 = (s32) 0x540000U;
    a0 = (*(volatile s16 *) (u32) (s3 + 12));
    a1 = (*(volatile s32 *) (u32) (v0 + -32252));
    a4 = 0;
    v1 = (*(volatile s16 *) (u32) (s3 + 14));
    (*(volatile u16 *) (u32) (sp + 84)) = (u16) a0;
    at = 0 < a1;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 86)) = (u16) v1; if (c_) goto L_00216CD4; }
    v0 = (s32) 0x540000U;
    a4 = (*(volatile s32 *) (u32) (v0 + -32256));
L_00216CD4:;
    v0 = (s32) 0x540000U;
    a0 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a2 = 0; if (c_) goto L_00216DC0; }
    a2 = a1; goto L_00216DC0;
L_00216CF0:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_00216D38;
    at = 0 < a2;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_00216D38; }
L_00216D08:;
    v0 = (*(volatile s16 *) (u32) (a4 + 2));
    if (v0 != v1) goto L_00216D28;
    v0 = (*(volatile s16 *) (u32) a4);
    if (v0 != a1) goto L_00216D28;
    a0 = a4; goto L_00216D38;
L_00216D28:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < a2;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_00216D08; }
L_00216D38:;
    a1 = (*(volatile s32 *) (u32) (sp + 88));
    { s32 c_ = a1 < 0; s1 = 0; if (c_) goto L_00216DD8; }
L_00216D44:;
    if (s1 != 0) { (*(volatile u32 *) (u32) (s3 + 32)) = (u32) s1; goto L_00216E70; }
L_00216D4C:;
    v0 = (s32) 0x530000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + 31568));
    if (v0 != v1) goto L_00216F04;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    a4 = 0;
    a0 = (*(volatile s32 *) (u32) (s3 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_00216ED8; }
    a1 = a2;
L_00216D7C:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_00216D7C;
    goto L_00216ED8;
L_00216DA0:;
    a1 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) s3 + 0x58U);
    a1 = (s32) ((u32) a1 + 0xffff9190U); v0 = strcmp(a0, a1);
    if (v0 != 0) goto L_00216C54;
    v0 = 1; goto L_00216C60;
L_00216DC0:;
    a1 = (*(volatile s16 *) (u32) (sp + 84));
    v0 = -1;
    if (a1 == v0) goto L_00216D38;
    v1 = (s32) ((u32) sp + 0x56U); goto L_00216CF0;
L_00216DD8:;
    { s32 c_ = a1 <= 0; v0 = a1; if (c_) goto L_00216E4C; }
    v0 = 0; goto L_00216E4C;
L_00216DE8:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    v1 = (s32) 0x3b0000U;
    a2 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff95a0U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = -125;
    s1 = (*(volatile s32 *) (u32) v1);
    if (s1 == v0) goto L_00216E60;
    v0 = -124;
    if (s1 == v0) goto L_00216E60;
    v0 = -127;
    if (s1 == v0) goto L_00216E60;
L_00216E24:;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 31568));
    if (v0 != 0) goto L_00216D44;
    v1 = 1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31568)) = (u32) v1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31572)) = (u32) s1; goto L_00216D44;
L_00216E4C:;
    at = a1 < -10;
    if (at == 0) goto L_00216DE8;
    v0 = -10; goto L_00216DE8;
L_00216E60:;
    func_0021CD70(a0, a1);
    goto L_00216E24;
L_00216E70:;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    a0 = (*(volatile s32 *) (u32) (s3 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_00216EA8; }
    a1 = a2;
L_00216E8C:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_00216E8C;
L_00216EA8:;
    if (v1 == s0) goto L_00216ED0;
L_00216EB0:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s0) goto L_00216EB0;
L_00216ED0:;
    s2 = (s32) ((u32) a3 - (u32) a4); goto L_00216D4C;
L_00216ED8:;
    if (v1 == s0) goto L_00216F00;
L_00216EE0:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s0) goto L_00216EE0;
L_00216F00:;
    s2 = (s32) ((u32) a3 - (u32) a4);
L_00216F04:;
    v0 = s2;
    return v0;
}
