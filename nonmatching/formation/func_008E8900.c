/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_008B2D70(s32, s32, s32, s32);
void func_008B2DB0(s32, s32, s32, s32, s32, s32, s32, s32, f32);
void func_008B2E10(s32, s32, s32, s32);
void func_008B3050(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_008B66C0(s32, s32, s32, s32);
void func_008B6E60(s32, s32, s32, s32);
void func_008B6EB0(s32, s32);
void func_008C9CB0(s32, s32);
void func_008C9DB0(s32, s32, f32, f32);
void func_008D32D0(s32, s32, s32, s32);
void func_008D35A0(s32, s32, s32, s32);
s32 func_008D3B00(s32, s32, s32, s32);
void func_008E65E0(s32, s32, s32, s32);
void func_008E80F0(s32, s32, s32, s32);
void func_008E8180(s32, s32);
void func_008E8320(s32, s32, s32, s32);
void func_008E8360(s32, s32, s32, s32, f32);
void func_008EAD60(s32, s32, s32, s32);

s32 func_008E8900(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = 2;
    { s32 c_ = a1 == v0; s0 = a0; if (c_) goto L_008E8CF8; }
    v0 = 1;
    if (a1 == v0) { a1 = (*(volatile u8 *) (u32) (s0 + 25)); goto L_008E8AA4; }
    if (a1 == 0) { v0 = (*(volatile u8 *) (u32) (s0 + 2510)); goto L_008E8938; }
    v0 = 0; goto L_008E8D18;
L_008E8938:;
    a0 = (s32) ((u32) s0 + 0x1ca8U);
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 2511));
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 2512));
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 2513));
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v0;
    a1 = (*(volatile u8 *) (u32) (s0 + 2515));
    a2 = (s32) ((u32) sp + 0x40U); func_008D35A0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) s0);
    a0 = (s32) ((u32) s0 + 0x2984U); func_008E8360(a0, a1, a2, a3, f12.f);
    a0 = s0; func_008B2DB0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    a0 = (s32) ((u32) s0 + 0x24c4U);
    a1 = 0; func_008EAD60(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 17; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = s0; func_008B6E60(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s0 + 7337));
    a0 = (s32) ((u32) s0 + 0x2984U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a2 = (*(volatile u8 *) (u32) (v0 + 2510));
    a1 = (s32) ((u32) s0 + 0x9ceU); func_008E80F0(a0, a1, a2, a3);
    s1 = (*(volatile u8 *) (u32) (s0 + 7337));
    at = s1 < 4;
    if (at == 0) { a0 = (s32) ((u32) s0 + 0x24c4U); goto L_008E8A7C; }
    a0 = (s32) ((u32) s0 + 0x24c4U);
    a1 = 0; func_008EAD60(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x2984U);
    a1 = 1; func_008E8180(a0, a1);
    v0 = s1 & 0xff;
    a0 = (s32) ((u32) s0 + 0x2984U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = (s32) ((u32) s0 + 0x9ceU);
    a2 = (*(volatile u8 *) (u32) (v0 + 2510));
    s1 = (s32) ((u32) v0 + 0x9ceU); func_008E80F0(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) s1);
    v0 = 11;
    { s32 c_ = v1 == v0; a1 = (*(volatile u8 *) (u32) (s0 + 2374)); if (c_) goto L_008E8A20; }
    v0 = 10;
    if (v1 == v0) { v0 = 1; goto L_008E8A18; }
    (*(volatile u8 *) (u32) (s0 + 2374)) = (u8) 0; goto L_008E8A28;
L_008E8A18:;
    (*(volatile u8 *) (u32) (s0 + 2374)) = (u8) v0; goto L_008E8A28;
L_008E8A20:;
    v0 = 2;
    (*(volatile u8 *) (u32) (s0 + 2374)) = (u8) v0;
L_008E8A28:;
    a0 = (*(volatile u8 *) (u32) (s0 + 2374));
    if (a1 == a0) { a0 = s0; goto L_008E8A94; }
    v1 = (s32) ((u32) a0 << 2);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (*(volatile u8 *) (u32) (v1 + 2525));
    if (v1 != v0) goto L_008E8A90;
    a0 = s0;
    a1 = (s32) ((u32) s0 + 0x208U); func_008B3050(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 0; func_008C9CB0(a0, a1);
    goto L_008E8A90;
L_008E8A7C:;
    a1 = 1; func_008EAD60(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x2984U);
    a1 = 0; func_008E8180(a0, a1);
L_008E8A90:;
    a0 = s0;
L_008E8A94:;
    a1 = 23; func_008B66C0(a0, a1, a2, a3);
    goto L_008E8D14;
L_008E8AA4:;
    a0 = (s32) ((u32) s0 + 0x1ca8U); v0 = func_008D3B00(a0, a1, a2, a3);
    v1 = 3;
    if (v0 == v1) { s1 = (*(volatile u8 *) (u32) (s0 + 7337)); goto L_008E8C14; }
    v1 = 6;
    if (v0 == v1) { v0 = (s32) 0x84020000U; goto L_008E8B8C; }
    v1 = 2;
    if (v0 == v1) { s1 = (*(volatile u8 *) (u32) (s0 + 7337)); goto L_008E8B30; }
    a0 = 1;
    if (v0 == a0) { v0 = (*(volatile u8 *) (u32) (s0 + 2374)); goto L_008E8AE4; }
    goto L_008E8D14;
L_008E8AE4:;
    (*(volatile u8 *) (u32) (s0 + 2374)) = (u8) 0;
    v1 = (*(volatile u8 *) (u32) (s0 + 2374));
    if (v0 == v1) { v0 = 39; goto L_008E8D18; }
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 2525));
    if (v0 != a0) goto L_008E8B24;
    a0 = s0;
    a1 = (s32) ((u32) s0 + 0x208U); func_008B3050(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
L_008E8B24:;
    v0 = 39;
    goto L_008E8D18;
L_008E8B30:;
    a0 = s0;
    a1 = s1; func_008B6EB0(a0, a1);
    v1 = s1 & 0xff;
    v0 = 4;
    if (v1 == v0) { v0 = 12; goto L_008E8D18; }
    v0 = 3;
    if (v1 == v0) { v0 = 14; goto L_008E8D18; }
    v0 = 2;
    if (v1 == v0) goto L_008E8B80;
    v0 = 1;
    if (v1 == v0) goto L_008E8B80;
    if (v1 == 0) goto L_008E8B80;
    goto L_008E8D14;
L_008E8B80:;
    v0 = 14;
    goto L_008E8D18;
L_008E8B8C:;
    a0 = v0 | 0x8400; SD_call(a0);
    v1 = (*(volatile u8 *) (u32) (s0 + 2515));
    v0 = 3;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (s0 + 2515)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s0 + 2515));
    if ((u32) v0 != 0) { s64 q_ = (s32) ((u32) v1 / (u32) v0); hi = (s32) ((u32) v1 % (u32) v0); lo = q_; }
    v0 = hi;
    (*(volatile u8 *) (u32) (s0 + 2515)) = (u8) v0;
    a1 = (*(volatile u8 *) (u32) (s0 + 2515));
    a0 = (s32) ((u32) s0 + 0x129cU); func_008E65E0(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s0 + 2510));
    a0 = (s32) ((u32) s0 + 0x1ca8U);
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 2511));
    (*(volatile u32 *) (u32) (sp + 52)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 2512));
    (*(volatile u32 *) (u32) (sp + 56)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 2513));
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0;
    a1 = (*(volatile u8 *) (u32) (s0 + 2515));
    a2 = (s32) ((u32) sp + 0x30U); func_008D35A0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (s0 + 7337));
    a0 = (s32) ((u32) s0 + 0x1ca8U); func_008D32D0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (s0 + 2515));
    a0 = s0;
    a2 = (s32) ((u32) s0 + 0x946U); func_008B2E10(a0, a1, a2, a3);
    goto L_008E8D14;
L_008E8C14:;
    at = s1 < 4;
    if (at == 0) { a0 = (s32) ((u32) s0 + 0x24c4U); goto L_008E8CDC; }
    a0 = (s32) ((u32) s0 + 0x24c4U);
    a1 = 0; func_008EAD60(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x2984U);
    a1 = 1; func_008E8180(a0, a1);
    v0 = s1 & 0xff;
    a0 = (s32) ((u32) s0 + 0x2984U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = (s32) ((u32) s0 + 0x9ceU);
    a2 = (*(volatile u8 *) (u32) (v0 + 2510));
    s1 = (s32) ((u32) v0 + 0x9ceU); func_008E80F0(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) s1);
    v0 = 11;
    { s32 c_ = v1 == v0; a1 = (*(volatile u8 *) (u32) (s0 + 2374)); if (c_) goto L_008E8C80; }
    v0 = 10;
    if (v1 == v0) { v0 = 1; goto L_008E8C78; }
    (*(volatile u8 *) (u32) (s0 + 2374)) = (u8) 0; goto L_008E8C88;
L_008E8C78:;
    (*(volatile u8 *) (u32) (s0 + 2374)) = (u8) v0; goto L_008E8C88;
L_008E8C80:;
    v0 = 2;
    (*(volatile u8 *) (u32) (s0 + 2374)) = (u8) v0;
L_008E8C88:;
    a0 = (*(volatile u8 *) (u32) (s0 + 2374));
    if (a1 == a0) goto L_008E8D14;
    v1 = (s32) ((u32) a0 << 2);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (*(volatile u8 *) (u32) (v1 + 2525));
    if (v1 != v0) goto L_008E8D14;
    a0 = s0;
    a1 = (s32) ((u32) s0 + 0x208U); func_008B3050(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 0; func_008C9CB0(a0, a1);
    goto L_008E8D14;
L_008E8CDC:;
    a1 = 1; func_008EAD60(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x2984U);
    a1 = 0; func_008E8180(a0, a1);
    goto L_008E8D14;
L_008E8CF8:;
    a0 = (s32) ((u32) s0 + 0x2984U); func_008E8320(a0, a1, a2, a3);
    a0 = s0; func_008B2D70(a0, a1, a2, a3);
    a0 = s0;
    a1 = 0; func_008B66C0(a0, a1, a2, a3);
L_008E8D14:;
    v0 = 0;
L_008E8D18:;
    return v0;
}
