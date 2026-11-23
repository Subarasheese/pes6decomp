/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D7A20(s64, s64, s64);
s64 func_001E6E10(s64);
void func_001EE630(s64, s64);
void func_001EEAC0(s64, s64);
void func_001EF370(s64, s64);
void func_001EF900(s64, s64);
s64 func_001F2410(s64, s64, s64, s64);
s64 func_002DB830(s64);
s64 func_008B9F20(s64, s64, s64, s64);
void func_008BA070(s64, s64);
void func_008BA0D0(s64, s64);

void func_008CFCF0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 hi = 0, lo = 0;
    s64 frame[26];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    s1 = a1;
    if (s1 == 0) goto L_008CFF68;
    s6 = (*(volatile s32 *) (u32) (s5 + 52));
    if (s6 == 0) { ; goto L_008CFF6C; }
    a0 = (*(volatile s32 *) (u32) (s5 + 504));
    if (a0 == 0) goto L_008CFF68;
    a1 = (s32) ((u32) sp + 0xb0U);
    a2 = 114; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s5 + 468)); v0 = func_002DB830(a0);
    s0 = v0 & 0xff;
    a0 = 20001; v0 = func_001E6E10(a0);
    a0 = s1;
    s7 = v0;
    a1 = 1;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    f0.f = (*(volatile f32 *) (u32) (sp + 180));
    a0 = (*(volatile u8 *) (u32) (s5 + 5));
    v1 = (*(volatile u8 *) (u32) (s5 + 4));
    fp = v0;
    f0.i = (s32) f0.f;
    s4 = (s32) ((u32) 0 - (u32) a0);
    a0 = (s32) ((u32) v1 + (u32) a0);
    at = s4 < a0;
    v1 = f0.i;
    { s32 c_ = at == 0; { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; } if (c_) goto L_008CFF68; }
    v1 = s0 & 0xff;
    s2 = (s32) ((u32) s4 + (u32) v1);
    v1 = (s32) ((u32) s6 + (u32) v1);
    s1 = (s32) ((u32) v1 + (u32) s4);
L_008CFDB0:;
    if (s2 < 0) goto L_008CFF48;
    v1 = (*(volatile u8 *) (u32) (s6 + 33));
    at = s2 < v1;
    if (at == 0) goto L_008CFF48;
    s0 = (*(volatile u8 *) (u32) (s1 + 1));
    at = s0 < 32;
    if (at == 0) goto L_008CFF48;
    v1 = (s32) ((u32) s6 + (u32) s0);
    v1 = (*(volatile u8 *) (u32) (v1 + 496));
    if (v1 == 0) goto L_008CFDF8;
    at = s2 < 11;
    if (at == 0) goto L_008CFF48;
L_008CFDF8:;
    v0 = (*(volatile u8 *) (u32) (s5 + 6));
    a0 = fp;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s4; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + (u32) v1);
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (sp + 180)) = f0.f; v0 = func_001F2410(a0, a1, a2, a3);
    s3 = v0;
    a1 = (s32) ((u32) sp + 0xb0U);
    a0 = s3; func_001EF370(a0, a1);
    if (s7 == 0) goto L_008CFF48;
    a0 = s3;
    a1 = s7; func_001EEAC0(a0, a1);
    at = s2 < 11;
    if (at == 0) goto L_008CFEA8;
    a1 = (*(volatile u8 *) (u32) (s1 + 35));
    at = a1 < 41;
    if (at == 0) goto L_008CFE90;
    if (a1 < 0) goto L_008CFE90;
    a0 = (s32) ((u32) sp + 0xc8U); func_008BA0D0(a0, a1);
    a0 = s3;
    a1 = (s32) ((u32) sp + 0xc8U); func_001EE630(a0, a1);
    a0 = s3;
    a1 = 1; func_001EF900(a0, a1);
    goto L_008CFF48;
L_008CFE90:;
    a0 = s3;
    a1 = 0; func_001EF900(a0, a1);
    goto L_008CFF48;
L_008CFEA8:;
    a0 = (*(volatile s32 *) (u32) (s6 + 816));
    if (a0 == 0) goto L_008CFF38;
    v1 = s0 & 0xff;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 1));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 60);
    a1 = v0 & 0xff;
    at = a1 < 14;
    if (at == 0) goto L_008CFF20;
    v0 = 13;
    if (a1 == v0) goto L_008CFF20;
    a0 = (s32) ((u32) sp + 0xc8U); func_008BA070(a0, a1);
    a0 = s3;
    a1 = (s32) ((u32) sp + 0xc8U); func_001EE630(a0, a1);
    a0 = s3;
    a1 = 1; func_001EF900(a0, a1);
    goto L_008CFF48;
L_008CFF20:;
    a0 = s3;
    a1 = 0; func_001EF900(a0, a1);
    goto L_008CFF48;
L_008CFF38:;
    a0 = s3;
    a1 = 0; func_001EF900(a0, a1);
L_008CFF48:;
    a0 = (*(volatile u8 *) (u32) (s5 + 4));
    v1 = (*(volatile u8 *) (u32) (s5 + 5));
    s4 = (s32) ((u32) s4 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = s4 < v1;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_008CFDB0; }
L_008CFF68:;
L_008CFF6C:;
    return;
}
