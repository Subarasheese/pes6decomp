/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Job_SetField4(s32, s32);
s32 func_00311BA0(s32);
s32 func_003395B0(s32);
s32 func_003407B0(s32, s32, s32, s32, f32, f32);
s32 func_00340880(f32, f32);
s32 func_00340C80(f32);
s32 func_00341910(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00355740(s32, s32);
s32 func_00B96680(s32, s32, s32, s32);

s32 func_00355090(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s6 = (*(volatile s32 *) (u32) (a0 + 64));
    a0 = (*(volatile s32 *) (u32) (a0 + 60));
    s5 = 0; v0 = func_003395B0(a0);
    s0 = v0;
    v0 = (s32) 0x40800000U;
    f12.i = (s32) v0;
    s1 = (*(volatile s32 *) (u32) (s6 + 16)); v0 = func_00340C80(f12.f);
    v0 = (s32) ((u32) s1 + (u32) v0);
    at = s0 < v0;
    if (at == 0) goto L_00355104;
    if (s1 == 0) goto L_00355104;
    v0 = 0; goto L_003554A0;
L_00355104:;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7705));
    v0 = 255;
    { s32 c_ = a0 == v0; fp = 0; if (c_) goto L_003551CC; }
    if (a0 == v0) { a1 = 1; goto L_0035512C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a1 = hi;
L_0035512C:;
    v1 = (s32) ((u32) a1 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s16 *) (u32) (s1 + 20));
    f1.f = (*(volatile f32 *) (u32) (s1 + 224));
    f0.f = (*(volatile f32 *) (u32) (s1 + 232));
    f2.i = (s32) v0;
    f2.f = (f32) f2.i;
    f12.f = f2.f * f1.f;
    f13.f = f0.f * f2.f; v0 = func_003407B0(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) { s3 = 0; goto L_003551D0; }
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7706));
    if (a0 == v1) { a0 = 1; goto L_00355190; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
L_00355190:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (*(volatile u8 *) (u32) (s1 + 18));
    a0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 << 6);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    a0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) (a0 + 18));
    if (v1 == v0) goto L_003551CC;
    v1 = (*(volatile u8 *) (u32) (a0 + 22));
    v0 = 20;
    if (v1 != v0) goto L_003551CC;
    fp = 1;
L_003551CC:;
    s3 = 0;
L_003551D0:;
    v0 = func_00B96680(a0, a1, a2, a3);
    s7 = v0;
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v0 + -12907));
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_003551FC; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_003551FC:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    { s32 c_ = s7 == 0; a0 = (s32) ((u32) v0 + (u32) v1); if (c_) goto L_00355264; }
    at = s7 < 20;
    if (at == 0) goto L_00355264;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v0 + 24));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45720000U;
    v0 = v0 | 0x8000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00355264;
    v1 = (*(volatile u8 *) (u32) (a0 + 22));
    v0 = 20;
    if (v1 != v0) goto L_00355264;
    s5 = (*(volatile u8 *) (u32) a0);
    s3 = 1;
L_00355264:;
    s1 = (s32) 0x590000U;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffffe7f0U);
L_00355270:;
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_00311BA0(a0);
    if (v0 == 0) { s2 = (s32) ((u32) s2 + 0x1U); goto L_003552DC; }
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
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 249));
    if (v0 == 0) goto L_003552D8;
    s5 = (*(volatile u8 *) (u32) s1);
    s1 = 1; goto L_003552EC;
L_003552D8:;
    s2 = (s32) ((u32) s2 + 0x1U);
L_003552DC:;
    v0 = s2 < 22;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_00355270; }
    s1 = 0;
L_003552EC:;
    a0 = 1;
    a1 = 5;
    a2 = 10; v0 = func_00341910(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_00355474;
    v0 = s3 | fp;
    v0 = s1 | v0;
    if (v0 != 0) { v1 = s5 & 0xff; goto L_0035531C; }
    v0 = 0; goto L_003554A0;
L_0035531C:;
    v0 = 255;
    if (v1 == v0) { v1 = 1; goto L_00355334; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = hi;
L_00355334:;
    v0 = (s32) ((u32) v1 << 3);
    a1 = s5;
    v1 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) sp + 0xb8U);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    s5 = (s32) ((u32) v0 + (u32) v1); v0 = func_00355740(a0, a1);
    s2 = (s32) ((u32) sp + 0xa0U);
    a1 = 20;
    a0 = s2;
    a2 = (s32) ((u32) sp + 0xbcU); v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a2 = fp;
    a0 = s2;
    a1 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s3 | s1;
    a0 = s2;
    a1 = 2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s1;
    a0 = s2;
    a1 = 3; v0 = Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s5 + 22));
    v0 = 20;
    { s32 c_ = v1 == v0; a2 = 1; if (c_) goto L_003553BC; }
    v0 = 78;
    if (v1 == v0) { a0 = s2; goto L_003553C0; }
    a2 = 0;
L_003553BC:;
    a0 = s2;
L_003553C0:;
    a1 = 5; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) s5);
    v0 = (*(volatile u8 *) (u32) (v0 + 7706));
    { s32 c_ = v0 == v1; a2 = 1; if (c_) goto L_003553F0; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7707));
    if (v0 == v1) { a0 = s2; goto L_003553F4; }
    a2 = 0;
L_003553F0:;
    a0 = s2;
L_003553F4:;
    a1 = 9; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 184));
    a0 = s2;
    a1 = 11;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 184));
    a0 = s2;
    a1 = 12;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v0 + 16));
    f12.i = f0.i & 0x7FFFFFFF;
    f13.f = (*(volatile f32 *) (u32) (v0 + 24)); v0 = func_00340880(f12.f, f13.f);
    a2 = s3 & v0;
    a0 = s2;
    a1 = 14; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s2;
    a0 = 93;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) goto L_00355484;
    (*(volatile u32 *) (u32) (s6 + 16)) = (u32) s0;
    (*(volatile u32 *) (u32) (s4 + 44)) = (u32) s0; goto L_00355484;
L_00355474:;
    if (s7 == 0) goto L_00355484;
    (*(volatile u32 *) (u32) (s6 + 16)) = (u32) s0;
    (*(volatile u32 *) (u32) (s4 + 44)) = (u32) s0;
L_00355484:;
    a1 = (s32) 0x350000U;
    a2 = (s32) 0x3e0000U;
    a0 = s4;
    a1 = (s32) ((u32) a1 + 0x5010U);
    a2 = (s32) ((u32) a2 + 0x6448U); v0 = Pes6Job_SetField4(a0, a1);
    v0 = 1;
L_003554A0:;
    return v0;
}
