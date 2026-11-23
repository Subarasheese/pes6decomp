/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_IsUnavailable(void);
s64 func_0022BFF0(s64, s64);
s64 func_0022C140(s64);
s64 func_0022C1E0(void);

void func_00238850(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    s64 frame[58];
    s64 sp = (s32) (u32) frame;

    s1 = a0;
    s0 = a1;
    (*(volatile u8 *) (u32) (sp + 351)) = (u8) a2;
    (*(volatile u8 *) (u32) (sp + 350)) = (u8) a3;
    (*(volatile u8 *) (u32) (sp + 349)) = (u8) a4;
    (*(volatile u8 *) (u32) (sp + 348)) = (u8) a5; v0 = func_0022C1E0();
    s2 = v0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) { a0 = (*(volatile u8 *) (u32) (sp + 348)); goto L_002388B4; }
    v0 = 255; goto L_00239010;
L_002388B4:;
    v0 = func_0022C140(a0);
    { s32 c_ = s2 != 0; { u32 a_ = (u32) (sp + 272) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } if (c_) goto L_002388CC; }
    v0 = 255; goto L_00239010;
L_002388CC:;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (sp + 348)); goto L_002388DC; }
    v0 = 255; goto L_00239010;
L_002388DC:;
    a0 = 1;
    v1 = v0;
    { u32 a_ = (u32) (sp + 272) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (v0 + 1)) = (u8) a0; if (c_) goto L_00238900; }
    (*(volatile u8 *) (u32) (v0 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (v0 + 8)) = (u8) 0;
    (*(volatile u8 *) (u32) (v0 + 6)) = (u8) 0; goto L_00238950;
L_00238900:;
    v0 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = v0 & 0xff; v0 = func_0022C140(a0);
    if (v0 == 0) { v0 = s0 & 0xff; goto L_00238954; }
    a0 = (*(volatile u8 *) (u32) (v0 + 4));
    v1 = (*(volatile u8 *) (u32) (v0 + 5));
    a0 = (s32) ((u32) a0 + (u32) v1);
    { u32 a_ = (u32) (sp + 272) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) (v1 + 4)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (v0 + 8));
    v1 = (*(volatile u8 *) (u32) (v0 + 9));
    a0 = (s32) ((u32) a0 + (u32) v1);
    { u32 a_ = (u32) (sp + 272) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) (v1 + 8)) = (u8) a0;
    v1 = (*(volatile u8 *) (u32) (v0 + 6));
    v0 = (*(volatile u8 *) (u32) (v0 + 7));
    v1 = (s32) ((u32) v1 + (u32) v0);
    { u32 a_ = (u32) (sp + 272) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) (v0 + 6)) = (u8) v1;
L_00238950:;
    v0 = s0 & 0xff;
L_00238954:;
    v1 = 1;
    { s32 c_ = v0 != v1; { u32 a_ = (u32) (sp + 256) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } if (c_) goto L_00238968; }
    { u32 a_ = (u32) (sp + 272) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) (v0 + 11)) = (u8) v1;
L_00238968:;
    s3 = s1 & 0xff;
    v1 = (s64) ((u64) 0 + (u64) (s64) 2);
    at = s3 < 3;
    { s32 c_ = at != 0; a0 = (s64) ((u64) 0 + (u64) (s64) 1); if (c_) goto L_002389A0; }
    v1 = v1 & 0xff;
L_00238980:;
    v0 = (s32) ((u32) a0 + 0x1U);
    v1 = (s32) ((u32) v1 << 1);
    a0 = v0 & 0xff;
    v1 = v1 & 0xff;
    v0 = v1 < s3;
    if (v0 != 0) { v1 = v1 & 0xff; goto L_00238980; }
L_002389A0:;
    v0 = a0 & 0xff;
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    s5 = 0;
    v0 = 1;
    (*(volatile u8 *) (u32) (sp + 352)) = (u8) s1;
    (*(volatile u32 *) (u32) (sp + 304)) = (u32) v0;
    s4 = (s64) ((u64) 0 + (u64) (s64) 1);
    { u32 a_ = (u32) (sp + 272) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s7 = 0;
    v1 = (*(volatile u8 *) (u32) (v0 + 8));
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { s32 c_ = v0 <= 0; s6 = 0; if (c_) goto L_00238F00; }
    v0 = (*(volatile u8 *) (u32) (sp + 351));
    fp = v1 & 0xff;
    v0 = v0;
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile u8 *) (u32) (sp + 350));
    v0 = v0;
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile u8 *) (u32) (sp + 349));
    v0 = v0;
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_00238A0C:;
    (*(volatile u32 *) (u32) (sp + 320)) = (u32) 0;
    v0 = (s32) ((u32) v0 - (u32) s7);
    v0 = v0 & 0xff;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile s32 *) (u32) (sp + 304));
    { s32 c_ = v0 <= 0; (*(volatile u8 *) (u32) (sp + 288)) = (u8) 0; if (c_) goto L_00238EE0; }
L_00238A28:;
    a0 = (*(volatile u8 *) (u32) (sp + 348));
    a1 = s6; v0 = func_0022BFF0(a0, a1);
    s1 = v0;
    if (s1 == 0) goto L_00238EA8;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s0 = s6 & 0xff;
    (*(volatile u8 *) (u32) s1) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (sp + 288));
    { s32 c_ = s0 != 0; (*(volatile u8 *) (u32) (s1 + 1)) = (u8) v0; if (c_) goto L_00238A60; }
    v0 = 255;
    (*(volatile u8 *) (u32) (s1 + 2)) = (u8) v0;
L_00238A60:;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = 1;
    if (v0 != v1) goto L_00238AC0;
    if (s0 != 0) goto L_00238AA8;
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    if (v0 != 0) goto L_00238AA8;
    v0 = 0 & 0x1;
    a0 = (*(volatile u8 *) (u32) (s1 + 22));
    v1 = (s32) ((u32) v0 << 2);
    v0 = -5;
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) v0; goto L_00238AC0;
L_00238AA8:;
    a0 = (*(volatile u8 *) (u32) (s1 + 22));
    v0 = -5;
    v1 = (s64) ((u64) 0 + (u64) (s64) 4);
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) v0;
L_00238AC0:;
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = 1;
    if (v0 != v1) goto L_00238AF0;
    v0 = v1 & 0x1;
    a0 = (*(volatile u8 *) (u32) (s1 + 22));
    v1 = (s32) ((u32) v0 << 3);
    v0 = -9;
    v0 = a0 & v0;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) v0;
L_00238AF0:;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    if (s7 != v0) goto L_00238BB0;
    a4 = 255;
    v0 = (s32) ((u32) s0 + (u32) sp);
    (*(volatile u8 *) (u32) (s1 + 3)) = (u8) a4;
    a0 = (s64) ((u64) 0 + (u64) (s64) 16);
    v1 = (*(volatile u8 *) (u32) (v0 + 352));
    a3 = 1;
    (*(volatile u8 *) (u32) (s1 + 4)) = (u8) a4;
    a1 = (s64) ((u64) 0 + (u64) (s64) 1);
    a2 = (*(volatile u8 *) (u32) (s1 + 22));
    v0 = -17;
    v0 = a2 & v0;
    v0 = v0 | a0;
    { s32 c_ = v1 == a3; (*(volatile u8 *) (u32) (s1 + 22)) = (u8) v0; if (c_) goto L_00238B70; }
    v0 = 2;
    if (v1 == v0) goto L_00238B48;
    goto L_00238BA0;
L_00238B48:;
    v0 = s5 & 0xff;
    v1 = (s32) ((u32) v0 + (u32) fp);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s1 + 5)) = (u8) v1;
    v0 = v0 & 0xff;
    v1 = (s32) ((u32) v0 + (u32) fp);
    v0 = (s32) ((u32) s5 + 0x2U);
    (*(volatile u8 *) (u32) (s1 + 6)) = (u8) v1;
    s5 = v0 & 0xff; goto L_00238EA8;
L_00238B70:;
    v0 = s5 & 0xff;
    v1 = (s32) ((u32) v0 + (u32) fp);
    (*(volatile u8 *) (u32) (s1 + 5)) = (u8) v1;
    v0 = (s32) ((u32) s5 + 0x1U);
    (*(volatile u8 *) (u32) (s1 + 6)) = (u8) v1;
    s5 = v0 & 0xff;
    v1 = (*(volatile u8 *) (u32) (s1 + 22));
    v0 = -2;
    v0 = v1 & v0;
    v0 = v0 | a1;
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) v0; goto L_00238EA8;
L_00238BA0:;
    (*(volatile u8 *) (u32) (s1 + 5)) = (u8) a4;
    (*(volatile u8 *) (u32) (s1 + 6)) = (u8) a4; goto L_00238EA8;
L_00238BB0:;
    a0 = (*(volatile u8 *) (u32) (sp + 348));
    v0 = 255;
    a1 = s4;
    (*(volatile u8 *) (u32) (s1 + 5)) = (u8) v0;
    (*(volatile u8 *) (u32) (s1 + 3)) = (u8) s4; v0 = func_0022BFF0(a0, a1);
    if (v0 == 0) goto L_00238EA8;
    at = s3 < 21;
    { s32 c_ = at != 0; (*(volatile u8 *) (u32) (v0 + 2)) = (u8) s6; if (c_) goto L_00238C78; }
    at = s3 < 33;
    if (at == 0) goto L_00238C78;
    if (s0 != 0) goto L_00238C10;
    v1 = (s32) ((u32) s0 + (u32) sp);
    v0 = s4 & 0xff;
    s2 = (s32) ((u32) v1 + 0x160U);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v1 = (*(volatile u8 *) (u32) s2);
    v1 = (s32) ((u32) v1 >> 1);
    (*(volatile u8 *) (u32) (v0 + 352)) = (u8) v1; goto L_00238D18;
L_00238C10:;
    at = s0 < 3;
    if (at == 0) goto L_00238C58;
    v0 = (s32) ((u32) s0 + (u32) sp);
    s2 = (s32) ((u32) v0 + 0x160U);
    a0 = (*(volatile u8 *) (u32) s2);
    v1 = (s32) ((u32) a0 >> 1);
    { s32 c_ = a0 >= 0; v0 = a0 & 0x1; if (c_) goto L_00238C40; }
    if (v0 == 0) { v1 = (s32) ((u32) v1 + (u32) v0); goto L_00238C44; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00238C40:;
    v1 = (s32) ((u32) v1 + (u32) v0);
L_00238C44:;
    v0 = s4 & 0xff;
    v0 = (s32) ((u32) v0 + (u32) sp);
    (*(volatile u8 *) (u32) (v0 + 352)) = (u8) v1; goto L_00238D18;
L_00238C58:;
    v0 = (s32) ((u32) s0 + (u32) sp);
    s2 = (s32) ((u32) v0 + 0x160U);
    v1 = (*(volatile u8 *) (u32) s2);
    v0 = s4 & 0xff;
    v0 = (s32) ((u32) v0 + (u32) sp);
    v1 = (s32) ((u32) v1 >> 1);
    (*(volatile u8 *) (u32) (v0 + 352)) = (u8) v1; goto L_00238D18;
L_00238C78:;
    at = s3 < 9;
    if (at != 0) goto L_00238C90;
    at = s0 < 3;
    if (at != 0) goto L_00238CF8;
L_00238C90:;
    { s32 c_ = s0 >= 0; v0 = s0 & 0x1; if (c_) goto L_00238CA4; }
    if (v0 == 0) goto L_00238CA4;
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00238CA4:;
    if (v0 == 0) goto L_00238CC0;
    v0 = (s32) ((u32) s0 + (u32) sp);
    s2 = (s32) ((u32) v0 + 0x160U);
    v0 = (*(volatile u8 *) (u32) s2);
    v1 = (s32) ((u32) v0 >> 1); goto L_00238CE8;
L_00238CC0:;
    v0 = (s32) ((u32) s0 + (u32) sp);
    s2 = (s32) ((u32) v0 + 0x160U);
    a0 = (*(volatile u8 *) (u32) s2);
    v1 = (s32) ((u32) a0 >> 1);
    { s32 c_ = a0 >= 0; v0 = a0 & 0x1; if (c_) goto L_00238CE4; }
    if (v0 == 0) { v1 = (s32) ((u32) v1 + (u32) v0); goto L_00238CE8; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00238CE4:;
    v1 = (s32) ((u32) v1 + (u32) v0);
L_00238CE8:;
    v0 = s4 & 0xff;
    v0 = (s32) ((u32) v0 + (u32) sp);
    (*(volatile u8 *) (u32) (v0 + 352)) = (u8) v1; goto L_00238D18;
L_00238CF8:;
    v0 = (s32) ((u32) s0 + (u32) sp);
    s2 = (s32) ((u32) v0 + 0x160U);
    v1 = (*(volatile u8 *) (u32) s2);
    v0 = s4 & 0xff;
    v0 = (s32) ((u32) v0 + (u32) sp);
    v1 = (s32) ((u32) v1 >> 1);
    (*(volatile u8 *) (u32) (v0 + 352)) = (u8) v1;
L_00238D18:;
    v1 = (s32) ((u32) s4 + 0x1U);
    v0 = 255;
    s4 = v1 & 0xff;
    (*(volatile u8 *) (u32) (s1 + 6)) = (u8) v0;
    a1 = s4;
    a0 = (*(volatile u8 *) (u32) (sp + 348));
    (*(volatile u8 *) (u32) (s1 + 4)) = (u8) v1; v0 = func_0022BFF0(a0, a1);
    if (v0 == 0) goto L_00238EA8;
    at = s3 < 21;
    { s32 c_ = at != 0; (*(volatile u8 *) (u32) (v0 + 2)) = (u8) s6; if (c_) goto L_00238DF8; }
    at = s3 < 33;
    if (at == 0) goto L_00238DF8;
    if (s0 != 0) goto L_00238D98;
    v0 = (s32) ((u32) s0 + (u32) sp);
    a0 = (*(volatile u8 *) (u32) (v0 + 352));
    v1 = (s32) ((u32) a0 >> 1);
    { s32 c_ = a0 >= 0; v0 = a0 & 0x1; if (c_) goto L_00238D80; }
    if (v0 == 0) { v1 = (s32) ((u32) v1 + (u32) v0); goto L_00238D84; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00238D80:;
    v1 = (s32) ((u32) v1 + (u32) v0);
L_00238D84:;
    v0 = s4 & 0xff;
    v0 = (s32) ((u32) v0 + (u32) sp);
    (*(volatile u8 *) (u32) (v0 + 352)) = (u8) v1; goto L_00238EA0;
L_00238D98:;
    at = s0 < 3;
    if (at == 0) goto L_00238DC0;
    v1 = (*(volatile u8 *) (u32) s2);
    v0 = s4 & 0xff;
    v0 = (s32) ((u32) v0 + (u32) sp);
    v1 = (s32) ((u32) v1 >> 1);
    (*(volatile u8 *) (u32) (v0 + 352)) = (u8) v1; goto L_00238EA0;
L_00238DC0:;
    v0 = (s32) ((u32) s0 + (u32) sp);
    a0 = (*(volatile u8 *) (u32) (v0 + 352));
    v1 = (s32) ((u32) a0 >> 1);
    { s32 c_ = a0 >= 0; v0 = a0 & 0x1; if (c_) goto L_00238DE0; }
    if (v0 == 0) { v1 = (s32) ((u32) v1 + (u32) v0); goto L_00238DE4; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00238DE0:;
    v1 = (s32) ((u32) v1 + (u32) v0);
L_00238DE4:;
    v0 = s4 & 0xff;
    v0 = (s32) ((u32) v0 + (u32) sp);
    (*(volatile u8 *) (u32) (v0 + 352)) = (u8) v1; goto L_00238EA0;
L_00238DF8:;
    at = s3 < 9;
    if (at != 0) goto L_00238E10;
    at = s0 < 3;
    if (at != 0) goto L_00238E70;
L_00238E10:;
    { s32 c_ = s0 >= 0; v0 = s0 & 0x1; if (c_) goto L_00238E24; }
    if (v0 == 0) goto L_00238E24;
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00238E24:;
    if (v0 == 0) goto L_00238E58;
    v0 = (s32) ((u32) s0 + (u32) sp);
    a0 = (*(volatile u8 *) (u32) (v0 + 352));
    v1 = (s32) ((u32) a0 >> 1);
    { s32 c_ = a0 >= 0; v0 = a0 & 0x1; if (c_) goto L_00238E4C; }
    if (v0 == 0) { v1 = (s32) ((u32) v1 + (u32) v0); goto L_00238E60; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00238E4C:;
    v1 = (s32) ((u32) v1 + (u32) v0);
    goto L_00238E60;
L_00238E58:;
    v0 = (*(volatile u8 *) (u32) s2);
    v1 = (s32) ((u32) v0 >> 1);
L_00238E60:;
    v0 = s4 & 0xff;
    v0 = (s32) ((u32) v0 + (u32) sp);
    (*(volatile u8 *) (u32) (v0 + 352)) = (u8) v1; goto L_00238EA0;
L_00238E70:;
    v0 = (s32) ((u32) s0 + (u32) sp);
    a0 = (*(volatile u8 *) (u32) (v0 + 352));
    v1 = (s32) ((u32) a0 >> 1);
    { s32 c_ = a0 >= 0; v0 = a0 & 0x1; if (c_) goto L_00238E90; }
    if (v0 == 0) { v1 = (s32) ((u32) v1 + (u32) v0); goto L_00238E94; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00238E90:;
    v1 = (s32) ((u32) v1 + (u32) v0);
L_00238E94:;
    v0 = s4 & 0xff;
    v0 = (s32) ((u32) v0 + (u32) sp);
    (*(volatile u8 *) (u32) (v0 + 352)) = (u8) v1;
L_00238EA0:;
    v0 = (s32) ((u32) s4 + 0x1U);
    s4 = v0 & 0xff;
L_00238EA8:;
    v0 = (*(volatile s32 *) (u32) (sp + 320));
    v1 = (s32) ((u32) s6 + 0x1U);
    s6 = v1 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (sp + 320)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (sp + 288));
    v1 = (*(volatile s32 *) (u32) (sp + 320));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (sp + 288)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (sp + 304));
    v0 = v1 < v0;
    if (v0 != 0) goto L_00238A28;
L_00238EE0:;
    v0 = (*(volatile s32 *) (u32) (sp + 304));
    s7 = (s32) ((u32) s7 + 0x1U);
    v0 = (s32) ((u32) v0 << 1);
    (*(volatile u32 *) (u32) (sp + 304)) = (u32) v0;
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = s7 < v0;
    if (v0 != 0) { { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_00238A0C; }
L_00238F00:;
    { u32 a_ = (u32) (sp + 256) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = 1;
    if (v0 != v1) { { u32 a_ = (u32) (sp + 272) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); } goto L_00239000; }
    a0 = (*(volatile u8 *) (u32) (sp + 348));
    a1 = s6; v0 = func_0022BFF0(a0, a1);
    if (v0 != 0) { { u32 a_ = (u32) (sp + 240) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); } goto L_00238F2C; }
    v0 = (*(volatile u8 *) (u32) (sp + 348)); goto L_00239010;
L_00238F2C:;
    a3 = 255;
    a4 = 1;
    a1 = (s64) ((u64) 0 + (u64) (s64) 2);
    a2 = (s64) ((u64) 0 + (u64) (s64) 1);
    a0 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u8 *) (u32) v0) = (u8) a0;
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) 0;
    a0 = 2;
    (*(volatile u8 *) (u32) (v0 + 2)) = (u8) a3;
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) a4;
    (*(volatile u8 *) (u32) (v0 + 4)) = (u8) a0;
    (*(volatile u8 *) (u32) (v0 + 5)) = (u8) a3;
    a0 = -3;
    (*(volatile u8 *) (u32) (v0 + 6)) = (u8) a3;
    a3 = (*(volatile u8 *) (u32) (v0 + 22));
    v1 = (*(volatile u8 *) (u32) (sp + 351));
    a0 = a3 & a0;
    a0 = a0 | a1;
    v1 = v1;
    { s32 c_ = v1 != a4; (*(volatile u8 *) (u32) (v0 + 22)) = (u8) a0; if (c_) goto L_00238FC4; }
    v1 = (*(volatile u8 *) (u32) (sp + 350));
    v1 = v1;
    if (v1 != 0) { a1 = (*(volatile u8 *) (u32) (v0 + 22)); goto L_00238FB0; }
    v1 = 0 & 0x1;
    a1 = (*(volatile u8 *) (u32) (v0 + 22));
    a0 = (s32) ((u32) v1 << 2);
    v1 = -5;
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (v0 + 22)) = (u8) v1; goto L_00238FC4;
L_00238FB0:;
    v1 = -5;
    a0 = (s32) ((u32) a2 << 2);
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (v0 + 22)) = (u8) v1;
L_00238FC4:;
    v1 = (*(volatile u8 *) (u32) (sp + 349));
    a0 = v1;
    v1 = 1;
    if (a0 != v1) { v0 = (s32) ((u32) s6 + 0x1U); goto L_00238FF8; }
    v1 = v1 & 0x1;
    a1 = (*(volatile u8 *) (u32) (v0 + 22));
    a0 = (s32) ((u32) v1 << 3);
    v1 = -9;
    v1 = a1 & v1;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (v0 + 22)) = (u8) v1;
    v0 = (s32) ((u32) s6 + 0x1U);
L_00238FF8:;
    s6 = v0 & 0xff;
    { u32 a_ = (u32) (sp + 272) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
L_00239000:;
    { u32 a_ = (u32) (sp + 272) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) (v0 + 5)) = (u8) s6;
    v0 = (*(volatile u8 *) (u32) (sp + 348));
    (*(volatile u8 *) (u32) (v1 + 9)) = (u8) s5;
L_00239010:;
    return;
}
