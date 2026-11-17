/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00288670(s32, s32);
s32 func_00949D10(s32, s32, s32, s32, s32, f32, f32);
s32 func_0094A450(s32, s32, s32, f32, f32);
s32 func_00952420(s32, s32, s32, s32, f32, f32);
s32 func_00952760(s32, s32);
s32 func_00952910(s32, s32);
s32 func_00952A50(s32);
s32 func_00962BC0(s32);
void func_0096D0A0(s32, s32, s32);
s32 func_009909D0(s32, s32);
s32 func_009916B0(s32);
s32 func_00AFBAB0(s32);
void func_00C04830(s32, s32, s32);

s32 func_00C08FA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;

    a1 = (*(volatile u16 *) (u32) (a0 + 42));
    s2 = a0; v0 = func_00952910(a0, a1);
    s1 = v0 & 0xffff;
    a0 = s1; v0 = func_00952A50(a0);
    v0 = v0 & 0xff;
    at = v0 < 81;
    if (at != 0) goto L_00C08FEC;
    a0 = s2; v0 = func_00952760(a0, a1);
    s1 = v0 & 0xffff;
L_00C08FEC:;
    a0 = s2;
    a1 = s1;
    a2 = 0; func_0096D0A0(a0, a1, a2);
    a0 = s2;
    a1 = 1; v0 = func_0094A450(a0, a1, a2, f12.f, f13.f);
    if (v0 == 0) { a2 = (*(volatile u8 *) (u32) (s2 + 18)); goto L_00C09098; }
    a0 = (*(volatile u8 *) (u32) s2); v0 = func_00AFBAB0(a0);
    a2 = v0;
    a0 = s2;
    a1 = 0; func_00C04830(a0, a1, a2);
    a0 = s2; v0 = func_00962BC0(a0);
    at = v0 < 2;
    if (at == 0) goto L_00C09090;
    a0 = (*(volatile u8 *) (u32) s2); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00C0906C; }
    a0 = (*(volatile u8 *) (u32) s2); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00C0906C:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a1 = 6;
    a2 = 255;
    a0 = (s32) ((u32) v0 + (u32) v1); func_00C04830(a0, a1, a2);
L_00C09090:;
    v0 = 1; goto L_00C09200;
L_00C09098:;
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s2 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 40;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 114));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    a0 = 99;
    v1 = (s32) 0x88880000U;
    a1 = (s32) ((u32) a0 - (u32) v0);
    v0 = v1 | 0x8889;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a1 >> 31);
    v1 = hi;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21378));
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) v1 >> 4;
    v1 = (s32) ((u32) v1 + (u32) a0);
    at = v0 < 4;
    { s32 c_ = at == 0; s0 = v1 & 0xff; if (c_) goto L_00C09188; }
    at = v0 < 3;
    if (at == 0) { v0 = s0 & 0xff; goto L_00C09190; }
    v0 = v0 < 2;
    if (v0 != 0) goto L_00C0915C;
    v1 = s0 & 0xff;
    v0 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 2; if (c_) goto L_00C09158; }
    v0 = (s32) ((u32) v1 + 0x3U);
    v0 = (s32) v0 >> 2;
L_00C09158:;
    s0 = v0 & 0xff;
L_00C0915C:;
    a0 = s2; v0 = func_009916B0(a0);
    s3 = v0 & 0xff;
    if (s3 == 0) { a0 = s2; goto L_00C0919C; }
L_00C09170:;
    v0 = s0 & 0xff;
    at = s3 < v0;
    if (at == 0) { a0 = s2; goto L_00C091E4; }
L_00C09180:;
    v0 = 2; goto L_00C09200;
L_00C09188:;
    s0 = 0; goto L_00C0915C;
L_00C09190:;
    v0 = (s32) ((u32) v0 >> 1);
    s0 = v0 & 0xff; goto L_00C0915C;
L_00C0919C:;
    a1 = (s32) 0x100000U; v0 = func_009909D0(a0, a1);
    if (v0 == 0) { a1 = s1; goto L_00C091C4; }
    s0 = 0;
L_00C091B0:;
    v0 = (*(volatile u8 *) (u32) (s2 + 16));
    if (v0 != 0) goto L_00C09170;
    s0 = 0; goto L_00C09170;
L_00C091C4:;
    a0 = s2;
    a2 = 12288;
    a3 = (s32) 0x240000U; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 != 0) goto L_00C091B0;
    s0 = 0; goto L_00C091B0;
L_00C091E4:;
    v0 = func_00949D10(a0, a1, a2, a3, a4, f12.f, f13.f);
    if (v0 == 0) goto L_00C09180;
    v1 = 0x8000;
    v0 = 1;
    (*(volatile u32 *) (u32) (s2 + 180)) = (u32) v1;
L_00C09200:;
    return v0;
}
