/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0021BB50(s32);
s32 func_0021CF90(s32, s32);
s32 strcmp(s32, s32);

s32 func_0021AA50(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 frame[30];
    s32 sp = (s32) (u32) frame;

    v0 = -126;
    a4 = 0;
    s5 = a0;
    a1 = (*(volatile s16 *) (u32) (a0 + 12));
    v1 = (*(volatile s16 *) (u32) (a0 + 14));
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) v0;
    v0 = (s32) 0x540000U;
    (*(volatile u16 *) (u32) (sp + 236)) = (u16) a1;
    a0 = (*(volatile s32 *) (u32) (v0 + -32252));
    at = 0 < a0;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 238)) = (u16) v1; if (c_) goto L_0021AAB4; }
    v0 = (s32) 0x540000U;
    a4 = (*(volatile s32 *) (u32) (v0 + -32256));
L_0021AAB4:;
    v0 = (s32) 0x540000U;
    a3 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a1 = 0; if (c_) goto L_0021ABBC; }
    a1 = a0; goto L_0021ABBC;
    v1 = (s32) ((u32) sp + 0xeeU);
L_0021AAD4:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_0021AB20;
    at = 0 < a1;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_0021AB20; }
L_0021AAEC:;
    v0 = (*(volatile s16 *) (u32) (a4 + 2));
    if (v0 != v1) goto L_0021AB0C;
    v0 = (*(volatile s16 *) (u32) a4);
    if (v0 != a0) goto L_0021AB0C;
    a3 = a4; goto L_0021AB20;
L_0021AB0C:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < a1;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_0021AAEC; }
L_0021AB20:;
    s4 = (*(volatile s32 *) (u32) (s5 + 16));
    v0 = (*(volatile s32 *) (u32) (s5 + 204));
    a0 = 0;
    v1 = (*(volatile s16 *) (u32) (a3 + 4));
    s6 = (*(volatile s32 *) (u32) (s5 + 208));
    s0 = (*(volatile s32 *) (u32) (s4 + 24));
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v0;
    v0 = 2;
    { s32 c_ = v1 != v0; (*(volatile u32 *) (u32) (sp + 192)) = (u32) 0; if (c_) goto L_0021AB4C; }
    a0 = 1;
L_0021AB4C:;
    if (a0 != 0) goto L_0021ABD4;
L_0021AB54:;
    v0 = (*(volatile s32 *) (u32) (sp + 192));
L_0021AB58:;
    v1 = -120;
    if (v0 == v1) goto L_0021ADA0;
L_0021AB64:;
    v0 = -126;
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (sp + 192));
    if (v0 == 0) goto L_0021ADC4;
    (*(volatile u32 *) (u32) (s5 + 32)) = (u32) v0;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s5 + 168));
    v1 = (*(volatile s32 *) (u32) (s5 + 172));
    a0 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = a0 == v1; a3 = 0; if (c_) goto L_0021ADCC; }
    a1 = a2;
L_0021AB98:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != v1) goto L_0021AB98;
    goto L_0021ADCC;
L_0021ABBC:;
    a0 = (*(volatile s16 *) (u32) (sp + 236));
    v0 = -1;
    if (a0 == v0) goto L_0021AB20;
    v1 = (s32) ((u32) sp + 0xeeU); goto L_0021AAD4;
L_0021ABD4:;
    a0 = s4;
    a1 = 0; v0 = func_0021CF90(a0, a1);
    s2 = (*(volatile s32 *) (u32) (sp + 176));
    s3 = v0;
    v0 = 0 < s6;
    s7 = 0;
    { s32 c_ = v0 != 0; s1 = 0; if (c_) goto L_0021AD00; }
L_0021ABF8:;
    if (s7 == 0) goto L_0021AD34;
    v0 = (s32) 0x3b0000U;
    s7 = (*(volatile s32 *) (u32) (v0 + -28288));
    { s32 c_ = s7 == 0; fp = 0; if (c_) goto L_0021AC60; }
    if (s4 == 0) goto L_0021AC60;
    s2 = (*(volatile s32 *) (u32) (s4 + 28));
    at = 0 < s0;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_0021AC60; }
    s3 = 0;
L_0021AC2C:;
    a1 = (s32) ((u32) s2 + (u32) s3);
    a0 = s7; v0 = strcmp(a0, a1);
    if (v0 != 0) goto L_0021AC48;
    fp = s2; goto L_0021AC60;
L_0021AC48:;
    s1 = (s32) ((u32) s1 + 0x1U);
    s3 = (s32) ((u32) s3 + 0x20U);
    v0 = s1 < s0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x20U); if (c_) goto L_0021AC2C; }
L_0021AC60:;
    if (fp == 0) goto L_0021AB54;
    s7 = 2;
L_0021AC6C:;
    a0 = s4;
    a1 = s7; v0 = func_0021CF90(a0, a1);
    s1 = v0;
    { s32 c_ = s1 == 0; s3 = 0; if (c_) goto L_0021ACE0; }
    if (s4 == 0) goto L_0021ACE0;
    s2 = (*(volatile s32 *) (u32) (s4 + 28));
    at = 0 < s0;
    { s32 c_ = at == 0; fp = 0; if (c_) goto L_0021ACE0; }
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) 0;
L_0021ACA0:;
    v0 = (*(volatile s32 *) (u32) (sp + 160));
    a0 = s1;
    a1 = (s32) ((u32) s2 + (u32) v0); v0 = strcmp(a0, a1);
    if (v0 != 0) goto L_0021ACC0;
    s3 = s2; goto L_0021ACE0;
L_0021ACC0:;
    v0 = (*(volatile s32 *) (u32) (sp + 160));
    fp = (s32) ((u32) fp + 0x1U);
    v0 = (s32) ((u32) v0 + 0x20U);
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) v0;
    v0 = fp < s0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x20U); if (c_) goto L_0021ACA0; }
L_0021ACE0:;
    if (s3 == 0) goto L_0021AD40;
L_0021ACE8:;
    s7 = (s32) ((u32) s7 + 0x1U);
    at = s7 < 5;
    if (at != 0) goto L_0021AC6C;
    v0 = (*(volatile s32 *) (u32) (sp + 192)); goto L_0021AB58;
L_0021AD00:;
    a0 = s3;
    a1 = (s32) ((u32) s2 + 0x20U); v0 = strcmp(a0, a1);
    if (v0 != 0) goto L_0021AD1C;
    s7 = s2; goto L_0021ABF8;
L_0021AD1C:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s6;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x40U); if (c_) goto L_0021AD00; }
    goto L_0021ABF8;
L_0021AD34:;
    v0 = -120;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) v0; goto L_0021AB54;
L_0021AD40:;
    s2 = (*(volatile s32 *) (u32) (sp + 176));
    v0 = 0 < s6;
    fp = 0;
    { s32 c_ = v0 != 0; s3 = 0; if (c_) goto L_0021AD6C; }
L_0021AD58:;
    if (fp != 0) goto L_0021ACE8;
    v0 = -120;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) v0; goto L_0021AB54;
L_0021AD6C:;
    a0 = s1;
    a1 = (s32) ((u32) s2 + 0x20U); v0 = strcmp(a0, a1);
    if (v0 != 0) goto L_0021AD88;
    fp = s2; goto L_0021AD58;
L_0021AD88:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s6;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x40U); if (c_) goto L_0021AD6C; }
    goto L_0021AD58;
L_0021ADA0:;
    v1 = (*(volatile s32 *) (u32) (s5 + 52));
    v0 = 16;
    v1 = v1 & 0x10;
    if (v1 != v0) goto L_0021AB64;
    v0 = 1;
    a0 = s5;
    (*(volatile u32 *) (u32) (s5 + 180)) = (u32) v0; func_0021BB50(a0);
L_0021ADC4:;
    v0 = (*(volatile s32 *) (u32) (sp + 208)); goto L_0021AE08;
L_0021ADCC:;
    v1 = (s32) 0x220000U;
    v1 = (s32) ((u32) v1 + 0xffff87c0U);
    if (a0 == v1) goto L_0021ADF8;
L_0021ADDC:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != v1) goto L_0021ADDC;
L_0021ADF8:;
    v0 = (s32) ((u32) a3 - (u32) a4);
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) v0;
    goto L_0021ADC4;
L_0021AE08:;
    return v0;
}
