/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00101EF8(s64);
void func_001032D8(s64, s64);
s64 func_001032E8(s64);
void func_001033D8(s64, s64, s64);
void func_00103448(s64, s64);
void func_00121670(s64, s64, s64, s64, s64, s64, s64, s64);
void func_00141660(s64, s64, f32);
void func_00141880(s64);
void sceDmaSendN(s64, s64, s64, s64, s64, s64, s64, s64);
s64 sceDmaSync(s64, s64, s64, s64, s64, s64, s64, s64);

void Pes6Model_BuildMorphVertices(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    s64 frame[22];
    s64 sp = (s32) (u32) frame;

    v0 = (*(volatile s32 *) (u32) (gp + -23432));
    s7 = a1;
    s0 = (*(volatile s32 *) (u32) (a0 + 68));
    { s32 c_ = v0 != 0; s1 = a0; if (c_) goto L_001414FC; }
    v0 = (s32) 0x500000U;
    a0 = (s32) ((u32) sp + 0x90U);
    v0 = (s32) ((u32) v0 + 0xffffdd00U);
    v1 = (s64) ((u64) v0 << 36);
    v1 = (s64) ((u64) v1 >> 36);
    v0 = (s32) 0x20000000U;
    a1 = v1 | v0; func_001032D8(a0, a1);
    a1 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) sp + 0x90U);
    a1 = (s32) ((u32) a1 + 0xffffdec0U);
    a2 = 0; func_001033D8(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x90U);
    a1 = 0; func_00103448(a0, a1);
    a0 = (s32) ((u32) sp + 0x90U); v0 = func_001032E8(a0);
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -23432)) = (u32) v0;
L_001414FC:;
    a0 = (s32) 0x500000U;
    a1 = 1;
    a0 = (s32) ((u32) a0 + 0xffffdd00U); func_00121670(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile s32 *) (u32) (gp + -23412));
    v0 = (s32) 0x500000U;
    a0 = s1;
    s5 = (*(volatile s32 *) (u32) (v1 + 8));
    (*(volatile u32 *) (u32) (v0 + -8444)) = (u32) s5; func_00141880(a0);
    s6 = (*(volatile s32 *) (u32) (s1 + 76));
    s4 = 0;
    v0 = (*(volatile s32 *) (u32) (s1 + 80));
    at = 0 < s6;
    { s32 c_ = at == 0; s2 = (s32) ((u32) s1 + (u32) v0); if (c_) goto L_00141580; }
    s3 = 0;
L_00141540:;
    v0 = (*(volatile s32 *) (u32) (s7 + 24));
    f0.i = (s32) 0;
    v0 = (s32) ((u32) v0 + (u32) s3);
    f12.f = (*(volatile f32 *) (u32) v0);
    fcc = f12.f == f0.f;
    if (fcc) goto L_00141568;
    a0 = s1;
    a1 = s2; func_00141660(a0, a1, f12.f);
L_00141568:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < s6;
    s3 = (s32) ((u32) s3 + 0x4U);
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x8U); if (c_) goto L_00141540; }
L_00141580:;
    a0 = 8; v0 = func_00101EF8(a0);
    at = s0 < 512;
    s2 = v0;
    { s32 c_ = at == 0; v1 = (s32) 0x70000000U; if (c_) goto L_001415A0; }
    a2 = s0; goto L_001415A4;
L_001415A0:;
    a2 = 512;
L_001415A4:;
    at = 0 < a2;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_001415D8; }
L_001415B0:;
    v0 = (s32) ((u32) s1 << 4);
    v0 = (s32) ((u32) v1 + (u32) v0);
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vftoi4.xyz $vf5, $vf4");
    __asm__ volatile("sqc2 $vf5, 0(%0)" : : "r"((u32) v0) : "memory");
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < a2;
    if (v0 != 0) goto L_001415B0;
L_001415D8:;
    a0 = s2;
    a1 = s5;
    (*(volatile u32 *) (u32) (s2 + 128)) = (u32) 0; sceDmaSendN(a0, a1, a2, a3, a4, a5, a6, a7);
    at = s1 < s0;
    if (at == 0) goto L_00141618;
L_001415F4:;
    v0 = (s32) ((u32) s1 << 4);
    v0 = (s32) ((u32) s5 + (u32) v0);
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("vftoi4.xyz $vf5, $vf4");
    __asm__ volatile("sqc2 $vf5, 0(%0)" : : "r"((u32) v0) : "memory");
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) goto L_001415F4;
L_00141618:;
    a0 = s2;
    a1 = 0;
    a2 = 0; v0 = sceDmaSync(a0, a1, a2, a3, a4, a5, a6, a7);
    return;
}
