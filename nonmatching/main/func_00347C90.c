/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0030D990(s32);
s32 func_0030EA70(s32, s32, s32, s32);
f32 func_0030EBB0(s32, s32, f32);
s32 func_0030EE80(s32);
f32 func_0030F590(s32);
s32 func_00333710(s32, s32);
s32 func_00340C80(f32);

s32 func_00347C90(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f20 = { 0 };
    union { f32 f; s32 i; } f21 = { 0 };
    union { f32 f; s32 i; } f22 = { 0 };
    s32 fcc = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s5 = a0;
    s4 = (*(volatile s32 *) (u32) (a1 + 64));
    s0 = (*(volatile s32 *) (u32) (a1 + 68));
    s3 = (*(volatile s32 *) (u32) (a1 + 76));
    s6 = (*(volatile s32 *) (u32) (a1 + 60));
    a0 = (s32) ((u32) sp + 0x90U); v0 = func_0030EE80(a0);
    a0 = (*(volatile u8 *) (u32) (s3 + 21));
    f12.f = (*(volatile f32 *) (u32) (sp + 144));
    a1 = 1; f0.f = func_0030EBB0(a0, a1, f12.f);
    (*(volatile f32 *) (u32) (sp + 144)) = f0.f;
    a0 = (*(volatile u8 *) (u32) (s3 + 21));
    f12.f = (*(volatile f32 *) (u32) (sp + 152));
    a1 = 1; f0.f = func_0030EBB0(a0, a1, f12.f);
    (*(volatile f32 *) (u32) (sp + 152)) = f0.f;
    f20.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x40a00000U;
    f12.i = (s32) v0;
    v0 = func_00340C80(f12.f);
    a0 = (*(volatile u8 *) (u32) (s3 + 21));
    s2 = v0; f0.f = func_0030F590(a0);
    a0 = (*(volatile u8 *) (u32) (s3 + 21));
    f12.i = f0.i;
    a1 = 1; f0.f = func_0030EBB0(a0, a1, f12.f);
    (*(volatile u32 *) (u32) s5) = (u32) 0;
    v0 = 5;
    v1 = (*(volatile s32 *) (u32) (s3 + 40));
    { s32 c_ = v1 != v0; f22.i = f0.i; if (c_) goto L_00347DA8; }
    v0 = (s32) 0xc6140000U;
    v0 = v0 | 0x6400;
    f1.f = (*(volatile f32 *) (u32) (sp + 144));
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) { a0 = (*(volatile u8 *) (u32) (s3 + 21)); goto L_00347D8C; }
    v0 = (s32) 0x45990000U;
    v0 = v0 | 0x4000;
    f1.f = (*(volatile f32 *) (u32) (sp + 152));
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { v1 = (*(volatile s32 *) (u32) (s3 + 40)); goto L_00347DAC; }
    a0 = (*(volatile u8 *) (u32) (s3 + 21));
L_00347D8C:;
    v0 = func_0030D990(a0);
    if (v0 == 0) goto L_00347DA8;
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = v0 | 0x2;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_00347DA8:;
    v1 = (*(volatile s32 *) (u32) (s3 + 40));
L_00347DAC:;
    v0 = 5;
    if (v1 != v0) { f0.f = (*(volatile f32 *) (u32) (sp + 144)); goto L_00347DE8; }
    f0.f = (*(volatile f32 *) (u32) (sp + 144));
    f21.i = f0.i & 0x7FFFFFFF;
    a0 = (*(volatile u8 *) (u32) (s3 + 21)); f0.f = func_0030F590(a0);
    f0.i = f0.i & 0x7FFFFFFF;
    fcc = f21.f < f0.f;
    if (!fcc) goto L_00347DE4;
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = v0 | 0x4;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_00347DE4:;
    f0.f = (*(volatile f32 *) (u32) (sp + 144));
L_00347DE8:;
    f0.f = f22.f - f0.f;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x44800000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = (*(volatile u8 *) (u32) (s3 + 8)); goto L_00347E28; }
    a0 = (*(volatile u8 *) (u32) (s3 + 21)); v0 = func_0030D990(a0);
    if (v0 == 0) goto L_00347E24;
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = v0 | 0x8;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_00347E24:;
    v0 = (*(volatile u8 *) (u32) (s3 + 8));
L_00347E28:;
    if (v0 == 0) { v0 = (s32) 0x45120000U; goto L_00347E40; }
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = v0 | 0x10;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
    v0 = (s32) 0x45120000U;
L_00347E40:;
    v0 = v0 | 0x8000;
    f0.i = (s32) v0;
    fcc = f20.f < f0.f;
    if (!fcc) { a0 = (*(volatile s32 *) (u32) s5); goto L_00347E78; }
    v1 = (*(volatile s32 *) (u32) (s3 + 40));
    v0 = 4;
    if (v1 != v0) goto L_00347E74;
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = v0 | 0x20;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_00347E74:;
    a0 = (*(volatile s32 *) (u32) s5);
L_00347E78:;
    v1 = a0 & 0x3f;
    if (v1 == 0) goto L_00347E90;
    v0 = (s32) 0x80000000U;
    v0 = a0 | v0;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_00347E90:;
    if (v1 != 0) { ; goto L_00347FD0; }
    (*(volatile u32 *) (u32) s5) = (u32) 0;
    v0 = (*(volatile u8 *) (u32) s3);
    at = v0 < 16;
    if (at == 0) { s1 = (*(volatile u8 *) (u32) (s3 + 19)); goto L_00347ED8; }
    v1 = (*(volatile u8 *) (u32) (s3 + 19));
    v0 = 4;
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 + (u32) s3);
    v1 = (*(volatile s32 *) (u32) (v1 + 24));
    if (v1 != v0) goto L_00347ED4;
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = v0 | 0x2;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_00347ED4:;
    s1 = (*(volatile u8 *) (u32) (s3 + 19));
L_00347ED8:;
    a0 = s0;
    a1 = s1; v0 = func_00333710(a0, a1);
    s0 = v0;
    v1 = s1 & 0xff;
    v0 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s4 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 84));
    at = v0 < 5;
    if (at != 0) { v0 = (*(volatile s32 *) (u32) (s3 + 40)); goto L_00347F28; }
    at = s0 < 14;
    if (at != 0) goto L_00347F24;
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = v0 | 0x4;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_00347F24:;
    v0 = (*(volatile s32 *) (u32) (s3 + 40));
L_00347F28:;
    v0 = (s32) ((u32) v0 + 0xfffffffcU);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { a0 = (*(volatile u8 *) (u32) (s3 + 19)); goto L_00347F68; }
    v0 = func_0030EA70(a0, a1, a2, a3);
    v0 = v0 < 80;
    if (v0 != 0) goto L_00347F64;
    v0 = 16;
    if (s0 != v0) goto L_00347F64;
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = v0 | 0x8;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_00347F64:;
    a0 = (*(volatile u8 *) (u32) (s3 + 19));
L_00347F68:;
    v0 = (s32) 0xabab0000U;
    v0 = v0 | 0xabab;
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) v1 + (u32) s6);
    a0 = (*(volatile s32 *) (u32) (a1 + 764));
    if (a0 == v0) { v0 = (*(volatile s32 *) (u32) s5); goto L_00347FC4; }
    v1 = (*(volatile s32 *) (u32) (a1 + 760));
    v0 = (s32) ((u32) a0 - (u32) v1);
    at = v0 < s2;
    if (at == 0) goto L_00347FC0;
    v0 = (*(volatile s32 *) (u32) (a1 + 756));
    v0 = (s32) ((u32) v1 - (u32) v0);
    at = v0 < s2;
    if (at == 0) goto L_00347FC0;
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = v0 | 0x10;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_00347FC0:;
    v0 = (*(volatile s32 *) (u32) s5);
L_00347FC4:;
    v0 = v0 | 0x20;
    (*(volatile u32 *) (u32) s5) = (u32) v0;
L_00347FD0:;
    v0 = 1;
    return v0;
}
