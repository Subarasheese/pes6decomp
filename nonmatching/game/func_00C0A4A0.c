/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00952910(s64, s64);
s64 func_00952A50(s64);
s64 func_00958AD0(s64, s64);
void func_00961AB0(s64, s64, s64, s64, s64);
void func_0096D0A0(s64, s64, s64);
s64 func_009B3070(s64, s64);
s64 func_009B32D0(s64, s64, s64);
void func_00C04830(s64, s64, s64);
s64 func_00C0A830(s64, s64, s64, s64);
s64 func_00C0B420(s64, s64, s64);

s64 func_00C0A4A0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    s2 = a0;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    s0 = (*(volatile u8 *) (u32) (a1 + 40));
    { s32 c_ = v0 == 0; s1 = a1; if (c_) goto L_00C0A4F8; }
    s3 = s0 & 0xff;
    v0 = (s32) ((u32) s3 << 1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    a1 = (*(volatile u16 *) (u32) (v0 + 296));
    a0 = (*(volatile u16 *) (u32) (s2 + 38)); v0 = func_009B3070(a0, a1);
    s4 = v0 & 0xffff; goto L_00C0A528;
L_00C0A4F8:;
    a0 = (*(volatile u16 *) (u32) (s2 + 268));
    s3 = s0 & 0xff;
    a1 = (*(volatile u16 *) (u32) (s2 + 38));
    v0 = (s32) ((u32) s3 << 1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    a2 = 8192;
    s4 = (s32) ((u32) v0 + 0x128U); v0 = func_009B32D0(a0, a1, a2);
    a1 = (*(volatile u16 *) (u32) s4);
    a0 = v0; v0 = func_009B3070(a0, a1);
    s4 = v0 & 0xffff;
L_00C0A528:;
    v0 = (s32) ((u32) s3 << 1);
    a0 = (*(volatile u16 *) (u32) (s2 + 42));
    v0 = (s32) ((u32) v0 + (u32) s2);
    s3 = (s64) ((u64) 0 + (u64) (s64) 12288);
    a1 = (*(volatile u16 *) (u32) (v0 + 296));
    v0 = (s32) ((u32) a1 + 0x1000U);
    v0 = v0 & 0xe000;
    s5 = v0 & 0xffff; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 16385;
    if (at != 0) goto L_00C0A5F8;
    a0 = (*(volatile u16 *) (u32) (s2 + 288));
    a1 = s5;
    a2 = 8192; v0 = func_009B32D0(a0, a1, a2);
    s5 = v0 & 0xffff; goto L_00C0A5F8;
L_00C0A574:;
    v1 = s4 & 0xffff;
    v0 = s3 & 0xffff;
    at = v1 < v0;
    if (at == 0) goto L_00C0A7F8;
    a0 = s2;
    a1 = s0;
    a2 = 1;
    a3 = s1; v0 = func_00C0A830(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_00C0A7F8;
    s3 = s0 & 0xff;
    v0 = 255;
    if (s3 == v0) { v1 = 1; goto L_00C0A5C4; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s3 / (s32) v0); hi = (s32) ((s32) s3 % (s32) v0); lo = q_; }
    v1 = hi;
L_00C0A5C4:;
    v0 = (s32) ((u32) v1 << 3);
    a2 = s1;
    v1 = (s32) ((u32) v0 + (u32) v1);
    a0 = s2;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    a1 = (s32) ((u32) v0 + (u32) v1); v0 = func_00C0B420(a0, a1, a2);
    if (v0 == 0) { a0 = s2; goto L_00C0A628; }
    v0 = 1; goto L_00C0A80C;
L_00C0A5F8:;
    a1 = s5;
    a0 = s2; v0 = func_00952910(a0, a1);
    s5 = v0 & 0xffff;
    a0 = s5; v0 = func_00952A50(a0);
    v0 = v0 & 0xff;
    v0 = v0 < 80;
    if (v0 != 0) goto L_00C0A574;
    s3 = (s64) ((u64) 0 + (u64) (s64) 16384); goto L_00C0A574;
L_00C0A628:;
    a1 = s0;
    a2 = 0; v0 = func_00958AD0(a0, a1);
    s1 = v0 & 0xff;
    if (s1 == 0) { a0 = s2; goto L_00C0A7DC; }
    a0 = s2;
    a1 = s1;
    a2 = 0;
    a3 = 16384;
    a4 = 0; func_00961AB0(a0, a1, a2, a3, a4);
    v1 = s1 & 0xff;
    v0 = 255;
    if (v1 == v0) { v1 = 1; goto L_00C0A674; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = hi;
L_00C0A674:;
    v0 = (s32) ((u32) v1 << 3);
    a2 = s0;
    v1 = (s32) ((u32) v0 + (u32) v1);
    a1 = 1;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    a0 = (s32) ((u32) v0 + (u32) v1); func_00C04830(a0, a1, a2);
L_00C0A698:;
    v1 = (s32) 0xcb0000U;
    a0 = 0;
    v1 = (s32) ((u32) v1 + 0x52a0U);
L_00C0A6A4:;
    v0 = (*(volatile s32 *) (u32) (v1 + 1084));
    if (v0 != 0) { a0 = (s32) ((u32) a0 + 0x1U); goto L_00C0A6C8; }
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a0 << 6);
    v0 = (s32) ((u32) v0 + 0x52a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0x43cU); goto L_00C0A6D8;
L_00C0A6C8:;
    v0 = a0 < 10;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x40U); if (c_) goto L_00C0A6A4; }
    v0 = 0;
L_00C0A6D8:;
    if (v0 == 0) goto L_00C0A7D4;
    v1 = (s32) 0x590000U;
    a0 = 255;
    a1 = (*(volatile u8 *) (u32) (v1 + 7140));
    v1 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    { s32 c_ = s3 == a0; (*(volatile u32 *) (u32) (v0 + 12)) = (u32) v1; if (c_) goto L_00C0A710; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) s3 / (s32) v1); hi = (s32) ((s32) s3 % (s32) v1); lo = q_; }
    a0 = hi; goto L_00C0A714;
L_00C0A710:;
    a0 = 1;
L_00C0A714:;
    v1 = (s32) ((u32) a0 << 3);
    a1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (s32) ((u32) a1 + 0xffffe5b0U);
    a2 = (s32) ((u32) v1 << 6);
    a0 = 6;
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = 255;
    a1 = (*(volatile u8 *) (u32) a1);
    (*(volatile u8 *) (u32) (v0 + 8)) = (u8) a1;
    { s32 c_ = s3 == v1; (*(volatile u32 *) (u32) v0) = (u32) a0; if (c_) goto L_00C0A758; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) s3 / (s32) v1); hi = (s32) ((s32) s3 % (s32) v1); lo = q_; }
    a1 = hi; goto L_00C0A75C;
L_00C0A758:;
    a1 = 1;
L_00C0A75C:;
    v1 = (s32) ((u32) a1 << 3);
    a0 = (s32) 0x590000U;
    a1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (s32) ((u32) a0 + 0xffffe690U);
    a1 = (s32) ((u32) a1 << 6);
    v1 = 255;
    a0 = (s32) ((u32) a0 + (u32) a1);
    f0.f = (*(volatile f32 *) (u32) a0);
    f0.i = (s32) f0.f;
    a0 = f0.i;
    { s32 c_ = s3 == v1; (*(volatile u16 *) (u32) (v0 + 4)) = (u16) a0; if (c_) goto L_00C0A7A0; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) s3 / (s32) v1); hi = (s32) ((s32) s3 % (s32) v1); lo = q_; }
    a1 = hi; goto L_00C0A7A4;
L_00C0A7A0:;
    a1 = 1;
L_00C0A7A4:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe698U);
    a0 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + (u32) a0);
    f0.f = (*(volatile f32 *) (u32) v1);
    f0.i = (s32) f0.f;
    v1 = f0.i;
    (*(volatile u16 *) (u32) (v0 + 6)) = (u16) v1;
    (*(volatile u32 *) (u32) (v0 + 36)) = (u32) 0;
L_00C0A7D4:;
    v0 = 4; goto L_00C0A80C;
L_00C0A7DC:;
    a1 = s0;
    a2 = 1;
    a3 = 4096;
    a4 = 0; func_00961AB0(a0, a1, a2, a3, a4);
    goto L_00C0A698;
L_00C0A7F8:;
    a0 = s2;
    a1 = s5;
    a2 = 0; func_0096D0A0(a0, a1, a2);
    v0 = 2;
L_00C0A80C:;
    return v0;
}
