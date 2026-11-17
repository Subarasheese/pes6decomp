/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
void func_001DEC60(s32, s32);
s32 func_001E31D0(s32);
void func_001E3210(s32, s32, s32, s32, f32);
void func_001E3790(s32);
void func_001E3A00(s32, s32, s32, s32);
void func_001E41C0(s32);
void memset(s32, s32, s32);

void func_001E2F90(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v0 = (*(volatile s32 *) (u32) (a0 + 8));
    { s32 c_ = v0 == 0; s0 = a0; if (c_) goto L_001E311C; }
    a0 = (s32) 0x530000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffae70U);
    a2 = 12; memset(a0, a1, a2);
    a0 = (s32) 0x530000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffaed0U);
    a2 = 64; memset(a0, a1, a2);
    a0 = s0; func_001E41C0(a0);
    a0 = s0; func_001E3A00(a0, a1, a2, a3);
    v0 = (s32) 0x530000U;
    a0 = 1;
    s1 = (*(volatile s32 *) (u32) (v0 + -20780));
    v1 = (s32) 0x530000U;
    s4 = 0;
    (*(volatile u32 *) (u32) (v1 + -20776)) = (u32) a0;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -20784));
    at = 0 < v0;
    { s32 c_ = at == 0; s2 = 0; if (c_) goto L_001E3048; }
L_001E3020:;
    a0 = s1; v0 = func_001E31D0(a0);
    if (v0 != 0) goto L_001E3154;
L_001E3030:;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -20784));
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < v0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x30U); if (c_) goto L_001E3020; }
L_001E3048:;
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -20776));
    a1 = 16; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = (s32) 0x530000U;
    s3 = v0;
    (*(volatile u32 *) (u32) (v1 + -20772)) = (u32) v0;
    s5 = 1;
    v0 = (s32) 0x530000U;
    s2 = (*(volatile s32 *) (u32) (v0 + -20780));
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -20784));
    at = 0 < v0;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_001E3100; }
L_001E3084:;
    if (s5 != 0) goto L_001E3170;
L_001E3090:;
    a0 = s2; v0 = func_001E31D0(a0);
    if (v0 == 0) goto L_001E30C8;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) s4;
    s5 = 1;
    (*(volatile u32 *) (u32) (s3 + 16)) = (u32) s2;
    (*(volatile u32 *) (u32) (s3 + 20)) = (u32) s2;
    f0.f = (*(volatile f32 *) (u32) (s2 + 24));
    (*(volatile f32 *) (u32) (s3 + 24)) = f0.f;
    (*(volatile u32 *) (u32) (s3 + 28)) = (u32) s5;
    s3 = (s32) ((u32) s3 + 0x20U); goto L_001E30E8;
L_001E30C8:;
    v0 = (*(volatile s32 *) (u32) (s3 + 12));
    s4 = s2;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (s3 + 12)) = (u32) v0;
    f1.f = (*(volatile f32 *) (u32) (s2 + 24));
    f0.f = (*(volatile f32 *) (u32) (s3 + 8));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (s3 + 8)) = f0.f;
L_001E30E8:;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -20784));
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x30U); if (c_) goto L_001E3084; }
L_001E3100:;
    a0 = s0;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) s4; func_001E3790(a0);
    a0 = s0; func_001E3210(a0, a1, a2, a3, f12.f);
    goto L_001E31A8;
L_001E311C:;
    a1 = (s32) ((u32) sp + 0x7cU); func_001DEC60(a0, a1);
    a2 = (*(volatile s16 *) (u32) (sp + 126));
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -20880)) = (u32) 0;
    a0 = (s32) 0x530000U;
    a1 = 1;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -20872)) = (u32) a1;
    f0.i = (s32) a2;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (a0 + -20876)) = f0.f; goto L_001E31A8;
L_001E3154:;
    v1 = (s32) 0x530000U;
    v0 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -20776));
    v1 = (s32) ((u32) v1 + 0x2U);
    (*(volatile u32 *) (u32) (v0 + -20776)) = (u32) v1; goto L_001E3030;
L_001E3170:;
    (*(volatile u32 *) (u32) s3) = (u32) s2;
    a0 = s2;
    (*(volatile u32 *) (u32) (s3 + 8)) = (u32) 0;
    s5 = 0; v0 = func_001E31D0(a0);
    if (v0 == 0) goto L_001E3090;
    f0.f = (*(volatile f32 *) (u32) (s2 + 24));
    s5 = 1;
    (*(volatile f32 *) (u32) (s3 + 8)) = f0.f;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) s2;
    s3 = (s32) ((u32) s3 + 0x10U); goto L_001E30E8;
L_001E31A8:;
    return;
}
