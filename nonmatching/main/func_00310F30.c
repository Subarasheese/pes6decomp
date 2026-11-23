/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002C3130(s32, s32);

void func_00310F30(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, t8 = 0, t9 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[30];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    s0 = a1;
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = a2 & 0xff; func_002C3130(a0, a1);
    a0 = (*(volatile s32 *) (u32) (sp + 216));
    a3 = 0;
    v0 = (*(volatile s32 *) (u32) (sp + 220));
    v1 = (s32) ((u32) sp + 0x30U);
    a2 = (*(volatile s32 *) (u32) (sp + 232));
    a4 = (*(volatile s32 *) (u32) (sp + 224));
    a0 = (s32) ((u32) a0 + (u32) v0);
    a1 = (*(volatile s32 *) (u32) (sp + 228));
    v0 = (*(volatile s32 *) (u32) (sp + 236));
    a1 = (s32) ((u32) a4 + (u32) a1);
    a2 = (s32) ((u32) a2 + (u32) v0);
    v0 = (s32) 0x55550000U;
    v0 = v0 | 0x5556;
L_00310F88:;
    a5 = (*(volatile s32 *) (u32) (v1 + 48));
    a3 = (s32) ((u32) a3 + 0x1U);
    t7 = (*(volatile s32 *) (u32) (v1 + 120));
    a4 = a3 < 6;
    a6 = (*(volatile s32 *) (u32) (v1 + 24));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a5; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    t9 = (s32) ((u32) a5 >> 31);
    t4 = (*(volatile s32 *) (u32) (v1 + 72));
    t6 = (s32) ((u32) t7 >> 31);
    a7 = (*(volatile s32 *) (u32) (v1 + 96));
    a5 = (*(volatile s32 *) (u32) v1);
    t8 = hi;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) t7; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    t8 = (s32) ((u32) t8 + (u32) t9);
    a7 = (s32) ((u32) t4 + (u32) a7);
    t5 = (s32) ((u32) a6 + (u32) a5);
    a7 = (s32) ((u32) t8 + (u32) a7);
    a6 = (*(volatile s32 *) (u32) (v1 + 144));
    a5 = (*(volatile s32 *) (u32) (v1 + 168));
    a6 = (s32) ((u32) a6 + (u32) a5);
    v1 = (s32) ((u32) v1 + 0x4U);
    a5 = (s32) ((u32) t8 << 1);
    t4 = (s32) ((u32) t5 + (u32) a5);
    a5 = hi;
    a5 = (s32) ((u32) a5 + (u32) t6);
    a7 = (s32) ((u32) a5 + (u32) a7);
    a5 = (s32) ((u32) a5 << 1);
    { s32 c_ = a4 != 0; a5 = (s32) ((u32) a6 + (u32) a5); if (c_) goto L_00310F88; }
    at = a2 < a1;
    if (at == 0) { v0 = a2; goto L_0031100C; }
    v0 = a1;
L_0031100C:;
    at = v0 < a0;
    if (at == 0) { at = a2 < a1; goto L_00311020; }
    a2 = a0; goto L_00311030;
L_00311020:;
    if (at == 0) goto L_00311030;
    a2 = a1; goto L_00311030;
L_00311030:;
    if (a2 != a0) goto L_00311044;
    v0 = 4;
    (*(volatile u32 *) (u32) s1) = (u32) v0; goto L_0031105C;
L_00311044:;
    if (a2 != a1) { v0 = 3; goto L_00311058; }
    v0 = 7;
    (*(volatile u32 *) (u32) s1) = (u32) v0; goto L_0031105C;
L_00311058:;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_0031105C:;
    at = a5 < a7;
    if (at == 0) { v0 = a5; goto L_0031106C; }
    v0 = a7;
L_0031106C:;
    at = v0 < t4;
    if (at == 0) { at = a5 < a7; goto L_00311080; }
    a5 = t4; goto L_00311090;
L_00311080:;
    if (at == 0) goto L_00311090;
    a5 = a7; goto L_00311090;
L_00311090:;
    if (a5 != t4) goto L_003110A4;
    v0 = 6;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_003110BC;
L_003110A4:;
    if (a5 != a7) { v0 = 5; goto L_003110B8; }
    v0 = 7;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_003110BC;
L_003110B8:;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
L_003110BC:;
    v0 = 1;
    return;
}
