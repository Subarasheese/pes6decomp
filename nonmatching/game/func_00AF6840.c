/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B30B0(s32, s32);
s32 func_009B33A0(s32, s32, s32);
s32 func_00AEBFD0(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00AED7F0(s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00AEDC50(s32, s32, f32, f32, f32, f32);
s32 func_00AEDFD0(s32, s32, f32, f32, f32, f32);
s32 func_00AEEA40(s32, s32, s32, s32, f32, f32);
s32 func_00AEED60(s32, s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00AEF4B0(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00AEF990(s32, s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00AF6A60(s32, s32, s32, s32, f32, f32);

s32 func_00AF6840(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 hi = 0, lo = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a1 = (s32) ((u32) sp + 0x30U);
    s1 = a0;
    v0 = func_00AF6A60(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 != 0) goto L_00AF686C;
    v0 = 0; goto L_00AF6A48;
L_00AF686C:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile u8 *) (u32) (v0 + 9952));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s1; v0 = func_009B33A0(a0, a1, a2);
    at = (s32) 0x40000U;
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_00AF6948;
L_00AF68B0:;
    v1 = (*(volatile u8 *) (u32) (sp + 49));
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00AF68CC; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00AF68CC:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x30U);
    s0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00AEED60(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    if (v0 != 0) { v0 = 1; goto L_00AF6A48; }
    v1 = (*(volatile s32 *) (u32) (sp + 52));
    v0 = (s32) 0x10000U;
    v0 = v0 | 0x9000;
    v0 = (u64) v1 < (u64) v0;
    if (v0 != 0) goto L_00AF6930;
    a0 = s1;
    a1 = s0;
    a2 = 0; v0 = func_00AEEA40(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_00AF6930;
    v0 = 1; goto L_00AF6A48;
L_00AF6930:;
    a0 = s1; v0 = func_00AEF990(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    if (v0 == 0) { a0 = s1; goto L_00AF6994; }
    v0 = 1; goto L_00AF6A48;
L_00AF6948:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile u8 *) (u32) (v0 + 9956));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s1; v0 = func_009B33A0(a0, a1, a2);
    v1 = (s32) 0x40000U;
    v0 = (u64) v0 < (u64) v1;
    if (v0 != 0) goto L_00AF68B0;
    v0 = 0; goto L_00AF6A48;
L_00AF6994:;
    a1 = (s32) ((u32) sp + 0x30U); v0 = func_00AEDC50(a0, a1, f12.f, f13.f, f14.f, f15.f);
    if (v0 != 0) { v0 = 1; goto L_00AF6A48; }
    v0 = (*(volatile s32 *) (u32) (s0 + 276));
    v1 = (*(volatile s32 *) (u32) (s1 + 276));
    at = (u64) v1 < (u64) v0;
    if (at == 0) goto L_00AF69F0;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) (v1 + 80));
    at = v0 < 4097;
    if (at != 0) goto L_00AF69F0;
    a0 = (*(volatile u16 *) (u32) (s1 + 268));
    a1 = (*(volatile u16 *) (u32) (v1 + 88)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 112;
    if (v0 != 0) goto L_00AF69F0;
    v0 = 0; goto L_00AF6A48;
L_00AF69F0:;
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x30U); v0 = func_00AEDFD0(a0, a1, f12.f, f13.f, f14.f, f15.f);
    if (v0 == 0) { a0 = s1; goto L_00AF6A0C; }
    v0 = 1; goto L_00AF6A48;
L_00AF6A0C:;
    a1 = (s32) ((u32) sp + 0x30U); v0 = func_00AEF4B0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    if (v0 == 0) { a0 = s1; goto L_00AF6A24; }
    v0 = 1; goto L_00AF6A48;
L_00AF6A24:;
    a1 = (s32) ((u32) sp + 0x30U); v0 = func_00AED7F0(a0, a1, a2, a3, a4, a5, f12.f, f13.f, f14.f, f15.f);
    if (v0 == 0) { a0 = s1; goto L_00AF6A3C; }
    v0 = 1; goto L_00AF6A48;
L_00AF6A3C:;
    a1 = (s32) ((u32) sp + 0x30U); v0 = func_00AEBFD0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v0 = (u64) 0 < (u64) v0;
L_00AF6A48:;
    return v0;
}
