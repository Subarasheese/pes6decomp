/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
void func_00121430(s32, s32);
s32 func_00154070(s32);
s32 func_001C80F0(s32);
s32 func_001D6CD0(s32, s32);
s32 func_001D7A20(s32, s32, s32);
void func_001DF820(s32, s32, s32, s32);
s32 func_001F08B0(s32);
s32 func_008BA640(s32, s32, s32, s32);
s32 func_008C5470(s32, s32, s32, s32, s32, s32, s32);

void func_008E1150(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    s7 = a1;
    s2 = 0;
    a1 = (*(volatile u8 *) (u32) (gp + -31280));
    v1 = (*(volatile u8 *) (u32) (gp + -31279));
    (*(volatile u8 *) (u32) (sp + 172)) = (u8) a1;
    (*(volatile u8 *) (u32) (sp + 173)) = (u8) v1;
    v1 = (*(volatile s32 *) (u32) (a0 + 100));
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_008E1310; }
    a0 = (*(volatile s32 *) (u32) (s0 + 96));
    a1 = 107; v0 = func_001D6CD0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 96));
    s4 = v0;
    a1 = (s32) ((u32) sp + 0x90U);
    a2 = 185; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 152));
    v0 = (s32) 0x40c00000U;
    f0.i = (s32) v0;
    s3 = 0;
    s1 = s0;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 152)) = f0.f;
L_008E11D8:;
    s5 = (*(volatile s32 *) (u32) (s1 + 36));
    if (s5 == 0) goto L_008E1218;
    a0 = s5; v0 = func_001C80F0(a0);
    f0.f = (*(volatile f32 *) (u32) (sp + 152));
    a1 = s5;
    s5 = v0;
    f0.i = (s32) f0.f;
    a2 = f0.i;
    a0 = s4; v0 = func_008BA640(a0, a1, a2, a3);
    v0 = (s32) ((u32) s5 + (u32) v0);
    v0 = (s32) ((u32) v0 + 0x1U);
    s2 = (s32) ((u32) s2 + (u32) v0);
L_008E1218:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 14;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_008E11D8; }
    if (s2 != 0) { a0 = s2; goto L_008E1254; }
    v0 = (s32) 0x11d0000U;
    a0 = v0 | 0x29; v0 = func_001F08B0(a0);
    v1 = (*(volatile s32 *) (u32) (s0 + 100));
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF820(a0, a1, a2, a3);
    goto L_008E1314;
L_008E1254:;
    v0 = func_00154070(a0);
    s3 = v0;
    a0 = s2; v0 = func_00154070(a0);
    s1 = v0;
    (*(volatile u8 *) (u32) s3) = (u8) 0;
    s5 = 0;
    s6 = s0;
L_008E1278:;
    a1 = (*(volatile s32 *) (u32) (s6 + 36));
    if (a1 == 0) goto L_008E1298;
    a0 = s3; func_00121430(a0, a1);
    a0 = s3;
    a1 = (s32) ((u32) sp + 0xacU); func_00121430(a0, a1);
L_008E1298:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < 14;
    { s32 c_ = v0 != 0; s6 = (s32) ((u32) s6 + 0x4U); if (c_) goto L_008E1278; }
    f0.f = (*(volatile f32 *) (u32) (sp + 152));
    a0 = s4;
    f0.i = (s32) f0.f;
    a2 = f0.i;
    a1 = s3; v0 = func_008BA640(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (s0 + 32)) = (u8) v0;
    a0 = s4;
    f0.f = (*(volatile f32 *) (u32) (sp + 152));
    v0 = (*(volatile u8 *) (u32) (s0 + 33));
    a3 = s2;
    a1 = s1;
    a2 = s3;
    a5 = s7;
    f0.i = (s32) f0.f;
    a4 = f0.i;
    a6 = (s32) ((u32) s7 + (u32) v0); v0 = func_008C5470(a0, a1, a2, a3, a4, a5, a6);
    v0 = (*(volatile s32 *) (u32) (s0 + 100));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = s1; func_001DF820(a0, a1, a2, a3);
    a0 = s1; Pes6Heap_Free(a0);
    a0 = s3; Pes6Heap_Free(a0);
L_008E1310:;
L_008E1314:;
    return;
}
