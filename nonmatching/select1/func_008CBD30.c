/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0017F9A0(s32, s32, s32, s32, s32);
void func_001A6630(s32);
void func_001A7250(s32, s32, s32, s32, s32, s32, s32, s32);
void func_001A9970(s32);
void func_001B0670(s32);
void func_001B10C0(s32);

void func_008CBD30(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v1 = 255;
    { s32 c_ = a0 == v1; s0 = a1; if (c_) goto L_008CBD60; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    a1 = hi;
    v1 = (s32) ((u32) a1 << 3); goto L_008CBD68;
L_008CBD60:;
    a1 = 1;
    v1 = (s32) ((u32) a1 << 3);
L_008CBD68:;
    a0 = (s32) 0x590000U;
    a1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    a1 = (s32) ((u32) a1 << 6);
    v1 = 2;
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) (a0 + 4));
    { s32 c_ = a2 == v1; s1 = (*(volatile s32 *) (u32) a0); if (c_) goto L_008CBE38; }
    v1 = 1;
    if (a2 == v1) { a0 = s1; goto L_008CBDB8; }
    if (a2 == 0) { a0 = s1; goto L_008CBDA8; }
    goto L_008CBE4C;
L_008CBDA8:;
    func_001B0670(a0);
    goto L_008CBE48;
L_008CBDB8:;
    func_001A7250(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s1; func_001A9970(a0);
    a0 = s1; func_001A6630(a0);
    a0 = (s32) ((u32) sp + 0x30U);
    { s32 c_ = a0 == 0; v1 = 20; if (c_) goto L_008CBDF8; }
L_008CBDDC:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_008CBDDC;
L_008CBDF8:;
    v1 = (*(volatile s32 *) (u32) (gp + -20132));
    if (v1 != 0) goto L_008CBE48;
    v0 = (s32) 0x10000U;
    a1 = (s32) 0x180000U;
    a0 = v0 | 0x346;
    a1 = (s32) ((u32) a1 + 0xffffe1d0U);
    a2 = 0;
    a3 = 0;
    a4 = (s32) ((u32) sp + 0x30U);
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) s0;
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) 0; v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    v1 = 1;
    (*(volatile u32 *) (u32) (gp + -20132)) = (u32) v1; goto L_008CBE48;
L_008CBE38:;
    a0 = s1; func_001A6630(a0);
    a0 = s1; func_001B10C0(a0);
L_008CBE48:;
L_008CBE4C:;
    return;
}
