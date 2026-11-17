/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00206240(s32, s32);

s32 func_002063E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;

    a7 = a0;
    a6 = a1;
    a0 = a3;
    a1 = a5; v0 = func_00206240(a0, a1);
    if (v0 == 0) { a0 = a3 & 0xff; goto L_00206464; }
    v1 = (s32) 0x2aaa0000U;
    a3 = (s32) ((u32) a4 >> 31);
    a0 = v1 | 0xaaab;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a4; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) 0x530000U;
    f0.f = (*(volatile f32 *) (u32) a2);
    a1 = hi;
    a0 = 255;
    a1 = (s32) ((u32) a1 + (u32) a3);
    f1.i = (s32) a1;
    f1.f = (f32) f1.i;
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) a2) = f0.f;
    v1 = (*(volatile u8 *) (u32) (v1 + 12360));
    if (v1 == a0) { a0 = 15; goto L_00206454; }
    v1 = (s32) 0x530000U;
    (*(volatile u8 *) (u32) (v1 + 12360)) = (u8) a0; goto L_0020645C;
L_00206454:;
    v1 = (s32) 0x530000U;
    (*(volatile u8 *) (u32) (v1 + 12360)) = (u8) a0;
L_0020645C:;
    goto L_0020663C;
L_00206464:;
    v1 = 160;
    a0 = a0 & 0xf0;
    a0 = a0 & 0xff;
    if (a0 == v1) { v1 = a5 & 0xff; goto L_002064A8; }
    v1 = 144;
    if (a0 == v1) goto L_002064A4;
    v1 = 96;
    if (a0 == v1) goto L_002064A4;
    v1 = 80;
    if (a0 == v1) goto L_002064A4;
    a1 = a0 & 0xff; goto L_002064B4;
L_002064A4:;
    v1 = a5 & 0xff;
L_002064A8:;
    v1 = v1 & 0xf0;
    a0 = v1 & 0xff;
    a1 = a0 & 0xff;
L_002064B4:;
    v1 = 240;
    if (a1 == v1) { v1 = (s32) 0x92490000U; goto L_002065F4; }
    v1 = 224;
    if (a1 == v1) goto L_002065F0;
    v1 = 208;
    if (a1 == v1) goto L_002065F0;
    v1 = 192;
    if (a1 == v1) goto L_002065F0;
    v1 = 176;
    if (a1 == v1) goto L_002065F0;
    v1 = 112;
    if (a1 == v1) goto L_002065F0;
    v1 = 48;
    if (a1 == v1) goto L_002065F0;
    v1 = 160;
    if (a1 == v1) goto L_00206638;
    v1 = 144;
    if (a1 == v1) goto L_00206638;
    v1 = 96;
    if (a1 == v1) goto L_00206638;
    v1 = 80;
    if (a1 == v1) goto L_00206638;
    a0 = 128;
    if (a1 == a0) goto L_002065D0;
    a0 = 64;
    if (a1 == a0) goto L_002065B0;
    a0 = 32;
    if (a1 == a0) goto L_00206590;
    a0 = 16;
    if (a1 == a0) goto L_00206570;
    goto L_00206638;
L_00206570:;
    f0.i = (s32) a4;
    v1 = (s32) 0x530000U;
    f0.f = (f32) f0.i;
    f1.f = (*(volatile f32 *) (u32) a7);
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) a7) = f0.f;
    (*(volatile u8 *) (u32) (v1 + 12360)) = (u8) a0; goto L_00206638;
L_00206590:;
    f0.i = (s32) a4;
    v1 = (s32) 0x530000U;
    f0.f = (f32) f0.i;
    f1.f = (*(volatile f32 *) (u32) a7);
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) a7) = f0.f;
    (*(volatile u8 *) (u32) (v1 + 12360)) = (u8) a0; goto L_00206638;
L_002065B0:;
    f0.i = (s32) a4;
    v1 = (s32) 0x530000U;
    f0.f = (f32) f0.i;
    f1.f = (*(volatile f32 *) (u32) a6);
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) a6) = f0.f;
    (*(volatile u8 *) (u32) (v1 + 12360)) = (u8) a0; goto L_00206638;
L_002065D0:;
    f0.i = (s32) a4;
    v1 = (s32) 0x530000U;
    f0.f = (f32) f0.i;
    f1.f = (*(volatile f32 *) (u32) a6);
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) a6) = f0.f;
    (*(volatile u8 *) (u32) (v1 + 12360)) = (u8) a0; goto L_00206638;
L_002065F0:;
    v1 = (s32) 0x92490000U;
L_002065F4:;
    a3 = (s32) ((u32) a4 >> 31);
    v1 = v1 | 0x2493;
    a0 = 255;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a4; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    f0.f = (*(volatile f32 *) (u32) a2);
    a1 = hi;
    v1 = (s32) 0x530000U;
    a1 = (s32) ((u32) a1 + (u32) a4);
    a1 = (s32) a1 >> 2;
    a1 = (s32) ((u32) a1 + (u32) a3);
    f1.i = (s32) a1;
    f1.f = (f32) f1.i;
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) a2) = f0.f;
    (*(volatile u8 *) (u32) (v1 + 12360)) = (u8) a0;
L_00206638:;
L_0020663C:;
    return v0;
}
