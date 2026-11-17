/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(s32);
s32 func_00188A50(void);
s32 func_001A6570(void);
s32 func_001A70C0(void);
s32 func_001A96D0(void);
s32 func_001AA620(s32, f32, f32);
s32 func_001AB5E0(s32, s32, s32, s32);
s32 func_001ABA10(s32);
s32 func_001ABA60(s32);
s32 func_001AC470(s32, s32, s32, s32, s32, s32);
s32 func_001AC5A0(s32, s32, s32, s32);
s32 func_001B0FD0(void);
s32 func_0026EDE0(void);
s32 func_002873B0(s32, s32, s32, s32);
s32 func_002CD320(s32);
s32 func_009E1C90(s32, s32, s32, s32);
s32 func_009E1CB0(s32, s32, s32, s32);
s32 func_009E1D30(s32, s32, s32, s32);
s32 func_00BA1950(s32, s32, s32, s32);
s32 func_00BA19C0(s32, s32, s32, s32);
s32 func_00BA1B00(s32, s32, s32, s32);

s32 func_001FBBF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;

    a0 = 2;
    s0 = 0; v0 = func_009E1C90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 4;
    if (v1 == v0) { s0 = 1; goto L_001FBDB4; }
    v0 = 3;
    if (v1 == v0) goto L_001FBDA4;
    a0 = 2;
    if (v1 == a0) goto L_001FBD58;
    v0 = 1;
    if (v1 == v0) goto L_001FBD40;
    if (v1 == 0) goto L_001FBC58;
    a1 = 0;
    v0 = func_009E1D30(a0, a1, a2, a3);
L_001FBC58:;
    v0 = func_00188A50();
    a0 = v0; v0 = func_001AA620(a0, f12.f, f13.f);
    t5 = 1;
    a5 = (s32) 0x590000U;
    v0 = (s32) 0x2aaa0000U;
    a6 = t5;
    a7 = 23;
    a5 = (s32) ((u32) a5 + 0xffffe5b0U);
    a3 = t5;
    t4 = 255;
    a1 = v0 | 0xaaab;
L_001FBC8C:;
    if (t5 == t4) { v1 = a6; goto L_001FBC9C; }
    if ((s32) a7 != 0) { s64 q_ = (s32) ((s32) t5 / (s32) a7); hi = (s32) ((s32) t5 % (s32) a7); lo = q_; }
    v1 = hi;
L_001FBC9C:;
    v0 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) t5 >> 31);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) t5; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 6);
    a4 = (s32) ((u32) a5 + (u32) v0);
    a2 = (*(volatile s32 *) (u32) (a4 + 4));
    v0 = hi;
    t5 = (s32) ((u32) t5 + 0x1U);
    v1 = (s32) v0 >> 1;
    (*(volatile u8 *) (u32) (a2 + 44)) = (u8) a3;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = t5 < 23;
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) (a4 + 18)) = (u8) v1; if (c_) goto L_001FBC8C; }
    a0 = 0; v0 = func_002CD320(a0);
    a0 = 1; v0 = func_002CD320(a0);
    v0 = func_002873B0(a0, a1, a2, a3);
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xffffe5b0U); v0 = func_00BA1B00(a0, a1, a2, a3);
    v0 = func_0026EDE0();
    v0 = func_001ABA10(a0);
    v0 = func_001A6570();
    v0 = func_001A70C0();
    v0 = func_001A96D0();
    v0 = func_001B0FD0();
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xffffe5b0U); v0 = func_00BA19C0(a0, a1, a2, a3);
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FBD40:;
    v0 = Pes6File_AllChannelsIdle(a0);
    if (v0 == 0) { v0 = s0; goto L_001FBDB8; }
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FBD58:;
    s1 = (s32) 0x590000U;
    s2 = 1;
    s1 = (s32) ((u32) s1 + 0xffffe7f0U);
L_001FBD64:;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001ABA60(a0);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 23;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_001FBD64; }
    v0 = func_001AB5E0(a0, a1, a2, a3);
    v0 = func_001AC5A0(a0, a1, a2, a3);
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xffffe5b0U); v0 = func_00BA1950(a0, a1, a2, a3);
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FBDA4:;
    v0 = func_001AC470(a0, a1, a2, a3, a4, a5);
    a0 = 2; v0 = func_009E1CB0(a0, a1, a2, a3);
L_001FBDB4:;
    v0 = s0;
L_001FBDB8:;
    return v0;
}
