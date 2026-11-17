/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00952420(s64, s64, s64, s64, f32, f32);
s64 func_00961710(s64, s64);
s64 func_0096D0A0(s64, s64, s64);
s64 func_0098F750(s64);
s64 func_009909D0(s64, s64);
s64 func_009B3070(s64, s64);
s64 func_009B32D0(s64, s64, s64);
s64 func_00AFBA50(s64);
s64 func_00BBB8C0(s64);
s64 func_00BDB3B0(s64);

s64 func_00965B10(s64 a0, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    v0 = 255;
    s3 = a0;
    a0 = (*(u8 *) (u32) (a0 + 19));
    a0 = a0 ^ 0x1;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(u8 *) (u32) v1);
    if (v1 == v0) { a0 = 1; goto L_00965B64; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00965B64:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v1 = (*(s32 *) (u32) (s3 + 272));
    a0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(s32 *) (u32) (a0 + 272));
    at = (u64) v0 < (u64) v1;
    if (at == 0) goto L_00965BB4;
    a1 = (*(u16 *) (u32) (a0 + 268));
    a0 = (*(u16 *) (u32) (s3 + 268)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 16384;
    if (at == 0) goto L_00965BB4;
    v0 = 0; goto L_00965E24;
L_00965BB4:;
    a0 = (*(u16 *) (u32) (s3 + 42));
    a1 = (*(u16 *) (u32) (s3 + 38));
    a2 = 16384; v0 = func_009B32D0(a0, a1, a2);
    a1 = v0;
    a0 = s3;
    a2 = 0; v0 = func_0096D0A0(a0, a1, a2);
    a0 = s3; v0 = func_0098F750(a0);
    if (v0 != 0) goto L_00965C14;
    a1 = (*(u16 *) (u32) (s3 + 42));
    a0 = (*(u16 *) (u32) (s3 + 38)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 10241;
    if (at == 0) goto L_00965C14;
    (*(u8 *) (u32) (s3 + 72)) = (u8) 0;
    v0 = 8192;
    (*(u32 *) (u32) (s3 + 180)) = (u32) v0;
    (*(u8 *) (u32) (s3 + 76)) = (u8) 0; goto L_00965D3C;
L_00965C14:;
    a0 = (*(u8 *) (u32) (s3 + 19));
    s2 = 0; v0 = func_00BDB3B0(a0);
    s1 = v0 & 0xff;
    if (s1 == 0) goto L_00965CAC;
    v0 = 255;
    if (s1 == v0) { a0 = 1; goto L_00965C44; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s1 / (s32) v0); hi = (s32) ((s32) s1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00965C44:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe6d4U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(s32 *) (u32) v0);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00965C74; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_00965C8C;
L_00965C74:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00965C8C:;
    v0 = (s32) 0x4d2c0000U;
    v0 = v0 | 0xe837;
    f0.i = (s32) v0;
    fcc = f0.f < f1.f;
    if (!fcc) goto L_00965CAC;
    s1 = 0;
L_00965CAC:;
    s0 = s1 & 0xff;
    if (s0 != 0) { v0 = s0 ^ 0xff; goto L_00965CC8; }
    a0 = (*(u8 *) (u32) s3); v0 = func_00AFBA50(a0);
    v0 = v0 & 0xff; goto L_00965CCC;
L_00965CC8:;
    v0 = (u64) 0 < (u64) v0;
L_00965CCC:;
    if (v0 != 0) goto L_00965D68;
    a0 = 1;
    v1 = (s32) ((u32) a0 << 3);
L_00965CDC:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = s3;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v0);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s3);
    s4 = (*(u16 *) (u32) (v0 + 296));
    a1 = (s32) 0x90000U; v0 = func_009909D0(a0, a1);
    if (v0 == 0) { a1 = s4; goto L_00965D90; }
    s2 = 1;
L_00965D18:;
    if (s2 != 0) { v0 = 0x8000; goto L_00965DB0; }
    v0 = (s32) 0xcb0000U;
    v1 = (*(u8 *) (u32) (v0 + 21378));
    at = v1 < 3;
    if (at == 0) { v0 = 6; goto L_00965DB8; }
    v0 = 0x8000;
    (*(u32 *) (u32) (s3 + 180)) = (u32) v0;
L_00965D3C:;
    a0 = s3;
    a1 = 0; v0 = func_00961710(a0, a1);
    a0 = (*(u8 *) (u32) (s3 + 19));
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x5360U);
    v0 = 1;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(u32 *) (u32) v1) = (u32) 0; goto L_00965E24;
L_00965D68:;
    if (s0 != 0) { v0 = 23; goto L_00965D80; }
    a0 = (*(u8 *) (u32) s3); v0 = func_00AFBA50(a0);
    a0 = v0 & 0xff; goto L_00965D88;
L_00965D80:;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    a0 = hi;
L_00965D88:;
    v1 = (s32) ((u32) a0 << 3); goto L_00965CDC;
L_00965D90:;
    a0 = s3;
    a2 = 4096;
    a3 = (s32) 0x240000U; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 != 0) goto L_00965D18;
    s2 = 1; goto L_00965D18;
L_00965DB0:;
    (*(u32 *) (u32) (s3 + 180)) = (u32) v0; goto L_00965D3C;
L_00965DB8:;
    a0 = (s32) ((u32) v0 - (u32) v1); v0 = func_00BBB8C0(a0);
    if (v0 != 0) goto L_00965DEC;
    (*(u8 *) (u32) (s3 + 72)) = (u8) s1;
    v0 = 8192;
    { s32 c_ = s0 != 0; (*(u32 *) (u32) (s3 + 180)) = (u32) v0; if (c_) goto L_00965DE0; }
    (*(u8 *) (u32) (s3 + 76)) = (u8) 0; goto L_00965D3C;
L_00965DE0:;
    v0 = 1;
    (*(u8 *) (u32) (s3 + 76)) = (u8) v0; goto L_00965D3C;
L_00965DEC:;
    v0 = (s32) 0xcb0000U;
    v1 = 6;
    v0 = (*(u8 *) (u32) (v0 + 21378));
    a0 = (s32) ((u32) v1 - (u32) v0); v0 = func_00BBB8C0(a0);
    if (v0 != 0) { v0 = 0x8000; goto L_00965E1C; }
    (*(u8 *) (u32) (s3 + 72)) = (u8) s1;
    v0 = 8192;
    (*(u32 *) (u32) (s3 + 180)) = (u32) v0;
    (*(u8 *) (u32) (s3 + 76)) = (u8) 0; goto L_00965D3C;
L_00965E1C:;
    (*(u32 *) (u32) (s3 + 180)) = (u32) v0; goto L_00965D3C;
L_00965E24:;
    return v0;
}
