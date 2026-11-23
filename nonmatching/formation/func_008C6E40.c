/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF900(s64, s64);
s64 func_001F08B0(s64);
s64 func_008B4130(s64, s64, s64, s64, s64, s64, s64, s64);
void func_008B66C0(s64, s64, s64, s64);
void func_008B9AB0(s64, s64, s64, s64);
s64 func_008BC370(s64);
void func_008C5750(s64, s64, s64, s64);
void func_008C5E20(s64, s64, s64, s64);
s64 func_008C5FC0(s64, s64, s64, s64);
void func_008C6690(s64, s64, s64, s64);
void func_008C7370(s64, s64, s64, s64, s64, s64, s64, s64);
void func_008C80D0(s64, s64, s64, s64, s64, s64, s64, s64);
void func_008C8240(s64, s64, s64, s64, s64, s64, s64, s64);
void func_008D31A0(s64, s64, s64);
s64 func_008E2870(s64, s64, s64, s64, f32);
void func_008E2A10(s64, s64);
void func_008E2A20(s64, s64, s64, s64, f32);
s64 func_008E2A30(s64);
void func_008E2A40(s64, s64, s64, s64);
void func_008E2A50(s64, s64, s64, s64, s64);

s64 func_008C6E40(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 hi = 0, lo = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    v0 = 2;
    s2 = a0;
    if (a1 == v0) goto L_008C72C4;
    v0 = 1;
    if (a1 == v0) { v0 = (*(volatile u8 *) (u32) (s2 + 39)); goto L_008C6EA4; }
    if (a1 == 0) { a1 = 34; goto L_008C6E7C; }
    v0 = 0; goto L_008C7354;
L_008C6E7C:;
    func_008B66C0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x23b4U);
    a1 = 0;
    a2 = 0; func_008C5E20(a0, a1, a2, a3);
    a0 = s2; func_008C80D0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C7350;
L_008C6EA4:;
    if (v0 == 0) { v1 = (*(volatile u8 *) (u32) (s2 + 22)); goto L_008C6EB8; }
    func_008C7370(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile u8 *) (u32) (s2 + 22));
L_008C6EB8:;
    v0 = 10;
    if (v1 == v0) { v1 = (*(volatile u8 *) (u32) (s2 + 40)); goto L_008C721C; }
    v0 = 2;
    if (v1 == v0) { a1 = (*(volatile u8 *) (u32) (s2 + 25)); goto L_008C717C; }
    v0 = 1;
    if (v1 == v0) { a1 = (*(volatile u8 *) (u32) (s2 + 25)); goto L_008C7154; }
    if (v1 == 0) { v0 = (*(volatile u8 *) (u32) (s2 + 24)); goto L_008C6EFC; }
    v0 = 12;
    if (v1 == v0) { (*(volatile u8 *) (u32) (s2 + 22)) = (u8) 0; goto L_008C6EF8; }
    goto L_008C7350;
L_008C6EF8:;
    v0 = (*(volatile u8 *) (u32) (s2 + 24));
L_008C6EFC:;
    if (v0 != 0) { v0 = 0; goto L_008C6F64; }
    v0 = (*(volatile u8 *) (u32) (s2 + 40));
    if (v0 == 0) goto L_008C6F60;
    v0 = 2;
    v1 = 10;
    (*(volatile u8 *) (u32) (s2 + 40)) = (u8) v0;
    v0 = (s32) 0x10c0000U;
    (*(volatile u8 *) (u32) (s2 + 22)) = (u8) v1;
    a0 = v0 | 0xd; v0 = func_001F08B0(a0);
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) v0;
    a0 = (s32) ((u32) s2 + 0x2484U);
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) 0;
    a1 = 4;
    a3 = (*(volatile u8 *) (u32) s2);
    a2 = 8;
    a4 = (s32) ((u32) sp + 0x40U); func_008E2A50(a0, a1, a2, a3, a4);
    a0 = (s32) ((u32) s2 + 0x2484U);
    a1 = 1; func_008E2A20(a0, a1, a2, a3, f12.f);
    v0 = 1; goto L_008C6F64;
L_008C6F60:;
    v0 = 0;
L_008C6F64:;
    if (v0 != 0) goto L_008C7350;
    v0 = (*(volatile s32 *) (u32) (s2 + 12832));
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (v0 + 36)); goto L_008C6F80; }
    s0 = 1; goto L_008C6F88;
L_008C6F80:;
    v0 = (u64) 0 < (u64) v0;
    s0 = v0 ^ 0x1;
L_008C6F88:;
    a2 = s0 & 0xff;
    a0 = (s32) ((u32) s2 + 0x1ca8U);
    a1 = 2; func_008D31A0(a0, a1, a2);
    a2 = s0 & 0xff;
    a0 = (s32) ((u32) s2 + 0x1ca8U);
    a1 = 3; func_008D31A0(a0, a1, a2);
    a2 = s0 & 0xff;
    a0 = (s32) ((u32) s2 + 0x1ca8U);
    a1 = 4; func_008D31A0(a0, a1, a2);
    a2 = s0 & 0xff;
    a0 = (s32) ((u32) s2 + 0x1ca8U);
    a1 = 5; func_008D31A0(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s2 + 25));
    s1 = (*(volatile u8 *) (u32) (s2 + 9149));
    a0 = (s32) ((u32) s2 + 0x23b4U); v0 = func_008C5FC0(a0, a1, a2, a3);
    a2 = 3;
    if (v0 == a2) { v0 = (*(volatile s32 *) (u32) (s2 + 12832)); goto L_008C7134; }
    v1 = 6;
    if (v0 == v1) { v0 = (s32) 0x10c0000U; goto L_008C70F4; }
    a1 = 1;
    if (v0 == a1) { v0 = 39; goto L_008C7354; }
    a0 = 2;
    if (v0 == a0) { v1 = (*(volatile u8 *) (u32) (s2 + 9220)); goto L_008C7010; }
    goto L_008C7350;
L_008C7010:;
    if (v1 == a2) { s0 = (s64) ((u64) 0 + (u64) (s64) 13); goto L_008C7040; }
    v0 = 4;
    if (v1 == v0) { s0 = (*(volatile u8 *) (u32) (s2 + 9221)); goto L_008C7040; }
    if (v1 == a0) { s0 = (s64) ((u64) 0 + (u64) (s64) 12); goto L_008C7040; }
    if (v1 == a1) { s0 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_008C7040; }
    if (v1 == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 10); goto L_008C7040; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 255);
L_008C7040:;
    a1 = s1;
    a0 = s2;
    a2 = s0; v0 = func_008B4130(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_008C7350;
    a0 = s0 & 0xff;
    at = a0 < 10;
    if (at == 0) { a0 = s2; goto L_008C709C; }
    v1 = 410;
    v0 = (*(volatile s32 *) (u32) (s2 + 104));
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); s1 = lo; }
    a0 = (s32) ((u32) v0 + (u32) s1); v0 = func_008BC370(a0);
    a3 = v0;
    a1 = s0;
    v0 = (*(volatile s32 *) (u32) (s2 + 104));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a2 = (*(volatile u16 *) (u32) v0);
    a0 = (s32) ((u32) s2 + 0x23b4U); func_008C6690(a0, a1, a2, a3);
    a0 = s2;
L_008C709C:;
    func_008C80D0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x10c0000U;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) 0;
    a0 = v0 | 0xf; v0 = func_001F08B0(a0);
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v0;
    a0 = (s32) ((u32) s2 + 0x2484U);
    a3 = (*(volatile u8 *) (u32) s2);
    a1 = 1;
    a2 = 2;
    a4 = (s32) ((u32) sp + 0x48U); func_008E2A50(a0, a1, a2, a3, a4);
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) s2 + 0x2484U);
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) ((u32) v0 >> 1);
    a1 = v0 & 0xffff; func_008E2A10(a0, a1);
    v0 = 1;
    (*(volatile u8 *) (u32) (s2 + 22)) = (u8) v0; goto L_008C7350;
L_008C70F4:;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) 0;
    a0 = v0 | 0x10; v0 = func_001F08B0(a0);
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v0;
    a1 = 2;
    a3 = (*(volatile u8 *) (u32) s2);
    a0 = (s32) ((u32) s2 + 0x2484U);
    a2 = a1;
    a4 = (s32) ((u32) sp + 0x48U); func_008E2A50(a0, a1, a2, a3, a4);
    a0 = (s32) ((u32) s2 + 0x2484U);
    a1 = 1; func_008E2A20(a0, a1, a2, a3, f12.f);
    v0 = 2;
    (*(volatile u8 *) (u32) (s2 + 22)) = (u8) v0; goto L_008C7350;
L_008C7134:;
    if (v0 == 0) { a0 = s2; goto L_008C7144; }
    (*(volatile u8 *) (u32) (v0 + 37)) = (u8) 0;
    a0 = s2;
L_008C7144:;
    func_008C80D0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008C7350;
L_008C7154:;
    a0 = (s32) ((u32) s2 + 0x2484U); v0 = func_008E2870(a0, a1, a2, a3, f12.f);
    v1 = 2;
    if (v0 != v1) goto L_008C7350;
    a0 = (s32) ((u32) s2 + 0x2484U); func_008E2A40(a0, a1, a2, a3);
    v0 = 12;
    (*(volatile u8 *) (u32) (s2 + 22)) = (u8) v0; goto L_008C7350;
L_008C717C:;
    a0 = (s32) ((u32) s2 + 0x2484U); v0 = func_008E2870(a0, a1, a2, a3, f12.f);
    v1 = 1;
    if (v0 == v1) { a0 = (s32) ((u32) s2 + 0x2484U); goto L_008C7208; }
    v1 = 2;
    if (v0 == v1) { a0 = (s32) ((u32) s2 + 0x2484U); goto L_008C71A4; }
    goto L_008C7350;
L_008C71A4:;
    v0 = func_008E2A30(a0);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_008C7204;
    v1 = (*(volatile u8 *) (u32) (s2 + 9220));
    v0 = 3;
    if (v1 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 13); goto L_008C71F8; }
    v0 = 4;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s2 + 9221)); goto L_008C71F8; }
    v0 = 2;
    if (v1 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 12); goto L_008C71F8; }
    v0 = 1;
    if (v1 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_008C71F8; }
    if (v1 == 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 10); goto L_008C71F8; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 255);
L_008C71F8:;
    a1 = v0 & 0xff;
    a0 = s2; func_008C8240(a0, a1, a2, a3, a4, a5, a6, a7);
L_008C7204:;
    a0 = (s32) ((u32) s2 + 0x2484U);
L_008C7208:;
    func_008E2A40(a0, a1, a2, a3);
    v0 = 12;
    (*(volatile u8 *) (u32) (s2 + 22)) = (u8) v0; goto L_008C7350;
L_008C721C:;
    v0 = 2;
    if (v1 == v0) { a1 = (*(volatile u8 *) (u32) (s2 + 25)); goto L_008C724C; }
    if (v1 == 0) { a0 = (s32) ((u32) s2 + 0x2484U); goto L_008C7238; }
    goto L_008C7350;
L_008C7238:;
    func_008E2A40(a0, a1, a2, a3);
    v0 = 12;
    (*(volatile u8 *) (u32) (s2 + 22)) = (u8) v0; goto L_008C7350;
L_008C724C:;
    a0 = (s32) ((u32) s2 + 0x2484U); v0 = func_008E2870(a0, a1, a2, a3, f12.f);
    v1 = 1;
    if (v0 == v1) { v0 = 4; goto L_008C72BC; }
    v1 = 2;
    if (v0 == v1) { a0 = (s32) ((u32) s2 + 0x2484U); goto L_008C7274; }
    goto L_008C7350;
L_008C7274:;
    v0 = func_008E2A30(a0);
    v0 = v0 & 0xff;
    if (v0 != 0) { v0 = 4; goto L_008C72B4; }
    a0 = (*(volatile s32 *) (u32) (s2 + 9256));
    a1 = 0; func_008B9AB0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s2 + 9252));
    a1 = 1; func_008B9AB0(a0, a1, a2, a3);
    v1 = 255;
    v0 = 3;
    (*(volatile u8 *) (u32) (s2 + 9149)) = (u8) v1;
    (*(volatile u8 *) (u32) (s2 + 40)) = (u8) v0; goto L_008C7350;
L_008C72B4:;
    (*(volatile u8 *) (u32) (s2 + 40)) = (u8) v0; goto L_008C7350;
L_008C72BC:;
    (*(volatile u8 *) (u32) (s2 + 40)) = (u8) v0; goto L_008C7350;
L_008C72C4:;
    a0 = (*(volatile s32 *) (u32) (s2 + 9256));
    a1 = 0; func_008B9AB0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s2 + 9252));
    a1 = 1; func_008B9AB0(a0, a1, a2, a3);
    v0 = 255;
    a0 = (s32) ((u32) s2 + 0x23b4U);
    (*(volatile u8 *) (u32) (s2 + 9149)) = (u8) v0;
    a1 = 0;
    a2 = 0; func_008C5E20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s2 + 9252));
    a1 = 0; func_008B9AB0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s2 + 9256));
    a1 = 0; func_008B9AB0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x2464U);
    a1 = 0; func_008C5750(a0, a1, a2, a3);
    s1 = 0;
    s0 = s2;
L_008C7320:;
    a0 = (*(volatile s32 *) (u32) (s0 + 9228));
    a1 = 0; func_001EF900(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 5;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008C7320; }
    a0 = s2; func_008C80D0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s2;
    a1 = 0; func_008B66C0(a0, a1, a2, a3);
L_008C7350:;
    v0 = 0;
L_008C7354:;
    return v0;
}
