/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EEE60(s32, s32);
void func_001EF370(s32, s32);
s32 func_001F2410(s32, s32, s32, s32);
void func_001F3CA0(s32, s32, s32, s32);
void func_001F3D10(s32, s32);
s32 func_008B9F20(s32, s32, s32, s32);
void func_008E2AB0(s32, s32);
void func_008E36E0(s32, s32, s32);

void func_008E2CD0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s32 gp = 0x3ef370;
    s64 frame[28];
    s32 sp = (s32) (u32) frame;

    s6 = a0;
    v0 = (*(volatile u8 *) (u32) (gp + -31254));
    a1 = (*(volatile u8 *) (u32) (gp + -31256));
    v1 = (*(volatile u8 *) (u32) (gp + -31255));
    (*(volatile u8 *) (u32) (sp + 222)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (gp + -31253));
    (*(volatile u8 *) (u32) (sp + 220)) = (u8) a1;
    (*(volatile u8 *) (u32) (sp + 221)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 223)) = (u8) v0;
    a0 = (*(volatile s32 *) (u32) (a0 + 2332)); func_001F3CA0(a0, a1, a2, a3);
    v1 = (s32) 0x8f0000U;
    fp = 0;
    v1 = (s32) ((u32) v1 + 0xffffdf40U);
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) s6;
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) v1;
    s2 = (*(volatile s32 *) (u32) (sp + 176));
L_008E2D40:;
    s4 = 0;
    s1 = (*(volatile s32 *) (u32) (sp + 160));
L_008E2D48:;
    a0 = (*(volatile u8 *) (u32) s1);
    v1 = 41;
    { s32 c_ = a0 == v1; (*(volatile u32 *) (u32) (s2 + 2336)) = (u32) 0; if (c_) goto L_008E2DF0; }
    a0 = (*(volatile s32 *) (u32) (s6 + 2332));
    a1 = 0;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    s7 = v0;
    a1 = 0;
    a0 = s7; func_001F3D10(a0, a1);
    (*(volatile u32 *) (u32) (s2 + 2336)) = (u32) s7;
    s3 = 0; goto L_008E2DD0;
L_008E2D88:;
    a0 = s7; v0 = func_001F2410(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) s0);
    s5 = v0;
    v0 = (s32) 0x8f0000U;
    a0 = s6;
    v0 = (s32) ((u32) v0 + 0xffffddf0U);
    a1 = (s32) ((u32) sp + 0xc0U);
    v1 = (s32) ((u32) v1 << 3);
    a2 = (s32) ((u32) v0 + (u32) v1); func_008E36E0(a0, a1, a2);
    a0 = s5;
    a1 = (s32) ((u32) sp + 0xc0U); func_001EF370(a0, a1);
    a0 = s5;
    a1 = (s32) ((u32) sp + 0xdcU); func_001EEE60(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
L_008E2DD0:;
    at = s3 < 3;
    if (at == 0) goto L_008E2DF0;
    s0 = (s32) ((u32) s1 + (u32) s3);
    v1 = 41;
    a0 = (*(volatile u8 *) (u32) s0);
    if (a0 != v1) goto L_008E2D88;
L_008E2DF0:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < 2;
    s2 = (s32) ((u32) s2 + 0x4U);
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x3U); if (c_) goto L_008E2D48; }
    v1 = (*(volatile s32 *) (u32) (sp + 176));
    fp = (s32) ((u32) fp + 0x1U);
    v1 = (s32) ((u32) v1 + 0x8U);
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (sp + 160));
    v1 = (s32) ((u32) v1 + 0x6U);
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) v1;
    v1 = fp < 22;
    if (v1 != 0) { s2 = (*(volatile s32 *) (u32) (sp + 176)); goto L_008E2D40; }
    a1 = (*(volatile s32 *) (u32) (s6 + 1724));
    if (a1 == 0) { ; goto L_008E2E44; }
    a0 = s6; func_008E2AB0(a0, a1);
L_008E2E44:;
    return;
}
