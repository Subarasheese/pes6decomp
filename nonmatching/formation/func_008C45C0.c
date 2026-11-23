/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_008B3050(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_008B3400(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_008B3810(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008B3B20(s32, s32, s32, s32);
void func_008B3FD0(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_008B66C0(s32, s32, s32, s32);
s32 func_008BC3B0(void);
s32 func_008BF0E0(void);
s32 func_008C3B70(s32, s32, s32);
s32 func_008C4AD0(s32, s32);
s32 func_008C4DB0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008C9B00(s32, s32, s32, s32);
void func_008C9DB0(s32, s32, f32, f32);
void func_008CAB90(s32, s32, s32, s32);
void func_008CAD70(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
s32 func_008CB0C0(s32);
void func_008CB0E0(s32, f32, f32);
s32 func_008CB960(s32, s32, s32, s32, f32, f32);
void func_008DCBA0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008DCD20(s32, s32, s32, s32, f32);
void func_008E5110(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008E55C0(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_008C45C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = 2;
    { s32 c_ = a1 == v0; s0 = a0; if (c_) goto L_008C4AA8; }
    v1 = 1;
    if (a1 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 22)); goto L_008C4698; }
    if (a1 == 0) { a1 = 4; goto L_008C45F4; }
    v0 = 0; goto L_008C4AB4;
L_008C45F4:;
    a2 = 0; func_008B3B20(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 1; func_008C9DB0(a0, a1, f12.f, f13.f);
    v0 = func_008BF0E0();
    if (v0 == 0) { a0 = s0; goto L_008C462C; }
    a0 = s0;
    a1 = 1; func_008B66C0(a0, a1, a2, a3);
    goto L_008C4634;
L_008C462C:;
    a1 = 2; func_008B66C0(a0, a1, a2, a3);
L_008C4634:;
    v0 = func_008BC3B0();
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s0 + 44)); goto L_008C4658; }
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = 1;
    if (v1 == v0) { a0 = (s32) ((u32) s0 + 0x129cU); goto L_008C4688; }
    v0 = (*(volatile u8 *) (u32) (s0 + 44));
L_008C4658:;
    if (v0 != 0) { v0 = (s32) 0x3f0000U; goto L_008C4678; }
    v0 = (s32) 0x3f0000U;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = v0 | 0x2a; func_008C9B00(a0, a1, a2, a3);
    goto L_008C4684;
L_008C4678:;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = v0 | 0x2b; func_008C9B00(a0, a1, a2, a3);
L_008C4684:;
    a0 = (s32) ((u32) s0 + 0x129cU);
L_008C4688:;
    a1 = 2; func_008E5110(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C4AB0;
L_008C4698:;
    if (v0 == v1) { a1 = (*(volatile u8 *) (u32) (s0 + 25)); goto L_008C47C4; }
    if (v0 == 0) { a1 = (*(volatile u8 *) (u32) (s0 + 25)); goto L_008C46B0; }
    goto L_008C4AB0;
L_008C46B0:;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a2 = 0; v0 = func_008CB960(a0, a1, a2, a3, f12.f, f13.f);
    v1 = 3;
    if (v0 == v1) goto L_008C4AB0;
    v1 = 2;
    if (v0 == v1) { v0 = (s32) 0x84020000U; goto L_008C4748; }
    v1 = 7;
    if (v0 == v1) { a0 = s0; goto L_008C46F4; }
    v1 = 1;
    if (v0 == v1) { v0 = 39; goto L_008C4AB4; }
    goto L_008C4AB0;
L_008C46F4:;
    v0 = func_008C4DB0(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_008C4AB0;
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = s0;
    a1 = (s32) ((u32) s0 + 0x208U); func_008B3050(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = s0; func_008B3400(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = s0; func_008B3FD0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CB0C0(a0);
    a0 = s0;
    a1 = v0; func_008B3810(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C4AB0;
L_008C4748:;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CB0C0(a0);
    a1 = v0 & 0xff;
    a0 = (s32) ((u32) s0 + 0xb0cU); func_008CAB90(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CB0C0(a0);
    a1 = v0 & 0xff;
    a0 = (s32) ((u32) s0 + 0x129cU); func_008E55C0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0x2168U); func_008DCD20(a0, a1, a2, a3, f12.f);
    a0 = (s32) ((u32) s0 + 0xb0cU); func_008CB0E0(a0, f12.f, f13.f);
    v0 = func_008BC3B0();
    if (v0 == 0) { v0 = (s32) 0x3f0000U; goto L_008C47AC; }
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = 1;
    if (v1 == v0) { v0 = 1; goto L_008C47BC; }
    v0 = (s32) 0x3f0000U;
L_008C47AC:;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = v0 | 0x2c; func_008C9B00(a0, a1, a2, a3);
    v0 = 1;
L_008C47BC:;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) v0; goto L_008C4AB0;
L_008C47C4:;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a2 = 0; v0 = func_008CB960(a0, a1, a2, a3, f12.f, f13.f);
    v1 = 3;
    if (v0 == v1) goto L_008C4AB0;
    v1 = 7;
    if (v0 == v1) goto L_008C498C;
    v1 = 1;
    if (v0 == v1) { a0 = (s32) ((u32) s0 + 0x2168U); goto L_008C48FC; }
    v1 = 2;
    if (v0 == v1) { a0 = (s32) ((u32) s0 + 0xb0cU); goto L_008C4808; }
    goto L_008C4AB0;
L_008C4808:;
    v0 = func_008CB0C0(a0);
    a2 = (*(volatile u8 *) (u32) (s0 + 3988));
    a1 = v0 & 0xff;
    a0 = (s32) ((u32) s0 + 0x208U); v0 = func_008C3B70(a0, a1, a2);
    if (v0 == 0) { v0 = (s32) 0x8c000000U; goto L_008C48EC; }
    a0 = s0;
    a1 = (s32) ((u32) s0 + 0x208U); func_008B3050(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = s0; func_008B3400(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = s0; func_008B3FD0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0xb0cU); func_008CB0E0(a0, f12.f, f13.f);
    v0 = (s32) 0x84020000U;
    (*(volatile u8 *) (u32) (s0 + 44)) = (u8) 0;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = (s32) ((u32) s0 + 0x2168U); func_008DCBA0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 255; func_008CAB90(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = 255; func_008E55C0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CB0C0(a0);
    a1 = v0;
    a0 = s0; func_008B3810(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = func_008BC3B0();
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s0 + 44)); goto L_008C48B4; }
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = 1;
    if (v1 == v0) { (*(volatile u8 *) (u32) (s0 + 22)) = (u8) 0; goto L_008C4AB0; }
    v0 = (*(volatile u8 *) (u32) (s0 + 44));
L_008C48B4:;
    if (v0 != 0) { v0 = (s32) 0x3f0000U; goto L_008C48D4; }
    v0 = (s32) 0x3f0000U;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = v0 | 0x2a; func_008C9B00(a0, a1, a2, a3);
    goto L_008C48E0;
L_008C48D4:;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = v0 | 0x2b; func_008C9B00(a0, a1, a2, a3);
L_008C48E0:;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) 0;
    goto L_008C4AB0;
L_008C48EC:;
    a0 = v0 | 0x8005; SD_call(a0);
    goto L_008C4AB0;
L_008C48FC:;
    func_008DCBA0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 255; func_008CAB90(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = 255; func_008E55C0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CB0C0(a0);
    a1 = v0;
    a0 = s0; func_008B3810(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = func_008BC3B0();
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s0 + 44)); goto L_008C4954; }
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = 1;
    if (v1 == v0) { (*(volatile u8 *) (u32) (s0 + 22)) = (u8) 0; goto L_008C4AB0; }
    v0 = (*(volatile u8 *) (u32) (s0 + 44));
L_008C4954:;
    if (v0 != 0) { v0 = (s32) 0x3f0000U; goto L_008C4974; }
    v0 = (s32) 0x3f0000U;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = v0 | 0x2a; func_008C9B00(a0, a1, a2, a3);
    goto L_008C4980;
L_008C4974:;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = v0 | 0x2b; func_008C9B00(a0, a1, a2, a3);
L_008C4980:;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) 0;
    goto L_008C4AB0;
L_008C498C:;
    v0 = func_008BC3B0();
    if (v0 == 0) { a1 = (*(volatile u8 *) (u32) (s0 + 3988)); goto L_008C49B8; }
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = 1;
    if (v1 != v0) goto L_008C49B4;
    v0 = 0; goto L_008C49C0;
L_008C49B4:;
    a1 = (*(volatile u8 *) (u32) (s0 + 3988));
L_008C49B8:;
    a0 = (s32) ((u32) s0 + 0x208U); v0 = func_008C4AD0(a0, a1);
L_008C49C0:;
    if (v0 == 0) { v0 = (s32) 0x8c000000U; goto L_008C4A98; }
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = s0;
    a1 = (s32) ((u32) s0 + 0x208U); func_008B3050(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = s0; func_008B3400(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = s0; func_008B3FD0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a1 = (*(volatile u8 *) (u32) (s0 + 3988));
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a2 = 0;
    a3 = 0; func_008CAD70(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = (s32) ((u32) s0 + 0x2168U);
    (*(volatile u8 *) (u32) (s0 + 44)) = (u8) 0; func_008DCBA0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = 255; func_008CAB90(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x129cU);
    a1 = 255; func_008E55C0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) ((u32) s0 + 0xb0cU); v0 = func_008CB0C0(a0);
    a1 = v0;
    a0 = s0; func_008B3810(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = func_008BC3B0();
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s0 + 44)); goto L_008C4A60; }
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = 1;
    if (v1 == v0) { (*(volatile u8 *) (u32) (s0 + 22)) = (u8) 0; goto L_008C4AB0; }
    v0 = (*(volatile u8 *) (u32) (s0 + 44));
L_008C4A60:;
    if (v0 != 0) { v0 = (s32) 0x3f0000U; goto L_008C4A80; }
    v0 = (s32) 0x3f0000U;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = v0 | 0x2a; func_008C9B00(a0, a1, a2, a3);
    goto L_008C4A8C;
L_008C4A80:;
    a0 = (s32) ((u32) s0 + 0xb0cU);
    a1 = v0 | 0x2b; func_008C9B00(a0, a1, a2, a3);
L_008C4A8C:;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) 0;
    goto L_008C4AB0;
L_008C4A98:;
    a0 = v0 | 0x8005; SD_call(a0);
    goto L_008C4AB0;
L_008C4AA8:;
    a1 = 0; func_008B66C0(a0, a1, a2, a3);
L_008C4AB0:;
    v0 = 0;
L_008C4AB4:;
    return v0;
}
