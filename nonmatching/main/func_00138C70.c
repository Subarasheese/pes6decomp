/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001454C0(s64);
s64 func_00145FD0(s64, s64, s64);
s64 func_00147D40(s64);
s64 func_00147D70(s64);
s64 func_00149E10(s64, s64, s64);

s64 func_00138C70(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    v0 = 6;
    v1 = (s64) ((u64) v0 << 32);
    v0 = (s32) 0x64020000U;
    v0 = v0 | v1;
    v1 = (s32) 0x400000U;
    s4 = a1;
    s5 = a0;
    s3 = a2;
    s1 = 0;
    { s32 c_ = s4 != 0; (*(volatile u64 *) (u32) (v1 + -15296)) = (u64) v0; if (c_) goto L_00138CD0; }
    if (s3 != 0) goto L_00138CD0;
    goto L_00138EDC;
L_00138CD0:;
    if (s4 == 0) { v0 = 0; goto L_00138CE0; }
    a0 = s4; v0 = func_001454C0(a0);
L_00138CE0:;
    { s32 c_ = s3 == 0; s2 = v0; if (c_) goto L_00138CF8; }
    a0 = s3; v0 = func_001454C0(a0);
    s6 = v0; goto L_00138D00;
L_00138CF8:;
    v0 = 0;
    s6 = v0;
L_00138D00:;
    if (s2 == 0) goto L_00138D3C;
L_00138D08:;
    a1 = (*(volatile s32 *) (u32) s5);
    v0 = a1 & 0xc;
    if (v0 == 0) goto L_00138D58;
L_00138D18:;
    (*(volatile u32 *) (u32) a1) = (u32) 0;
    a1 = (s32) ((u32) a1 + 0x4U);
    v0 = a1 & 0xc;
    if (v0 != 0) goto L_00138D18;
    a0 = (*(volatile s32 *) (u32) (s5 + 8)); goto L_00138D5C;
L_00138D3C:;
    if (v0 != 0) goto L_00138D08;
    v1 = 6;
    v0 = (s32) 0x64020000U;
    v1 = (s64) ((u64) v1 << 32);
    v0 = v0 | v1; goto L_00138ED8;
L_00138D58:;
    a0 = (*(volatile s32 *) (u32) (s5 + 8));
L_00138D5C:;
    if (a0 == 0) goto L_00138D88;
    v1 = (s32) ((u32) a1 - (u32) a0);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 4; if (c_) goto L_00138D78; }
    v0 = (s32) ((u32) v1 + 0xfU);
    v0 = (s32) v0 >> 4;
L_00138D78:;
    v1 = (s32) ((u32) v0 + 0xffffffffU);
    v0 = (*(volatile s32 *) (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
L_00138D88:;
    (*(volatile u32 *) (u32) s5) = (u32) a1;
    v0 = (s32) 0x10000000U;
    (*(volatile u32 *) (u32) (s5 + 8)) = (u32) 0;
    s0 = (*(volatile s32 *) (u32) s5);
    v1 = (s32) ((u32) s0 + 0x10U);
    (*(volatile u32 *) (u32) s5) = (u32) v1;
    { u32 a_ = (u32) (s0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { s32 c_ = s2 == 0; (*(volatile u32 *) (u32) s0) = (u32) v0; if (c_) goto L_00138E38; }
    a1 = s2;
    a0 = s5;
    a2 = (s32) ((u32) sp + 0x8cU); v0 = func_00149E10(a0, a1, a2);
    s1 = s1 | v0;
L_00138DC0:;
    if (s6 == 0) { a0 = s3; goto L_00138E4C; }
    a1 = s6;
    a0 = s5;
    a2 = (s32) ((u32) sp + 0x88U); v0 = func_00145FD0(a0, a1, a2);
    s1 = s1 | v0;
L_00138DDC:;
    v0 = (*(volatile s32 *) (u32) (sp + 140));
    if (v0 != 0) goto L_00138DF4;
    v0 = (*(volatile s32 *) (u32) (sp + 136));
    if (v0 == 0) goto L_00138E28;
L_00138DF4:;
    a1 = (*(volatile s32 *) (u32) s5);
    v0 = a1 & 0xc;
    if (v0 == 0) goto L_00138E60;
L_00138E04:;
    (*(volatile u32 *) (u32) a1) = (u32) 0;
    a1 = (s32) ((u32) a1 + 0x4U);
    v0 = a1 & 0xc;
    if (v0 != 0) goto L_00138E04;
    a0 = (*(volatile s32 *) (u32) (s5 + 8)); goto L_00138E64;
L_00138E28:;
    v1 = (s32) 0x400000U;
    v0 = s1;
    (*(volatile u64 *) (u32) (v1 + -15296)) = (u64) s1; goto L_00138ED8;
L_00138E38:;
    a0 = s4; v0 = func_00147D70(a0);
    s1 = s1 | v0;
    (*(volatile u32 *) (u32) (sp + 140)) = (u32) 0; goto L_00138DC0;
L_00138E4C:;
    v0 = func_00147D40(a0);
    s1 = s1 | v0;
    (*(volatile u32 *) (u32) (sp + 136)) = (u32) 0; goto L_00138DDC;
L_00138E60:;
    a0 = (*(volatile s32 *) (u32) (s5 + 8));
L_00138E64:;
    if (a0 == 0) goto L_00138E90;
    v1 = (s32) ((u32) a1 - (u32) a0);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 4; if (c_) goto L_00138E80; }
    v0 = (s32) ((u32) v1 + 0xfU);
    v0 = (s32) v0 >> 4;
L_00138E80:;
    v1 = (s32) ((u32) v0 + 0xffffffffU);
    v0 = (*(volatile s32 *) (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
L_00138E90:;
    (*(volatile u32 *) (u32) s5) = (u32) a1;
    v0 = (s32) 0x30000000U;
    (*(volatile u32 *) (u32) (s5 + 8)) = (u32) 0;
    a1 = v0 | 0x2;
    a3 = (*(volatile s32 *) (u32) s5);
    a0 = (s32) 0x370000U;
    v1 = (s32) 0x50000000U;
    a0 = (s32) ((u32) a0 + 0x5ce0U);
    v1 = v1 | 0x2;
    v0 = (s32) 0x13000000U;
    a2 = (s32) ((u32) a3 + 0x10U);
    (*(volatile u32 *) (u32) s5) = (u32) a2;
    (*(volatile u32 *) (u32) a3) = (u32) a1;
    (*(volatile u32 *) (u32) (a3 + 4)) = (u32) a0;
    (*(volatile u32 *) (u32) (a3 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (a3 + 12)) = (u32) v1;
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v0; goto L_00138E28;
L_00138ED8:;
L_00138EDC:;
    return v0;
}
