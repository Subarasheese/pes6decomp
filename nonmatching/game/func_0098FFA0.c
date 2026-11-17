/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00AFBA70(s32);
s32 func_00AFBAB0(s32);

s32 func_0098FFA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    v1 = a1 & 0xff;
    v0 = 1;
    s1 = a0;
    s0 = a2;
    a0 = (*(volatile s16 *) (u32) (a0 + 20));
    f0.i = (s32) a0;
    { s32 c_ = v1 != v0; f20.f = (f32) f0.i; if (c_) goto L_0098FFEC; }
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_00AFBA70(a0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1U);
    v0 = v0 & 0xff; goto L_00990000;
L_0098FFEC:;
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_00AFBAB0(a0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1U);
    v0 = v0 & 0xff;
L_00990000:;
    v0 = v0 & 0xff;
    v1 = 255;
    if (v0 == v1) { a0 = 1; goto L_0099001C; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a0 = hi;
L_0099001C:;
    v1 = (s32) ((u32) a0 << 3);
    a1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v1 + (u32) a0);
    a3 = (s32) 0x44800000U;
    a1 = (s32) ((u32) a1 + 0xffffe5b0U);
    a2 = (s32) ((u32) a0 << 6);
    v1 = (s32) 0x7fff0000U;
    a2 = (s32) ((u32) a1 + (u32) a2);
    a0 = v1 | 0xffff;
    a7 = (s32) 0x590000U;
    f1.i = (s32) a3;
    a1 = 0;
    f0.i = (s32) 0;
    v1 = s0 & 0xff;
    a5 = 2;
    a7 = (s32) ((u32) a7 + 0x1e00U);
    acc = f0.f + f1.f;
L_00990060:;
    a3 = (*(volatile s32 *) (u32) (a2 + 4));
    a3 = (*(volatile u8 *) (u32) (a3 + 44));
    if (a3 == 0) goto L_00990120;
    if (s1 == a2) goto L_00990120;
    if (s0 == 0) goto L_009900F8;
    t4 = (*(volatile u8 *) (u32) (s1 + 19));
    a6 = (*(volatile u8 *) (u32) a2);
    a3 = (s32) ((u32) t4 << 1);
    a4 = (s32) ((u32) a7 + (u32) a3);
    a3 = (*(volatile u8 *) (u32) (a4 + 79));
    if (a6 == a3) goto L_00990120;
    a3 = (*(volatile u8 *) (u32) (a4 + 80));
    if (a6 == a3) goto L_00990120;
    a3 = t4 ^ 0x1;
    a3 = (s32) ((u32) a3 << 1);
    a4 = (s32) ((u32) a7 + (u32) a3);
    a3 = (*(volatile u8 *) (u32) (a4 + 79));
    if (a6 == a3) goto L_00990120;
    a3 = (*(volatile u8 *) (u32) (a4 + 80));
    if (a6 == a3) goto L_00990120;
    if (v1 != a5) goto L_009900F8;
    f0.f = (*(volatile f32 *) (u32) (s1 + 224));
    f2.f = (*(volatile f32 *) (u32) (a2 + 224));
    f1.f = (*(volatile f32 *) (u32) (a2 + 240));
    f0.f = f0.f * f20.f;
    f1.f = f2.f + f1.f;
    f1.f = acc + f20.f * f1.f;
    fcc = f0.f <= f1.f;
    if (!fcc) goto L_00990120;
L_009900F8:;
    a4 = (*(volatile u8 *) (u32) a2);
    a3 = (s32) ((u32) a4 << 2);
    a3 = (s32) ((u32) s1 + (u32) a3);
    a3 = (*(volatile s32 *) (u32) (a3 + 344));
    at = (u64) a3 < (u64) a0;
    if (at == 0) goto L_00990120;
    v0 = a4;
    a0 = a3;
L_00990120:;
    a1 = (s32) ((u32) a1 + 0x1U);
    a3 = a1 < 10;
    { s32 c_ = a3 != 0; a2 = (s32) ((u32) a2 + 0x240U); if (c_) goto L_00990060; }
    return v0;
}
