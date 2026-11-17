/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 func_0030ED20(s32, s32);
s32 func_003139F0(s32, s32);
s32 func_00340880(f32, f32);
s32 func_00345490(s32);
s32 func_00B94F50(s32, s32, s32, s32);

s32 func_00356A90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    a1 = (*(volatile u8 *) (u32) (s2 + 21));
    a0 = (s32) ((u32) sp + 0x78U); v0 = func_0030ED20(a0, a1);
    a0 = (s32) ((u32) sp + 0x74U); v0 = func_00345490(a0);
    a0 = (*(volatile s32 *) (u32) (sp + 116));
    v0 = 255;
    v1 = (*(volatile u8 *) (u32) (s2 + 21));
    a0 = a0 ^ 0x3;
    { s32 c_ = v1 == v0; s1 = (u64) a0 < (u64) (s64) 1; if (c_) goto L_00356AEC; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = hi;
    v0 = (s32) ((u32) v1 << 3); goto L_00356AF4;
L_00356AEC:;
    v1 = 1;
    v0 = (s32) ((u32) v1 << 3);
L_00356AF4:;
    a0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    a1 = (s32) ((u32) v0 << 6);
    v1 = (*(volatile u8 *) (u32) (s2 + 22));
    a0 = (s32) ((u32) a0 + (u32) a1);
    v0 = 255;
    { s32 c_ = v1 == v0; s0 = (*(volatile s16 *) (u32) (a0 + 20)); if (c_) goto L_00356B2C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = hi;
    v0 = (s32) ((u32) v1 << 3); goto L_00356B34;
L_00356B2C:;
    v1 = 1;
    v0 = (s32) ((u32) v1 << 3);
L_00356B34:;
    a0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    a1 = (s32) ((u32) v0 << 6);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s16 *) (u32) (a0 + 20));
    f1.f = (*(volatile f32 *) (u32) (v1 + 7768));
    f0.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f2.i = (s32) a0;
    f2.f = (f32) f2.i;
    f12.f = f1.f * f2.f;
    f13.f = f0.f * f2.f; v0 = func_00340880(f12.f, f13.f);
    if (v0 != 0) goto L_00356BA0;
    f0.i = (s32) s0;
    v1 = (s32) 0x590000U;
    f2.f = (f32) f0.i;
    v0 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 7768));
    f0.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f12.f = f1.f * f2.f;
    f13.f = f0.f * f2.f; v0 = func_00340880(f12.f, f13.f);
L_00356BA0:;
    v0 = func_00B94F50(a0, a1, a2, a3);
    s0 = (s32) ((u32) sp + 0x50U);
    s3 = v0;
    a0 = s0;
    a1 = 10;
    a2 = (s32) ((u32) sp + 0x7cU); v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s2 + 19));
    a0 = s0; v0 = func_003139F0(a0, a1);
    v0 = (*(volatile u8 *) (u32) (gp + -21472));
    v0 = v0 | s3;
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s0; goto L_00356BF0; }
    v0 = (*(volatile s32 *) (u32) (sp + 116));
    v0 = v0 < 3;
    a2 = v0 ^ 0x1;
    a0 = s0;
L_00356BF0:;
    a1 = 0; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (gp + -21472));
    a0 = s0;
    a1 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 116));
    a0 = s0;
    a1 = 2;
    v0 = v0 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 120));
    a0 = s0;
    a1 = 3;
    v0 = v0 ^ 0x2;
    v0 = (u64) v0 < (u64) (s64) 1;
    a2 = s1 & v0; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 120));
    a0 = s0;
    a1 = 4;
    v0 = v0 ^ 0x1;
    v0 = (u64) v0 < (u64) (s64) 1;
    a2 = s1 & v0; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 116));
    a0 = s0;
    a1 = 6;
    v0 = v0 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s1;
    a0 = s0;
    a1 = 7; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 120));
    a0 = s0;
    a1 = 8;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 120));
    a0 = s0;
    a1 = 9;
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s0;
    a0 = 186;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    return v0;
}
