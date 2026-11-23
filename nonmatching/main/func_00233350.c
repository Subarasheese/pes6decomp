/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_IsUnavailable(void);
s64 func_00228F20(s64);
s64 func_00229460(void);
s64 func_00232510(s64, s64, s64);
s64 func_00232E10(s64, s64, s64);
s64 func_00236680(s64);
s64 func_00236930(s64, s64, s64, s64);

void func_00233350(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_a0 = 0;
    s64 frame[28];
    s64 sp = (s32) (u32) frame;

    s7 = a0;
    s2 = a1;
    (*(volatile u32 *) (u32) (sp + 220)) = (u32) a2;
    (*(volatile u32 *) (u32) (sp + 216)) = (u32) a3;
    (*(volatile u8 *) (u32) (sp + 192)) = (u8) 0; v0 = func_00229460();
    s1 = v0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 == v1) { ; goto L_0023389C; }
    if (s1 == 0) goto L_00233898;
    v1 = (*(volatile s32 *) (u32) (sp + 220));
    if (v1 == 0) goto L_00233898;
    a1 = s2 & 0xff;
    at = a1 < 20;
    if (at == 0) goto L_00233898;
    v1 = (*(volatile u8 *) (u32) (s1 + 4963));
    at = a1 < v1;
    if (at == 0) goto L_00233898;
    v1 = (s32) ((u32) a1 << 1);
    a0 = s7 & 0xff;
    v1 = (s32) ((u32) v1 + (u32) a1);
    s0 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) s0 + (u32) s1);
    v1 = (*(volatile u8 *) (u32) (v1 + 19130));
    at = v1 < a0;
    if (at != 0) goto L_00233898;
    a0 = s2; v0 = func_00236680(a0);
    v0 = v0 & 0xff;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) s0 + (u32) s1);
    v1 = (*(volatile u8 *) (u32) (v0 + 19128));
    v0 = v1 < 20;
    { s32 c_ = v0 != 0; fp = (s32) ((u32) s1 + 0x3cd6U); if (c_) goto L_00233428; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 20);
L_00233428:;
    v0 = v1 & 0xff;
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v0;
    { s32 c_ = v0 <= 0; v1 = 0; if (c_) goto L_00233538; }
    a0 = (*(volatile s32 *) (u32) (sp + 176));
    at = a0 < 9;
    { s32 c_ = at != 0; v0 = (s32) ((u32) v0 + 0xfffffff8U); if (c_) goto L_002334F0; }
    { s32 c_ = a0 < 0; a1 = 0; if (c_) goto L_00233468; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a0 < at;
    if (at == 0) goto L_00233468;
    a1 = 1;
L_00233468:;
    if (a1 == 0) goto L_002334F0;
    { u32 a_ = (u32) (sp + 160) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    a2 = a0 & 0xff;
    a0 = (*(volatile s32 *) (u32) (sp + 220));
    a4 = a2;
    a3 = (s32) ((u32) a0 + (u32) a2);
L_00233484:;
    a0 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) a3) = (u8) a4;
    a1 = (s32) ((u32) a2 + (u32) a0);
    a4 = (s32) ((u32) a4 + 0x8U);
    a0 = (s32) ((u32) v1 + 0x2U);
    (*(volatile u8 *) (u32) (a3 + 1)) = (u8) a1;
    a0 = (s32) ((u32) a2 + (u32) a0);
    (*(volatile u8 *) (u32) (a3 + 2)) = (u8) a0;
    a0 = (s32) ((u32) v1 + 0x3U);
    a1 = (s32) ((u32) a2 + (u32) a0);
    a0 = (s32) ((u32) v1 + 0x4U);
    (*(volatile u8 *) (u32) (a3 + 3)) = (u8) a1;
    a0 = (s32) ((u32) a2 + (u32) a0);
    (*(volatile u8 *) (u32) (a3 + 4)) = (u8) a0;
    a0 = (s32) ((u32) v1 + 0x5U);
    a1 = (s32) ((u32) a2 + (u32) a0);
    a0 = (s32) ((u32) v1 + 0x6U);
    (*(volatile u8 *) (u32) (a3 + 5)) = (u8) a1;
    a0 = (s32) ((u32) a2 + (u32) a0);
    (*(volatile u8 *) (u32) (a3 + 6)) = (u8) a0;
    a0 = (s32) ((u32) v1 + 0x7U);
    a0 = (s32) ((u32) a2 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0x8U);
    (*(volatile u8 *) (u32) (a3 + 7)) = (u8) a0;
    a0 = v1 < v0;
    { s32 c_ = a0 != 0; a3 = (s32) ((u32) a3 + 0x8U); if (c_) goto L_00233484; }
L_002334F0:;
    v0 = (*(volatile s32 *) (u32) (sp + 176));
    at = v1 < v0;
    if (at == 0) goto L_00233538;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) (sp + 220));
    a1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a0 = (s32) ((u32) v0 + (u32) v1);
L_00233518:;
    v0 = (*(volatile s32 *) (u32) (sp + 176));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) a0) = (u8) a1;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = v1 < v0;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x1U); if (c_) goto L_00233518; }
L_00233538:;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s1 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) (sp + 176));
    v1 = (s32) ((u32) s1 + (u32) v0);
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    { s32 c_ = v0 <= 0; s4 = (s32) ((u32) v1 + 0xffffffffU); if (c_) goto L_00233600; }
    at = s1 < s4;
L_00233558:;
    { s32 c_ = at == 0; s5 = s1; if (c_) goto L_002335F0; }
L_00233560:;
    v0 = (*(volatile s32 *) (u32) (sp + 220));
    a2 = (*(volatile s32 *) (u32) (sp + 216));
    s0 = (s32) ((u32) v0 + (u32) s5);
    s6 = (*(volatile u8 *) (u32) (s0 + 1));
    s2 = (*(volatile u8 *) (u32) s0);
    a1 = s6;
    a0 = s2; v0 = func_00232E10(a0, a1, a2);
    s3 = v0;
    if (s3 != 0) goto L_002335C0;
    a0 = s2; v0 = func_00228F20(a0);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_002335C0;
    a0 = s6; v0 = func_00228F20(a0);
    v0 = v0 & 0xff;
    if (v0 <= 0) goto L_002335C0;
    s3 = -1; goto L_002335C0;
L_002335C0:;
    v0 = -1;
    if (s3 != v0) goto L_002335E0;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) (s0 + 1));
    (*(volatile u8 *) (u32) s0) = (u8) v0;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v1;
L_002335E0:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < s4;
    if (v0 != 0) goto L_00233560;
L_002335F0:;
    s4 = (s32) ((u32) s4 + 0xffffffffU);
    at = s1 < s4;
    if (at != 0) { at = s1 < s4; goto L_00233558; }
L_00233600:;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) (sp + 220));
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (*(volatile u8 *) (u32) v0); v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 == v1) { v1 = (*(volatile s32 *) (u32) (sp + 176)); goto L_00233640; }
    a1 = s0;
    a0 = fp;
    a2 = s7; v0 = func_00232510(a0, a1, a2);
    v1 = 1;
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    v1 = (*(volatile s32 *) (u32) (sp + 176));
L_00233640:;
    at = v1 < 2;
    { s32 c_ = at != 0; s0 = 1; if (c_) goto L_00233898; }
    v0 = (*(volatile s32 *) (u32) (sp + 220));
    v0 = (s32) ((u32) v0 + (u32) s1);
    s1 = (s32) ((u32) v0 + 0x1U);
L_00233658:;
    a2 = (*(volatile s32 *) (u32) (sp + 216));
    a1 = (*(volatile u8 *) (u32) (s1 + -1));
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_00232E10(a0, a1, a2);
    if (v0 != 0) goto L_00233848;
    v0 = (*(volatile u8 *) (u32) (sp + 192));
    v0 = v0;
    if (v0 != 0) goto L_002336A0;
    a2 = (*(volatile s32 *) (u32) (sp + 216));
    a1 = (*(volatile u8 *) (u32) (s1 + 1));
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_00232E10(a0, a1, a2);
    if (v0 != 0) goto L_002336A0;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1);
    (*(volatile u8 *) (u32) (sp + 192)) = (u8) v0;
L_002336A0:;
    v0 = (*(volatile u8 *) (u32) (sp + 192));
    v1 = v0;
    v0 = 1;
    if (v1 != v0) goto L_00233710;
    s2 = (*(volatile u8 *) (u32) (s1 + -1)); v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) { a1 = s2; goto L_002336D0; }
    v0 = 0; goto L_002336E0;
L_002336D0:;
    a0 = fp;
    a2 = s7; v0 = func_00232510(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) v0);
L_002336E0:;
    s3 = (*(volatile u8 *) (u32) s1);
    s2 = v0 & 0xff; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 == v1) goto L_00233880;
    a1 = s3;
    a0 = fp;
    a2 = s7; v0 = func_00232510(a0, a1, a2);
    (*(volatile u8 *) (u32) v0) = (u8) s2; goto L_00233880;
L_00233710:;
    a1 = (*(volatile u8 *) (u32) (s1 + -1));
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_00236930(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_002337B0;
    s2 = (*(volatile u8 *) (u32) (s1 + -1)); v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) { a1 = s2; goto L_00233744; }
    v0 = 0; goto L_00233754;
L_00233744:;
    a0 = fp;
    a2 = s7; v0 = func_00232510(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) v0);
L_00233754:;
    s3 = (*(volatile u8 *) (u32) s1);
    s2 = v0 & 0xff; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 == v1) goto L_00233780;
    a1 = s3;
    a0 = fp;
    a2 = s7; v0 = func_00232510(a0, a1, a2);
    (*(volatile u8 *) (u32) v0) = (u8) s2;
L_00233780:;
    s2 = (*(volatile u8 *) (u32) (s1 + -1)); v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 == v1) goto L_00233880;
    a1 = s2;
    a0 = fp;
    a2 = s7; v0 = func_00232510(a0, a1, a2);
    (*(volatile u8 *) (u32) v0) = (u8) s0; goto L_00233880;
L_002337B0:;
    if (v0 != 0) goto L_00233818;
    s2 = (*(volatile u8 *) (u32) (s1 + -1)); v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) { a1 = s2; goto L_002337D4; }
    v0 = 0; goto L_002337E4;
L_002337D4:;
    a0 = fp;
    a2 = s7; v0 = func_00232510(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) v0);
L_002337E4:;
    s3 = (*(volatile u8 *) (u32) s1);
    s2 = v0 & 0xff; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 == v1) goto L_00233880;
    a1 = s3;
    a0 = fp;
    a2 = s7; v0 = func_00232510(a0, a1, a2);
    (*(volatile u8 *) (u32) v0) = (u8) s2; goto L_00233880;
L_00233818:;
    s2 = (*(volatile u8 *) (u32) s1); v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 == v1) goto L_00233880;
    a1 = s2;
    a0 = fp;
    a2 = s7; v0 = func_00232510(a0, a1, a2);
    v1 = (s32) ((u32) s0 + 0x1U);
    (*(volatile u8 *) (u32) v0) = (u8) v1; goto L_00233880;
L_00233848:;
    s2 = (*(volatile u8 *) (u32) s1); v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 == v1) goto L_00233878;
    a1 = s2;
    a0 = fp;
    a2 = s7; v0 = func_00232510(a0, a1, a2);
    v1 = (s32) ((u32) s0 + 0x1U);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
L_00233878:;
    (*(volatile u8 *) (u32) (sp + 192)) = (u8) 0;
L_00233880:;
    v1 = (*(volatile s32 *) (u32) (sp + 176));
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < v1;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_00233658; }
L_00233898:;
L_0023389C:;
    return;
}
