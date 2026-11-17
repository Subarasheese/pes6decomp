/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_009275C0(s64, s64, s64, s64);
void func_00928A50(s64, s64, s64, s64);
void func_00984160(s64, f32, f32);
s64 func_009B3070(s64, s64);
s64 func_009B33F0(s64, s64, s64, s64);
s64 func_009B3480(s64, s64, s64, s64, f32, f32);
s64 func_009E1C90(s64);
void func_00B35E10(s64, s64, s64);
s64 func_00B611F0(s64, s64, s64);
s64 func_00B94F50(void);
s64 func_00BDBB60(f32, f32);
s64 func_00BF6260(void);
s64 func_00BF6270(void);
s64 func_00BF6280(void);
s64 func_00C01090(s64);

s64 func_00B61440(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;

    s5 = a0;
    a0 = 1;
    s1 = 0; v0 = func_009E1C90(a0);
    v1 = v0 & 0xff;
    v0 = 12;
    if (v1 == v0) goto L_00B615DC;
L_00B61484:;
    v0 = (s32) 0xcc0000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + -12830));
    if (a0 == v1) { v1 = 1; goto L_00B614A4; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    v1 = hi;
L_00B614A4:;
    v0 = (s32) ((u32) v1 << 3);
    a0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    a1 = (s32) ((u32) v1 << 6);
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v0 + -12829));
    v0 = 255;
    { s32 c_ = v1 == v0; s3 = (s32) ((u32) a0 + (u32) a1); if (c_) goto L_00B614E0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00B614E4;
L_00B614E0:;
    a0 = 1;
L_00B614E4:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s2 = (s32) ((u32) v0 + (u32) v1);
L_00B614FC:;
    v1 = (*(volatile s32 *) (u32) s5);
    s4 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) s3);
    v1 = (*(volatile u8 *) (u32) v1);
    { s32 c_ = v1 == v0; s4 = (s32) ((u32) s4 + 0xffffe5b0U); if (c_) goto L_00B61670; }
L_00B61514:;
    if (s1 == 0) { a0 = 1; goto L_00B616E8; }
    a0 = (*(volatile s32 *) (u32) s5);
    v0 = (s32) 0x46080000U;
    v1 = v0 | 0x6400;
    f13.i = (s32) v1;
    f12.f = (*(volatile f32 *) (u32) (a0 + 224));
    (*(volatile f32 *) (u32) (a0 + 108)) = f12.f;
    v0 = (*(volatile s32 *) (u32) s5);
    (*(volatile u32 *) (u32) (v0 + 112)) = (u32) v1;
L_00B6153C:;
    a0 = (*(volatile s32 *) (u32) s5); v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a0 = (*(volatile s32 *) (u32) s5);
    s0 = v0 & 0xffff;
    a1 = s4; v0 = func_009B33F0(a0, a1, a2, a3);
    a1 = v0 & 0xffff;
    a0 = s0 & 0xffff; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 14337;
    if (at != 0) goto L_00B618B4;
L_00B61570:;
    a0 = (*(volatile s32 *) (u32) s5);
    v0 = (*(volatile u8 *) (u32) s3);
    v1 = (*(volatile u8 *) (u32) a0);
    if (v1 != v0) { a1 = s3; goto L_00B618F0; }
L_00B61584:;
    a0 = (*(volatile s32 *) (u32) s5);
    v0 = (*(volatile u8 *) (u32) s2);
    v1 = (*(volatile u8 *) (u32) a0);
    if (v1 != v0) { a1 = s2; goto L_00B61940; }
L_00B61598:;
    if (s1 == 0) { v0 = (*(volatile s32 *) (u32) s5); goto L_00B61990; }
L_00B615A0:;
    if (s1 == 0) goto L_00B615D4;
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = (*(volatile u8 *) (u32) (v0 + 16));
    if (v0 == 0) goto L_00B615D4;
    if (s0 < 0) goto L_00B615D4;
    at = 0x8001;
    at = s0 < at;
    if (at == 0) goto L_00B615D4;
    s0 = 0xc000;
L_00B615D4:;
    v0 = s0; goto L_00B619B4;
L_00B615DC:;
    v0 = func_00BF6280();
    v1 = 2;
    if (v0 != v1) goto L_00B61484;
    v0 = func_00BF6270();
    v1 = 255;
    if (v0 == v1) { a0 = 1; goto L_00B61618; }
    v0 = func_00BF6270();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a0 = hi;
L_00B61618:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s3 = (s32) ((u32) v0 + (u32) v1); v0 = func_00BF6260();
    v1 = 255;
    if (v0 == v1) { a0 = 1; goto L_00B61654; }
    v0 = func_00BF6260();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a0 = hi;
L_00B61654:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s2 = (s32) ((u32) v0 + (u32) v1); goto L_00B614FC;
L_00B61670:;
    a0 = 1; v0 = func_009E1C90(a0);
    v1 = v0 & 0xff;
    v0 = 12;
    if (v1 == v0) goto L_00B616A4;
L_00B61688:;
    v0 = (s32) 0xcc0000U;
    v1 = 4;
    v0 = (*(volatile u8 *) (u32) (v0 + -12831));
    if (v0 != v1) goto L_00B61514;
    s1 = 1; goto L_00B61514;
L_00B616A4:;
    v0 = func_00BF6280();
    v1 = 2;
    if (v0 != v1) goto L_00B61688;
    a0 = 14; v0 = func_00C01090(a0);
    if (v0 == 0) { a0 = 15; goto L_00B616D0; }
L_00B616C8:;
    s1 = 1; goto L_00B61514;
L_00B616D0:;
    v0 = func_00C01090(a0);
    if (v0 == 0) goto L_00B61514;
    goto L_00B616C8;
L_00B616E8:;
    v0 = func_009E1C90(a0);
    v1 = v0 & 0xff;
    v0 = 12;
    if (v1 == v0) goto L_00B61800;
L_00B61700:;
    v0 = (s32) 0xcc0000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + -12829));
    if (a0 == v1) { a0 = 1; goto L_00B61720; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
L_00B61720:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) v0 + (u32) v1);
L_00B61738:;
    a0 = 1; v0 = func_009E1C90(a0);
    v1 = v0 & 0xff;
    v0 = 12;
    if (v1 == v0) { a0 = 19; goto L_00B61858; }
    v0 = (s32) 0xcc0000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + -12830));
    if (a0 == v1) { a0 = 1; goto L_00B61770; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
L_00B61770:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s6 = (s32) ((u32) v0 + (u32) v1); v0 = func_00B94F50();
    if (v0 == 0) goto L_00B61878;
    v0 = 0;
L_00B61798:;
    v0 = v0 & 0xff;
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) s5); goto L_00B618A4; }
    a2 = (*(volatile s32 *) (u32) s5);
    v0 = (*(volatile u8 *) (u32) s0);
    v1 = (*(volatile u8 *) (u32) a2);
    if (v1 != v0) { a1 = (*(volatile u8 *) (u32) (s0 + 19)); goto L_00B617D0; }
    a1 = (s32) ((u32) a2 + 0x6cU);
    a0 = s5;
    a2 = (s32) ((u32) a2 + 0x70U); func_00B35E10(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s5); goto L_00B617F4;
L_00B617D0:;
    a0 = a2; func_00928A50(a0, a1, a2, a3);
    v0 = (s32) 0xcb0000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 21276));
    v0 = (s32) 0xcb0000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 21280));
    a0 = (*(volatile s32 *) (u32) s5); func_00984160(a0, f12.f, f13.f);
L_00B617F0:;
    v0 = (*(volatile s32 *) (u32) s5);
L_00B617F4:;
    f13.f = (*(volatile f32 *) (u32) (v0 + 112));
    f12.f = (*(volatile f32 *) (u32) (v0 + 108)); goto L_00B6153C;
L_00B61800:;
    v0 = func_00BF6280();
    v1 = 2;
    if (v0 != v1) goto L_00B61700;
    v0 = func_00BF6260();
    v1 = 255;
    if (v0 == v1) { a0 = 1; goto L_00B6183C; }
    v0 = func_00BF6260();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a0 = hi;
L_00B6183C:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) v0 + (u32) v1); goto L_00B61738;
L_00B61858:;
    v0 = func_00C01090(a0);
    if (v0 == 0) goto L_00B61870;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00B61798;
L_00B61870:;
    v0 = 0; goto L_00B61798;
L_00B61878:;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f12.f = (*(volatile f32 *) (u32) (v1 + 7768)); v0 = func_00BDBB60(f12.f, f13.f);
    v1 = (*(volatile s16 *) (u32) (s6 + 20));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    if (v0 >= 0) goto L_00B61870;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00B61798;
L_00B618A4:;
    func_009275C0(a0, a1, a2, a3);
    goto L_00B617F0;
L_00B618B4:;
    f12.i = (s32) 0;
    a0 = s4;
    f13.i = f12.i; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    v1 = v0 & 0xffff;
    at = 0x8001;
    v0 = (s32) 0x10000U;
    v1 = (s32) ((u32) v1 - (u32) s0);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = v0 & 0xffff;
    at = v0 < at;
    if (at == 0) { s0 = (s32) ((u32) s0 + 0x4000U); goto L_00B61570; }
    s0 = (s32) ((u32) s0 + 0xffffc000U); goto L_00B61570;
L_00B618F0:;
    v0 = func_009B33F0(a0, a1, a2, a3);
    s3 = v0 & 0xffff;
    a0 = s0 & 0xffff;
    a1 = s3; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 14337;
    if (at == 0) goto L_00B61584;
    v1 = (s32) ((u32) s3 - (u32) s0);
    v0 = (s32) 0x10000U;
    v0 = (s32) ((u32) v1 + (u32) v0);
    at = 0x8001;
    v0 = v0 & 0xffff;
    at = v0 < at;
    if (at == 0) { s0 = (s32) ((u32) s0 + 0x3000U); goto L_00B61584; }
    s0 = (s32) ((u32) s0 + 0xffffd000U); goto L_00B61584;
L_00B61940:;
    v0 = func_009B33F0(a0, a1, a2, a3);
    s2 = v0 & 0xffff;
    a0 = s0 & 0xffff;
    a1 = s2; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 14337;
    if (at == 0) goto L_00B61598;
    v1 = (s32) ((u32) s2 - (u32) s0);
    v0 = (s32) 0x10000U;
    v0 = (s32) ((u32) v1 + (u32) v0);
    at = 0x8001;
    v0 = v0 & 0xffff;
    at = v0 < at;
    if (at == 0) { s0 = (s32) ((u32) s0 + 0x3000U); goto L_00B61598; }
    s0 = (s32) ((u32) s0 + 0xffffd000U); goto L_00B61598;
L_00B61990:;
    v0 = (*(volatile u8 *) (u32) (v0 + 16));
    if (v0 == 0) goto L_00B615A0;
    a0 = s5;
    a1 = s0;
    a2 = 2048; v0 = func_00B611F0(a0, a1, a2);
    s0 = v0; goto L_00B615D4;
L_00B619B4:;
    return v0;
}
