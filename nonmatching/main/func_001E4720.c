/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DCCF0(s64);
void func_001E4E60(s64, s64);

void func_001E4720(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;
    s64 frame[22];
    s64 sp = (s32) (u32) frame;

    fp = (s32) ((u32) sp + 0xa9U);
    s7 = (s32) ((u32) sp + 0xabU);
    s6 = (s32) ((u32) sp + 0xafU);
    s5 = a0;
    s2 = 0;
    s1 = (s32) ((u32) sp + 0xadU);
    a2 = (*(volatile u8 *) (u32) (a0 + 72));
    s0 = (s32) ((u32) sp + 0xaeU);
    a1 = (*(volatile u8 *) (u32) (a0 + 73));
    v1 = (*(volatile u8 *) (u32) (a0 + 74));
    v0 = (*(volatile u8 *) (u32) (a0 + 75));
    s4 = (*(volatile s32 *) (u32) (a0 + 8));
    s3 = (*(volatile s32 *) (u32) (a0 + 24));
    (*(volatile u8 *) (u32) (sp + 172)) = (u8) a2;
    (*(volatile u8 *) (u32) (sp + 173)) = (u8) a1;
    (*(volatile u8 *) (u32) (sp + 174)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 175)) = (u8) v0;
L_001E4790:;
    a0 = s3; func_001DCCF0(a0);
    v1 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -21008));
    if (v1 != 0) goto L_001E4810;
    a0 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
    a0 = (*(volatile u8 *) (u32) (a0 + -20996));
    v1 = (*(volatile s32 *) (u32) (v1 + -21004));
    { s32 c_ = v1 == 0; s3 = (s32) ((u32) s3 + (u32) a0); if (c_) goto L_001E48E0; }
    v0 = 3;
    if (v1 == v0) goto L_001E47D8;
    goto L_001E4790;
L_001E47D8:;
    v0 = (s32) 0x530000U;
    a1 = (*(volatile u8 *) (u32) (v0 + -20985));
    v0 = (s32) 0x530000U;
    (*(volatile u8 *) (u32) (sp + 172)) = (u8) a1;
    a0 = (*(volatile u8 *) (u32) (v0 + -20984));
    v0 = (s32) 0x530000U;
    (*(volatile u8 *) (u32) s1) = (u8) a0;
    v1 = (*(volatile u8 *) (u32) (v0 + -20983));
    v0 = (s32) 0x530000U;
    (*(volatile u8 *) (u32) s0) = (u8) v1;
    v0 = (*(volatile u8 *) (u32) (v0 + -20982));
    (*(volatile u8 *) (u32) s6) = (u8) v0; goto L_001E4790;
L_001E4810:;
    v0 = (*(volatile u8 *) (u32) s1);
    a1 = (*(volatile u8 *) (u32) (sp + 172));
    a0 = (*(volatile u8 *) (u32) s6);
    v1 = (*(volatile u8 *) (u32) s0);
    (*(volatile u8 *) (u32) fp) = (u8) v0;
    v0 = (s32) ((u32) sp + 0xaaU);
    (*(volatile u8 *) (u32) (sp + 168)) = (u8) a1;
    (*(volatile u8 *) (u32) s7) = (u8) a0;
    { s32 c_ = a0 < 0; (*(volatile u8 *) (u32) v0) = (u8) v1; if (c_) goto L_001E4844; }
    f0.i = (s32) a0;
    f2.f = (f32) f0.i; goto L_001E4860;
L_001E4844:;
    v1 = (s32) ((u32) a0 >> 1);
    v0 = a0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_001E4860:;
    f1.f = (*(volatile f32 *) (u32) (s5 + 76));
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    f1.f = f2.f * f1.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_001E4890; }
    f0.i = (s32) f1.f;
    v1 = f0.i;
    v1 = v1 & 0xff; goto L_001E48A8;
L_001E4890:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xff;
L_001E48A8:;
    (*(volatile u8 *) (u32) s7) = (u8) v1;
    a0 = s4;
    a1 = (s32) ((u32) sp + 0xa8U); func_001E4E60(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s4 + 147));
    if (v0 == 0) goto L_001E48C8;
    s2 = (s64) ((u64) 0 + (u64) (s64) 1);
L_001E48C8:;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -20996));
    s4 = (*(volatile s32 *) (u32) s4);
    s3 = (s32) ((u32) s3 + (u32) v0); goto L_001E4790;
L_001E48E0:;
    (*(volatile u8 *) (u32) (s5 + 121)) = (u8) s2;
    return;
}
