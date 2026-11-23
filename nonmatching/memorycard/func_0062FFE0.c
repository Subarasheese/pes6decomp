/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001D79A0(s32, s32);
s32 func_001D7A20(s32, s32, s32);
void func_001D7D60(s32, s32);
void func_001ED880(s32, f32);
void func_001EDA30(s32, s32);
void func_001EDAE0(s32, s32);
s32 func_001EDD00(s32, s32, s32, s32);
s32 func_001EE0D0(s32, s32, s32, s32);
void func_001EE5D0(s32, s32);
void func_001EEE60(s32, s32);
void func_001EF860(s32, s32);
void func_001EF900(s32, s32);
s32 func_002E92F0(void);
void func_006302F0(s32, s32, s32, s32);
s32 func_0063A150(s32, s32, s32, s32);
void func_0063A1C0(s32, s32, s32, s32);
void func_0063A240(s32, s32, s32);
s32 func_0063A3B0(s32, s32, s32, s32);
void func_0063A4A0(s32, s32, s32, s32);
void func_0063A580(s32, s32, s32, s32, s32, s32, s32, s32);

void func_0062FFE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    f32 acc = 0;
    s64 frame[30];
    s32 sp = (s32) (u32) frame;

    s6 = a1;
    s4 = a0;
    if (s4 == 0) goto L_006302BC;
    if (s6 == 0) { ; goto L_006302C0; }
    if (a2 != 0) { v0 = (*(volatile u8 *) (u32) (a2 + 12)); goto L_00630038; }
    goto L_006302BC;
    v0 = (*(volatile u8 *) (u32) (a2 + 12));
L_00630038:;
    if (v0 == 0) { a0 = s4; goto L_00630054; }
    v1 = (*(volatile u8 *) (u32) (s4 + 12));
    v0 = 2;
    if (v1 == v0) { a3 = (*(volatile u8 *) (u32) (s6 + 596)); goto L_00630068; }
    a0 = s4;
L_00630054:;
    a1 = s6; func_006302F0(a0, a1, a2, a3);
    goto L_006302BC;
    a3 = (*(volatile u8 *) (u32) (s6 + 596));
L_00630068:;
    v0 = (s32) ((u32) gp + 0xffff8360U);
    a0 = (s32) 0x650000U;
    v1 = (*(volatile s32 *) (u32) (s6 + 4));
    a0 = (s32) ((u32) a0 + 0x781aU);
    a1 = (s32) ((u32) sp + 0xb0U);
    v0 = (s32) ((u32) v0 + (u32) a3);
    a2 = (s32) ((u32) a3 << 1);
    a3 = (s32) ((u32) a2 + (u32) a3);
    a2 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) a0 + (u32) a3);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    fp = (*(volatile s32 *) (u32) v0);
    a0 = fp; v0 = func_001D7A20(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s6 + 596));
    v0 = (s32) ((u32) gp + 0xffff8360U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile u8 *) (u32) v0);
    a0 = fp; f0.f = func_001D79A0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s6 + 452));
    { s32 c_ = v0 != 0; f20.i = f0.i; if (c_) goto L_006300FC; }
    v0 = func_001EE0D0(a0, a1, a2, a3);
    f12.i = f20.i;
    (*(volatile u32 *) (u32) (s6 + 452)) = (u32) v0;
    a0 = v0; func_001ED880(a0, f12.f);
    a0 = (*(volatile s32 *) (u32) (s6 + 452));
    a1 = 1; func_001EDA30(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s6 + 452));
    a1 = 1; func_001EDAE0(a0, a1);
L_006300FC:;
    s2 = 0;
    s1 = s6;
    s0 = 0;
L_00630108:;
    v0 = (*(volatile s32 *) (u32) (s1 + 456));
    if (v0 != 0) goto L_006301B0;
    a0 = (*(volatile s32 *) (u32) (s6 + 452)); v0 = func_001EDD00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 456)) = (u32) v0;
    a0 = v0;
    a1 = (s32) ((u32) sp + 0xc0U); func_001EE5D0(a0, a1);
    v0 = 5;
    v1 = (s32) ((u32) s2 >> 31);
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s2 / (s32) v0); hi = (s32) ((s32) s2 % (s32) v0); lo = q_; }
    f0.f = (*(volatile f32 *) (u32) (sp + 176));
    f2.i = (s32) 0;
    f3.f = (*(volatile f32 *) (u32) (sp + 184));
    acc = f2.f + f0.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 180));
    f1.f = (*(volatile f32 *) (u32) (sp + 188));
    v0 = (s32) 0x66660000U;
    a0 = hi;
    v0 = v0 | 0x6667;
    f4.i = (s32) a0;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s2; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    f4.f = (f32) f4.i;
    v0 = hi;
    v0 = (s32) v0 >> 1;
    f3.f = acc + f3.f * f4.f;
    v0 = (s32) ((u32) v0 + (u32) v1);
    acc = f2.f + f0.f;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    f0.f = acc + f1.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 192)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 196)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s1 + 456));
    a1 = (s32) ((u32) sp + 0xc0U); func_001EF860(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s1 + 456));
    a1 = 1; func_001EF900(a0, a1);
L_006301B0:;
    at = s2 < 10;
    if (at == 0) goto L_006301C4;
    v0 = (*(volatile u16 *) (u32) (s4 + 44)); goto L_006301F0;
L_006301C4:;
    v0 = func_002E92F0();
    a0 = v0 & 0xff;
    v1 = (s32) ((u32) a0 << 10);
    v0 = (s32) 0x620000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffcc10U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) s0 + (u32) v0);
    v0 = (*(volatile u16 *) (u32) (v0 + -4100));
L_006301F0:;
    s5 = v0 & 0xffff;
    a0 = s5; v0 = func_0063A150(a0, a1, a2, a3);
    s3 = v0;
    v0 = 106;
    if (s3 != v0) { s7 = (s32) ((u32) gp + 0xffff8384U); goto L_00630218; }
    s7 = (s32) ((u32) gp + 0xffffadbcU); goto L_00630218;
    s7 = (s32) ((u32) gp + 0xffff8384U);
L_00630218:;
    a0 = (s32) ((u32) s2 + 0x734bU); func_0063A580(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) ((u32) s3 + 0xffffff96U);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) goto L_00630250;
    a2 = 1;
    a1 = s3;
    a0 = (s32) ((u32) s2 + 0x734bU);
    a3 = a2; func_0063A4A0(a0, a1, a2, a3);
    goto L_00630268;
L_00630250:;
    a2 = 1;
    a1 = s5;
    a0 = (s32) ((u32) s2 + 0x734bU);
    a3 = a2; v0 = func_0063A3B0(a0, a1, a2, a3);
L_00630268:;
    a0 = (s32) ((u32) sp + 0xecU);
    a1 = (s32) ((u32) sp + 0xd0U);
    a2 = 1; func_0063A240(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s1 + 456));
    a1 = (s32) ((u32) s2 + 0x734bU);
    a2 = (*(volatile s32 *) (u32) (sp + 236));
    a3 = (s32) ((u32) sp + 0xd0U); func_0063A1C0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s1 + 456));
    a1 = s7; func_001EEE60(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s2 < 10;
    s4 = (s32) ((u32) s4 + 0x2U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x19aU); if (c_) goto L_00630108; }
    a0 = fp;
    a1 = 1; func_001D7D60(a0, a1);
L_006302BC:;
L_006302C0:;
    return;
}
