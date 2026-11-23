/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_008B3050(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_008B3B20(s32, s32, s32, s32);
void func_008B66C0(s32, s32, s32, s32);
s32 func_008B6E80(s32);
void func_008C9CB0(s32, s32);
void func_008C9DB0(s32, s32, f32, f32);
void func_008CAD70(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
s32 func_008CB0C0(s32);
s32 func_008CB960(s32, s32, s32, s32, f32, f32);
void func_008CBD60(s32, s32, s32);
void func_008D32C0(s32, s32, s32, s32);
void func_008D32D0(s32, s32, s32, s32);
void func_008D35A0(s32, s32, s32, s32);
void func_008E5110(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008E65E0(s32, s32, s32, s32);
void func_008E80F0(s32, s32, s32, s32);
void func_008E8180(s32, s32);
s32 func_008E8190(s32);
s32 func_008E81A0(s32, s32, s32, s32);
void func_008E82C0(s32, s32, s32, s32);
void func_008E8320(s32, s32, s32, s32);
void func_008E8360(s32, s32, s32, s32, f32);

s32 func_008E83C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = 2;
    { s32 c_ = a1 == v0; s1 = a0; if (c_) goto L_008E88D8; }
    a2 = 1;
    if (a1 == a2) { v0 = (*(volatile u8 *) (u32) (s1 + 22)); goto L_008E845C; }
    if (a1 == 0) { a1 = (*(volatile u8 *) (u32) s1); goto L_008E83F8; }
    v0 = 0; goto L_008E88EC;
L_008E83F8:;
    a0 = (s32) ((u32) s1 + 0x2984U); func_008E8360(a0, a1, a2, a3, f12.f);
    a0 = s1; v0 = func_008B6E80(a0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + (u32) s1);
    a1 = (*(volatile u8 *) (u32) (v0 + 2510));
    a0 = (s32) ((u32) s1 + 0x2984U); func_008E82C0(a0, a1, a2, a3);
    a0 = s1; v0 = func_008B6E80(a0);
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) s1 + 0x2984U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a2 = (*(volatile u8 *) (u32) (v0 + 2510));
    a1 = (s32) ((u32) s1 + 0x9ceU); func_008E80F0(a0, a1, a2, a3);
    a0 = s1;
    a1 = 24; func_008B66C0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0xb0cU);
    a1 = 17; func_008C9DB0(a0, a1, f12.f, f13.f);
    goto L_008E88E8;
L_008E845C:;
    if (v0 == a2) { a1 = (*(volatile u8 *) (u32) (s1 + 25)); goto L_008E873C; }
    if (v0 == 0) { a1 = (*(volatile u8 *) (u32) (s1 + 25)); goto L_008E8474; }
    goto L_008E88E8;
L_008E8474:;
    a0 = (s32) ((u32) s1 + 0x2984U); v0 = func_008E81A0(a0, a1, a2, a3);
    v1 = 3;
    if (v0 == v1) { a0 = (s32) ((u32) s1 + 0x2984U); goto L_008E86AC; }
    a1 = 6;
    if (v0 == a1) { v0 = (*(volatile u8 *) (u32) (s1 + 2515)); goto L_008E8638; }
    a0 = 1;
    if (v0 == a0) { v0 = (*(volatile u8 *) (u32) (s1 + 2374)); goto L_008E85E8; }
    v1 = 2;
    if (v0 == v1) { v1 = 0; goto L_008E84B4; }
    goto L_008E88E8;
L_008E84B4:;
    a2 = 0;
    v0 = (s32) ((u32) s1 + (u32) a2);
L_008E84BC:;
    v0 = (*(volatile u8 *) (u32) (v0 + 2510));
    if (v0 != a1) goto L_008E84D0;
    v0 = a0; goto L_008E84D8;
L_008E84D0:;
    v0 = 0;
L_008E84D8:;
    v1 = v1 | v0;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < 4;
    if (v0 != 0) { v0 = (s32) ((u32) s1 + (u32) a2); goto L_008E84BC; }
    if (v1 != 0) { a0 = s1; goto L_008E85C4; }
    a0 = (s32) ((u32) s1 + 0x2984U); v0 = func_008E8190(a0);
    v1 = v0 & 0xff;
    v0 = 6;
    if (v1 != v0) goto L_008E85C0;
    a0 = s1;
    a1 = 0;
    a2 = 0; func_008B3B20(a0, a1, a2, a3);
    s0 = 0;
    v1 = (*(volatile u8 *) (u32) (s1 + 2374));
L_008E8524:;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s1 + (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 2546));
    if (v0 <= 0) goto L_008E8558;
    at = v0 < 8;
    if (at != 0) goto L_008E8568;
L_008E8558:;
    a0 = (s32) ((u32) s1 + 0xb0cU);
    a1 = s0;
    a2 = 0; func_008CBD60(a0, a1, a2);
L_008E8568:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 11;
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (s1 + 2374)); goto L_008E8524; }
    a0 = (s32) ((u32) s1 + 0xb0cU);
    a1 = 18; func_008C9DB0(a0, a1, f12.f, f13.f);
    a1 = (*(volatile u8 *) (u32) (s1 + 2514));
    a0 = (s32) ((u32) s1 + 0xb0cU);
    a2 = 0;
    a3 = 0; func_008CAD70(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = (s32) ((u32) s1 + 0x2984U);
    a1 = 0; func_008E8180(a0, a1);
    a0 = (s32) ((u32) s1 + 0x129cU);
    a1 = 0; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile u8 *) (u32) (s1 + 22));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) v0; goto L_008E88E8;
L_008E85C0:;
    a0 = s1;
L_008E85C4:;
    v0 = func_008B6E80(a0);
    s0 = v0 & 0xff;
    a0 = (s32) ((u32) s1 + 0x2984U); v0 = func_008E8190(a0);
    v1 = s0 & 0xff;
    v1 = (s32) ((u32) v1 + (u32) s1);
    (*(volatile u8 *) (u32) (v1 + 2510)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s1 + 2374));
L_008E85E8:;
    (*(volatile u8 *) (u32) (s1 + 2374)) = (u8) 0;
    a0 = (*(volatile u8 *) (u32) (s1 + 2374));
    if (v0 == a0) { v0 = 39; goto L_008E88EC; }
    v1 = (s32) ((u32) a0 << 2);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) s1);
    v1 = (*(volatile u8 *) (u32) (v1 + 2525));
    if (v1 != v0) goto L_008E862C;
    a0 = s1;
    a1 = (s32) ((u32) s1 + 0x208U); func_008B3050(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
L_008E862C:;
    v0 = 39;
    goto L_008E88EC;
L_008E8638:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s1 + 2515)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s1 + 2515));
    if ((u32) v1 != 0) { s64 q_ = (s32) ((u32) v0 / (u32) v1); hi = (s32) ((u32) v0 % (u32) v1); lo = q_; }
    v0 = hi;
    (*(volatile u8 *) (u32) (s1 + 2515)) = (u8) v0;
    a1 = (*(volatile u8 *) (u32) (s1 + 2515));
    a0 = (s32) ((u32) s1 + 0x129cU); func_008E65E0(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s1 + 2510));
    a0 = (s32) ((u32) s1 + 0x1ca8U);
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s1 + 2511));
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s1 + 2512));
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s1 + 2513));
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v0;
    a1 = (*(volatile u8 *) (u32) (s1 + 2515));
    a2 = (s32) ((u32) sp + 0x40U); func_008D35A0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (s1 + 7337));
    a0 = (s32) ((u32) s1 + 0x1ca8U); func_008D32D0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0x1ca8U);
    a1 = 0; func_008D32C0(a0, a1, a2, a3);
    goto L_008E88E8;
L_008E86AC:;
    v0 = func_008E8190(a0);
    a0 = v0 & 0xff;
    v0 = 11;
    { s32 c_ = a0 == v0; v1 = (*(volatile u8 *) (u32) (s1 + 2374)); if (c_) goto L_008E86E0; }
    v0 = 10;
    if (a0 == v0) { v0 = 1; goto L_008E86D8; }
    (*(volatile u8 *) (u32) (s1 + 2374)) = (u8) 0; goto L_008E86E8;
L_008E86D8:;
    (*(volatile u8 *) (u32) (s1 + 2374)) = (u8) v0; goto L_008E86E8;
L_008E86E0:;
    v0 = 2;
    (*(volatile u8 *) (u32) (s1 + 2374)) = (u8) v0;
L_008E86E8:;
    a0 = (*(volatile u8 *) (u32) (s1 + 2374));
    if (v1 == a0) goto L_008E88E8;
    v1 = (s32) ((u32) a0 << 2);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) s1);
    v1 = (*(volatile u8 *) (u32) (v1 + 2525));
    if (v1 != v0) goto L_008E88E8;
    a0 = s1;
    a1 = (s32) ((u32) s1 + 0x208U); func_008B3050(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = (s32) ((u32) s1 + 0xb0cU);
    a1 = 0; func_008C9CB0(a0, a1);
    goto L_008E88E8;
L_008E873C:;
    a0 = (s32) ((u32) s1 + 0xb0cU); v0 = func_008CB960(a0, a1, a2, a3, f12.f, f13.f);
    v1 = 3;
    if (v0 == v1) goto L_008E88E8;
    v1 = 6;
    if (v0 == v1) { v0 = (s32) 0x84020000U; goto L_008E8854; }
    v1 = 2;
    if (v0 == v1) { v0 = (s32) 0x84020000U; goto L_008E87A4; }
    a1 = 1;
    if (v0 == a1) { a0 = (s32) ((u32) s1 + 0x2984U); goto L_008E877C; }
    goto L_008E88E8;
L_008E877C:;
    func_008E8180(a0, a1);
    a0 = (s32) ((u32) s1 + 0x129cU);
    a1 = 1; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s1 + 0xb0cU);
    a1 = 17; func_008C9DB0(a0, a1, f12.f, f13.f);
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) 0; goto L_008E88E8;
L_008E87A4:;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = s1; v0 = func_008B6E80(a0);
    s0 = v0 & 0xff;
    a0 = (s32) ((u32) s1 + 0x2984U); v0 = func_008E8190(a0);
    v1 = s0 & 0xff;
    a0 = (s32) ((u32) s1 + 0xb0cU);
    v1 = (s32) ((u32) v1 + (u32) s1);
    (*(volatile u8 *) (u32) (v1 + 2510)) = (u8) v0; v0 = func_008CB0C0(a0);
    (*(volatile u8 *) (u32) (s1 + 2514)) = (u8) v0;
    a0 = (s32) ((u32) s1 + 0x129cU);
    a1 = 1; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s1 + 0xb0cU);
    a1 = 16; func_008C9DB0(a0, a1, f12.f, f13.f);
    a0 = (s32) ((u32) s1 + 0x2984U);
    a1 = 1; func_008E8180(a0, a1);
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) 0;
    v0 = (*(volatile u8 *) (u32) (s1 + 2374));
    (*(volatile u8 *) (u32) (s1 + 2374)) = (u8) 0;
    a0 = (*(volatile u8 *) (u32) (s1 + 2374));
    if (v0 == a0) { v0 = 39; goto L_008E88EC; }
    v1 = (s32) ((u32) a0 << 2);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) s1);
    v1 = (*(volatile u8 *) (u32) (v1 + 2525));
    if (v1 != v0) goto L_008E8848;
    a0 = s1;
    a1 = (s32) ((u32) s1 + 0x208U); func_008B3050(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
L_008E8848:;
    v0 = 39;
    goto L_008E88EC;
L_008E8854:;
    a0 = v0 | 0x8400; SD_call(a0);
    v1 = (*(volatile u8 *) (u32) (s1 + 2515));
    v0 = 3;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (s1 + 2515)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s1 + 2515));
    if ((u32) v0 != 0) { s64 q_ = (s32) ((u32) v1 / (u32) v0); hi = (s32) ((u32) v1 % (u32) v0); lo = q_; }
    v0 = hi;
    (*(volatile u8 *) (u32) (s1 + 2515)) = (u8) v0;
    a1 = (*(volatile u8 *) (u32) (s1 + 2515));
    a0 = (s32) ((u32) s1 + 0x129cU); func_008E65E0(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s1 + 2510));
    a0 = (s32) ((u32) s1 + 0x1ca8U);
    (*(volatile u32 *) (u32) (sp + 48)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s1 + 2511));
    (*(volatile u32 *) (u32) (sp + 52)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s1 + 2512));
    (*(volatile u32 *) (u32) (sp + 56)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s1 + 2513));
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0;
    a1 = (*(volatile u8 *) (u32) (s1 + 2515));
    a2 = (s32) ((u32) sp + 0x30U); func_008D35A0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (s1 + 7337));
    a0 = (s32) ((u32) s1 + 0x1ca8U); func_008D32D0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0x1ca8U);
    a1 = 0; func_008D32C0(a0, a1, a2, a3);
    goto L_008E88E8;
L_008E88D8:;
    a1 = 0; func_008B66C0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0x2984U); func_008E8320(a0, a1, a2, a3);
L_008E88E8:;
    v0 = 0;
L_008E88EC:;
    return v0;
}
