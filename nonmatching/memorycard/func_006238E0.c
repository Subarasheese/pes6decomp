/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00154F98(s64);
s64 func_0021C730(s64, s64);
s64 func_0021D500(s64);
s64 func_0021D5D0(s64);
void func_0021DAF0(s64, s64, s64, s64);
s64 func_0021DB60(s64);
void func_00623A50(s64, s64);

s64 func_006238E0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    v1 = (*(volatile u8 *) (u32) (gp + -21216));
    v0 = 1;
    s1 = 0;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) a0;
    { s32 c_ = v1 == v0; s0 = a0; if (c_) goto L_00623934; }
    a0 = (s64) ((u64) s0 << 32);
    a1 = (s32) 0x660000U;
    a0 = a0 >> 32;
    a1 = (s32) ((u32) a1 + 0xffffc0e0U); v0 = func_0021C730(a0, a1);
    v1 = 1;
    if (v0 != v1) { v0 = s1 & 0xff; goto L_00623A2C; }
    (*(volatile u8 *) (u32) (gp + -21216)) = (u8) v1; goto L_00623A28;
L_00623934:;
    a0 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0xffffc0e0U); v0 = func_0021DB60(a0);
    v1 = 1;
    if (v0 != v1) { v0 = (*(volatile s8 *) (u32) (gp + -21212)); goto L_0062397C; }
    a1 = (s64) ((u64) s0 << 32);
    a0 = (s32) 0x660000U;
    a1 = a1 >> 32;
    a0 = (s32) ((u32) a0 + 0xffffc0e0U); func_00623A50(a0, a1);
    a0 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0xffffc0e0U); func_0021DAF0(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (gp + -21216)) = (u8) 0;
    s1 = (s64) ((u64) 0 + (u64) (s64) 1);
    (*(volatile u8 *) (u32) (gp + -21212)) = (u8) 0; goto L_00623A28;
L_0062397C:;
    at = v0 < 4;
    if (at == 0) goto L_00623A28;
    a0 = (s64) ((u64) s0 << 32);
    a0 = a0 >> 32; v0 = func_0021D500(a0);
    v1 = 2;
    if (v0 == v1) { v0 = (*(volatile s8 *) (u32) (gp + -21212)); goto L_00623A1C; }
    v1 = (*(volatile s16 *) (u32) (sp + 74));
    v0 = (*(volatile u16 *) (u32) (sp + 72));
    (*(volatile u16 *) (u32) (sp + 78)) = (u16) v1;
    (*(volatile u16 *) (u32) (sp + 76)) = (u16) v0;
    a0 = (*(volatile s32 *) (u32) (sp + 76)); v0 = func_0021D5D0(a0);
    s0 = v0;
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    if (v0 == 0) { v0 = 2; goto L_00623A10; }
    s2 = (*(volatile s16 *) (u32) (sp + 76));
    if (s2 != 0) { v0 = 1; goto L_006239EC; }
    a0 = 2; v0 = func_00154F98(a0);
    v1 = 1;
    if (v0 != v1) { s0 = 0; goto L_00623A0C; }
    v0 = 1;
L_006239EC:;
    if (s2 != v0) goto L_00623A0C;
    a0 = 3; v0 = func_00154F98(a0);
    v1 = 1;
    if (v0 == v1) goto L_00623A0C;
    s0 = 0;
L_00623A0C:;
    v0 = 2;
L_00623A10:;
    if (s0 == v0) goto L_00623A28;
    v0 = (*(volatile s8 *) (u32) (gp + -21212));
L_00623A1C:;
    s1 = 0;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -21212)) = (u8) v0;
L_00623A28:;
    v0 = s1 & 0xff;
L_00623A2C:;
    return v0;
}
