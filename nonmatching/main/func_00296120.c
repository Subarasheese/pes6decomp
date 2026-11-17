/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_00131B50(f32);
f32 func_00131B60(f32);
void func_001B36A0(s64, s64, s64, s64);
s64 func_00208310(s64);
s64 func_0027B5F0(s64, f32);
s64 func_0027B650(s64);

void func_00296120(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    s64 frame[80];
    s64 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    a0 = (*(volatile s16 *) (u32) (a0 + 6));
    s0 = a3; v0 = func_00208310(a0);
    s1 = v0;
    v0 = (s64) ((u64) s3 << 48);
    v0 = v0 >> 48;
    if (v0 < 0) { v0 = (*(volatile u8 *) (u32) (s1 + 1)); goto L_002961D0; }
L_00296168:;
    v0 = (s64) ((u64) s2 << 48);
    v0 = v0 >> 48;
    if (v0 < 0) { v0 = (*(volatile u8 *) (u32) (s1 + 2)); goto L_002961E0; }
L_00296178:;
    v0 = (s64) ((u64) s2 << 48);
    v0 = v0 >> 48;
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) s4); goto L_002961F0; }
    f0.i = (s32) s2;
    f12.f = (f32) f0.i; f0.f = func_00131B60(f12.f);
    a0 = (*(volatile s32 *) (u32) s4);
    f12.i = f0.i; v0 = func_0027B5F0(a0, f12.f);
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) s4); goto L_002962D4; }
    v1 = (*(volatile s32 *) (u32) (s4 + 8));
L_002961AC:;
    v0 = s0 & 0xffff;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (s4 + 8)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s4 + 8));
    if (v1 != v0) goto L_002962EC;
    (*(volatile u32 *) (u32) (s4 + 8)) = (u32) 0;
    v0 = 1; goto L_0029630C;
L_002961D0:;
    v0 = (s32) ((u32) v0 << 1);
    s3 = (s64) ((u64) v0 << 48);
    s3 = s3 >> 48; goto L_00296168;
L_002961E0:;
    v0 = (s32) ((u32) v0 << 1);
    s2 = (s64) ((u64) v0 << 48);
    s2 = s2 >> 48; goto L_00296178;
L_002961F0:;
    v0 = func_0027B650(a0);
    if (v0 == 0) goto L_00296228;
    v1 = (*(volatile s32 *) (u32) (s4 + 8));
    v0 = s0 & 0xffff;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (s4 + 8)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s4 + 8));
    if (v1 != v0) goto L_002962B4;
    (*(volatile u32 *) (u32) (s4 + 8)) = (u32) 0;
    v0 = 1; goto L_0029630C;
L_00296228:;
    v0 = (*(volatile s32 *) (u32) s4);
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) 0;
    (*(volatile u8 *) (u32) (sp + 129)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 128)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) s4);
    v0 = (*(volatile s32 *) (u32) (v0 + 36));
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    f12.f = (*(volatile f32 *) (u32) (v0 + 8));
    s0 = (s32) ((u32) sp + 0x82U); f0.f = func_00131B50(f12.f);
    v0 = (s32) 0x4f000000U;
    f1.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { f0.f = f0.f - f1.f; goto L_0029627C; }
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 & 0xff; goto L_00296294;
L_0029627C:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xff;
L_00296294:;
    (*(volatile u8 *) (u32) s0) = (u8) v1;
    a1 = s1;
    a2 = (*(volatile u8 *) (u32) s0);
    a0 = (s32) ((u32) sp + 0x60U);
    a3 = 0; func_001B36A0(a0, a1, a2, a3);
    v0 = 0; goto L_0029630C;
L_002962B4:;
    f0.i = (s32) s3;
    f12.f = (f32) f0.i; f0.f = func_00131B60(f12.f);
    v0 = (*(volatile s32 *) (u32) s4);
    v0 = (*(volatile s32 *) (u32) (v0 + 36));
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    (*(volatile f32 *) (u32) (v0 + 8)) = f0.f; goto L_00296228;
L_002962D4:;
    v0 = func_0027B650(a0);
    if (v0 == 0) goto L_00296228;
    v1 = (*(volatile s32 *) (u32) (s4 + 8)); goto L_002961AC;
L_002962EC:;
    f0.i = (s32) s3;
    f12.f = (f32) f0.i; f0.f = func_00131B60(f12.f);
    v0 = (*(volatile s32 *) (u32) s4);
    v0 = (*(volatile s32 *) (u32) (v0 + 36));
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    (*(volatile f32 *) (u32) (v0 + 8)) = f0.f; goto L_00296228;
L_0029630C:;
    return;
}
