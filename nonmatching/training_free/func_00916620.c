/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002AE670(s64);
void func_0090BA30(s64);
s64 func_00910D80(s64, s64, s64, s64);
s64 func_009176C0(s64, s64, s64, s64);
s64 func_009193D0(s64);
void func_00983260(s64, s64, s64, s64);
void func_009832C0(s64, s64, s64, s64);
s64 func_00990820(s64, s64, s64, s64);
s64 func_00A07B40(s64, s64, s64, s64);
void func_00C230D0(s64, s64, s64, s64);
s64 func_00C26720(s64, s64, s64, s64);

s64 func_00916620(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    f32 acc = 0;

    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    v1 = (*(volatile u8 *) (u32) (a0 + 19));
    a1 = (*(volatile u8 *) (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    { s32 c_ = a1 == v0; s0 = a0; if (c_) goto L_009167C4; }
    v1 = (*(volatile u8 *) (u32) (s0 + 22));
    v0 = 7;
    if (v1 != v0) { v0 = 0; goto L_00916974; }
    v1 = (*(volatile u8 *) (u32) (s0 + 477));
    v0 = 55;
    if (v1 == v0) goto L_009167CC;
    v0 = 41;
    if (v1 == v0) goto L_009167CC;
    v0 = 37;
    if (v1 == v0) goto L_009167CC;
    v0 = 14;
    if (v1 == v0) goto L_009167CC;
    v0 = 12;
    if (v1 == v0) goto L_009167CC;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21166));
    if (a1 == v0) { a1 = 51; goto L_009167D4; }
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21182));
    if (a1 == v0) { a1 = 45; goto L_009167EC; }
    v0 = (s32) ((u32) v1 + 0xffffffd5U);
    at = (u64) v0 < (u64) (s64) 2;
    if (at != 0) goto L_00916804;
    v0 = func_009193D0(a0);
    v1 = v0 & 0xff;
    v0 = 2;
    if (v1 == v0) { a0 = s0; goto L_00916728; }
    v0 = 1;
    if (v1 == v0) { a0 = s0; goto L_009166FC; }
    v0 = (*(volatile u8 *) (u32) (s0 + 469)); goto L_00916744;
L_009166FC:;
    a1 = 43; func_00983260(a0, a1, a2, a3);
    a0 = s0;
    (*(volatile u32 *) (u32) (s0 + 480)) = (u32) 0; v0 = func_00C26720(a0, a1, a2, a3);
    if (v0 == 0) { a0 = 44; goto L_00916814; }
L_00916718:;
    a0 = s0; func_0090BA30(a0);
    v0 = 1; goto L_00916974;
L_00916728:;
    a1 = 44; func_00983260(a0, a1, a2, a3);
    a0 = s0;
    (*(volatile u32 *) (u32) (s0 + 480)) = (u32) 0; func_0090BA30(a0);
    v0 = 1; goto L_00916974;
L_00916744:;
    if (v0 != 0) { a0 = s0; goto L_00916868; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7956));
    if (v0 == 0) goto L_009168D4;
    v0 = 0;
L_00916760:;
    v0 = v0 & 0xff;
    if (v0 == 0) { v0 = 0; goto L_00916974; }
    v0 = (s32) 0xcb0000U;
    a0 = (*(volatile u8 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 21157));
    if (a0 == v0) { a0 = s0; goto L_00916910; }
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21167));
    if (a0 == v0) { a0 = s0; goto L_00916920; }
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x52b0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a0 == v0) { a0 = s0; goto L_00916930; }
    v1 = (*(volatile u8 *) (u32) (s0 + 477));
    v0 = 36;
    if (v1 == v0) { a0 = s0; goto L_00916958; }
L_009167BC:;
    v0 = 0; goto L_00916974;
L_009167C4:;
    v0 = 0; goto L_00916974;
L_009167CC:;
    v0 = 0; goto L_00916974;
L_009167D4:;
    func_00983260(a0, a1, a2, a3);
    a0 = s0; func_0090BA30(a0);
    v0 = 1; goto L_00916974;
L_009167EC:;
    func_00983260(a0, a1, a2, a3);
    a0 = s0; func_0090BA30(a0);
    v0 = 1; goto L_00916974;
L_00916804:;
    func_0090BA30(a0);
    v0 = 1; goto L_00916974;
L_00916814:;
    v0 = func_002AE670(a0);
    f0.i = (s32) v0;
    a0 = 44;
    f1.f = (*(volatile f32 *) (u32) (s0 + 224));
    f3.f = (f32) f0.i;
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (s0 + 240));
    acc = f0.f + f1.f;
    f0.f = acc + f2.f * f3.f;
    (*(volatile f32 *) (u32) (s0 + 108)) = f0.f; v0 = func_002AE670(a0);
    f0.i = (s32) v0;
    f1.f = (*(volatile f32 *) (u32) (s0 + 232));
    f3.f = (f32) f0.i;
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (s0 + 248));
    acc = f0.f + f1.f;
    f0.f = acc + f2.f * f3.f;
    (*(volatile f32 *) (u32) (s0 + 112)) = f0.f; goto L_00916718;
L_00916868:;
    v0 = func_00910D80(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_009168CC;
    v0 = (*(volatile u8 *) (u32) (s0 + 477));
    a1 = 39;
    if (v0 == a1) goto L_009168CC;
    a0 = s0; func_009832C0(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s0 + 470));
    v0 = 4;
    if (v1 == v0) { a0 = s0; goto L_009168B0; }
    v0 = (*(volatile u8 *) (u32) (s0 + 469));
    (*(volatile u32 *) (u32) (s0 + 488)) = (u32) v0; goto L_009168CC;
L_009168B0:;
    a1 = (s32) 0x400000U; v0 = func_00990820(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 <= 0) goto L_009168CC;
    v0 = (*(volatile u8 *) (u32) (s0 + 469));
    (*(volatile u32 *) (u32) (s0 + 488)) = (u32) v0;
L_009168CC:;
    v0 = 1; goto L_00916974;
L_009168D4:;
    v0 = func_00A07B40(a0, a1, a2, a3);
    if (v0 != 0) goto L_009168EC;
    v0 = 0; goto L_00916760;
L_009168EC:;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21192));
    v0 = (*(volatile u8 *) (u32) (v0 + 9964));
    at = v1 < v0;
    if (at == 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00916760; }
    v0 = 0; goto L_00916760;
L_00916910:;
    a1 = 53; func_00983260(a0, a1, a2, a3);
    v0 = 1; goto L_00916974;
L_00916920:;
    a1 = 52; func_00983260(a0, a1, a2, a3);
    v0 = 1; goto L_00916974;
L_00916930:;
    a1 = 16; func_00983260(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x52b2U);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    (*(volatile u32 *) (u32) (s0 + 480)) = (u32) v1; goto L_00916974;
L_00916958:;
    v0 = func_009176C0(a0, a1, a2, a3);
    if (v0 == 0) goto L_009167BC;
    a0 = s0; func_00C230D0(a0, a1, a2, a3);
    v0 = 1;
L_00916974:;
    return v0;
}
