/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Job_CopyPayloadOut(s64, s64, s64);
s64 Pes6Job_Create(s64, s64, s64);
s64 Pes6Job_SetField4(s64, s64);
s64 Pes6MatchPlayer_GetSquadIndex(s64);
s64 Pes6MatchPlayer_GetTeamRelativeZ(s64, s64);
s64 func_0030D990(s64);
s64 func_0030E5C0(s64, s64);
s64 func_0030E750(s64, s64, s64, s64);
f32 func_0030F590(s64);
s64 func_00310BA0(s64, s64, s64, s64);
s64 func_00336A80(s64, s64);
s64 func_00336D10(s64, s64, s64, s64);
s64 func_00337BE0(s64, s64, f32, f32);
s64 func_00337DA0(s64, f32, f32);
s64 func_003395B0(s64);
s64 func_00340C80(f32);
s64 func_00340E90(s64, s64, s64);
s64 func_00340F30(s64);
s64 func_00341480(s64, s64);
s64 memcpy(s64, s64, s64);

s64 func_00337FF0(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    s2 = (*(volatile s32 *) (u32) (a0 + 64));
    s3 = (*(volatile s32 *) (u32) (a0 + 60));
    s0 = (*(volatile s32 *) (u32) (a0 + 68));
    v0 = (*(volatile u8 *) (u32) (s2 + 8));
    s6 = (*(volatile s32 *) (u32) (a0 + 84));
    { s32 c_ = v0 != 0; s4 = a0; if (c_) goto L_00338038; }
    v0 = 0; goto L_0033832C;
L_00338038:;
    s1 = (s32) ((u32) s2 + 0x74U);
    a0 = s1; v0 = func_00337DA0(a0, f12.f, f13.f);
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0x88U); goto L_00338054; }
    v0 = 0; goto L_0033832C;
L_00338054:;
    a1 = s1;
    a2 = 1; v0 = func_00340E90(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (s3 + 52)) = (u8) v0;
    (*(volatile u8 *) (u32) (gp + -21568)) = (u8) v0;
    a0 = (*(volatile u8 *) (u32) (s3 + 52)); v0 = Pes6MatchPlayer_GetSquadIndex(a0);
    a0 = s0;
    s0 = v0;
    v0 = (*(volatile u8 *) (u32) (s3 + 54));
    (*(volatile u8 *) (u32) (s3 + 55)) = (u8) v0;
    (*(volatile u8 *) (u32) (s3 + 54)) = (u8) s0; v0 = func_003395B0(a0);
    a0 = (s32) ((u32) s0 << 3);
    v1 = (s32) 0x42700000U;
    a0 = (s32) ((u32) s3 + (u32) a0);
    f12.i = (s32) v1;
    v1 = (*(volatile s32 *) (u32) a0);
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) v1;
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (a0 + 16));
    (*(volatile u32 *) (u32) (a0 + 20)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 16)) = (u32) v0;
    s5 = (*(volatile s32 *) (u32) (a0 + 20)); v0 = func_00340C80(f12.f);
    at = v0 < s5;
    if (at != 0) { v0 = (s32) 0x40400000U; goto L_003380E8; }
    v0 = (s32) 0x8f8f0000U;
    v0 = v0 | 0x8f8f;
    if (s5 == v0) goto L_003380E4;
    v1 = 1;
    v0 = (s32) ((u32) s0 + (u32) s2);
    (*(volatile u8 *) (u32) (v0 + 804)) = (u8) v1;
L_003380E4:;
    v0 = (s32) 0x40400000U;
L_003380E8:;
    f12.i = (s32) v0;
    v0 = func_00340C80(f12.f);
    v1 = (*(volatile s32 *) (u32) (s6 + 108));
    v0 = v0 < v1;
    v0 = v0 ^ 0x1;
    (*(volatile u8 *) (u32) (s3 + 53)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) (v0 + 80));
    (*(volatile u32 *) (u32) (s3 + 32)) = (u32) v0;
    a0 = (*(volatile u8 *) (u32) (s3 + 52)); v0 = func_00310BA0(a0, a1, a2, a3);
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x49c80000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; v1 = 1; if (c_) goto L_00338140; }
    v1 = 0;
L_00338140:;
    if (v1 == 0) { (*(volatile u8 *) (u32) (s3 + 62)) = (u8) v1; goto L_00338178; }
    a0 = (*(volatile u8 *) (u32) (s3 + 52)); v0 = func_0030E750(a0, a1, a2, a3);
    a0 = v0; f0.f = func_0030F590(a0);
    f1.i = f0.i & 0x7FFFFFFF;
    f0.f = (*(volatile f32 *) (u32) (s1 + 12));
    f0.i = f0.i & 0x7FFFFFFF;
    fcc = f1.f <= f0.f;
    { s32 c_ = !fcc; v1 = 1; if (c_) goto L_00338174; }
    v1 = 0;
L_00338174:;
    (*(volatile u8 *) (u32) (s3 + 62)) = (u8) v1;
L_00338178:;
    v0 = 6;
    a0 = (*(volatile s32 *) (u32) (sp + 136));
    s5 = 0;
    v1 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = v1 != v0; s6 = 0; if (c_) goto L_003381B0; }
    a1 = (*(volatile u8 *) (u32) (a0 + 4));
    a0 = (*(volatile u8 *) (u32) (s3 + 52)); v0 = func_00341480(a0, a1);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 == 0) goto L_003381B0;
    s6 = 1;
L_003381B0:;
    if (s6 == 0) { (*(volatile u8 *) (u32) (s3 + 63)) = (u8) s5; goto L_003381D8; }
    v0 = (*(volatile s32 *) (u32) (sp + 136));
    a0 = (*(volatile u8 *) (u32) (v0 + 4)); v0 = func_0030D990(a0);
    v1 = 1;
    if (v0 != v1) goto L_003381D4;
    s5 = v1;
L_003381D4:;
    (*(volatile u8 *) (u32) (s3 + 63)) = (u8) s5;
L_003381D8:;
    a1 = (s32) 0xcb0000U;
    v0 = (*(volatile s32 *) (u32) (sp + 136));
    a0 = (s32) ((u32) sp + 0x84U);
    a1 = (s32) ((u32) a1 + 0x5f24U);
    a2 = 2;
    v0 = (*(volatile u8 *) (u32) (v0 + 6));
    v0 = v0 & 0x1;
    (*(volatile u8 *) (u32) (s3 + 60)) = (u8) v0; v0 = func_00340E90(a0, a1, a2);
    if (v0 == 0) { v0 = 0; goto L_00338220; }
    a0 = (*(volatile s32 *) (u32) (sp + 132)); v0 = func_00340F30(a0);
    if (v0 == 0) goto L_0033821C;
    v0 = 1; goto L_00338220;
L_0033821C:;
    v0 = 0;
L_00338220:;
    (*(volatile u8 *) (u32) (gp + -21564)) = (u8) v0;
    a0 = s3; v0 = func_00336D10(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (s1 + 4));
    a0 = (s32) ((u32) s3 + 0x44U); v0 = Pes6MatchPlayer_GetTeamRelativeZ(a0, a1);
    a0 = (*(volatile u8 *) (u32) (s1 + 4)); v0 = func_0030D990(a0);
    v1 = 1;
    if (v0 != v1) { a1 = (*(volatile u8 *) (u32) (s1 + 4)); goto L_00338264; }
    v0 = (s32) ((u32) s0 << 1);
    v1 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile s16 *) (u32) (v1 + 88));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u16 *) (u32) (v1 + 88)) = (u16) v0;
    a1 = (*(volatile u8 *) (u32) (s1 + 4));
L_00338264:;
    a0 = (s32) ((u32) sp + 0x8fU); v0 = func_0030E5C0(a0, a1);
    a0 = (*(volatile u8 *) (u32) (sp + 143)); v0 = func_0030D990(a0);
    v0 = v0 ^ 0x1;
    a1 = s2;
    v0 = (u64) v0 < (u64) (s64) 1;
    a0 = s3;
    (*(volatile u8 *) (u32) (gp + -21560)) = (u8) v0; v0 = func_00337BE0(a0, a1, f12.f, f13.f);
    v0 = (*(volatile s32 *) (u32) (s1 + 28));
    v0 = v0 ^ 0x2;
    v0 = (u64) v0 < (u64) (s64) 1;
    if (v0 == 0) { (*(volatile u8 *) (u32) (s3 + 59)) = (u8) v0; goto L_003382B0; }
    v0 = (*(volatile u8 *) (u32) (s3 + 58));
    v0 = v0 ^ 0xa;
    v0 = (u64) 0 < (u64) v0;
    (*(volatile u8 *) (u32) (s3 + 59)) = (u8) v0;
L_003382B0:;
    a0 = (s32) ((u32) s3 + 0x48U);
    a1 = s1; v0 = func_00336A80(a0, a1);
    a0 = (s32) 0x5f0000U;
    a1 = s1;
    a0 = (s32) ((u32) a0 + 0x1c80U);
    a2 = 64; v0 = memcpy(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 37));
    v0 = (s64) ((u64) v0 << 59);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 != 0) goto L_00338310;
    v0 = (s32) 0x80000000U;
    a1 = (s32) 0x330000U;
    a3 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0x76b0U);
    a0 = v0 | 0x1;
    a2 = 6;
    a3 = (s32) ((u32) a3 + 0x5f18U); v0 = Pes6Job_Create(a0, a1, a2);
    a0 = v0;
    a1 = s4; v0 = Pes6Job_CopyPayloadOut(a0, a1, a2);
L_00338310:;
    a1 = (s32) 0x330000U;
    a2 = (s32) 0x3e0000U;
    a0 = s4;
    a1 = (s32) ((u32) a1 + 0x7480U);
    a2 = (s32) ((u32) a2 + 0x5f18U); v0 = Pes6Job_SetField4(a0, a1);
    v0 = 1;
L_0033832C:;
    return v0;
}
