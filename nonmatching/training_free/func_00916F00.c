/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009041F0(s64, s64, s64, s64);
s64 func_009051D0(s64, s64);
s64 func_0098F290(s64, s64, s64, s64);
s64 func_00A07B40(s64, s64, s64, s64);
s64 func_00BBB8C0(s64, s64, s64, s64);

s64 func_00916F00(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7956));
    { s32 c_ = v0 == 0; s1 = a0; if (c_) goto L_00916F38; }
    v0 = 0;
L_00916F24:;
    v0 = v0 & 0xff;
    if (v0 != 0) { a0 = s1; goto L_00916F74; }
    v0 = 0; goto L_009170D4;
L_00916F38:;
    v0 = func_00A07B40(a0, a1, a2, a3);
    if (v0 != 0) goto L_00916F50;
    v0 = 0; goto L_00916F24;
L_00916F50:;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21192));
    v0 = (*(volatile u8 *) (u32) (v0 + 9964));
    at = v1 < v0;
    if (at == 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00916F24; }
    v0 = 0; goto L_00916F24;
L_00916F74:;
    v0 = func_009041F0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 != 0) { a0 = s1; goto L_00916F90; }
    v0 = 0; goto L_009170D4;
L_00916F90:;
    v0 = func_0098F290(a0, a1, a2, a3);
    if (v0 == 0) goto L_009170B8;
    f2.f = (*(volatile f32 *) (u32) (s1 + 232));
    f1.i = f2.i & 0x7FFFFFFF;
    v0 = (s32) 0x45120000U;
    v0 = v0 | 0x8000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_009170B8;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.i = (s32) 0;
    f1.f = (*(volatile f32 *) (u32) (v0 + 24));
    fcc = f1.f < f0.f;
    if (!fcc) { v1 = 1; goto L_00916FE0; }
    v1 = -1;
L_00916FE0:;
    f0.i = (s32) 0;
    fcc = f2.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00916FF8; }
    v0 = -1;
L_00916FF8:;
    if (v0 == v1) goto L_009170B8;
    f0.f = f2.f - f1.f;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45000000U;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_009170B8;
    a1 = (*(volatile u8 *) (u32) (s1 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
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
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v1 + 122));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63);
    { s32 c_ = v0 == 0; s0 = (s64) ((u64) 0 + (u64) (s64) 10); if (c_) goto L_0091707C; }
    v0 = (s32) ((u32) s0 + 0x1eU);
    s0 = v0 & 0xff;
L_0091707C:;
    v0 = (*(volatile u8 *) (u32) (v1 + 126));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) goto L_00917098;
    v0 = (s32) ((u32) s0 + 0xaU);
    s0 = v0 & 0xff;
L_00917098:;
    a0 = 100; v0 = func_00BBB8C0(a0, a1, a2, a3);
    v1 = s0 & 0xff;
    at = v1 < v0;
    if (at == 0) { a0 = (*(volatile u8 *) (u32) (s1 + 19)); goto L_009170C0; }
    v0 = 0; goto L_009170D4;
L_009170B8:;
    v0 = 0; goto L_009170D4;
L_009170C0:;
    a1 = 26; v0 = func_009051D0(a0, a1);
    if (v0 != 0) goto L_009170B8;
    v0 = 1;
L_009170D4:;
    return v0;
}
