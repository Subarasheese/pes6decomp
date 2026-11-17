/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001A5F20(s32);
s32 func_00208210(s32);
void func_009832C0(s32, s32, s32, s32);
s32 func_00B2A420(s32);
void func_00B78620(s32, s32, s32, s32);
s32 func_00BBB8C0(s32);

s32 func_00B75580(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    a0 = (*(volatile u8 *) (u32) a0);
    s1 = a1; v0 = func_00B2A420(a0);
    a0 = (*(volatile s32 *) (u32) v0);
    s0 = v0;
    v0 = (*(volatile s32 *) (u32) (a0 + 28));
    v0 = v0 < 3328;
    if (v0 != 0) goto L_00B75714;
    if (s1 != 0) goto L_00B75714;
L_00B755BC:;
    v0 = (s32) 0xcc0000U;
    a1 = (*(volatile u8 *) (u32) (v0 + -16899));
    a0 = (s32) ((u32) a1 >> 1);
    v0 = a1 & 0x1;
    v1 = (s32) ((u32) a0 + 0x1U);
    { s32 c_ = a1 >= 0; (*(volatile u32 *) (u32) (sp + 56)) = (u32) v1; if (c_) goto L_00B755E4; }
    if (v0 == 0) goto L_00B755E4;
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00B755E4:;
    v0 = (s32) ((u32) a0 + (u32) v0);
    { s32 c_ = s1 != 0; (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0; if (c_) goto L_00B75728; }
    v0 = a0 < 3;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) s0); goto L_00B756B8; }
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = (s32) 0xcb0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 13056));
    a5 = (*(volatile u8 *) (u32) (v0 + 19));
    a3 = (s32) ((u32) v1 + 0xcU);
    a4 = a5 ^ 0x1;
    v1 = (s32) ((u32) a5 << 6);
    a0 = (s32) ((u32) v1 - (u32) a5);
    a2 = a4 & 0xff;
    a1 = (s32) ((u32) a2 << 6);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 - (u32) a1);
    v1 = (s32) ((u32) a3 + (u32) v1);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (*(volatile s16 *) (u32) v1);
    a0 = (s32) ((u32) a3 + (u32) a0);
    a0 = (*(volatile s16 *) (u32) a0);
    v1 = (s32) ((u32) v1 - (u32) a0);
    if (v1 < 0) goto L_00B75780;
    if (v1 == 0) goto L_00B75780;
L_00B75664:;
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    at = v0 < 3329;
    if (at != 0) { a0 = 100; goto L_00B75694; }
    a0 = 3; v0 = func_00BBB8C0(a0);
    if (v0 != 0) { v0 = 0; goto L_00B75920; }
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = 28;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B756D4;
L_00B75694:;
    v0 = func_00BBB8C0(a0);
    v0 = v0 < 85;
    if (v0 != 0) { a0 = 3; goto L_00B75838; }
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = 38;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B756D4;
L_00B756B8:;
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    at = v0 < 3329;
    if (at == 0) { v0 = 0; goto L_00B75920; }
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = 38;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1;
L_00B756D4:;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = 28;
    v1 = (*(volatile u8 *) (u32) (v1 + 76));
    if (v1 == v0) { v1 = (*(volatile s32 *) (u32) s0); goto L_00B756F0; }
    v0 = (*(volatile s32 *) (u32) s0); goto L_00B75894;
L_00B756F0:;
    v0 = (s32) 0x42000000U;
    f0.i = (s32) v0;
    v0 = (*(volatile s32 *) (u32) (v1 + 4));
    f1.f = (*(volatile f32 *) (u32) (v0 + 56));
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00B75890;
    v0 = 0; goto L_00B75920;
L_00B75714:;
    func_00B78620(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) (v0 + 28)) = (u32) 0; goto L_00B755BC;
L_00B75728:;
    a0 = 5; v0 = func_001A5F20(a0);
    a0 = v0; v0 = func_00208210(a0);
    v1 = 176;
    if (v0 != v1) { a0 = 5; goto L_00B75754; }
L_00B75744:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = 19;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B756D4;
L_00B75754:;
    v0 = func_001A5F20(a0);
    a0 = v0; v0 = func_00208210(a0);
    v1 = 180;
    if (v0 == v1) goto L_00B75744;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = 20;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B756D4;
L_00B75780:;
    a0 = (s32) ((u32) a5 << 2);
    v1 = (s32) ((u32) a4 << 2);
    a0 = (s32) ((u32) a0 + (u32) sp);
    v1 = (s32) ((u32) v1 + (u32) sp);
    a0 = (*(volatile s32 *) (u32) (a0 + 56));
    v1 = (*(volatile s32 *) (u32) (v1 + 56));
    v1 = (s32) ((u32) a0 - (u32) v1);
    if (v1 <= 0) goto L_00B75664;
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    at = v0 < 3329;
    if (at != 0) { a0 = 100; goto L_00B757BC; }
    v0 = 0; goto L_00B75920;
L_00B757BC:;
    v0 = func_00BBB8C0(a0);
    at = v0 < 91;
    if (at == 0) { a0 = 3; goto L_00B757E0; }
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = 38;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B756D4;
L_00B757E0:;
    v0 = func_00BBB8C0(a0);
    v1 = 2;
    if (v0 == v1) goto L_00B75828;
    v1 = 1;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00B7581C; }
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00B75810; }
    v0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00B7582C;
L_00B75810:;
    v1 = 17;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B756D4;
L_00B7581C:;
    v1 = 21;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B756D4;
L_00B75828:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
L_00B7582C:;
    v1 = 22;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B756D4;
L_00B75838:;
    v0 = func_00BBB8C0(a0);
    v1 = 2;
    if (v0 == v1) goto L_00B75880;
    v1 = 1;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00B75874; }
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00B75868; }
    v0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00B75884;
L_00B75868:;
    v1 = 17;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B756D4;
L_00B75874:;
    v1 = 21;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B756D4;
L_00B75880:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
L_00B75884:;
    v1 = 22;
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B756D4;
L_00B75890:;
    v0 = (*(volatile s32 *) (u32) s0);
L_00B75894:;
    v1 = 74;
    (*(volatile u8 *) (u32) (v0 + 22)) = (u8) v1;
    v0 = (*(volatile s32 *) (u32) s0);
    (*(volatile u16 *) (u32) (v0 + 24)) = (u16) 0;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 55; func_009832C0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 76));
    at = (u64) v0 < (u64) (s64) 52;
    if (at == 0) goto L_00B7591C;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd800U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xb758e0U) goto L_00B758E0; if (t_ == 0xb758f0U) goto L_00B758F0; if (t_ == 0xb75900U) goto L_00B75900; if (t_ == 0xb75910U) goto L_00B75910; }
L_00B758E0:;
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = 12;
    (*(volatile u16 *) (u32) (v0 + 24)) = (u16) v1; goto L_00B7591C;
L_00B758F0:;
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = 14;
    (*(volatile u16 *) (u32) (v0 + 24)) = (u16) v1; goto L_00B7591C;
L_00B75900:;
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = 17;
    (*(volatile u16 *) (u32) (v0 + 24)) = (u16) v1; goto L_00B7591C;
L_00B75910:;
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = 21;
    (*(volatile u16 *) (u32) (v0 + 24)) = (u16) v1;
L_00B7591C:;
    v0 = 1;
L_00B75920:;
    return v0;
}
