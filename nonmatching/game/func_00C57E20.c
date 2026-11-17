/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00C12D00(s64);
s64 func_00C132B0(s64);
s64 func_00C132C0(s64);
s64 func_00C13510(s64, s64, s64);
s64 func_00C137F0(void);
void func_00C22390(s64, s64);

void func_00C57E20(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 frame[24];
    s64 sp = (s32) (u32) frame;

    fp = a0;
    s5 = a1;
    v0 = func_00C137F0();
    s0 = v0;
    a0 = s5; v0 = func_00C132B0(a0);
    v0 = v0 & 0xff;
    at = (u64) s5 < (u64) s0;
    v1 = (s32) v0 >> 5;
    s3 = 1;
    v0 = v0 & 0x1f;
    s7 = v1 & 0x1;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    s2 = 0;
    { s32 c_ = at == 0; s4 = s5; if (c_) goto L_00C57FA8; }
    v0 = (s32) 0xcb0000U;
    s6 = s7 & 0xff;
    s1 = (*(volatile s32 *) (u32) (v0 + 13488));
L_00C57E98:;
    a0 = s4; v0 = func_00C12D00(a0);
    if (v0 != 0) { a0 = s4; goto L_00C57F80; }
L_00C57EA8:;
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 4;
    if (at == 0) goto L_00C57FA8;
    a1 = (s32) 0xcb0000U;
    a0 = s4;
    a1 = (s32) ((u32) a1 + 0x34a8U);
    a2 = s1; v0 = func_00C13510(a0, a1, a2);
    s4 = v0;
    v0 = (u64) s4 < (u64) s0;
    if (v0 != 0) goto L_00C57E98;
    goto L_00C57FA8;
L_00C57EE4:;
    goto L_00C57FF0;
L_00C57EEC:;
    if (s3 == 0) { v0 = (s32) 0xc0a00000U; goto L_00C57F00; }
    v0 = (s32) 0x40000000U;
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) v0; goto L_00C57F58;
L_00C57F00:;
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) v0; goto L_00C57F58;
L_00C57F08:;
    if (s3 == 0) { v0 = (s32) 0xc0000000U; goto L_00C57F1C; }
    v0 = (s32) 0x41200000U;
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) v0; goto L_00C57F58;
L_00C57F1C:;
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) v0; goto L_00C57F58;
L_00C57F24:;
    if (s3 == 0) { v0 = (s32) 0xc0c00000U; goto L_00C57F38; }
    v0 = (s32) 0x40800000U;
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) v0; goto L_00C57F58;
L_00C57F38:;
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) v0; goto L_00C57F58;
L_00C57F40:;
    if (s3 == 0) { v0 = (s32) 0xc0800000U; goto L_00C57F54; }
    v0 = (s32) 0x41200000U;
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) v0; goto L_00C57F58;
L_00C57F54:;
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) v0;
L_00C57F58:;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = fp;
    a1 = (s32) ((u32) sp + 0xb8U);
    (*(volatile u8 *) (u32) (sp + 186)) = (u8) s7;
    (*(volatile u8 *) (u32) (sp + 187)) = (u8) v0;
    v0 = 13;
    (*(volatile u8 *) (u32) (sp + 184)) = (u8) v0; func_00C22390(a0, a1);
    goto L_00C57FEC;
L_00C57F80:;
    v0 = func_00C132B0(a0);
    v0 = v0 & 0xff;
    v0 = (s32) v0 >> 5;
    v0 = v0 & 0x1;
    if (s6 == v0) goto L_00C57EA8;
    s3 = 0; goto L_00C57EA8;
L_00C57FA8:;
    a0 = s5; v0 = func_00C132C0(a0);
    a0 = v0 & 0xff;
    v1 = 24;
    if (a0 == v1) goto L_00C57F40;
    v1 = 23;
    if (a0 == v1) goto L_00C57F24;
    v1 = 20;
    if (a0 == v1) goto L_00C57F08;
    v1 = 21;
    if (a0 == v1) goto L_00C57EEC;
    goto L_00C57EE4;
L_00C57FEC:;
L_00C57FF0:;
    return;
}
