/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
s64 Pes6Heap_Free(s64, s64);
s64 func_001B9250(s64, s64, s64, s64);
s64 func_001BB080(s64, s64);
s64 func_001BB400(s64, s64);
s64 func_001BB4F0(s64, s64);
s64 func_001DB310(s64, s64, s64, s64);
s64 func_001E6C50(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_001E6E10(s64);
s64 func_001E81A0(s64);
s64 func_001E8740(s64, s64, s64, s64);
s64 func_001E8B90(s64, s64, s64);
s64 func_001F51A0(s64, s64, s64, s64, s64, s64, s64);
s64 func_001F5310(s64, s64, s64, s64);
s64 func_00264F30(s64);
s64 func_00264F70(s64, s64, s64);
s64 func_00265CD0(s64, s64, s64, s64, s64, s64, s64);

s64 func_00265E30(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[656];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    s4 = 0;
    s1 = a0;
    v0 = (*(volatile s32 *) (u32) (v0 + -11212));
    { s32 c_ = v0 < 0; s0 = a1; if (c_) goto L_00265E74; }
    v0 = v0 < 12;
    if (v0 != 0) goto L_00265E7C;
L_00265E74:;
    v0 = 0; goto L_0026604C;
L_00265E7C:;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x3b0000U;
    s2 = (*(volatile s32 *) (u32) (v0 + -11216));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile s64 *) (u32) (v1 + -20224));
    a1 = (s32) 0x260000U;
    a1 = (s32) ((u32) a1 + 0x6240U);
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (a0 + -11200)) = (u32) s2;
    (*(volatile u32 *) (u32) (v0 + -11196)) = (u32) s0;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -11192)) = (u32) 0;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -11184));
    (*(volatile u64 *) (u32) (sp + 5240)) = (u64) v1; v0 = func_001B9250(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    s3 = (*(volatile s32 *) (u32) (v0 + -11192));
    if (s3 == 0) { a0 = s2; goto L_00265EDC; }
    v0 = (*(volatile s32 *) (u32) (s3 + 16));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (s3 + 16)) = (u32) v0; goto L_00265F08;
L_00265EDC:;
    a1 = s0; v0 = func_00265CD0(a0, a1, a2, a3, a4, a5, a6);
    s3 = v0;
    if (s3 == 0) goto L_00265F08;
    if (s3 == 0) goto L_00265F08;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -11184));
    a1 = s3; v0 = func_001BB4F0(a0, a1);
L_00265F08:;
    if (s3 != 0) { a0 = (*(volatile s32 *) (u32) (s3 + 24)); goto L_00265F18; }
    v0 = 0; goto L_0026604C;
L_00265F18:;
    v0 = func_001E81A0(a0);
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
    s5 = v0;
    a1 = (s32) ((u32) sp + 0x470U);
    a2 = (s32) ((u32) sp + 0x1478U); v0 = func_001E8B90(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
    a1 = (s32) ((u32) sp + 0x70U); v0 = func_001E8740(a0, a1, a2, a3);
    a0 = s1;
    a1 = 2;
    a2 = s0; v0 = func_00264F70(a0, a1, a2);
    s2 = v0;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -11216));
    at = v0 < 115;
    if (at == 0) { a0 = s0; goto L_00265F84; }
    a2 = s5;
    a0 = (s32) ((u32) sp + 0x470U);
    a1 = (s32) ((u32) sp + 0x70U);
    a3 = s2; v0 = func_001F5310(a0, a1, a2, a3);
    goto L_00265FB4;
L_00265F84:;
    v0 = func_00264F30(a0);
    a3 = v0;
    a5 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    a2 = s5;
    a4 = (*(volatile s32 *) (u32) (v0 + -11212));
    a0 = (s32) ((u32) sp + 0x470U);
    a1 = (s32) ((u32) sp + 0x70U);
    a5 = (s32) ((u32) a5 + 0xffffd438U);
    a6 = s2; v0 = func_001F51A0(a0, a1, a2, a3, a4, a5, a6);
L_00265FB4:;
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s3 + 16)); goto L_00266000; }
    a0 = 1;
    a1 = 40; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    s4 = v0;
    a0 = s4;
    a1 = s4; v0 = func_001BB400(a0, a1);
    v0 = 1;
    a0 = s2;
    (*(volatile u32 *) (u32) (s4 + 16)) = (u32) v0;
    (*(volatile u32 *) (u32) (s4 + 28)) = (u32) s2; v0 = func_001E6E10(a0);
    (*(volatile u32 *) (u32) (s4 + 24)) = (u32) v0;
    (*(volatile u32 *) (u32) (s4 + 32)) = (u32) s1;
    (*(volatile u32 *) (u32) (s4 + 36)) = (u32) s0;
    (*(volatile u32 *) (u32) (s4 + 20)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (s3 + 16));
L_00266000:;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    { s32 c_ = v0 > 0; (*(volatile u32 *) (u32) (s3 + 16)) = (u32) v0; if (c_) goto L_00266048; }
    a1 = (*(volatile s32 *) (u32) (s3 + 20));
    if (a1 == 0) { a0 = (*(volatile s32 *) (u32) (s3 + 24)); goto L_0026602C; }
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -11180)); v0 = func_001DB310(a0, a1, a2, a3);
    a0 = s3; goto L_00266038;
L_0026602C:;
    v0 = func_001E6C50(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s3;
L_00266038:;
    v0 = func_001BB080(a0, a1);
    a0 = s3; v0 = Pes6Heap_Free(a0, a1);
L_00266048:;
    v0 = s4;
L_0026604C:;
    return v0;
}
