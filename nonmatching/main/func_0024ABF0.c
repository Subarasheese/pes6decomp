/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D78E0(s32, s32);
void func_001D7960(s32, s32);
void func_008B2F10(s32, s32, s32, s32);
void func_008B2F30(s32, s32, s32, s32);
void func_008B31A0(s32, s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_0024ABF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    s64 frame[42];
    s32 sp = (s32) (u32) frame;

    s2 = 0;
    s1 = (s32) 0x3b0000U;
    v0 = (*(volatile u8 *) (u32) (gp + -32358));
    s1 = (s32) ((u32) s1 + 0xffffa200U);
    a0 = (*(volatile u8 *) (u32) (gp + -32360));
    s0 = 0;
    v1 = (*(volatile u8 *) (u32) (gp + -32359));
    (*(volatile u8 *) (u32) (sp + 334)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (gp + -32357));
    (*(volatile u8 *) (u32) (sp + 332)) = (u8) a0;
    (*(volatile u8 *) (u32) (sp + 333)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 335)) = (u8) v0;
L_0024AC34:;
    v1 = (*(volatile s8 *) (u32) (s1 + 1));
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_0024AC40; }
L_0024AC40:;
    v0 = 11;
    if (v1 == v0) goto L_0024ACA8;
    v0 = 4;
    if (v1 == v0) goto L_0024ACA8;
    v0 = 2;
    if (v1 == v0) goto L_0024AC78;
    v0 = 1;
    if (v1 == v0) goto L_0024AC78;
    goto L_0024ACF0;
L_0024AC78:;
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 16));
    a1 = 0; func_001D7960(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 16));
    a1 = 1; func_008B31A0(a0, a1, a2, a3);
    goto L_0024AD18;
L_0024ACA8:;
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 16));
    a1 = 3; func_001D7960(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 16));
    a1 = (s32) ((u32) sp + 0x14cU); func_001D78E0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 16));
    a1 = 1; func_008B31A0(a0, a1, a2, a3);
    goto L_0024AD18;
L_0024ACF0:;
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 16));
    a1 = 0; func_001D7960(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -22616));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 16));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
L_0024AD18:;
    v1 = (*(volatile s32 *) (u32) (gp + -22620));
    v1 = (s32) ((u32) v1 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v1 + 16));
    if (a0 == 0) goto L_0024AE08;
    v1 = (*(volatile s8 *) (u32) (s1 + 3));
    if (v1 != 0) goto L_0024ADB8;
    v1 = (*(volatile s8 *) (u32) (s1 + 1));
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_0024AD44; }
L_0024AD44:;
    v0 = 11;
    if (v1 == v0) goto L_0024AD68;
    v0 = 4;
    if (v1 == v0) goto L_0024AD68;
    goto L_0024AD80;
L_0024AD68:;
    a1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = (s32) ((u32) a1 + 0xffff8d40U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0024AD98;
L_0024AD80:;
    a1 = (s32) 0x3e0000U;
    a2 = (s32) ((u32) s2 + 0x1U);
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = (s32) ((u32) a1 + 0xffff8d48U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
L_0024AD98:;
    v0 = (*(volatile s32 *) (u32) (gp + -22620));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 16));
    a1 = (s32) ((u32) sp + 0x40U); func_008B2F30(a0, a1, a2, a3);
    goto L_0024AE08;
L_0024ADB8:;
    v0 = 1;
    if (v1 != v0) goto L_0024ADD8;
    a1 = (s32) ((u32) s1 + 0x4U); func_008B2F30(a0, a1, a2, a3);
    goto L_0024AE08;
L_0024ADD8:;
    v0 = 2;
    if (v1 != v0) goto L_0024ADF8;
    v0 = (s32) 0x10000U;
    a1 = v0 | 0xb; func_008B2F10(a0, a1, a2, a3);
    goto L_0024AE08;
L_0024ADF8:;
    v0 = (s32) 0x10000U;
    a1 = v0 | 0xc; func_008B2F10(a0, a1, a2, a3);
L_0024AE08:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 8;
    s1 = (s32) ((u32) s1 + 0x34U);
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_0024AC34; }
    return;
}
