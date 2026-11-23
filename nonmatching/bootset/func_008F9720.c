/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002F1420(s32, s32);
void func_002F1800(s32, s32);

void func_008F9720(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0x900000U;
    v1 = (s32) ((u32) v1 + 0xffffb030U);
    s2 = a1;
    a1 = (s32) ((u32) a0 << 3);
    a1 = (s32) ((u32) a1 - (u32) a0);
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 3);
    { s32 c_ = s2 < 0; s0 = (s32) ((u32) v1 + (u32) a0); if (c_) goto L_008F9770; }
    if (s2 > 0) goto L_008F9770;
    s1 = 0; goto L_008F9798;
L_008F9770:;
    if (s2 <= 0) { s1 = 2; goto L_008F9794; }
    at = s2 < 9;
    if (at == 0) goto L_008F9790;
    s1 = 1;
    s2 = (s32) ((u32) s2 + 0xffffffffU); goto L_008F9798;
L_008F9790:;
    s1 = 2;
L_008F9794:;
    s2 = (s32) ((u32) s2 + 0xfffffff7U);
L_008F9798:;
    a2 = (*(volatile s32 *) (u32) s0);
    if (a2 == 0) { a0 = (*(volatile s32 *) (u32) s0); goto L_008F984C; }
    v1 = 2;
    if (s1 == v1) goto L_008F97CC;
    v1 = 1;
    if (s1 == v1) goto L_008F9848;
    if (s1 == 0) goto L_008F9848;
    goto L_008F9848;
L_008F97CC:;
    if (a2 == 0) goto L_008F9848;
    at = s2 < 10;
    if (at != 0) goto L_008F97E8;
    a0 = 9; goto L_008F97F8;
L_008F97E8:;
    if (s2 >= 0) { a0 = s2; goto L_008F97F8; }
    a0 = 0; goto L_008F97F8;
L_008F97F8:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (*(volatile s8 *) (u32) (a2 + 8));
    v0 = (s32) ((u32) v0 + (u32) a0);
    a1 = 0;
    v0 = (s32) ((u32) v0 << 1);
    a0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v1 << 5);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a2 + (u32) v0);
    v0 = (s32) ((u32) a0 + (u32) v0);
    s3 = (s32) ((u32) v0 + 0x21cU);
    a0 = s3; func_002F1800(a0, a1);
    a0 = s3;
    a1 = (s32) ((u32) gp + 0xffff8620U); func_002F1420(a0, a1);
L_008F9848:;
    a0 = (*(volatile s32 *) (u32) s0);
L_008F984C:;
    if (a0 == 0) { ; goto L_008F9910; }
    v1 = 2;
    if (s1 == v1) goto L_008F987C;
    v1 = 1;
    if (s1 == v1) goto L_008F990C;
    if (s1 == 0) goto L_008F990C;
    goto L_008F990C;
L_008F987C:;
    if (a0 == 0) goto L_008F990C;
    v0 = (*(volatile s8 *) (u32) (a0 + 8));
    v0 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = v0 >= 0; v1 = v0 & 0x1; if (c_) goto L_008F98A0; }
    if (v1 == 0) { v0 = (s32) ((u32) v1 << 5); goto L_008F98A4; }
    v1 = (s32) ((u32) v1 + 0xfffffffeU);
L_008F98A0:;
    v0 = (s32) ((u32) v1 << 5);
L_008F98A4:;
    at = s2 < 10;
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    { s32 c_ = at != 0; v1 = (s32) ((u32) a0 + (u32) v0); if (c_) goto L_008F98C8; }
    s2 = 9; goto L_008F98D8;
L_008F98C8:;
    if (s2 >= 0) goto L_008F98D8;
    s2 = 0; goto L_008F98D8;
L_008F98D8:;
    v0 = (s32) ((u32) s2 << 3);
    a1 = 0;
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (s32) ((u32) v0 + 0x21cU);
    a0 = s0; func_002F1800(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) gp + 0xffff8620U); func_002F1420(a0, a1);
L_008F990C:;
L_008F9910:;
    return;
}
