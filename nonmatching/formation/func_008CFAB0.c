/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001F1810(s32, s32);
void func_001F1860(s32, s32);
void func_001F18D0(s32, s32);
s32 func_001F1A20(s32, s32, s32, s32);
void func_001F3D10(s32, s32);
void func_001F3D80(s32, s32, s32);
s32 func_002DB830(s32);
s32 func_008B9F20(s32, s32, s32, s32);
void func_008C1360(s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);
void strcpy(s32, s32);

void func_008CFAB0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    s6 = a1;
    s5 = a0;
    if (s6 == 0) goto L_008CFCB8;
    s0 = (*(volatile s32 *) (u32) (s5 + 52));
    if (s0 == 0) { ; goto L_008CFCBC; }
    a0 = (*(volatile s32 *) (u32) (s5 + 504));
    if (a0 == 0) goto L_008CFCB8;
    a1 = 53;
    a2 = (s32) ((u32) sp + 0x90U); func_008C1360(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s5 + 468)); v0 = func_002DB830(a0);
    s1 = v0 & 0xff;
    a0 = s6;
    v0 = 255;
    a1 = 1;
    (*(volatile u8 *) (u32) (sp + 175)) = (u8) v0;
    a2 = 0;
    (*(volatile u8 *) (u32) (sp + 172)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 173)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 174)) = (u8) 0; v0 = func_008B9F20(a0, a1, a2, a3);
    a0 = v0;
    a1 = 0; func_001F3D10(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (sp + 148));
    a0 = (*(volatile u8 *) (u32) (s5 + 5));
    v1 = (*(volatile u8 *) (u32) (s5 + 4));
    f0.i = (s32) f0.f;
    s4 = (s32) ((u32) 0 - (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    at = s4 < v1;
    s7 = f0.i;
    if (at == 0) goto L_008CFCB8;
    v1 = s1 & 0xff;
    s2 = (s32) ((u32) s4 + (u32) v1);
    v1 = (s32) ((u32) s0 + (u32) v1);
    s1 = (s32) ((u32) v1 + (u32) s4);
L_008CFB7C:;
    if (s2 < 0) goto L_008CFC98;
    v1 = (*(volatile u8 *) (u32) (s0 + 33));
    at = s2 < v1;
    if (at == 0) goto L_008CFC98;
    v1 = (*(volatile u8 *) (u32) (s1 + 1));
    at = v1 < 32;
    if (at == 0) goto L_008CFC98;
    a1 = (*(volatile u8 *) (u32) (s5 + 6));
    a0 = (s32) ((u32) s0 + (u32) v1);
    v1 = (s32) ((u32) sp + 0xa0U);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) s4; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a1 = (s32) ((u32) s7 + (u32) a1);
    f0.i = (s32) a1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (sp + 148)) = f0.f;
    a1 = (*(volatile u8 *) (u32) (a0 + 496));
    a0 = (*(volatile u8 *) (u32) (a0 + 208));
    { s32 c_ = v1 == 0; v0 = 8; if (c_) goto L_008CFBF4; }
L_008CFBD8:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_008CFBD8;
L_008CFBF4:;
    a2 = a0 & 0xff;
    if (a2 <= 0) goto L_008CFC18;
    at = a2 < 100;
    if (at == 0) goto L_008CFC18;
    if (a1 == 0) goto L_008CFC30;
L_008CFC18:;
    a1 = (s32) 0x8f0000U;
    a0 = (s32) ((u32) sp + 0xa8U);
    a1 = (s32) ((u32) a1 + 0xffffda58U); strcpy(a0, a1);
    goto L_008CFC40;
L_008CFC30:;
    a1 = (s32) 0x8f0000U;
    a0 = (s32) ((u32) sp + 0xa8U);
    a1 = (s32) ((u32) a1 + 0xffffda60U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
L_008CFC40:;
    a0 = s6;
    a1 = 33;
    a2 = (s32) ((u32) sp + 0xa0U);
    a3 = (s32) ((u32) sp + 0xa8U); v0 = func_001F1A20(a0, a1, a2, a3);
    s3 = v0;
    a1 = 1;
    a0 = s3; func_001F3D10(a0, a1);
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x90U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = s3;
    a1 = 2; func_001F1860(a0, a1);
    a0 = s3;
    a1 = 1; func_001F1810(a0, a1);
    a0 = s3;
    a1 = (s32) ((u32) sp + 0xacU); func_001F18D0(a0, a1);
L_008CFC98:;
    a0 = (*(volatile u8 *) (u32) (s5 + 4));
    v1 = (*(volatile u8 *) (u32) (s5 + 5));
    s4 = (s32) ((u32) s4 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = s4 < v1;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_008CFB7C; }
L_008CFCB8:;
L_008CFCBC:;
    return;
}
