/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002AE670(s64);
s64 func_009041F0(s64, s64, s64, s64);
s64 func_00905170(void);
s64 func_00905270(s64, s64, s64, s64, f32, f32);
s64 func_0090B990(s64);
s64 func_00915660(s64, s64, s64, s64);
s64 func_0098F530(s64, s64, s64, s64);
s64 func_00AFBAB0(s64, s64, s64, s64);
s64 func_00BBB780(s64, s64, s64, s64);
s64 func_00BDB8B0(s64, s64, s64, s64);

s64 func_0091AD70(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    s3 = a0;
    v0 = func_00BDB8B0(a0, a1, a2, a3);
    if (v0 == 0) { v0 = 0; goto L_0091B008; }
    v1 = (*(volatile u8 *) (u32) (s3 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    a0 = (*(volatile u8 *) (u32) s3);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a0 != v0) { a0 = s3; goto L_0091ADC4; }
    v0 = 0; goto L_0091B008;
L_0091ADC4:;
    v0 = func_009041F0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 != 0) { a0 = s3; goto L_0091ADE0; }
    v0 = 0; goto L_0091B008;
L_0091ADE0:;
    v0 = func_00905170();
    if (v0 == 0) { a0 = (*(volatile u8 *) (u32) s3); goto L_0091ADF8; }
    v0 = 0; goto L_0091B008;
L_0091ADF8:;
    s1 = 0; v0 = func_00AFBAB0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v1 == v0) { a0 = 1; goto L_0091AE24; }
    a0 = (*(volatile u8 *) (u32) s3); v0 = func_00AFBAB0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) v0 + 0x1U);
L_0091AE24:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s2 = 0;
    s0 = (s32) ((u32) v0 + (u32) v1);
L_0091AE40:;
    a0 = s0; v0 = func_00BDB8B0(a0, a1, a2, a3);
    if (v0 == 0) goto L_0091AE68;
    v1 = (*(volatile u8 *) (u32) (s0 + 477));
    v0 = 23;
    if (v1 != v0) goto L_0091AE68;
    v0 = (s32) ((u32) s1 + 0x1U);
    s1 = v0 & 0xff;
L_0091AE68:;
    v0 = (s32) ((u32) s2 + 0x1U);
    s2 = v0 & 0xff;
    v0 = s2 < 10;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x240U); if (c_) goto L_0091AE40; }
    v0 = (*(volatile u8 *) (u32) (s3 + 16));
    v0 = v0 < 29;
    { s32 c_ = v0 != 0; s0 = 0; if (c_) goto L_0091AF9C; }
    v0 = (s32) 0xcb0000U;
    s2 = (*(volatile u8 *) (u32) (v0 + 21248));
    a0 = 64; v0 = func_002AE670(a0);
    at = v0 < s2;
    if (at == 0) goto L_0091AF9C;
    a0 = s3; v0 = func_0098F530(a0, a1, a2, a3);
    if (v0 == 0) goto L_0091AFE4;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (*(volatile f32 *) (u32) (s3 + 232));
    f0.f = (*(volatile f32 *) (u32) (v0 + 24));
    f0.f = f1.f - f0.f;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45b50000U;
    v0 = v0 | 0xdaab;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_0091AFE4;
    s0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_0091AFE4;
L_0091AEF0:;
    a1 = (*(volatile u8 *) (u32) (s3 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s3 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    v0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 128));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) goto L_0091AF5C;
    a0 = s3; v0 = func_0090B990(a0);
    v0 = v0 & 0xff;
    v0 = v0 < 2;
    if (v0 != 0) goto L_0091AF9C;
L_0091AF5C:;
    v1 = (*(volatile u8 *) (u32) (s3 + 458));
    v0 = (s32) 0x66660000U;
    v0 = v0 | 0x6667;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48; v0 = func_00BBB780(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_0091AF9C;
    s0 = 0;
L_0091AF9C:;
    a0 = s3;
    a1 = 23; v0 = func_00915660(a0, a1, a2, a3);
    if (v0 == 0) goto L_0091AFB4;
    s0 = 0;
L_0091AFB4:;
    if (s0 == 0) goto L_0091B004;
    v0 = s1 & 0xff;
    if (v0 != 0) goto L_0091B004;
    a0 = s3; v0 = func_00905270(a0, a1, a2, a3, f12.f, f13.f);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_0091B004;
    v0 = 1; goto L_0091B008;
L_0091AFE4:;
    v1 = (*(volatile u8 *) (u32) (s3 + 19));
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) goto L_0091AEF0;
    s0 = 0; goto L_0091AEF0;
L_0091B004:;
    v0 = 0;
L_0091B008:;
    return v0;
}
