/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00949160(s64, s64, s64, s64, f32, f32);
s64 func_00958AD0(s64, s64);
s64 func_0098F620(s64);
s64 func_0098F750(s64);
s64 func_009B32D0(s64, s64, s64);

s64 func_0096F870(s64 a0, s64 a1, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;

    s6 = a1;
    v1 = (*(u8 *) (u32) (a0 + 19));
    v0 = (*(s32 *) (u32) (gp + -31080));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v0);
    { s32 c_ = v0 == 0; s3 = a0; if (c_) goto L_0096F8B8; }
    v0 = 0; goto L_0096FA94;
L_0096F8B8:;
    s1 = (*(u16 *) (u32) (s3 + 38)); v0 = func_0098F750(a0);
    if (v0 != 0) { a0 = s3; goto L_0096F8F0; }
L_0096F8C8:;
    v1 = (*(u8 *) (u32) (s3 + 477));
    v0 = 12;
    if (v1 != v0) goto L_0096F928;
    v1 = (*(s32 *) (u32) (s3 + 480));
    v0 = 13;
    if (v1 != v0) goto L_0096F928;
    v0 = 0; goto L_0096FA94;
L_0096F8F0:;
    v0 = func_0098F620(a0);
    if (v0 == 0) { a0 = (*(u16 *) (u32) (s3 + 42)); goto L_0096F914; }
    v0 = (*(u16 *) (u32) (s3 + 280));
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v0 = (s32) ((u32) v0 + 0x1U);
    s1 = v0 & 0xffff; goto L_0096F8C8;
L_0096F914:;
    a1 = s1;
    a2 = 16384; v0 = func_009B32D0(a0, a1, a2);
    s1 = v0 & 0xffff; goto L_0096F8C8;
L_0096F928:;
    s0 = 80;
    s5 = 1;
    s4 = 10240;
L_0096F934:;
    a3 = s4 & 0xffff;
    a0 = s3;
    a1 = s1;
    a2 = 80; v0 = func_00949160(a0, a1, a2, a3, f12.f, f13.f);
    s2 = v0 & 0xff;
    v0 = 255;
    if (s2 != v0) goto L_0096F968;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < 4;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x2800U); if (c_) goto L_0096F934; }
L_0096F968:;
    v0 = 255;
    if (s2 == v0) { s0 = 50; goto L_0096FA50; }
L_0096F974:;
    v0 = 255;
L_0096F978:;
    if (s2 != v0) goto L_0096F9D0;
    v0 = s6 & 0xff;
    s4 = 1;
    if (v0 != s4) goto L_0096F9D0;
    s0 = s4;
    s5 = 10240;
L_0096F998:;
    a3 = s5 & 0xffff;
    a0 = s3;
    a1 = s1;
    a2 = 1; v0 = func_00949160(a0, a1, a2, a3, f12.f, f13.f);
    s2 = v0 & 0xff;
    v0 = 255;
    if (s2 != v0) goto L_0096F9D0;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 3;
    { s32 c_ = v0 != 0; s5 = (s32) ((u32) s5 + 0x2800U); if (c_) goto L_0096F998; }
L_0096F9D0:;
    a0 = s3;
    a1 = s2;
    a2 = 0; v0 = func_00958AD0(a0, a1);
    a1 = v0 & 0xff;
    if (a1 == 0) goto L_0096FA34;
    v1 = a1 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_0096FA08; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_0096FA08:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe7b2U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v0);
    v0 = v0 < s0;
    if (v0 != 0) { s2 = 0; goto L_0096FA34; }
    s2 = a1 & 0xff;
L_0096FA34:;
    v1 = s2 & 0xff;
    v0 = 255;
    if (v1 != v0) goto L_0096FA48;
    s2 = 0;
L_0096FA48:;
    v0 = s2; goto L_0096FA94;
L_0096FA50:;
    s4 = 1;
    s5 = 10240;
L_0096FA58:;
    a3 = s5 & 0xffff;
    a0 = s3;
    a1 = s1;
    a2 = 50; v0 = func_00949160(a0, a1, a2, a3, f12.f, f13.f);
    s2 = v0 & 0xff;
    v0 = 255;
    if (s2 != v0) goto L_0096F974;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 3;
    { s32 c_ = v0 != 0; s5 = (s32) ((u32) s5 + 0x2800U); if (c_) goto L_0096FA58; }
    v0 = 255; goto L_0096F978;
L_0096FA94:;
    return v0;
}
