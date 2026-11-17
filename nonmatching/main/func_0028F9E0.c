/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0028FC70(s32, s32, s32, s32);
s32 func_0028FD10(s32, s32, s32, s32);
s32 func_002937A0(s32, s32, s32, s32);

s32 func_0028F9E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) ((u32) sp + 0xb0U);
    fp = a1;
    s7 = a3;
    s6 = a0;
    s5 = a2;
    s4 = 0;
    a0 = 0;
L_0028FA28:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    a0 = (s32) ((u32) a0 + 0x7U);
    (*(volatile u8 *) (u32) (v1 + 1)) = (u8) 0;
    v0 = a0 < 14;
    (*(volatile u8 *) (u32) (v1 + 2)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 3)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 5)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 6)) = (u8) 0;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x7U); if (c_) goto L_0028FA28; }
    s1 = 0;
    s3 = (s32) ((u32) sp + 0xa0U);
    s2 = s6;
L_0028FA60:;
    s0 = (s32) ((u32) s5 + (u32) s1);
    a0 = (*(volatile u8 *) (u32) s0); v0 = func_002937A0(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) s3) = (u8) v0;
    v1 = (s32) ((u32) fp + (u32) s1);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != 0) { v1 = (*(volatile u8 *) (u32) s3); goto L_0028FBF8; }
L_0028FA80:;
    a3 = 0;
    a2 = s2;
    a5 = (s32) 0x3e0000U;
    a6 = (s32) 0x3e0000U;
    v1 = (s32) 0x3e0000U;
    a0 = 1;
    a5 = (s32) ((u32) a5 + 0xffff9da0U);
    a6 = (s32) ((u32) a6 + 0xffff9d60U);
    v1 = (s32) ((u32) v1 + 0xffff9de0U);
    a1 = 2;
L_0028FAA8:;
    { s32 c_ = a3 == a1; a4 = (*(volatile u8 *) (u32) s3); if (c_) goto L_0028FAD8; }
    if (a3 == a0) goto L_0028FAC0;
    goto L_0028FAF0;
L_0028FAC0:;
    a4 = a4 & 0xff;
    a4 = (s32) ((u32) a4 << 2);
    a4 = (s32) ((u32) v1 + (u32) a4);
    a4 = (*(volatile s32 *) (u32) a4); goto L_0028FB00;
L_0028FAD8:;
    a4 = a4 & 0xff;
    a4 = (s32) ((u32) a4 << 2);
    a4 = (s32) ((u32) a6 + (u32) a4);
    a4 = (*(volatile s32 *) (u32) a4); goto L_0028FB00;
L_0028FAF0:;
    a4 = a4 & 0xff;
    a4 = (s32) ((u32) a4 << 2);
    a4 = (s32) ((u32) a5 + (u32) a4);
    a4 = (*(volatile s32 *) (u32) a4);
L_0028FB00:;
    (*(volatile u32 *) (u32) a2) = (u32) a4;
    a3 = (s32) ((u32) a3 + 0x1U);
    a4 = a3 < 3;
    { s32 c_ = a4 != 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_0028FAA8; }
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = 3;
    if (a0 != v1) goto L_0028FB28;
    s4 = 1;
L_0028FB28:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 11;
    s3 = (s32) ((u32) s3 + 0x1U);
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0xcU); if (c_) goto L_0028FA60; }
    v1 = (*(volatile u8 *) (u32) (sp + 179));
    if (v1 <= 0) goto L_0028FBD8;
    v1 = (s32) 0xffbf0000U;
    a5 = 0;
    a6 = s6;
    a1 = 1;
    a2 = 7;
    a3 = 2;
    a0 = v1 | 0xffff;
    a4 = 6;
L_0028FB68:;
    v1 = (s32) ((u32) s5 + (u32) a5);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == a4) goto L_0028FBA0;
    if (v1 == a3) goto L_0028FBA0;
    if (v1 == a2) goto L_0028FB98;
    if (v1 == a1) goto L_0028FB98;
    goto L_0028FBC8;
L_0028FB98:;
    if (s4 == 0) goto L_0028FBC8;
L_0028FBA0:;
    v1 = (*(volatile s32 *) (u32) a6);
    v1 = v1 & a0;
    (*(volatile u32 *) (u32) a6) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a6 + 4));
    v1 = v1 & a0;
    (*(volatile u32 *) (u32) (a6 + 4)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a6 + 8));
    v1 = v1 & a0;
    (*(volatile u32 *) (u32) (a6 + 8)) = (u32) v1;
L_0028FBC8:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = a5 < 11;
    { s32 c_ = v1 != 0; a6 = (s32) ((u32) a6 + 0xcU); if (c_) goto L_0028FB68; }
L_0028FBD8:;
    a1 = (*(volatile u8 *) (u32) (sp + 188));
    if (a1 > 0) goto L_0028FC10;
    a1 = (*(volatile u8 *) (u32) (sp + 181));
L_0028FBE8:;
    if (a1 > 0) { a0 = s6; goto L_0028FC28; }
L_0028FBF0:;
    goto L_0028FC3C;
L_0028FBF8:;
    a0 = (s32) ((u32) v1 + (u32) sp);
    v1 = (*(volatile u8 *) (u32) (a0 + 176));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (a0 + 176)) = (u8) v1; goto L_0028FA80;
L_0028FC10:;
    a0 = s6;
    a2 = (s32) ((u32) sp + 0xa0U);
    a3 = s7; v0 = func_0028FD10(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (sp + 181)); goto L_0028FBE8;
L_0028FC28:;
    a3 = s7;
    a2 = (s32) ((u32) sp + 0xa0U); v0 = func_0028FC70(a0, a1, a2, a3);
    goto L_0028FBF0;
L_0028FC3C:;
    return v0;
}
