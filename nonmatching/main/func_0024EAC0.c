/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Player_GetParams(s32, s32, s32, s32);
s32 func_00210DF0(void);
s32 func_00223D30(s32);
s32 func_0024E920(s32, s32, s32, s32);
s32 func_00970870(s32, s32, s32, s32);

s32 func_0024EAC0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[30];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    s1 = s2 & 0xffff;
    s0 = s3 & 0xffff;
    if (s0 != s1) goto L_0024EAF8;
    v0 = 0; goto L_0024EC74;
L_0024EAF8:;
    if (s0 != 0) goto L_0024EB08;
    v0 = 0; goto L_0024EC74;
L_0024EB08:;
    if (s1 != 0) goto L_0024EB18;
    v0 = 0; goto L_0024EC74;
L_0024EB18:;
    v0 = func_00210DF0();
    v1 = 2;
    if (v0 != v1) { a0 = s3; goto L_0024EB94; }
    a0 = s3; v0 = func_00970870(a0, a1, a2, a3);
    a2 = (s32) ((u32) sp + 0xa0U);
    a1 = 9;
L_0024EB3C:;
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s32 *) (u32) (v0 + 4));
    (*(volatile u32 *) (u32) a2) = (u32) a0;
    v0 = (s32) ((u32) v0 + 0x8U);
    (*(volatile u32 *) (u32) (a2 + 4)) = (u32) v1;
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_0024EB3C; }
    a0 = s2; v0 = func_00970870(a0, a1, a2, a3);
    a2 = (s32) ((u32) sp + 0x50U);
    a1 = 9;
L_0024EB6C:;
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s32 *) (u32) (v0 + 4));
    (*(volatile u32 *) (u32) a2) = (u32) a0;
    v0 = (s32) ((u32) v0 + 0x8U);
    (*(volatile u32 *) (u32) (a2 + 4)) = (u32) v1;
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_0024EB6C; }
    goto L_0024EBF4;
L_0024EB94:;
    v0 = Pes6Player_GetParams(a0, a1, a2, a3);
    a2 = (s32) ((u32) sp + 0xa0U);
    a1 = 9;
L_0024EBA4:;
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s32 *) (u32) (v0 + 4));
    (*(volatile u32 *) (u32) a2) = (u32) a0;
    v0 = (s32) ((u32) v0 + 0x8U);
    (*(volatile u32 *) (u32) (a2 + 4)) = (u32) v1;
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_0024EBA4; }
    a0 = s2; v0 = Pes6Player_GetParams(a0, a1, a2, a3);
    a2 = (s32) ((u32) sp + 0x50U);
    a1 = 9;
L_0024EBD4:;
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s32 *) (u32) (v0 + 4));
    (*(volatile u32 *) (u32) a2) = (u32) a0;
    v0 = (s32) ((u32) v0 + 0x8U);
    (*(volatile u32 *) (u32) (a2 + 4)) = (u32) v1;
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_0024EBD4; }
L_0024EBF4:;
    if (s0 <= 0) goto L_0024EC28;
    at = s0 < 5000;
    if (at == 0) goto L_0024EC28;
    a0 = s3; v0 = func_00223D30(a0);
    a0 = (*(volatile u8 *) (u32) (sp + 183));
    v1 = v0 & 0x7f;
    v0 = -128;
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (sp + 183)) = (u8) v0;
L_0024EC28:;
    if (s1 <= 0) { a0 = s3; goto L_0024EC60; }
    at = s1 < 5000;
    if (at == 0) goto L_0024EC5C;
    a0 = s2; v0 = func_00223D30(a0);
    a0 = (*(volatile u8 *) (u32) (sp + 103));
    v1 = v0 & 0x7f;
    v0 = -128;
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (sp + 103)) = (u8) v0;
L_0024EC5C:;
    a0 = s3;
L_0024EC60:;
    a2 = s2;
    a1 = (s32) ((u32) sp + 0xa0U);
    a3 = (s32) ((u32) sp + 0x50U); v0 = func_0024E920(a0, a1, a2, a3);
    v0 = v0 & 0xff;
L_0024EC74:;
    return v0;
}
