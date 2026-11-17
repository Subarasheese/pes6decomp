/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B30B0(s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);

s32 func_00AA3740(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;
    f32 acc = 0;

    v0 = 255;
    s2 = a0;
    s1 = a1;
    v1 = (*(volatile u8 *) (u32) (a0 + 19));
    a0 = v1 ^ 0x1;
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    a1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) a1 + (u32) s2);
    v1 = (*(volatile u8 *) (u32) (v1 + 436));
    if (v1 == v0) { a0 = 1; goto L_00AA3794; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00AA3794:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = 16;
    s0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (s0 + 22));
    if (v1 != v0) goto L_00AA37F4;
    v1 = (s32) ((u32) a1 + (u32) s2);
    v0 = 255;
    v1 = (*(volatile u8 *) (u32) (v1 + 437));
    if (v1 == v0) { a0 = 1; goto L_00AA37DC; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00AA37DC:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) v0 + (u32) v1);
L_00AA37F4:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 44));
    if (v0 == 0) goto L_00AA3964;
    v0 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile s32 *) (u32) (v0 + 344));
    at = (u64) v0 < (u64) a2;
    if (at == 0) goto L_00AA3964;
    a0 = (*(volatile u8 *) (u32) s2);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) s0);
    { s32 c_ = a0 == v0; s1 = (*(volatile u16 *) (u32) (v1 + 296)); if (c_) goto L_00AA3964; }
    a1 = (*(volatile u16 *) (u32) (s0 + 38));
    a0 = (*(volatile u16 *) (u32) (s2 + 38)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 96;
    if (v0 != 0) goto L_00AA3964;
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    at = v0 < 4353;
    if (at != 0) goto L_00AA3964;
    v0 = (*(volatile u8 *) (u32) s0);
    at = (s32) 0x40000U;
    at = at | 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile s32 *) (u32) (v0 + 344));
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_00AA3964;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 9956));
    { s32 c_ = a0 < 0; f4.f = (*(volatile f32 *) (u32) (s0 + 240)); if (c_) goto L_00AA38A8; }
    f0.i = (s32) a0;
    f2.f = (f32) f0.i; goto L_00AA38C4;
L_00AA38A8:;
    v1 = (s32) ((u32) a0 >> 1);
    v0 = a0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00AA38C4:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 224));
    f0.i = (s32) 0;
    f3.f = (*(volatile f32 *) (u32) (s0 + 248));
    acc = f0.f + f1.f;
    { s32 c_ = a0 < 0; f12.f = acc + f4.f * f2.f; if (c_) goto L_00AA38E8; }
    f0.i = (s32) a0;
    f2.f = (f32) f0.i; goto L_00AA3904;
L_00AA38E8:;
    v1 = (s32) ((u32) a0 >> 1);
    v0 = a0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00AA3904:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 232));
    a0 = s2;
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f13.f = acc + f3.f * f2.f; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile u16 *) (u32) (s2 + 268));
    a0 = v0 & 0xffff;
    v0 = (s32) 0x10000U;
    at = 0x8001;
    v1 = (s32) ((u32) a0 - (u32) v1);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = v0 & 0xffff;
    at = v0 < at;
    if (at != 0) { v0 = -1; goto L_00AA394C; }
    v0 = 1;
L_00AA394C:;
    v1 = (s32) ((u32) v0 << 13);
    v0 = s1 & 0xffff;
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v0 = (s32) ((u32) v0 + 0x1U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = v0 & 0xffff;
L_00AA3964:;
    v0 = s1;
    return v0;
}
