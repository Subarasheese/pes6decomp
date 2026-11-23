/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00229010(s64);
s64 func_00229460(void);
void func_00233350(s64, s64, s64, s64);
void func_002338D0(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_00233EF0(s64, s64);
s64 func_00234870(s64, s64, s64, s64);

void func_00233040(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    s64 frame[26];
    s64 sp = (s32) (u32) frame;

    fp = a1;
    s5 = a2;
    (*(volatile u8 *) (u32) (sp + 207)) = (u8) a0;
    v0 = func_00229460();
    v1 = v0;
    { s32 c_ = v1 == 0; (*(volatile u32 *) (u32) (sp + 200)) = (u32) v0; if (c_) goto L_00233228; }
    if (fp == 0) { ; goto L_0023322C; }
    if (s5 == 0) goto L_00233228;
    v1 = (*(volatile u8 *) (u32) (v1 + 4963));
    { s32 c_ = v1 <= 0; s2 = 0; if (c_) goto L_00233228; }
    v1 = v0;
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v1;
    v1 = (*(volatile u8 *) (u32) (sp + 207));
    v1 = v1;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile s32 *) (u32) (sp + 176));
L_002330BC:;
    v1 = (*(volatile u8 *) (u32) (v1 + 19130));
    { s32 c_ = v1 <= 0; s4 = 0; if (c_) goto L_00233200; }
L_002330C8:;
    v0 = (*(volatile s32 *) (u32) (sp + 176));
    v1 = (*(volatile u8 *) (u32) (v0 + 19131));
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    at = v0 < v1;
    if (at == 0) goto L_002330E4;
    v1 = (*(volatile u8 *) (u32) (sp + 207));
L_002330E4:;
    s7 = v1 & 0xff;
    { s32 c_ = s7 <= 0; s3 = 0; if (c_) goto L_002331D0; }
L_002330F0:;
    a0 = s4 & 0xff;
    a1 = s3 & 0xff;
    a3 = s2 & 0xff;
    a2 = 0; v0 = func_00234870(a0, a1, a2, a3);
    s0 = v0 & 0xff;
    a0 = s4 & 0xff;
    a1 = s3 & 0xff;
    a3 = s2 & 0xff;
    a2 = 1; v0 = func_00234870(a0, a1, a2, a3);
    v1 = s0 & 0xff;
    at = v1 < 113;
    { s32 c_ = at == 0; s1 = v0 & 0xff; if (c_) goto L_002331C0; }
    v0 = s1 & 0xff;
    at = v0 < 113;
    if (at == 0) goto L_002331C0;
    if (v1 == v0) goto L_002331C0;
    a0 = s0; v0 = func_00229010(a0);
    s6 = v0 & 0xff;
    a0 = s1; v0 = func_00229010(a0);
    v1 = v0 & 0xff;
    v0 = s6 & 0xff;
    at = v0 < 80;
    if (at == 0) goto L_002331C0;
    v0 = v1 & 0xff;
    at = v0 < 80;
    if (at == 0) goto L_002331C0;
    a0 = s0;
    a1 = s4 & 0xff; v0 = func_00233EF0(a0, a1);
    v1 = 1;
    if (v0 != v1) goto L_002331C0;
    a0 = s1;
    a1 = s4 & 0xff; v0 = func_00233EF0(a0, a1);
    v1 = 1;
    if (v0 != v1) goto L_002331C0;
    a0 = s4 & 0xff;
    a1 = s3 & 0xff;
    a2 = s2 & 0xff;
    a3 = s5; func_002338D0(a0, a1, a2, a3, a4, a5, a6, a7);
L_002331C0:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s7;
    if (v0 != 0) goto L_002330F0;
L_002331D0:;
    a0 = s4 & 0xff;
    a1 = s2 & 0xff;
    a2 = fp;
    a3 = s5; func_00233350(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (sp + 176));
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = (*(volatile u8 *) (u32) (v1 + 19130));
    v1 = s4 < v1;
    if (v1 != 0) goto L_002330C8;
L_00233200:;
    v1 = (*(volatile s32 *) (u32) (sp + 176));
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = (s32) ((u32) v1 + 0xcU);
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (sp + 200));
    v1 = (*(volatile u8 *) (u32) (v1 + 4963));
    v1 = s2 < v1;
    if (v1 != 0) { v1 = (*(volatile s32 *) (u32) (sp + 176)); goto L_002330BC; }
L_00233228:;
L_0023322C:;
    return;
}
