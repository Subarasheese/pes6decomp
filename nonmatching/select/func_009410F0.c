/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00246550(s32);
void func_008B2E90(s32, s32, s32, s32);
void func_008B2EE0(s32, s32, s32, s32);

void func_009410F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 frame[30];
    s32 sp = (s32) (u32) frame;

    a2 = (s32) 0x960000U;
    a2 = (s32) ((u32) a2 + 0xffffe2c0U);
    a1 = (s32) ((u32) sp + 0x80U);
    a0 = 8;
    s0 = (s32) 0x540000U;
    s0 = (s32) ((u32) s0 + 0xffffc300U);
L_0094112C:;
    v1 = (*(volatile s32 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s32 *) (u32) (a2 + 4));
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) v0;
    a2 = (s32) ((u32) a2 + 0x8U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x8U); if (c_) goto L_0094112C; }
    a0 = (s32) ((u32) sp + 0xecU);
    a1 = 2; func_008B2E90(a0, a1, a2, a3);
    v0 = (s32) 0x540000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -15596));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = (*(volatile s32 *) (u32) (sp + 236)); func_008B2EE0(a0, a1, a2, a3);
    s2 = 3;
    s1 = 12;
L_00941174:;
    a0 = (s32) ((u32) sp + 0xe8U);
    a1 = 2; func_008B2E90(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (sp + 232)); func_008B2EE0(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 20;
    { s32 c_ = at != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00941174; }
    s1 = 20;
    s2 = 80;
L_009411AC:;
    a0 = (s32) ((u32) sp + 0xe4U);
    a1 = 2; func_008B2E90(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (sp + 228)); func_008B2EE0(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 37;
    { s32 c_ = at != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_009411AC; }
    v0 = (s32) 0x960000U;
    v0 = (*(volatile s8 *) (u32) (v0 + 31384));
    if (v0 > 0) { a0 = (s32) ((u32) sp + 0xdcU); goto L_00941210; }
    a0 = (s32) ((u32) sp + 0xe0U);
    a1 = 3; func_008B2E90(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = (*(volatile s32 *) (u32) (sp + 224)); func_008B2EE0(a0, a1, a2, a3);
    goto L_00941264;
L_00941210:;
    a1 = 3; func_008B2E90(a0, a1, a2, a3);
    v0 = (s32) 0x960000U;
    v1 = (*(volatile s32 *) (u32) (s0 + 20));
    v0 = (*(volatile s8 *) (u32) (v0 + 31384));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = (*(volatile s32 *) (u32) (sp + 220)); func_008B2EE0(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0xd8U);
    a1 = 3; func_008B2E90(a0, a1, a2, a3);
    v0 = (s32) 0x960000U;
    v1 = (*(volatile s32 *) (u32) (s0 + 20));
    v0 = (*(volatile s8 *) (u32) (v0 + 31384));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) (v0 + 76));
    a1 = (*(volatile s32 *) (u32) (sp + 216)); func_008B2EE0(a0, a1, a2, a3);
L_00941264:;
    s3 = (s32) 0x960000U;
    s6 = 0;
    s3 = (s32) ((u32) s3 + 0xffffe240U);
    s2 = 0;
    s1 = (s32) ((u32) sp + 0x80U);
L_00941278:;
    a0 = (*(volatile s32 *) (u32) (s3 + 4));
    if (a0 == 0) goto L_009412E0;
    v0 = func_00246550(a0);
    v1 = 1;
    if (v0 != v1) goto L_00941380;
    a0 = (s32) ((u32) sp + 0xd4U);
    a1 = 4; func_008B2E90(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (*(volatile s32 *) (u32) (sp + 212)); func_008B2EE0(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0xd0U);
    a1 = 4; func_008B2E90(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) (v0 + 80));
    a1 = (*(volatile s32 *) (u32) (sp + 208)); func_008B2EE0(a0, a1, a2, a3);
    goto L_00941380;
L_009412E0:;
    s5 = (*(volatile s32 *) (u32) s1);
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    at = s5 < v1;
    { s32 c_ = at == 0; s4 = 0; if (c_) goto L_00941338; }
L_009412F8:;
    v1 = 196;
    if (s5 == v1) goto L_00941320;
    a0 = s5; v0 = func_00246550(a0);
    if (v0 != 0) goto L_00941320;
    s4 = 1; goto L_00941338;
L_00941320:;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    s5 = (s32) ((u32) s5 + 0x1U);
    v1 = s5 < v1;
    if (v1 != 0) goto L_009412F8;
L_00941338:;
    if (s4 != 0) goto L_00941380;
    a0 = (s32) ((u32) sp + 0xccU);
    a1 = 4; func_008B2E90(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (*(volatile s32 *) (u32) (sp + 204)); func_008B2EE0(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0xc8U);
    a1 = 4; func_008B2E90(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) (v0 + 80));
    a1 = (*(volatile s32 *) (u32) (sp + 200)); func_008B2EE0(a0, a1, a2, a3);
L_00941380:;
    s6 = (s32) ((u32) s6 + 0x1U);
    at = s6 < 14;
    s3 = (s32) ((u32) s3 + 0x4U);
    s2 = (s32) ((u32) s2 + 0x4U);
    { s32 c_ = at != 0; s1 = (s32) ((u32) s1 + 0x8U); if (c_) goto L_00941278; }
    return;
}
