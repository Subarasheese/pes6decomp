/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00944A50(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00949160(s32, s32, s32, s32, f32, f32);
s32 func_009B33F0(s32, s32, s32, s32);
void func_00A15250(s32);
s32 func_00A8AAB0(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00B29B50(void);

void func_00BF1590(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (a0 + 80)) = (u8) 0;
    v1 = (*(volatile u8 *) (u32) (v0 + 7972));
    v0 = 3;
    { s32 c_ = v1 == v0; s1 = a0; if (c_) goto L_00BF15C4; }
    v0 = 6;
    if (v1 == v0) { v0 = 255; goto L_00BF175C; }
L_00BF15C4:;
    v0 = (*(volatile u8 *) (u32) (s1 + 36));
    if (v0 == 0) { a0 = s1; goto L_00BF17D4; }
    a0 = s1;
    s0 = 0; func_00944A50(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    a1 = (*(volatile u16 *) (u32) (s1 + 558));
    a0 = s1;
    a2 = 20;
    a3 = 6144; v0 = func_00949160(a0, a1, a2, a3, f12.f, f13.f);
    a2 = v0 & 0xff;
    v0 = (*(volatile u8 *) (u32) (s1 + 72));
    if (v0 == 0) goto L_00BF17E4;
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) goto L_00BF17E4;
    if (a2 == v0) goto L_00BF169C;
    if (a2 == v1) goto L_00BF169C;
    if (v1 == v0) { a0 = 1; goto L_00BF1634; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00BF1634:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = 255;
    v1 = (s32) ((u32) v1 + (u32) a0);
    { s32 c_ = a2 == v0; a1 = (*(volatile u8 *) (u32) (v1 + 514)); if (c_) goto L_00BF166C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) v0); hi = (s32) ((s32) a2 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00BF1670;
L_00BF166C:;
    a0 = 1;
L_00BF1670:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 514));
    at = a1 < v0;
    if (at == 0) goto L_00BF169C;
    s0 = 1;
L_00BF169C:;
    if (s0 == 0) goto L_00BF16A8;
    (*(volatile u8 *) (u32) (s1 + 72)) = (u8) a2;
L_00BF16A8:;
    v1 = (*(volatile u8 *) (u32) (s1 + 72));
    v0 = 255;
    if (v1 == v0) { v1 = 8; goto L_00BF17EC; }
    if (v1 == v0) { a0 = 1; goto L_00BF16CC; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00BF16CC:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = s1;
    a1 = (s32) ((u32) v0 + (u32) v1); v0 = func_009B33F0(a0, a1, a2, a3);
    (*(volatile u16 *) (u32) (s1 + 558)) = (u16) v0;
L_00BF16F0:;
    v0 = (s32) 0x590000U;
    v1 = 5;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) goto L_00BF1728;
    v0 = func_00B29B50();
    if (v0 == 0) goto L_00BF1728;
    v1 = 9;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (s1 + 76)) = (u8) v1;
    v0 = (*(volatile u8 *) (u32) (v0 + 7758));
    (*(volatile u8 *) (u32) (s1 + 72)) = (u8) v0;
L_00BF1728:;
    v0 = (*(volatile u8 *) (u32) (s1 + 78));
    a0 = s1;
    v0 = v0 & 0xfe;
    (*(volatile u8 *) (u32) (s1 + 78)) = (u8) v0; func_00A15250(a0);
    a0 = (*(volatile s32 *) (u32) (s1 + 28));
    v1 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (s1 + 46)) = (u16) a0;
    (*(volatile u32 *) (u32) (s1 + 148)) = (u32) 0;
    v1 = (*(volatile u8 *) (u32) (v1 + 7140));
    v1 = (s32) ((u32) v1 << 1);
    (*(volatile u8 *) (u32) (s1 + 98)) = (u8) v1; goto L_00BF1804;
L_00BF175C:;
    (*(volatile u8 *) (u32) (s1 + 72)) = (u8) v0; v0 = func_00A8AAB0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    (*(volatile u8 *) (u32) (s1 + 72)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (s1 + 72));
    if (v1 == 0) goto L_00BF17C4;
    v0 = 255;
    if (v1 == v0) goto L_00BF17C4;
L_00BF1780:;
    v1 = (*(volatile u8 *) (u32) (s1 + 72));
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00BF179C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00BF179C:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = s1;
    a1 = (s32) ((u32) v0 + (u32) v1); v0 = func_009B33F0(a0, a1, a2, a3);
    (*(volatile u16 *) (u32) (s1 + 558)) = (u16) v0; goto L_00BF16F0;
L_00BF17C4:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7758));
    (*(volatile u8 *) (u32) (s1 + 72)) = (u8) v0; goto L_00BF1780;
L_00BF17D4:;
    v0 = func_00A8AAB0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    (*(volatile u8 *) (u32) (s1 + 72)) = (u8) v0; goto L_00BF16A8;
L_00BF17E4:;
    s0 = 1; goto L_00BF169C;
L_00BF17EC:;
    v0 = 4096;
    (*(volatile u8 *) (u32) (s1 + 76)) = (u8) v1;
    v1 = (*(volatile u16 *) (u32) (s1 + 558));
    (*(volatile u32 *) (u32) (s1 + 552)) = (u32) v1;
    (*(volatile u32 *) (u32) (s1 + 548)) = (u32) v0; goto L_00BF16F0;
L_00BF1804:;
    return;
}
